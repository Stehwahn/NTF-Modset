class CfgPatches
{
	class rwrmod {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.3;
		requiredAddons[] = {"Extended_EventHandlers"};
		author = "ACE2 Team, Stolen, TECAK";
		authorUrl = "http://www.tsgames.ru";
	};
};

class Extended_PreInit_EventHandlers {
	class rwrmod {
		clientinit = "call ('\rwrmod\preClientInit.sqf' call SLX_XEH_COMPILE)";
	};
};

class Extended_GetIn_EventHandlers {
	class Air {
		class rwrmod {
			clientGetIn = "if (player == _this select 2) then {_this call rwrmod_fnc_getIn;}";
			exclude[] = {"BIS_Steerable_Parachute"};
		};
	};
};

class CfgVehicles {
	class All;
	
	class AllVehicles : All {
		threat_rwr_img = "rwrmod\data\threat.paa";
	};

	class Heli_Attack_01_base_F;
	
	class Helicopter_Base_F;
		
	class BWA3_Tiger_base : Helicopter_Base_F {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				icon = "";
			};
		};
	};
	
	class Heli_Attack_02_base_F;
	class O_Plane_CAS_02_F;
	
	class RHS_su25_base: O_Plane_CAS_02_F {
		has_rwr = 1;
		type_rwr = 1;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				icon = "";
			};
		};
	};	
	
	class rhs_mi28_base: Heli_Attack_02_base_F {
		has_rwr = 1;
		type_rwr = 1;
		threat_rwr_img = "rwrmod\data\threat_mi.paa";
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};
	
	class RHS_Ka52_base: Heli_Attack_02_base_F {
		has_rwr = 1;
		type_rwr = 1;
		threat_rwr_img = "rwrmod\data\threat_ka.paa";
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};
	
	class RHS_Mi24_Base: Heli_Attack_02_base_F {
		has_rwr = 1;
		type_rwr = 1;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};
	
	class Heli_Attack_02_dynamicLoadout_base_F: Heli_Attack_02_base_F {
		has_rwr = 1;
		type_rwr = 1;
		threat_rwr_img = "rwrmod\data\threat_48.paa";
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};
	
	class RHS_AH1Z_base : Heli_Attack_01_base_F {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};
	
	class Plane;
	
	class Plane_CAS_01_base_F;
	
	class RHS_A10 : Plane_CAS_01_base_F {
		has_rwr = 1;
		type_rwr = 2;
		threat_rwr_img = "rwrmod\data\threat_10.paa";
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};
	
	class Plane_CAS_01_dynamicLoadout_base_F : Plane_CAS_01_base_F {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};
	
	class Plane_Base_F;
	
	class rhs_mig29s_base: Plane_Base_F {
		has_rwr = 1;
		type_rwr = 1;
		threat_rwr_img = "rwrmod\data\threat_29.paa";
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};
	
	class ffaa_av8b2_base: Plane_Base_F {
		has_rwr = 1;
		type_rwr = 2;
		threat_rwr_img = "rwrmod\data\threat_av.paa";
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};
		
	class ffaa_ea_hercules_base: Plane_Base_F {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 				 
				icon = "";
			};
		};
	};
			
	class Plane_fighter_01_Base_F: Plane_Base_F {
		has_rwr = 1;
		type_rwr = 2;
		threat_rwr_img = "rwrmod\data\threat_18.paa";
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 				 
				icon = "";
			};
		};
	};
	
	class VTOL_Base_F: Plane_Base_F {
		has_rwr = 1;
		type_rwr = 2;
		threat_rwr_img = "rwrmod\data\threat_44.paa";
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 				 
				icon = "";
			};
		};
	};	
	
	class RHS_C130J_Base: Plane_Base_F {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 				 
				icon = "";
			};
		};
	};
		
	class Plane_Fighter_02_Base_F: Plane_Base_F {
		has_rwr = 1;
		type_rwr = 1;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 				 
				icon = "";
			};
		};
	};
			
	class RHS_TU95MS_base: Plane_Base_F {
		has_rwr = 1;
		type_rwr = 1;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 				 
				icon = "";
			};
		};
	};
				
	class Plane_Fighter_04_Base_F: Plane_Base_F {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 				 
				icon = "";
			};
		};
	};
		
	class Helicopter_Base_H;
		
	class rhsusf_CH53E_USMC: Helicopter_Base_H {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};
	
	class RHS_MELB_base: Helicopter_Base_H {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};
	
	class Heli_Transport_01_base_F: Helicopter_Base_H {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};	
	
	class ffaa_famet_cougar_base: Helicopter_Base_H {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};	
		
	class ffaa_et_ch47_base: Helicopter_Base_H {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};	
			
	class ffaa_famet_tigre_base: Helicopter_Base_H {
		has_rwr = 1;
		type_rwr = 2;
		threat_rwr_img = "rwrmod\data\threat_uh.paa";
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};	
				
	class Heli_Light_01_base_F: Helicopter_Base_H {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};	
					
	class Heli_Transport_03_base_F: Helicopter_Base_H {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};	
						
	class Heli_Transport_04_base_F: Helicopter_Base_H {
		has_rwr = 1;
		type_rwr = 1;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};	
							
	class Heli_Transport_02_base_F: Helicopter_Base_H {
		has_rwr = 1;
		type_rwr = 1;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};	
	
	class Heli_Light_02_base_F;
	
	class RHS_Mi8_base: Heli_Light_02_base_F {
		has_rwr = 1;
		type_rwr = 1;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};
	
	class Heli_Light_02_dynamicLoadout_base_F: Heli_Light_02_base_F {
		has_rwr = 1;
		type_rwr = 1;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};	


	class Heli_light_03_base_F;
	
	class UK3CB_BAF_Wildcat_base : Heli_light_03_base_F {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};	
		
	class RHS_UH1_Base : Heli_light_03_base_F {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};	
			
	class Heli_light_03_dynamicLoadout_base_F : Heli_light_03_base_F {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};	
	
	class Heli_Transport_02_base_F;
	
	class RHS_CH_47F_base : Heli_Transport_02_base_F {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};	

	class UK3CB_BAF_Merlin_Base : Heli_Transport_02_base_F {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};		

	class RHS_AH64_base : Heli_Attack_01_base_F {
		has_rwr = 1;
		type_rwr = 2;
		threat_rwr_img = "rwrmod\data\threat_ah.paa";
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};
	
	class UK3CB_BAF_Apache_base : Heli_Attack_01_base_F {
		has_rwr = 1;
		type_rwr = 2;
		threat_rwr_img = "rwrmod\data\threat_ah.paa";
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};	
		
	class Heli_Attack_01_dynamicLoadout_base_F : Heli_Attack_01_base_F {
		has_rwr = 1;
		type_rwr = 2;
		threat_rwr_img = "rwrmod\data\threat_66.paa";
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";				 
				 
				icon = "";
			};
		};
	};	
	
	class APC_Tracked_02_base_F;
	
	class rhs_zsutank_base : APC_Tracked_02_base_F {
		threat_rwr_img = "rwrmod\data\threat_23.paa";
	};
	
	class Tank_F;

	
	class Truck_F;
	
	class min_rf_sa_22: Truck_F {
		threat_rwr_img = "rwrmod\data\threat_s6.paa";
	};
	
	class Tank;

	class Plane_Fighter_03_base_F;

	
	class RHS_L159_base: Plane_Fighter_03_base_F {
		has_rwr = 1;
		type_rwr = 1;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";
				 
				 
				icon = "";
			};
		};
	};
	
	class rhsusf_f22: Plane_Fighter_03_base_F {
		has_rwr = 1;
		type_rwr = 2;
		threat_rwr_img = "rwrmod\data\threat_22.paa";
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";
				 
				 
				icon = "";
			};
		};
	};
	
	class FIR_F16_Base : Plane_Fighter_03_base_F {
		has_rwr = 1;
		type_rwr = 2;
		threat_rwr_img = "rwrmod\data\threat_16.paa";
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";
				 
				 
				icon = "";
			};
		};
	};	
	
	class Plane_Fighter_03_dynamicLoadout_base_F : Plane_Fighter_03_base_F {
		has_rwr = 1;
		type_rwr = 2;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";
				 
				 
				icon = "";
			};
		};
	};	

	class Plane_CAS_02_base_F;
		
	class Plane_CAS_02_dynamicLoadout_base_F : Plane_CAS_02_base_F {
		has_rwr = 1;
		type_rwr = 1;
		class ACE_SelfActions {
			class rwr_15 {
				displayName = "$STR_RWR";
				condition = "(ACE_player == driver vehicle ACE_player || ACE_player == gunner vehicle ACE_player)";
				statement = "call rwrmod_fnc_interaction";
				 
				 
				icon = "";
			};
		};
	};	
	
};

