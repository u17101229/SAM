#ifndef SAM_TCSGENERICSOLAR_H_
#define SAM_TCSGENERICSOLAR_H_

#include "visibility.h"
#include "SAM_api.h"


#include <stdint.h>
#ifdef __cplusplus
extern "C"
{
#endif

	//
	// TcsgenericSolar Technology Model
	//

	/** 
	 * Create a TcsgenericSolar variable table.
	 * @param def: the set of financial model-dependent defaults to use (None, Residential, ...)
	 * @param[in,out] err: a pointer to an error object
	 */

	SAM_EXPORT typedef void * SAM_TcsgenericSolar;

	SAM_EXPORT SAM_TcsgenericSolar SAM_TcsgenericSolar_construct(const char* def, SAM_error* err);

	/// verbosity level 0 or 1. Returns 1 on success
	SAM_EXPORT int SAM_TcsgenericSolar_execute(SAM_TcsgenericSolar data, int verbosity, SAM_error* err);

	SAM_EXPORT void SAM_TcsgenericSolar_destruct(SAM_TcsgenericSolar system);


	//
	// Weather parameters
	//

	/**
	 * Set azimuth: Azimuth angle of surface/axis
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Weather_azimuth_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set file_name: local weather file path
	 * options: None
	 * constraints: LOCAL_FILE
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Weather_file_name_sset(SAM_TcsgenericSolar ptr, const char* str, SAM_error *err);

	/**
	 * Set tilt: Tilt angle of surface/axis
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Weather_tilt_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set track_mode: Tracking mode
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Weather_track_mode_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);


	//
	// GenericSolar parameters
	//

	/**
	 * Set system_capacity: Nameplate capacity [kW]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_GenericSolar_system_capacity_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);


	//
	// TouTranslator parameters
	//

	/**
	 * Set weekday_schedule: 12x24 Time of Use Values for week days
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_TouTranslator_weekday_schedule_mset(SAM_TcsgenericSolar ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set weekend_schedule: 12x24 Time of Use Values for week end days
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_TouTranslator_weekend_schedule_mset(SAM_TcsgenericSolar ptr, float* mat, int nrows, int ncols, SAM_error *err);


	//
	// Type260 parameters
	//

	/**
	 * Set OpticalTable: Optical table [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_OpticalTable_mset(SAM_TcsgenericSolar ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set PC_T_corr: Power conversion temperature correction mode (1=wetb, 2=dryb) [none]
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_PC_T_corr_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set T_pcdes: Power conversion reference temperature [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_T_pcdes_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set T_sfdes: Solar field design point temperature (dry bulb) [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_T_sfdes_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set Wpar_prodD_coefs: DNI-based production parasitic adjustment coefs. [m2/W]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_Wpar_prodD_coefs_aset(SAM_TcsgenericSolar ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set Wpar_prodQ_coefs: Part-load production parasitic adjustment coefs. [1/MWe]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_Wpar_prodQ_coefs_aset(SAM_TcsgenericSolar ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set Wpar_prodT_coefs: Temp.-based production parasitic adjustment coefs. [1/C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_Wpar_prodT_coefs_aset(SAM_TcsgenericSolar ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set diswos: Time-of-dispatch control for without-solar conditions [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_diswos_aset(SAM_TcsgenericSolar ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set disws: Time-of-dispatch control for with-solar conditions [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_disws_aset(SAM_TcsgenericSolar ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set etaQ_coefs: Part-load power conversion efficiency adjustment coefficients [1/MWt]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_etaQ_coefs_aset(SAM_TcsgenericSolar ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set etaT_coefs: Temp.-based power conversion efficiency adjustment coefs. [1/C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_etaT_coefs_aset(SAM_TcsgenericSolar ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set eta_des: Design power cycle gross efficiency [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_eta_des_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set eta_lhv: Fossil backup lower heating value efficiency [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_eta_lhv_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set eta_opt_gen: General/other optical derate [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_eta_opt_gen_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set eta_opt_soil: Soiling optical derate factor [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_eta_opt_soil_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set exergy_table: Exergy table [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_exergy_table_mset(SAM_TcsgenericSolar ptr, float* mat, int nrows, int ncols, SAM_error *err);

	/**
	 * Set f_Wpar_fixed: Fixed capacity-based parasitic loss fraction [MWe/MWcap]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_f_Wpar_fixed_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set f_Wpar_prod: Production-based parasitic loss fraction [MWe/MWe]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_f_Wpar_prod_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set f_charge: Storage charging energy derate [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_f_charge_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set f_disch: Storage discharging energy derate [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_f_disch_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set f_etes_0: Initial fractional charge level of thermal storage (0..1) [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_f_etes_0_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set f_sfhl_ref: Reference solar field thermal loss fraction [MW/MWcap]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_f_sfhl_ref_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set f_startup: Equivalent full-load hours required for power system startup [hours]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_f_startup_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set f_teshl_ref: Reference heat loss from storage per max stored capacity [kWt/MWhr-stored]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_f_teshl_ref_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set f_wmax: Maximum over-design power cycle operation fraction [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_f_wmax_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set f_wmin: Minimum part-load power cycle operation fraction [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_f_wmin_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set fdisp: Fossil backup output control factors [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_fdisp_aset(SAM_TcsgenericSolar ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set hrs_tes: Equivalent full-load hours of storage [hours]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_hrs_tes_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set ibh: Beam-horizontal irradiation [kJ/hr-m^2]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_ibh_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set ibn: Beam-normal (DNI) irradiation [kJ/hr-m^2]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_ibn_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set interp_arr: Interpolate the array or find nearest neighbor? (1=interp,2=no) [none]
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_interp_arr_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set irr_des: Irradiation design point [W/m2]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_irr_des_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set istableunsorted: Is optical table unsorted format? [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_istableunsorted_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set itoth: Total horizontal irradiation [kJ/hr-m^2]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_itoth_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set latitude: Site latitude
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_latitude_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set longitude: Site longitude
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_longitude_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set ntod: Number of time-of-dispatch periods in the dispatch schedule [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_ntod_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set qdisp: TOD power output control factors [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_qdisp_aset(SAM_TcsgenericSolar ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set qsf_des: Solar field thermal production at design [MWt]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_qsf_des_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set rad_type: Solar resource radiation type (1=DNI,2=horiz.beam,3=tot.horiz) [none]
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_rad_type_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set sfhlQ_coefs: Irr-based solar field thermal loss adjustment coefficients [1/MWt]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_sfhlQ_coefs_aset(SAM_TcsgenericSolar ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set sfhlT_coefs: Temp.-based solar field thermal loss adjustment coefficients [1/C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_sfhlT_coefs_aset(SAM_TcsgenericSolar ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set sfhlV_coefs: Wind-based solar field thermal loss adjustment coefficients [1/(m/s)]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_sfhlV_coefs_aset(SAM_TcsgenericSolar ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set solarm: Solar multiple [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_solarm_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set storage_config: Thermal storage configuration [none]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_storage_config_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set tdb: Ambient dry-bulb temperature [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_tdb_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set teshlT_coefs: Temp.-based thermal loss adjustment - constant coef. [1/C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_teshlT_coefs_aset(SAM_TcsgenericSolar ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set teshlX_coefs: Charge-based thermal loss adjustment - constant coef. [1/MWhr-stored]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_teshlX_coefs_aset(SAM_TcsgenericSolar ptr, float* arr, int length, SAM_error *err);

	/**
	 * Set theta_dep: Solar elevation angle at which the solar field begins operating [deg]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_theta_dep_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set theta_stow: Solar elevation angle at which the solar field stops operating [deg]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_theta_stow_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set timezone: Site timezone [hr]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_timezone_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set twb: Ambient wet-bulb temperature [C]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_twb_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set vwind: Wind velocity [m/s]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_vwind_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);

	/**
	 * Set w_des: Design power cycle gross output [MWe]
	 * options: None
	 * constraints: None
	 * required if: *
	 */
	SAM_EXPORT void SAM_TcsgenericSolar_Type260_w_des_fset(SAM_TcsgenericSolar ptr, float number, SAM_error *err);


	/**
	 * Weather Getters
	 */

	SAM_EXPORT float SAM_TcsgenericSolar_Weather_azimuth_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT const char* SAM_TcsgenericSolar_Weather_file_name_sget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Weather_tilt_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Weather_track_mode_fget(SAM_TcsgenericSolar ptr, SAM_error *err);


	/**
	 * GenericSolar Getters
	 */

	SAM_EXPORT float SAM_TcsgenericSolar_GenericSolar_system_capacity_fget(SAM_TcsgenericSolar ptr, SAM_error *err);


	/**
	 * TouTranslator Getters
	 */

	SAM_EXPORT float* SAM_TcsgenericSolar_TouTranslator_weekday_schedule_mget(SAM_TcsgenericSolar ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_TouTranslator_weekend_schedule_mget(SAM_TcsgenericSolar ptr, int* nrows, int* ncols, SAM_error *err);


	/**
	 * Type260 Getters
	 */

	SAM_EXPORT float* SAM_TcsgenericSolar_Type260_OpticalTable_mget(SAM_TcsgenericSolar ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_PC_T_corr_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_T_pcdes_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_T_sfdes_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Type260_Wpar_prodD_coefs_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Type260_Wpar_prodQ_coefs_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Type260_Wpar_prodT_coefs_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Type260_diswos_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Type260_disws_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Type260_etaQ_coefs_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Type260_etaT_coefs_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_eta_des_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_eta_lhv_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_eta_opt_gen_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_eta_opt_soil_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Type260_exergy_table_mget(SAM_TcsgenericSolar ptr, int* nrows, int* ncols, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_f_Wpar_fixed_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_f_Wpar_prod_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_f_charge_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_f_disch_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_f_etes_0_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_f_sfhl_ref_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_f_startup_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_f_teshl_ref_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_f_wmax_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_f_wmin_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Type260_fdisp_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_hrs_tes_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_ibh_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_ibn_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_interp_arr_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_irr_des_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_istableunsorted_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_itoth_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_latitude_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_longitude_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_ntod_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Type260_qdisp_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_qsf_des_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_rad_type_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Type260_sfhlQ_coefs_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Type260_sfhlT_coefs_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Type260_sfhlV_coefs_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_solarm_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_storage_config_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_tdb_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Type260_teshlT_coefs_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Type260_teshlX_coefs_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_theta_dep_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_theta_stow_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_timezone_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_twb_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_vwind_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Type260_w_des_fget(SAM_TcsgenericSolar ptr, SAM_error *err);


	/**
	 * Outputs Getters
	 */

	SAM_EXPORT float SAM_TcsgenericSolar_Outputs_annual_energy_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Outputs_annual_fuel_usage_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Outputs_annual_q_dump_tot_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Outputs_annual_q_fossil_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Outputs_annual_q_from_tes_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Outputs_annual_q_hl_sf_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Outputs_annual_q_hl_tes_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Outputs_annual_q_sf_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Outputs_annual_q_startup_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Outputs_annual_q_to_pb_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Outputs_annual_q_to_tes_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Outputs_annual_w_gr_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_beam_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Outputs_capacity_factor_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Outputs_conversion_factor_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_diff_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_e_in_tes_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_enet_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_eta_cycle_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_eta_opt_sf_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_f_effpc_qtpb_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_f_effpc_tamb_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_f_sfhl_qdni_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_f_sfhl_tamb_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_f_sfhl_vwind_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_gen_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_global_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_hour_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Outputs_kwh_per_kw_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_month_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_monthly_energy_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_monthly_q_dump_tot_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_monthly_q_fossil_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_monthly_q_from_tes_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_monthly_q_hl_sf_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_monthly_q_hl_tes_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_monthly_q_sf_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_monthly_q_startup_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_monthly_q_to_pb_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_monthly_q_to_tes_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_monthly_w_gr_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_pres_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_q_dump_teschg_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_q_dump_tesfull_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_q_dump_tot_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_q_dump_umin_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_q_fossil_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_q_from_tes_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_q_gas_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_q_hl_sf_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_q_hl_tes_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_q_inc_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_q_sf_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_q_startup_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_q_to_pb_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_q_to_tes_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_solazi_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_solzen_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float SAM_TcsgenericSolar_Outputs_system_heat_rate_fget(SAM_TcsgenericSolar ptr, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_tdry_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_twet_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_w_gr_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_w_gr_fossil_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_w_gr_solar_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_w_par_fixed_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_w_par_offline_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_w_par_online_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_w_par_prod_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_w_par_tot_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

	SAM_EXPORT float* SAM_TcsgenericSolar_Outputs_wspd_aget(SAM_TcsgenericSolar ptr, int* length, SAM_error *err);

#ifdef __cplusplus
} /* end of extern "C" { */
#endif

#endif