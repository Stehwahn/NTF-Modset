class CfgPatches
{
	class ri65b
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

	class RHS_su25_base {
	O_Plane_CAS_02_F_clientInitf = "_this execVM ""\ri65b\fn_caws_init.sqf""";
	};

	class rhs_mig29s_base {
	rhs_mig29s_base_clientInitf = "_this execVM ""\ri65b\fn_caws_init.sqf""";
	};

	class O_T_VTOL_02_vehicle_dynamicLoadout_F {
	O_T_VTOL_02_vehicle_dynamicLoadout_F_clientInitf = "_this execVM ""\ri65b\fn_caws_init.sqf""";
	};
	
	class O_T_VTOL_02_infantry_dynamicLoadout_F {
	O_T_VTOL_02_infantry_dynamicLoadout_F_clientInitf = "_this execVM ""\ri65b\fn_caws_init.sqf""";
	};
			
	class rhs_mig29s_base {
	O_Plane_CAS_02_F_clientInitf = "_this execVM ""\ri65b\fn_caws_init.sqf""";
	};

	class O_PAKFA_F {
	O_PAKFA_F_Base_clientInitf = "_this execVM ""\ri65b\fn_caws_init.sqf""";
	};
	
	class O_Plane_Fighter_02_F {
	O_Plane_Fighter_02_F_clientInitf = "_this execVM ""\ri65b\fn_caws_init.sqf""";
	};
	
	class O_Plane_Fighter_02_Stealth_F {
	O_Plane_Fighter_02_Stealth_F_clientInitf = "_this execVM ""\ri65b\fn_caws_init.sqf""";
	};
	
	class O_Plane_CAS_02_dynamicLoadout_F {
	O_Plane_CAS_02_dynamicLoadout_F_clientInitf = "_this execVM ""\ri65b\fn_caws_init.sqf""";
	};
};

class CfgSounds
{
	class online {
		name = "online";
		sound[] =  {"\ri65b\sounds\online.ogg", db+8, 1.0};
		titles[] = {};
	};
	class altitude {
		name = "altitude";
		sound[] =  {"\ri65b\sounds\altitude.ogg", 1, 1.0};
		titles[] = {};
	};
	class exangle {
		name = "exangle";
		sound[] =  {"\ri65b\sounds\angle.ogg", 1, 1.0};
		titles[] = {};
	};
	class LEF {
		name = "LEF";
		sound[] =  {"\ri65b\sounds\LEF.ogg", 1, 1.0};
		titles[] = {};
	};
	class REF {
		name = "REF";
		sound[] =  {"\ri65b\sounds\REF.ogg", 1, 1.0};
		titles[] = {};
	};
	class gforce {
		name = "gforce";
		sound[] =  {"\ri65b\sounds\overload.ogg", 1, 1.0};
		titles[] = {};
	};
    class pullUp {
		name = "pullup";
		sound[] =  {"\ri65b\sounds\pullup.ogg", 1, 1.0};
		titles[] = {};
	};
	class speed {
		name = "speed";
		sound[] =  {"\ri65b\sounds\speed.ogg", 1, 1.0};
		titles[] = {};
	};
    class fuel1500 {
		name = "fuel1500";
		sound[] =  {"\ri65b\sounds\fuel1500.ogg", 1, 1.0};
		titles[] = {};
	};
    class fuel800 {
		name = "fuel800";
		sound[] =  {"\ri65b\sounds\fuel800.ogg", 1, 1.0};
		titles[] = {};
	};
    class fuel500 {
		name = "fuel500";
		sound[] =  {"\ri65b\sounds\fuel500.ogg", 1, 1.0};
		titles[] = {};
	};
    class fuellow {
		name = "fuellow";
		sound[] =  {"\ri65b\sounds\fuellow.ogg", 1, 1.0};
		titles[] = {};
	};
    class spodam {
		name = "spodam";
		sound[] =  {"\ri65b\sounds\spodam.ogg", 1, 1.0};
		titles[] = {};
	};
    class SysF {
		name = "SysF";
		sound[] =  {"\ri65b\sounds\SysF.ogg", 1, 1.0};
		titles[] = {};
	};
    class FuelF {
		name = "FuelF";
		sound[] =  {"\ri65b\sounds\FuelF.ogg", 1, 1.0};
		titles[] = {};
	};	
	class ControlsF {
		name = "ControlsF";
		sound[] =  {"\ri65b\sounds\ControlsF.ogg", 1, 1.0};
		titles[] = {};
	};
	class ejectpilot {
		name = "ejectpilot";
		sound[] =  {"\ri65b\sounds\ejectpilot.ogg", 1, 1.0};
		titles[] = {};
	};
};