class ACE_RWR_RscPicture {
	type = 0;
	idc = -1;
	style = 48;
	x = 0.100000;
	y = 0.100000;
	w = 0.400000;
	h = 0.200000;
	sizeEx = 0.023000;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {1, 1, 1, 1};
	font = "TahomaB";
	text = "";
};

class ACE_RWR_SPOMainThreat: ACE_RWR_RscPicture {
	w = (0.0143255*0.75) * SafeZoneW;
	h = (0.0275089*0.75) * SafeZoneH;
	text = "\rwrmod\data\threat_primary_dir_act.paa";
};

class ACE_RWR_SPOSecondaryThreat: ACE_RWR_SPOMainThreat {
	w = (0.0143255*1) * SafeZoneW;
	h = (0.0275089*1) * SafeZoneH;
	text = "\rwrmod\data\threat_secondary_dir_act.paa";
};

class ACE_RWR_SPOPrimaryThreatType: ACE_RWR_RscPicture {
	w = 0.011991 * SafeZoneW;
	h = 0.0115254 * SafeZoneH;
	text = "\rwrmod\data\threat_act.paa";
};

class ACE_RWR_SPOSecondaryThreatType: ACE_RWR_SPOPrimaryThreatType {};

class RscTitles {
	class Default 
	{
		idd = -1;
		fadein = 0;
		fadeout = 0;
		duration = 0;
	};
	class ACE_RWR_RU {
		idd = -1;
		duration = 99999997952.000000;
		name = "ACE_RWR_RU";
		onLoad = "uiNamespace setVariable ['ACE_RWR_RU', _this select 0]";
		
