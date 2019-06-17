static var_info _cm_vtab_battery[] = {
	// VARTYPE	DATATYPE	NAME	LABEL	UNITS	META	GROUP	REQUIRED_IF	CONSTRAINTS	UI_HINTS
{ 	SSCINOUT, 	SSC_NUMBER, 	"percent_complete", 	"Estimated simulation status", 	"%", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"system_use_lifetime_output", 	"Lifetime simulation", 	"0/1", 	"0=SingleYearRepeated,1=RunEveryYear", 	"", 	"?=0", 	"BOOLEAN", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"analysis_period", 	"Lifetime analysis period", 	"years", 	"The number of years in the simulation", 	"", 	"system_use_lifetime_output=1", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"en_batt", 	"Enable battery storage model", 	"0/1", 	"", 	"", 	"?=0", 	"", 	""},
{ 	SSCINOUT, 	SSC_ARRAY, 	"gen", 	"System power generated", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"load", 	"Electricity load (year 1)", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_replacement_option", 	"Enable battery replacement?", 	"0=none,1=capacity based,2=user schedule", 	"", 	"Battery Replacements", 	"?=0", 	"INTEGER,MIN=0,MAX=2", 	""},
{ 	SSCINOUT, 	SSC_NUMBER, 	"capacity_factor", 	"Capacity factor", 	"%", 	"", 	"", 	"?=0", 	"", 	""},
{ 	SSCINOUT, 	SSC_NUMBER, 	"annual_energy", 	"Annual Energy", 	"kWh", 	"", 	"", 	"?=0", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"system_use_lifetime_output", 	"PV lifetime simulation", 	"0/1", 	"0=SingleYearRepeated,1=RunEveryYear", 	"", 	"?=0", 	"BOOLEAN", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"analysis_period", 	"Lifetime analysis period", 	"years", 	"The number of years in the simulation", 	"", 	"system_use_lifetime_output=1", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_chem", 	"Battery chemistry", 	"", 	"0=LeadAcid,1=LiIon", 	"Battery Model", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"inverter_model", 	"Inverter model specifier", 	"", 	"0=cec,1=datasheet,2=partload,3=coefficientgenerator,4=generic", 	"", 	"", 	"INTEGER,MIN=0,MAX=4", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"inverter_count", 	"Number of inverters", 	"", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"inv_snl_eff_cec", 	"Inverter Sandia CEC Efficiency", 	"%", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"inv_snl_paco", 	"Inverter Sandia Maximum AC Power", 	"Wac", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"inv_ds_eff", 	"Inverter Datasheet Efficiency", 	"%", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"inv_ds_paco", 	"Inverter Datasheet Maximum AC Power", 	"Wac", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"inv_pd_eff", 	"Inverter Partload Efficiency", 	"%", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"inv_pd_paco", 	"Inverter Partload Maximum AC Power", 	"Wac", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"inv_cec_cg_eff_cec", 	"Inverter Coefficient Generator CEC Efficiency", 	"%", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"inv_cec_cg_paco", 	"Inverter Coefficient Generator Max AC Power", 	"Wac", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_ac_or_dc", 	"Battery interconnection (AC or DC)", 	"", 	"0=DC_Connected,1=AC_Connected", 	"Battery Configuration", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_dc_dc_efficiency", 	"PV DC to battery DC efficiency", 	"", 	"", 	"Battery Configuration", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"dcoptimizer_loss", 	"PV loss in DC/DC w/MPPT conversion", 	"", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_dc_ac_efficiency", 	"Battery DC to AC efficiency", 	"", 	"", 	"Battery Configuration", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_ac_dc_efficiency", 	"Inverter AC to battery DC efficiency", 	"", 	"", 	"Battery Configuration", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_meter_position", 	"Position of battery relative to electric meter", 	"", 	"0=BehindTheMeter,1=FrontOfMeter", 	"Battery Model", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"batt_losses", 	"Battery system losses at each timestep", 	"kW", 	"", 	"Battery Ancillary Losses", 	"?=0", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"batt_losses_charging", 	"Battery system losses when charging", 	"kW", 	"", 	"Battery Ancillary Losses", 	"?=0", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"batt_losses_discharging", 	"Battery system losses when discharging", 	"kW", 	"", 	"Battery Ancillary Losses", 	"?=0", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"batt_losses_idle", 	"Battery system losses when idle", 	"kW", 	"", 	"Battery Ancillary Losses", 	"?=0", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_loss_choice", 	"Loss power input option", 	"0/1", 	"0=Monthly,1=TimeSeries", 	"Battery Ancillary Losses", 	"?=0", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_current_choice", 	"Limit cells by current or power", 	"", 	"", 	"Battery Current and Capacity", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_computed_strings", 	"Number of strings of cells", 	"", 	"", 	"Battery Current and Capacity", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_computed_series", 	"Number of cells in series", 	"", 	"", 	"Battery Current and Capacity", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_computed_bank_capacity", 	"Computed bank capacity", 	"kWh", 	"", 	"Battery Current and Capacity", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_current_charge_max", 	"Maximum charge current", 	"A", 	"", 	"Battery Current and Capacity", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_current_discharge_max", 	"Maximum discharge current", 	"A", 	"", 	"Battery Current and Capacity", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_power_charge_max", 	"Maximum charge power", 	"kW", 	"", 	"Battery Current and Capacity", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_power_discharge_max", 	"Maximum discharge power", 	"kW", 	"", 	"Battery Current and Capacity", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_voltage_choice", 	"Battery voltage input option", 	"0/1", 	"0=UseVoltageModel,1=InputVoltageTable", 	"Battery Voltage", 	"?=0", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_Vfull", 	"Fully charged cell voltage", 	"V", 	"", 	"Battery Voltage", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_Vexp", 	"Cell voltage at end of exponential zone", 	"V", 	"", 	"Battery Voltage", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_Vnom", 	"Cell voltage at end of nominal zone", 	"V", 	"", 	"Battery Voltage", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_Vnom_default", 	"Default nominal cell voltage", 	"V", 	"", 	"Battery Voltage", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_Qfull", 	"Fully charged cell capacity", 	"Ah", 	"", 	"Battery Current and Capacity", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_Qfull_flow", 	"Fully charged flow battery capacity", 	"Ah", 	"", 	"Battery Current and Capacity", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_Qexp", 	"Cell capacity at end of exponential zone", 	"Ah", 	"", 	"Battery Model", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_Qnom", 	"Cell capacity at end of nominal zone", 	"Ah", 	"", 	"Battery Model", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_C_rate", 	"Rate at which voltage vs. capacity curve input", 	"", 	"", 	"Battery Voltage", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_resistance", 	"Internal resistance", 	"Ohm", 	"", 	"Battery Voltage", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"batt_voltage_matrix", 	"Battery voltage vs. depth-of-discharge", 	"", 	"", 	"Battery Voltage", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"LeadAcid_q20_computed", 	"Capacity at 20-hour discharge rate", 	"Ah", 	"", 	"Battery Model", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"LeadAcid_q10_computed", 	"Capacity at 10-hour discharge rate", 	"Ah", 	"", 	"Battery Model", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"LeadAcid_qn_computed", 	"Capacity at discharge rate for n-hour rate", 	"Ah", 	"", 	"Battery Model", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"LeadAcid_tn", 	"Time to discharge", 	"h", 	"", 	"Battery Model", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_initial_SOC", 	"Initial state-of-charge", 	"%", 	"", 	"Battery Dispatch Common", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_minimum_SOC", 	"Minimum allowed state-of-charge", 	"%", 	"", 	"Battery Dispatch Common", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_maximum_SOC", 	"Maximum allowed state-of-charge", 	"%", 	"", 	"Battery Dispatch Common", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_minimum_modetime", 	"Minimum time at charge state", 	"min", 	"", 	"Battery Dispatch Common", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"batt_lifetime_matrix", 	"Cycles vs capacity at different depths-of-discharge", 	"", 	"", 	"Battery Lifetime", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_calendar_choice", 	"Calendar life degradation input option", 	"0/1/2", 	"0=NoCalendarDegradation,1=LithiomIonModel,2=InputLossTable", 	"Battery Lifetime", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"batt_calendar_lifetime_matrix", 	"Days vs capacity", 	"", 	"", 	"Battery Lifetime", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_calendar_q0", 	"Calendar life model initial capacity cofficient", 	"", 	"", 	"Battery Lifetime", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_calendar_a", 	"Calendar life model coefficient", 	"1/sqrt(day)", 	"", 	"Battery Lifetime", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_calendar_b", 	"Calendar life model coefficient", 	"K", 	"", 	"Battery Lifetime", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_calendar_c", 	"Calendar life model coefficient", 	"K", 	"", 	"Battery Lifetime", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_replacement_capacity", 	"Capacity degradation at which to replace battery", 	"%", 	"", 	"Battery Replacements", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_replacement_option", 	"Enable battery replacement?", 	"0=none,1=capacity based,2=user schedule", 	"", 	"Battery Replacements", 	"?=0", 	"INTEGER,MIN=0,MAX=2", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"batt_replacement_schedule", 	"Battery bank replacements per year (user specified)", 	"number/year", 	"", 	"Battery Replacements", 	"batt_replacement_option=2", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"om_replacement_cost1", 	"Cost to replace battery per kWh", 	"$/kWh", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_mass", 	"Battery mass", 	"kg", 	"", 	"Battery Thermal", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_length", 	"Battery length", 	"m", 	"", 	"Battery Thermal", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_width", 	"Battery width", 	"m", 	"", 	"Battery Thermal", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_height", 	"Battery height", 	"m", 	"", 	"Battery Thermal", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_Cp", 	"Battery specific heat capacity", 	"J/KgK", 	"", 	"Battery Thermal", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_h_to_ambient", 	"Heat transfer between battery and environment", 	"W/m2K", 	"", 	"Battery Thermal", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"batt_room_temperature_celsius", 	"Temperature of storage room", 	"C", 	"", 	"Battery Thermal", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"cap_vs_temp", 	"Effective capacity as function of temperature", 	"C,%", 	"", 	"Battery Thermal", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"dispatch_manual_charge", 	"Periods 1-6 charging from system allowed?", 	"", 	"", 	"Battery Dispatch Manual", 	"en_batt=1&batt_dispatch_choice=4", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"dispatch_manual_fuelcellcharge", 	"Periods 1-6 charging from fuel cell allowed?", 	"", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"dispatch_manual_discharge", 	"Periods 1-6 discharging allowed?", 	"", 	"", 	"Battery Dispatch Manual", 	"en_batt=1&batt_dispatch_choice=4", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"dispatch_manual_gridcharge", 	"Periods 1-6 grid charging allowed?", 	"", 	"", 	"Battery Dispatch Manual", 	"en_batt=1&batt_dispatch_choice=4", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"dispatch_manual_percent_discharge", 	"Periods 1-6 discharge percent", 	"%", 	"", 	"Battery Dispatch Manual", 	"en_batt=1&batt_dispatch_choice=4", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"dispatch_manual_percent_gridcharge", 	"Periods 1-6 gridcharge percent", 	"%", 	"", 	"Battery Dispatch Manual", 	"en_batt=1&batt_dispatch_choice=4", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"dispatch_manual_sched", 	"Battery dispatch schedule for weekday", 	"", 	"", 	"Battery Dispatch Manual", 	"en_batt=1&batt_dispatch_choice=4", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"dispatch_manual_sched_weekend", 	"Battery dispatch schedule for weekend", 	"", 	"", 	"Battery Dispatch Manual", 	"en_batt=1&batt_dispatch_choice=4", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"batt_target_power", 	"Grid target power for every time step", 	"kW", 	"", 	"Battery Dispatch Behind the Meter", 	"en_batt=1&batt_meter_position=0&batt_dispatch_choice=2", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"batt_target_power_monthly", 	"Grid target power on monthly basis", 	"kW", 	"", 	"Battery Dispatch Behind the Meter", 	"en_batt=1&batt_meter_position=0&batt_dispatch_choice=2", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_target_choice", 	"Target power input option", 	"0/1", 	"0=InputMonthlyTarget,1=InputFullTimeSeries", 	"Battery Dispatch Behind the Meter", 	"en_batt=1&batt_meter_position=0&batt_dispatch_choice=2", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"batt_custom_dispatch", 	"Custom battery power for every time step", 	"kW", 	"", 	"Battery Dispatch Behind the Meter", 	"en_batt=1&batt_dispatch_choice=3", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_dispatch_choice", 	"Battery dispatch algorithm", 	"0/1/2/3/4", 	"If behind the meter: 0=PeakShavingLookAhead,1=PeakShavingLookBehind,2=InputGridTarget,3=InputBatteryPower,4=ManualDispatch, if front of meter: 0=AutomatedLookAhead,1=AutomatedLookBehind,2=AutomatedInputForecast,3=InputBatteryPower,4=ManualDispatch", 	"Battery Dispatch Behind the Meter", 	"en_batt=1", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"batt_pv_clipping_forecast", 	"PV clipping forecast", 	"kW", 	"", 	"", 	"en_batt=1&batt_meter_position=1&batt_dispatch_choice=2", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"batt_pv_dc_forecast", 	"PV dc power forecast", 	"kW", 	"", 	"", 	"en_batt=1&batt_meter_position=1&batt_dispatch_choice=2", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_dispatch_auto_can_fuelcellcharge", 	"Charging from fuel cell allowed for automated dispatch?", 	"kW", 	"", 	"Battery Dispatch Behind the Meter", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_dispatch_auto_can_gridcharge", 	"Grid charging allowed for automated dispatch?", 	"kW", 	"", 	"Battery Dispatch Behind the Meter", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_dispatch_auto_can_charge", 	"PV charging allowed for automated dispatch?", 	"kW", 	"", 	"Battery Dispatch Behind the Meter", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_dispatch_auto_can_clipcharge", 	"Battery can charge from clipped PV for automated dispatch?", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_auto_gridcharge_max_daily", 	"Allowed grid charging percent per day for automated dispatch", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_look_ahead_hours", 	"Hours to look ahead in automated dispatch", 	"hours", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_dispatch_update_frequency_hours", 	"Frequency to update the look-ahead dispatch", 	"hours", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_cycle_cost_choice", 	"Use SAM model for cycle costs or input custom", 	"0/1", 	"0=UseCostModel,1=InputCost", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"batt_cycle_cost", 	"Input battery cycle costs", 	"$/cycle-kWh", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"en_electricity_rates", 	"Enable Electricity Rates", 	"", 	"0/1", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"ur_ec_sched_weekday", 	"Energy charge weekday schedule", 	"", 	"12 x 24 matrix", 	"", 	"en_batt=1&batt_meter_position=1&batt_dispatch_choice=2", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"ur_ec_sched_weekend", 	"Energy charge weekend schedule", 	"", 	"12 x 24 matrix", 	"", 	"en_batt=1&batt_meter_position=1&batt_dispatch_choice=2", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"ur_ec_tou_mat", 	"Energy rates table", 	"", 	"", 	"", 	"en_batt=1&batt_meter_position=1&batt_dispatch_choice=2", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"ppa_price_input", 	"PPA Price Input", 	"", 	"", 	"", 	"en_batt=1&batt_meter_position=1&batt_dispatch_choice=2", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"dispatch_tod_factors", 	"TOD factors for periods 1-9", 	"", 	"", 	"", 	"en_batt=1&batt_meter_position=1&batt_dispatch_choice=2", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"dispatch_sched_weekday", 	"Diurnal weekday TOD periods", 	"1..9", 	"12 x 24 matrix", 	"", 	"en_batt=1&batt_meter_position=1&batt_dispatch_choice=2", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"dispatch_sched_weekend", 	"Diurnal weekend TOD periods", 	"1..9", 	"12 x 24 matrix", 	"", 	"en_batt=1&batt_meter_position=1&batt_dispatch_choice=2", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"fuelcell_power", 	"Electricity from fuel cell", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_q0", 	"Battery total charge", 	"Ah", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_q1", 	"Battery available charge", 	"Ah", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_q2", 	"Battery bound charge", 	"Ah", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_SOC", 	"Battery state of charge", 	"%", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_DOD", 	"Battery cycle depth of discharge", 	"%", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_qmaxI", 	"Battery maximum capacity at current", 	"Ah", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_qmax", 	"Battery maximum charge with degradation", 	"Ah", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_qmax_thermal", 	"Battery maximum charge at temperature", 	"Ah", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_I", 	"Battery current", 	"A", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_voltage_cell", 	"Battery cell voltage", 	"V", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_voltage", 	"Battery voltage", 	"V", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_cycles", 	"Battery number of cycles", 	"", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_temperature", 	"Battery temperature", 	"C", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_capacity_percent", 	"Battery capacity percent for lifetime", 	"%", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_capacity_thermal_percent", 	"Battery capacity percent for temperature", 	"%", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_bank_replacement", 	"Battery bank replacements per year", 	"number/year", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_power", 	"Electricity to/from battery", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"grid_power", 	"Electricity to/from grid", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"pv_to_load", 	"Electricity to load from PV", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_to_load", 	"Electricity to load from battery", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"grid_to_load", 	"Electricity to load from grid", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"pv_to_batt", 	"Electricity to battery from PV", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"fuelcell_to_batt", 	"Electricity to battery from fuel cell", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"grid_to_batt", 	"Electricity to battery from grid", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"pv_to_grid", 	"Electricity to grid from PV", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_to_grid", 	"Electricity to grid from battery", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_conversion_loss", 	"Electricity loss in battery power electronics", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_system_loss", 	"Electricity loss from battery ancillary equipment", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"grid_power_target", 	"Electricity grid power target for automated dispatch", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_power_target", 	"Electricity battery power target for automated dispatch", 	"kW", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_cost_to_cycle", 	"Computed cost to cycle", 	"$/cycle", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"monthly_pv_to_load", 	"Energy to load from PV", 	"kWh", 	"", 	"", 	"", 	"LENGTH=12", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"monthly_batt_to_load", 	"Energy to load from battery", 	"kWh", 	"", 	"", 	"", 	"LENGTH=12", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"monthly_grid_to_load", 	"Energy to load from grid", 	"kWh", 	"", 	"", 	"", 	"LENGTH=12", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"monthly_pv_to_grid", 	"Energy to grid from PV", 	"kWh", 	"", 	"", 	"", 	"LENGTH=12", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"monthly_batt_to_grid", 	"Energy to grid from battery", 	"kWh", 	"", 	"", 	"", 	"LENGTH=12", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"monthly_pv_to_batt", 	"Energy to battery from PV", 	"kWh", 	"", 	"", 	"", 	"LENGTH=12", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"monthly_grid_to_batt", 	"Energy to battery from grid", 	"kWh", 	"", 	"", 	"", 	"LENGTH=12", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_annual_charge_from_pv", 	"Battery annual energy charged from PV", 	"kWh", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_annual_charge_from_grid", 	"Battery annual energy charged from grid", 	"kWh", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_annual_charge_energy", 	"Battery annual energy charged", 	"kWh", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_annual_discharge_energy", 	"Battery annual energy discharged", 	"kWh", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_annual_energy_loss", 	"Battery annual energy loss", 	"kWh", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"batt_annual_energy_system_loss", 	"Battery annual system energy loss", 	"kWh", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"annual_export_to_grid_energy", 	"Annual energy exported to grid", 	"kWh", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"annual_import_to_grid_energy", 	"Annual energy imported from grid", 	"kWh", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"average_battery_conversion_efficiency", 	"Battery average cycle conversion efficiency", 	"%", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"average_battery_roundtrip_efficiency", 	"Battery average roundtrip efficiency", 	"%", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"batt_pv_charge_percent", 	"Battery percent energy charged from PV", 	"%", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"batt_bank_installed_capacity", 	"Battery bank installed capacity", 	"kWh", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_MATRIX, 	"batt_dispatch_sched", 	"Battery dispatch schedule", 	"", 	"", 	"", 	"", 	"", 	"ROW_LABEL=MONTHS,COL_LABEL=HOURS_OF_DAY"},
var_info_invalid};