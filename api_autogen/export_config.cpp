#include <iostream>
#include <sstream>
#include <fstream>
#include <stdlib.h>

#include <ssc/sscapi.h>

#include "startup_extractor.h"
#include "ui_form_extractor.h"
#include "equation_extractor.h"
#include "config_extractor.h"
#include "builder_generator.h"
#include "data_structures.h"
#include "export_config.h"

#include "test.h"


std::unordered_map<std::string, std::vector<std::string>> SAM_cmod_to_inputs;
std::string active_config;

int main(int argc, char *argv[]){

    // set default input & output file paths
    char* pPath;
    pPath = getenv ("SAMNTDIR");
    if (pPath!=NULL)
        printf ("The current path is: %s \n",pPath);
    std::string sam_path = std::string(pPath);

    std::string startup_file = sam_path + "/deploy/runtime/startup.lk";
    std::string ui_path = sam_path + "/deploy/runtime/ui/";
    std::string graph_path = sam_path + "/api_autogen/Graphs/Files";
    std::string api_path = sam_path + "/api_autogen/library/C";
    std::string defaults_path = sam_path + "/api_autogen/library/defaults";
    std::string pysam_path = sam_path + "/api_autogen/library/PySAM";

    // replace file paths with command line arguments
    for(int i = 0; i < argc; i+=2) {
        if (std::strcmp(argv[i], "--startup") == 0){
            startup_file = argv[i+1];
        }
        if (std::strcmp(argv[i], "--ui") == 0){
            ui_path = argv[i+1];
        }
        if (std::strcmp(argv[i], "--graph") == 0){
            graph_path = argv[i+1];
        }
        if (std::strcmp(argv[i], "--api") == 0){
            api_path = argv[i+1];
        }
        if (std::strcmp(argv[i], "--defaults") == 0){
            defaults_path = argv[i+1];
        }
        if (std::strcmp(argv[i], "--pysam") == 0){
            pysam_path = argv[i+1];
        }
    }

    std::ifstream ifs(startup_file.c_str());
    if(!ifs.is_open()){
        std::cout << "cannot open file";
        return 1;
    }

    // from startup script, load file and extract information for each config
    std::string content = static_cast<std::stringstream const&>(std::stringstream() << ifs.rdbuf()).str();

    startup_extractor su_e;
    su_e.load_startup_script(content);
    std::vector<std::string> unique_ui_form_names = su_e.get_unique_ui_forms();

    // get all the SSC_INPUT & SSC_INOUT for all used compute_modules
    load_primary_cmod_inputs();


    // from each ui_form file, extract the config-independent defaults, equations and callback scripts
    SAM_ui_extracted_db.populate_ui_data(ui_path, unique_ui_form_names);

    // parsing the callbacks requires all ui forms in a config
    active_config = "";



    // do technology configs with None first
    for (auto it = SAM_config_to_primary_modules.begin(); it != SAM_config_to_primary_modules.end(); ++it){
        active_config = it->first;

        if (active_config.find("None") == std::string::npos && active_config != "MSPT-Single Owner"
            && active_config != "DSPT-Single Owner"){
            continue;
        }

        // no defaults
        if (active_config.find("Independent Power Producer") != std::string::npos
            || active_config.find("Commercial PPA") != std::string::npos){
            continue;
        }

        std::vector<std::string> primary_cmods = SAM_config_to_primary_modules[active_config];

        config_extractor ce(it->first);
        //ce.map_equations();
        //ce.register_callback_functions();
        //        std::cout << "\n\n\n\n";
        //SAM_config_to_variable_graph[active_config]->print_dot(graph_path);

        // modules and modules_order will need to be reset per cmod
        for (size_t i = 0; i < primary_cmods.size(); i++){
            // get all the expressions
            builder_generator b_gen(&ce);
            b_gen.create_all(primary_cmods[i], defaults_path, api_path, pysam_path);
            //b_gen.print_subgraphs(graph_path);
        }
    }
    // do all configs
    for (auto it = SAM_config_to_primary_modules.begin(); it != SAM_config_to_primary_modules.end(); ++it){
        active_config = it->first;

        // no defaults
        if (active_config.find("Independent Power Producer") != std::string::npos
            || active_config.find("Commercial PPA") != std::string::npos){
            continue;
        }

        std::vector<std::string> primary_cmods = SAM_config_to_primary_modules[active_config];

        config_extractor ce(it->first);
        //ce.map_equations();
        //ce.register_callback_functions();
        //        std::cout << "\n\n\n\n";
        //SAM_config_to_variable_graph[active_config]->print_dot(graph_path);

        // modules and modules_order will need to be reset per cmod
        for (size_t i = 0; i < primary_cmods.size(); i++){
            // get all the expressions
            builder_generator b_gen(&ce);
            b_gen.create_all(primary_cmods[i], defaults_path, api_path, pysam_path);
            //b_gen.print_subgraphs(graph_path);
        }
    }

    return 1;


}