		class controlsBackground {
		
			class BackGround: ACE_RWR_RscPicture {
				idc = 21999;
				x = 0.894564 * SafeZoneW + SafeZoneX;
				y = 0.671654 * SafeZoneH + SafeZoneY - 0.42;
				w = 0.100852 * SafeZoneW;
				h = 0.322844 * SafeZoneH;
				colorBackground[] = {0, 0, 0, 0};
				text = "\rwrmod\data\rwr_spo.paa";
			};

		};
		
		class controls {

			class ACE_RWR_SPO_10L: ACE_RWR_SPOMainThreat {
				idc = 22000+ 0;
				x = 0.92763 * SafeZoneW + SafeZoneX;
				y = 0.734265 * SafeZoneH + SafeZoneY - 0.42;
			};

			class ACE_RWR_SPO_10R: ACE_RWR_SPO_10L {
				idc = 22000+ 1;
				x = 0.949315 * SafeZoneW + SafeZoneX;
			};

			class ACE_RWR_SPO_30L: ACE_RWR_SPOMainThreat {
				idc = 22000+ 2;
				x = 0.914935 * SafeZoneW + SafeZoneX;
				y = 0.745139 * SafeZoneH + SafeZoneY - 0.42;
			};

			class ACE_RWR_SPO_30R: ACE_RWR_SPO_30L {
				idc = 22000+ 3;
				x = 0.962538 * SafeZoneW + SafeZoneX;
			};

