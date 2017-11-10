class CfgPatches
{
	class VI_blufor
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
		author = "TECAK, Blender";
		authorUrl = "http://www.tsgames.ru";
	};
};

class Extended_Init_EventHandlers {

	class ffaa_ar_harrier {
	ffaa_ar_harrier_clientInit = "_this execVM ""\VI_blufor\fn_caws_init.sqf""";
	};
	
	class bav_A10A_Blank {
	bav_A10A_Blank_clientInit = "_this execVM ""\VI_blufor\fn_caws_init.sqf""";
	};
	
	class bav_A10C_Blank {
	bav_A10C_Blank_clientInit = "_this execVM ""\VI_blufor\fn_caws_init.sqf""";
	};
	
	class ffaa_ea_hercules_cargo {
	ffaa_ea_hercules_cargo_clientInit = "_this execVM ""\VI_blufor\fn_caws_init.sqf""";
	};
		
	class ffaa_ea_hercules {
	ffaa_ea_hercules_clientInit = "_this execVM ""\VI_blufor\fn_caws_init.sqf""";
	};
		
	class B_T_VTOL_01_vehicle_F {
	B_T_VTOL_01_vehicle_F_clientInit = "_this execVM ""\VI_blufor\fn_caws_init.sqf""";
	};
				
	class B_T_VTOL_01_armed_F {
	B_T_VTOL_01_armed_F_clientInit = "_this execVM ""\VI_blufor\fn_caws_init.sqf""";
	};
				
	class B_T_VTOL_01_infantry_F {
	B_T_VTOL_01_infantry_F_clientInit = "_this execVM ""\VI_blufor\fn_caws_init.sqf""";
	};
		
	class RHS_C130J {
	RHS_C130J_clientInit = "_this execVM ""\VI_blufor\fn_caws_init.sqf""";
	};
	
    class RHS_A10 {
	RHS_A10_Base_clientInit = "_this execVM ""\VI_blufor\fn_caws_init.sqf""";
	};

    class Plane_Fighter_03_base_F {
	Plane_Fighter_03_base_F_clientInit = "_this execVM ""\VI_blufor\fn_caws_init.sqf""";
	};
	
	class B_Plane_CAS_01_dynamicLoadout_F {
	B_Plane_CAS_01_dynamicLoadout_F_clientInit = "_this execVM ""\VI_blufor\fn_caws_init.sqf""";
	};
	
	class I_Plane_Fighter_04_F {
	I_Plane_Fighter_04_F_clientInit = "_this execVM ""\VI_blufor\fn_caws_init.sqf""";
	};
	
	class B_Plane_Fighter_01_F {
	B_Plane_Fighter_01_F_clientInit = "_this execVM ""\VI_blufor\fn_caws_init.sqf""";
	};
	
	class B_Plane_Fighter_01_Stealth_F {
	B_Plane_Fighter_01_Stealth_F_clientInit = "_this execVM ""\VI_blufor\fn_caws_init.sqf""";
	};
};

class CfgSounds
{
	class onlin {
		name = "onlin";
		sound[] =  {"\VI_blufor\sounds\onlin.ogg", 1, 1.0};
		titles[] = {};
	};
	class altitudeblue {
		name = "altitudeblue";
		sound[] =  {"\VI_blufor\sounds\altitud.ogg", 1, 1.0};
		titles[] = {};
	};
	class anglblue {
		name = "anglblue";
		sound[] =  {"\VI_blufor\sounds\angl.ogg", 1, 1.0};
		titles[] = {};
	};
    class gforceblue {
		name = "gforceblue";
		sound[] =  {"\VI_blufor\sounds\gforc.ogg", 1, 1.0};
		titles[] = {};
	};
    class pullUpblue {
		name = "pullUpblue";
		sound[] =  {"\VI_blufor\sounds\pullu.ogg", 1, 1.0};
		titles[] = {};
	};
	class speedblue {
		name = "speedblue";
		sound[] =  {"\VI_blufor\sounds\Power.ogg", 1, 1.0};
		titles[] = {};
	};
	class ejectpilotblue {
		name = "ejectpilotblue";
		sound[] =  {"\VI_blufor\sounds\ejectpilotblue.ogg", 1, 1.0};
		titles[] = {};
	};
	class FuelFblue {
		name = "FuelFblue";
		sound[] =  {"\VI_blufor\sounds\HydrolicsFailure.ogg", 1, 1.0};
		titles[] = {};
	};
	class LEFblue {
		name = "LEFblue";
		sound[] =  {"\VI_blufor\sounds\LeftEngineFire.ogg", 1, 1.0};
		titles[] = {};
	};
	class REFblue {
		name = "REFblue";
		sound[] =  {"\VI_blufor\sounds\RightEngineFire.ogg", 1, 1.0};
		titles[] = {};
	};
	class SysFblue {
		name = "SysFblue";
		sound[] =  {"\VI_blufor\sounds\SystemsFailure.ogg", 1, 1.0};
		titles[] = {};
	};
	class ControlsFblue {
		name = "ControlsFblue";
		sound[] =  {"\VI_blufor\sounds\FlightControls.ogg", 1, 1.0};
		titles[] = {};
	};
	class fuel1500blue {
		name = "fuel1500blue";
		sound[] =  {"\VI_blufor\sounds\Fuel1500.ogg", 1, 1.0};
		titles[] = {};
	};
	class fuel800blue {
		name = "fuel800blue";
		sound[] =  {"\VI_blufor\sounds\Fuel800.ogg", 1, 1.0};
		titles[] = {};
	};
	class fuel500blue {
		name = "fuel500blue";
		sound[] =  {"\VI_blufor\sounds\Fuel500.ogg", 1, 1.0};
		titles[] = {};
	};
	class fuellowblue {
		name = "fuellowblue";
		sound[] =  {"\VI_blufor\sounds\BingoFuel.ogg", 1, 1.0};
		titles[] = {};
	};
};