			class ACE_RWR_SPO_50L: ACE_RWR_SPOMainThreat {
				idc = 22000+ 4;
				x = 0.906473 * SafeZoneW + SafeZoneX;
				y = 0.763919 * SafeZoneH + SafeZoneY - 0.42;
			};

			class ACE_RWR_SPO_50R: ACE_RWR_SPO_50L {
				idc = 22000+ 5;
				x = 0.97153 * SafeZoneW + SafeZoneX;
			};

			class ACE_RWR_SPO_90L: ACE_RWR_SPOMainThreat {
				idc = 22000+ 6;
				x = 0.902771 * SafeZoneW + SafeZoneX;
				y = 0.785666 * SafeZoneH + SafeZoneY - 0.42;
			};

			class ACE_RWR_SPO_90R: ACE_RWR_SPO_90L {
				idc = 22000+ 7;
				x = 0.974702 * SafeZoneW + SafeZoneX;
			};

			class ACE_RWR_SPO_90LB: ACE_RWR_SPOMainThreat {
				idc = 22000+ 28;
				x = 0.917051 * safezoneW + safezoneX;
				y = 0.845962 * safezoneH + safezoneY - 0.42;
				text = "\rwrmod\data\threat_primary_dir_act90S.paa";
			};

			class ACE_RWR_SPO_90RB: ACE_RWR_SPO_90LB {
				idc = 22000+ 29;
				x = 0.96148 * safezoneW + safezoneX;
				text = "\rwrmod\data\threat_primary_dir_act90B.paa";
			};

			class ACE_RWR_SPO_10LS: ACE_RWR_SPOSecondaryThreat {
				idc = 22000+ 8;
				x = 0.928688 * SafeZoneW + SafeZoneX;
				y = 0.745139 * SafeZoneH + SafeZoneY - 0.42;
			};

			class ACE_RWR_SPO_10RS: ACE_RWR_SPO_10LS {
				idc = 22000+ 9;
				x = 0.945612 * SafeZoneW + SafeZoneX;
			};

			class ACE_RWR_SPO_30LS: ACE_RWR_SPOSecondaryThreat {
				idc = 22000+ 10;
				x = 0.918637 * SafeZoneW + SafeZoneX;
				y = 0.753046 * SafeZoneH + SafeZoneY - 0.42;
			};

			class ACE_RWR_SPO_30RS: ACE_RWR_SPO_30LS {
				idc = 22000+ 11;
				x = 0.956192 * SafeZoneW + SafeZoneX;
			};

			class ACE_RWR_SPO_50LS: ACE_RWR_SPOSecondaryThreat {
				idc = 22000+ 12;
				x = 0.912291 * SafeZoneW + SafeZoneX;
				y = 0.766884 * SafeZoneH + SafeZoneY - 0.42;
			};

			class ACE_RWR_SPO_50RS: ACE_RWR_SPO_50LS {
				idc = 22000+ 13;
				x = 0.963068 * SafeZoneW + SafeZoneX;
			};

			class ACE_RWR_SPO_90LS: ACE_RWR_SPOSecondaryThreat {
				idc = 22000+ 14;
				x = 0.909118 * SafeZoneW + SafeZoneX;
				y = 0.784677 * SafeZoneH + SafeZoneY - 0.42;
			};

			class ACE_RWR_SPO_90RS: ACE_RWR_SPO_90LS {
				idc = 22000+ 15;
				x = 0.965712 * SafeZoneW + SafeZoneX;
			};

			class ACE_RWR_SPO_90LSB: ACE_RWR_SPOSecondaryThreat {
				idc = 22000+ 30;
				x = 0.920754 * safezoneW + safezoneX;
				y = 0.830147 * safezoneH + safezoneY - 0.42;
			};

			class ACE_RWR_SPO_90RSB: ACE_RWR_SPO_90LSB {
				idc = 22000+ 31;
				x = 0.953546 * safezoneW + safezoneX;
			};

			class ACE_RWR_SPO_PT1: ACE_RWR_SPOPrimaryThreatType {
				idc = 22000+ 16;
				x = 0.909646 * SafeZoneW + SafeZoneX;
				y = 0.869684 * SafeZoneH + SafeZoneY - 0.42;
			};

			class ACE_RWR_SPO_PT2: ACE_RWR_SPO_PT1 {
				idc = 22000+ 17;
				x = 0.921811 * SafeZoneW + SafeZoneX;
			};

			class ACE_RWR_SPO_PT3: ACE_RWR_SPO_PT1 {
				idc = 22000+ 18;
				x = 0.933976 * SafeZoneW + SafeZoneX;
			};

			class ACE_RWR_SPO_PT4: ACE_RWR_SPO_PT1 {
				idc = 22000+ 19;
				x = 0.945612 * SafeZoneW + SafeZoneX;
			};

			class ACE_RWR_SPO_PT5: ACE_RWR_SPO_PT1 {
				idc = 22000+ 20;
				x = 0.958307 * SafeZoneW + SafeZoneX;
			};

			class ACE_RWR_SPO_PT6: ACE_RWR_SPO_PT1 {
				idc = 22000+ 21;
				x = 0.970472 * SafeZoneW + SafeZoneX;
			};

			class ACE_RWR_SPO_ST1: ACE_RWR_SPOSecondaryThreatType {
				idc = 22000+ 22;
				x = 0.909646 * SafeZoneW + SafeZoneX;
				y = 0.878581 * SafeZoneH + SafeZoneY - 0.42;
				text = "\rwrmod\data\threat_n.paa";
			};

			class ACE_RWR_SPO_ST2: ACE_RWR_SPO_ST1 {
				idc = 22000+ 23;
				x = 0.921811 * SafeZoneW + SafeZoneX;
				text = "\rwrmod\data\threat_3.paa";
			};

			class ACE_RWR_SPO_ST3: ACE_RWR_SPO_ST1 {
				idc = 22000+ 24;
				x = 0.933976 * SafeZoneW + SafeZoneX;
				text = "\rwrmod\data\threat_x.paa";
			};

			class ACE_RWR_SPO_ST4: ACE_RWR_SPO_ST1 {
				idc = 22000+ 25;
				x = 0.945612 * SafeZoneW + SafeZoneX;
				text = "\rwrmod\data\threat_h.paa";
			};

			class ACE_RWR_SPO_ST5: ACE_RWR_SPO_ST1 {
				idc = 22000+ 26;
				x = 0.958307 * SafeZoneW + SafeZoneX;
				text = "\rwrmod\data\threat_f.paa";
			};

			class ACE_RWR_SPO_ST6: ACE_RWR_SPO_ST1 {
				idc = 22000+ 27;
				x = 0.970472 * SafeZoneW + SafeZoneX;
				text = "\rwrmod\data\threat_c.paa";
			};

			class ACE_RWR_SPO_SignalStrength: ACE_RWR_RscPicture {
				idc = 22000+ 32;
				text = "";
				x = 0.919168 * safezoneW + safezoneX;
				y = 0.76293 * safezoneH + safezoneY - 0.42;
				w = 0.0504129 * safezoneW;
				h = 0.0809278 * safezoneH;
			};

			class ACE_RWR_SPO_Launch: ACE_RWR_RscPicture {
				idc = 22000+ 33;
				text = "";
				x = 0.891662 * safezoneW + safezoneX;
				y = 0.676935 * safezoneH + safezoneY - 0.42;
				w = 0.10595 * safezoneW;
				h = 0.308274 * safezoneH;
			};

			class ACE_RWR_SPO_SignalUp: ACE_RWR_RscPicture {
				idc = 22000+ 34;
				text = "\rwrmod\data\threat_up.paa";
				x = 0.894564 * SafeZoneW + SafeZoneX;
				y = 0.671654 * SafeZoneH + SafeZoneY - 0.42;
				w = 0.100852 * SafeZoneW;
				h = 0.322844 * SafeZoneH;
			};

			class ACE_RWR_SPO_SignalDown: ACE_RWR_RscPicture {
				idc = 22000+ 35;
				text = "\rwrmod\data\threat_down.paa";
				x = 0.894564 * SafeZoneW + SafeZoneX;
				y = 0.671654 * SafeZoneH + SafeZoneY - 0.42;
				w = 0.100852 * SafeZoneW;
				h = 0.322844 * SafeZoneH;
			};
		};
		
	};
	
	class ACE_RWR_US {
		idd = -1;
		duration = 99999997952.000000;
		name = "ACE_RWR_US";
		onLoad = "uiNamespace setVariable ['ACE_RWR_US', _this select 0]";

		class controlsBackground {

			class BackGround: ACE_RWR_RscPicture {
				idc = 21999;
				x = SafeZoneX + SafeZoneW - 0.01 - 0.22;
				y = SafeZoneY + SafeZoneH - 0.01 - 0.2934;
				w = 0.220000;
				h = 0.293400;
				colorBackground[] = {0, 0, 0, 0};
				text = "\rwrmod\data\rwr_default.paa";
			};
		};

		class controls {

			class SR5RWR_display: ACE_RWR_RscPicture {
				idc = -1;
				colorText[] = {0.750000, 0.750000, 0.750000, 1};
				colorBackground[] = {0, 0, 0, 0};
				font = "TahomaB";
				text = "";
				sizeEx = 0.018000;
				x = SafeZoneX + SafeZoneW - 0.01 - 0.22;
				y = SafeZoneY + SafeZoneH - 0.01 - 0.2934;
				w = 0.022000;
				h = 0.029340;
			};

			class SR5RWR_Threat01: SR5RWR_display {
				idc = 22000+ 0;
			};

			class SR5RWR_Threat02: SR5RWR_display {
				idc = 22000+ 1;
			};

			class SR5RWR_Threat03: SR5RWR_display {
				idc = 22000+ 2;
			};

			class SR5RWR_Threat04: SR5RWR_display {
				idc = 22000+ 3;
			};

			class SR5RWR_Threat05: SR5RWR_display {
				idc = 22000+ 4;
			};

			class SR5RWR_Threat06: SR5RWR_display {
				idc = 22000+ 5;
			};

			class SR5RWR_Threat07: SR5RWR_display {
				idc = 22000+ 6;
			};

			class SR5RWR_Threat08: SR5RWR_display {
				idc = 22000+ 7;
			};

			class SR5RWR_Threat09: SR5RWR_display {
				idc = 22000+ 8;
			};

			class SR5RWR_Threat10: SR5RWR_display {
				idc = 22000+ 9;
			};

			class SR5RWR_Threat11: SR5RWR_display {
				idc = 22000+ 10;
			};

			class SR5RWR_Threat12: SR5RWR_display {
				idc = 22000+ 11;
			};

			class SR5RWR_Threat13: SR5RWR_display {
				idc = 22000+ 12;
			};

			class SR5RWR_Threat14: SR5RWR_display {
				idc = 22000+ 13;
			};

			class SR5RWR_Threat15: SR5RWR_display {
				idc = 22000+ 14;
			};

			class SR5RWR_Threat16: SR5RWR_display {
				idc = 22000+ 15;
			};

			class SR5RWR_ThreatNew01: SR5RWR_display {
				idc = 22020+ 0;
			};

			class SR5RWR_ThreatNew02: SR5RWR_display {
				idc = 22020+ 1;
			};

			class SR5RWR_ThreatNew03: SR5RWR_display {
				idc = 22020+ 2;
			};

			class SR5RWR_ThreatNew04: SR5RWR_display {
				idc = 22020+ 3;
			};

			class SR5RWR_ThreatNew05: SR5RWR_display {
				idc = 22020+ 4;
			};

			class SR5RWR_ThreatNew06: SR5RWR_display {
				idc = 22020+ 5;
			};

			class SR5RWR_ThreatNew07: SR5RWR_display {
				idc = 22020+ 6;
			};

			class SR5RWR_ThreatNew08: SR5RWR_display {
				idc = 22020+ 7;
			};

			class SR5RWR_ThreatNew09: SR5RWR_display {
				idc = 22020+ 8;
			};

			class SR5RWR_ThreatNew10: SR5RWR_display {
				idc = 22020+ 9;
			};

			class SR5RWR_ThreatNew11: SR5RWR_display {
				idc = 22020+ 10;
			};

			class SR5RWR_ThreatNew12: SR5RWR_display {
				idc = 22020+ 11;
			};

			class SR5RWR_ThreatNew13: SR5RWR_display {
				idc = 22020+ 12;
			};

			class SR5RWR_ThreatNew14: SR5RWR_display {
				idc = 22020+ 13;
			};

			class SR5RWR_ThreatNew15: SR5RWR_display {
				idc = 22020+ 14;
			};

			class SR5RWR_ThreatNew16: SR5RWR_display {
				idc = 22020+ 15;
			};

			class SR5RWR_ThreatGround01: SR5RWR_display {
				idc = 22040+ 0;
			};

			class SR5RWR_ThreatGround02: SR5RWR_display {
				idc = 22040+ 1;
			};

			class SR5RWR_ThreatGround03: SR5RWR_display {
				idc = 22040+ 2;
			};

			class SR5RWR_ThreatGround04: SR5RWR_display {
				idc = 22040+ 3;
			};

			class SR5RWR_ThreatGround05: SR5RWR_display {
				idc = 22040+ 4;
			};

			class SR5RWR_ThreatGround06: SR5RWR_display {
				idc = 22040+ 5;
			};

			class SR5RWR_ThreatGround07: SR5RWR_display {
				idc = 22040+ 6;
			};

			class SR5RWR_ThreatGround08: SR5RWR_display {
				idc = 22040+ 7;
			};

			class SR5RWR_ThreatGround09: SR5RWR_display {
				idc = 22040+ 8;
			};

			class SR5RWR_ThreatGround10: SR5RWR_display {
				idc = 22040+ 9;
			};

			class SR5RWR_ThreatGround11: SR5RWR_display {
				idc = 22040+ 10;
			};

			class SR5RWR_ThreatGround12: SR5RWR_display {
				idc = 22040+ 11;
			};

			class SR5RWR_ThreatGround13: SR5RWR_display {
				idc = 22040+ 12;
			};

			class SR5RWR_ThreatGround14: SR5RWR_display {
				idc = 22040+ 13;
			};

			class SR5RWR_ThreatGround15: SR5RWR_display {
				idc = 22040+ 14;
			};

			class SR5RWR_ThreatGround16: SR5RWR_display {
				idc = 22040+ 15;
			};

			class SR5RWR_ThreatAir01: SR5RWR_display {
				idc = 22060+ 0;
			};

			class SR5RWR_ThreatAir02: SR5RWR_display {
				idc = 22060+ 1;
			};

			class SR5RWR_ThreatAir03: SR5RWR_display {
				idc = 22060+ 2;
			};

			class SR5RWR_ThreatAir04: SR5RWR_display {
				idc = 22060+ 3;
			};

			class SR5RWR_ThreatAir05: SR5RWR_display {
				idc = 22060+ 4;
			};

			class SR5RWR_ThreatAir06: SR5RWR_display {
				idc = 22060+ 5;
			};

			class SR5RWR_ThreatAir07: SR5RWR_display {
				idc = 22060+ 6;
			};

			class SR5RWR_ThreatAir08: SR5RWR_display {
				idc = 22060+ 7;
			};

			class SR5RWR_ThreatAir09: SR5RWR_display {
				idc = 22060+ 8;
			};

			class SR5RWR_ThreatAir10: SR5RWR_display {
				idc = 22060+ 9;
			};

			class SR5RWR_ThreatAir11: SR5RWR_display {
				idc = 22060+ 10;
			};

			class SR5RWR_ThreatAir12: SR5RWR_display {
				idc = 22060+ 11;
			};

			class SR5RWR_ThreatAir13: SR5RWR_display {
				idc = 22060+ 12;
			};

			class SR5RWR_ThreatAir14: SR5RWR_display {
				idc = 22060+ 13;
			};

			class SR5RWR_ThreatAir15: SR5RWR_display {
				idc = 22060+ 14;
			};

			class SR5RWR_ThreatAir16: SR5RWR_display {
				idc = 22060+ 15;
			};

			class SR5RWR_ThreatLaunch01: SR5RWR_display {
				idc = 22080+ 0;
			};

			class SR5RWR_ThreatLaunch02: SR5RWR_display {
				idc = 22080+ 1;
			};

			class SR5RWR_ThreatLaunch03: SR5RWR_display {
				idc = 22080+ 2;
			};

			class SR5RWR_ThreatLaunch04: SR5RWR_display {
				idc = 22080+ 3;
			};

			class SR5RWR_ThreatLaunch05: SR5RWR_display {
				idc = 22080+ 4;
			};

			class SR5RWR_ThreatLaunch06: SR5RWR_display {
				idc = 22080+ 5;
			};

			class SR5RWR_ThreatLaunch07: SR5RWR_display {
				idc = 22080+ 6;
			};

			class SR5RWR_ThreatLaunch08: SR5RWR_display {
				idc = 22080+ 7;
			};

			class SR5RWR_ThreatLaunch09: SR5RWR_display {
				idc = 22080+ 8;
			};

			class SR5RWR_ThreatLaunch10: SR5RWR_display {
				idc = 22080+ 9;
			};

			class SR5RWR_ThreatLaunch11: SR5RWR_display {
				idc = 22080+ 10;
			};

			class SR5RWR_ThreatLaunch12: SR5RWR_display {
				idc = 22080+ 11;
			};

			class SR5RWR_ThreatLaunch13: SR5RWR_display {
				idc = 22080+ 12;
			};

			class SR5RWR_ThreatLaunch14: SR5RWR_display {
				idc = 22080+ 13;
			};

			class SR5RWR_ThreatLaunch15: SR5RWR_display {
				idc = 22080+ 14;
			};

			class SR5RWR_ThreatLaunch16: SR5RWR_display {
				idc = 22080+ 15;
			};
		};
	};
};

class CfgSounds {
	class ACE_RWR15_TRACK {
		name = "ACE_RWR15_TRACK";
		sound[] = {"\rwrmod\sound\SPOTrack.ogg", db+4, 1};
		titles[] = {};
	};

	class ACE_RWR15_IR {
		name = "ACE_RWR15_IR";
		sound[] = {"\rwrmod\sound\SPOIR.ogg", db+4, 1};
		titles[] = {};
	};
	
	class ACE_SR5RWR_AIR {
		name = "ACE_SR5RWR_AIR";
		sound[] = {"\rwrmod\sound\SR5RWR_AIR.ogg", 1, 1};
		titles[] = {};
	};
	
	class ACE_SR5RWR_GROUND {
		name = "ACE_SR5RWR_GROUND";
		sound[] = {"\rwrmod\sound\SR5RWR_GROUND.ogg", 1, 1};
		titles[] = {};
	};
	
	class ACE_SR5RWR_IR {
		name = "ACE_SR5RWR_IR";
		sound[] = {"\rwrmod\sound\SR5RWR_IR.ogg", 1, 1};
		titles[] = {};
	};
	
	class rwr_beep_long {
		name = "rwr_beep_long";
		sound[] = {"\rwrmod\sound\rwr_beep_long.ogg", 1, 1};
		titles[] = {};
	};
};
