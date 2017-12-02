#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

#define private 0
#define protected 1
#define public 2

class CfgPatches
{
	class FIR_A10C_F
	{
		units[] = {"FIR_A10C","FIR_A10C_MD","FIR_A10C_FT","FIR_A10C_OS","FIR_A10C_FR","FIR_A10C_Blank"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"FIR_AirWeaponSystem_US","A3_Air_F_Beta"};
	};
};


#include "CfgFX.hpp"
#include "gui.hpp"

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		FIR_A10C_Pilot = "FIR_A10C_Pilot";
	};
};
 
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class States
	{
		class pilot_plane_cas_01;
		class FIR_A10c_Pilot: pilot_plane_cas_01
		{
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};  
			file = "FIR_A10c\anim\a10c_anim.rtm";
			interpolateTo[] = {KIA_FIR_A10c_Pilot,1};
			leaning = "empty";    
		};
		class KIA_FIR_A10c_Pilot : DefaultDie 
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = "false";
			terminal = true;
			file = "FIR_A10c\anim\a10c_anim.rtm";
			connectTo[] = {"DeadState", 0.1};
		};
	};
};

class CfgFunctions
{
	class FIR
	{
		class FIR_A10C_Init_Function
		{
			class A10C_LoadAttribute
			{
				file = "\FIR_A10C\sqs\init\loadattribute.sqf";
			};
			class A10C_SaveAttribute
			{
				file = "\FIR_A10C\sqs\init\saveattribute.sqf";
			};
		};
	};
};

//#include "\a3\3DEN\UI\macros.inc"
class ctrlCombo; // external
class Cfg3DEN
{
	class Attributes
	{
		class Default;
		class Title: Default
		{
			class Controls 
			{
				class Title;
			};
		};
		class FIR_A10C_PilotCombo: Title
		{
			attributeLoad = "[_this controlsGroupCtrl 100, _config] call FIR_fnc_A10C_LoadAttribute;";
			attributeSave = "[_this controlsGroupCtrl 100, _config] call FIR_fnc_A10C_SaveAttribute;";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlCombo
				{
					idc = 100;
					x = "48* 2 * (pixelW * pixelGrid * 0.25)";
					w = "82* (pixelW * pixelGrid * 0.25)";
					h = "8* (pixelH * pixelGrid * 0.25)* 1.2";
					class Items
					{
						class No
						{
							text = "no change";
							data = "no";
						};
						class type1
						{
							text = "Type 1(HGU-55/P+MBU-20/P)";
							data = "type1";
						};
						class type2
						{
							text = "Type 2(HGU-55/P+MBU-12/P)";
							data = "type2";
						};
						class type4
						{
							text = "Scorpion HMCS";
							data = "type4";
						};
					};
				};
			};
		};
	};
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles 
{
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class thingX;
	class Motorcycle;	
	class Air ;
	class Plane : Air
	{
		class NewTurret ;
		class ViewPilot ;
		class HitPoints
		{
			class HitHull;
		};
	};
	class Plane_Base_F : Plane
	{
		class AnimationSources;
		class Components;		
	};
	class Plane_CAS_01_base_F : Plane_Base_F{};
	class bav_A10C_Base : Plane_CAS_01_base_F
	{
		memoryPointGun = "kulomet";		
		simulation="airplane";
		scope = 1;
		model = "\FIR_A10C\FIR_A10C";
		displayName = "A-10C Warthog";
		crew = "B_Pilot_F";
		icon = "\FIR_A10C\pic\icon_a10_ca.paa";
		picture = "\FIR_A10C\pic\picture_a10_ca.paa";
		side = TWest;
		faction ="BLU_F";
		driverLeftHandAnimName = "throttle";  
       	driverRightHandAnimName = "stick";  
		driverleftleganimname = "pedal";
		driverrightleganimname = "pedal";
		memoryPointsGetInDriver = "pos driver";	
		memoryPointsGetInDriverDir = "pos driver dir";		
		landingSpeed = 200;
		soundGetIn[]={"A3\Sounds_F\air\Plane_Fighter_03\getin",db-5,1};
		soundGetOut[]={"A3\Sounds_F\air\Plane_Fighter_03\getout",db-5,1, 40};
		insideSoundCoef = 0.2;
		destrType = "DestructWreck";
		driveraction = "FIR_A10c_Pilot";
		hiddenselections[]= {"camo1","camo2","camo3","roundel_L_t","roundel_L_b","roundel_R_t","roundel_R_b","decal_1","decal_2","kill_1_1",
			"kill_1_2",
			"kill_1_3",
			"kill_1_4",
			"kill_1_5",
			"kill_1_6",
			"kill_1_7",
			"kill_1_8",
			"kill_1_9",
			"kill_10_1",
			"kill_10_2",
			"kill_10_3",
			"kill_10_4",
			"kill_50_1",
			"kill_100_1",
			"kill_100_2",
			"kill_100_3",
			"kill_100_4",
			"kill_100_5",
			"kill_100_6",
			"kill_100_7",
			"kill_100_8",
			"kill_100_9","name_1","name_2","name_3","name_4","name_5","name_6","name_7","name_8","name_9","name_10","rank_tag","insignia","digital_watch_hour_1","digital_watch_hour_2","digital_watch_min_1","digital_watch_min_2","digital_watch_sec_1","digital_watch_sec_2","cam_tracking","tad","mfd_overlay","mfd_overlay2",
"csms_1",
"csms_2",
"csms_3",
"csms_4",
"csms_5",
"csms_7",
"csms_8",
"csms_9",
"csms_10",
"csms_11",
"csms_1_num",
"csms_2_num",
"csms_3_num",
"csms_4_num",
"csms_5_num",
"csms_7_num",
"csms_8_num",
"csms_9_num",
"csms_10_num",
"csms_11_num","cur_wep",
"ded_freq_1",
"ded_freq_2",
"ded_freq_3",
"ded_chan_1",
"ded_chan_2",	
"gau8_1",
"gau8_2",
"gau8_3",
"gau8_4"};
		hiddenselectionstextures[] = {"FIR_A10C\data\body_co.paa","FIR_A10C\data\wing_co.paa","FIR_A10C\data\engine_co.paa",""};
		driverCanEject = false;
		showAllTargets = 2;
		selectionFireAnim = "zasleh";						/// what selection is hidden when machinegun doesn't shoot
		
		AWS_MFD_OVERLAY_TGP = "\FIR_A10C\cockpit\mfd_tgp_ca.paa";
		AWS_MFD_OVERLAY_MSSL = "\FIR_A10C\cockpit\mfd_tgp_ca.paa";
		AWS_MFD_OVERLAY_TAD = "\FIR_A10C\cockpit\mfd_tad_ca.paa";		
		AWS_RFD_FONT_TYPE = "a10c_rfd";			
		
		acceleration = 200;
		driveoncomponent[] = {"wheel_1", "wheel_2", "wheel_3"};
		
		LESH_canBeTowed = 1;
		LESH_towFromFront = 1;
		LESH_AxisOffsetTarget[] = {0,8,-2.43};
		LESH_WheelOffset[] = {0,-2};
		has_rwr = 1;
		type_rwr = 2;
		threat_rwr_img = "rwrmod\data\threat_10.paa";		
		USAF_RefuelType = "probe";
		USAF_RefuelPoint = "refuel_probe";
		USAF_RefuelAnimation = "fuel_probe";	
		ace_refuel_fuelCapacity=6223;
		class TextureSources
		{
			class bav_c_blank
			{
				displayname="Blank";
				author="Firewill";
				textures[]=
				{
					"FIR_A10C\skin\body_blank_co.paa",
					"FIR_A10C\skin\wing_blank_co.paa",
					"FIR_A10C\skin\engine_blank_co.paa"					
				};
				factions[]={};
			};	
			class bav_c_stand
			{
				displayname="Standard";
				author="Firewill";
				textures[]=
				{
					"FIR_A10C\skin\body_in_co.paa",
					"FIR_A10C\skin\wing_in_co.paa",
					"FIR_A10C\skin\engine_in_co.paa"					
				};
				factions[]={};
			};	
			class bav_c_104
			{
				displayname="104th FS";
				author="Firewill";
				textures[]=
				{
					"FIR_A10C\skin\body_md_co.paa",
					"FIR_A10C\skin\wing_md_co.paa",
					"FIR_A10C\skin\engine_md_co.paa"					
				};
				factions[]={};
			};	
			class bav_c_74
			{
				displayname="74th FS";
				author="Firewill";
				textures[]=
				{
					"FIR_A10C\skin\body_74_co.paa",
					"FIR_A10C\skin\wing_74_co.paa",
					"FIR_A10C\skin\engine_blank_co.paa"					
				};
				factions[]={};
			};	
			class bav_c_25
			{
				displayname="25th FS";
				author="Firewill";
				textures[]=
				{
					"FIR_A10C\skin\body_25_co.paa",
					"FIR_A10C\skin\wing_25_co.paa",
					"FIR_A10C\skin\engine_25_co.paa"					
				};
				factions[]={};
			};				
		};			
		camouflage = 8;
		audible = 10;
		accuracy = 0.2;
		
		memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
  		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};

		htMin = 60;
  		htMax = 1800;
  		afMax = 200;
  		mfMax = 100;
  		mFact = 0;
  		tBody = 0;
		#include "cfg_HUD_Wipe_Metric.hpp"		
		class Attributes 
		{
			class A10C_ReplacePilot
			{
				 displayName = "Replace Pilot";
				 tooltip = "replace the pilot";
				 property = "A10C_ReplacePilotID";
				 control = "FIR_A10C_PilotCombo";
				 expression = "_this setVariable [""A10C_ReplacePilot"", _value]; [_this, _value] execVM 'FIR_A10C\sqs\init\replace_pilot.sqf';";
				 defaultValue = "no";
				 typeName = "STRING";
			};			
			class A10C_SelectAmmo
			{
						displayName = "Change GAU-8 Ammo"; 
						tooltip = "Customize GAU-8 Ammo. support Mighty GAU8 mod and ACE3 GAU8 Enhancement. had two option - mighty and ace. default is no "; 
						property = "A10C_SelectAmmoID";
						control = "Edit";
						expression = "_this setVariable [""A10_SelectAmmo"",_value];";
						defaultValue = "no";
						
						unique = 0; 
						validate = "variable";
						condition = "object";
						typeName = "STRING"; 
						
			};
		};	

		weapons[] = {"FIR_MasterArm","Gatling_30mm_Plane_CAS_01_F","FIR_CMLauncher"};
		magazines[] = {"MG8_1174Rnd_Gau8_30mm","FIR_240rnd_CMFlare_Chaff_Magazine"};		

		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 90;
						angleRangeVertical = 40;
						maxTrackableSpeed = 400;
						animDirection = "";
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = -1;
						};
						nightRangeCoef = 0;			
						angleRangeHorizontal = 90;
						angleRangeVertical = 40;
						maxTrackableSpeed = 400;
						animDirection = "main1turret";
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};			
			class TransportPylonsComponent
			{
				UIPicture = "\A3\Air_F_EPC\Plane_CAS_01\Data\UI\Plane_CAS_01_3DEN_CA.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] = {"FIR_MISC","FIR_A10C_AA_HP","FIR_A10_JAM_HP","FIR_A10C_JAM_HP"};
						attachment = "FIR_ALQ184_2_P_1rnd_M";
						priority = 5;
						maxweight = 190;
						UIposition[] = {0.35,0.0};
					};
					class pylons2: pylons1
					{
						hardpoints[] = {"FIR_MISC","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP"};
						priority = 4;
						attachment = "FIR_Hydra_P_7rnd_M";
						maxweight = 251;
						UIposition[] = {0.345,0.05};
					};
					class pylons3: pylons1
					{
						hardpoints[] = {"FIR_MISC","FIR_A10_MAV_HP","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP","FIR_A10_BOMB_2K_HP","FIR_A10C_BOMB_2K_HP"};
						priority = 3;
						attachment = "FIR_AGM65G_P_1rnd_M";
						maxweight = 1050;
						UIposition[] = {0.34,0.1};
					};
					class pylons4: pylons1
					{
						hardpoints[] = {"FIR_MISC","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP","FIR_A10_BOMB_2K_HP","FIR_A10C_BOMB_2K_HP"};
						priority = 2;
						attachment = "FIR_GBU38_P_1rnd_M";
						maxweight = 1200;
						UIposition[] = {0.33,0.2};
					};
					class pylons5: pylons1
					{
						hardpoints[] = {"FIR_MISC","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP"};
						priority = 1;
						attachment = "FIR_GBU12_P_1rnd_M";
						maxweight = 1200;
						UIposition[] = {0.33,0.25};
					};
					class pylons6: pylons5
					{
						hardpoints[] = {"FIR_MISC","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP"};
						UIposition[] = {0.33,0.3};
						mirroredMissilePos = 1;
					};
					class pylons7: pylons4
					{
						hardpoints[] = {"FIR_MISC","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP","FIR_A10_BOMB_2K_HP","FIR_A10C_BOMB_2K_HP"};
						UIposition[] = {0.33,0.35};
						mirroredMissilePos = 1;
					};
					class pylons8: pylons3
					{
						hardpoints[] = {"FIR_MISC","FIR_A10_MAV_HP","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP","FIR_A10_BOMB_2K_HP","FIR_A10C_BOMB_2K_HP"};
						UIposition[] = {0.34,0.45};
						mirroredMissilePos = 1;
					};
					class pylons9: pylons2
					{
						hardpoints[] = {"FIR_MISC","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP","FIR_A10_AUX_HP"};
						UIposition[] = {0.345,0.5};
						attachment = "FIR_Litening_std_P_1rnd_M";
						mirroredMissilePos = 1;
					};
					class pylons10: pylons1
					{
						hardpoints[] = {"FIR_MISC","FIR_A10C_AA_HP"};
						UIposition[] = {0.35,0.55};
						attachment = "FIR_AIM9L_P_2rnd_M";
						mirroredMissilePos = 1;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
		
		radartype = 4;
		lockdetectionsystem = 2 + 8 + 4;
		incommingmissliedetectionsystem = 16;

		maxSpeed = 706;
		armor = 300;
		armorStructured = 1;
		aileronSensitivity = 1; // 1.6
		elevatorSensitivity = 0.8; //0.6
		envelope[]=
		{
		// speed relative to max. speed -> lift (G)
		//      0.0 0.1 0.2 0.3 0.4 0.5 0.6 0.7 0.8 0.9 1.0 1.1 // rel. speed
		//	0.0,0.1,0.5,1.5,3.1,4.3,4.9,5,4.4,2.8,1.6,0.8,0  // lift
			0.0,0.1,0.65,2.2,3.7,5.3,6.0,5.5,5.6,4.8,3.6,1.8,0
		};
				
		irScanRangeMin = 10;
		irScanRangeMax = 20000;
		irScanToEyeFactor = 32;
		fuelCapacity = 1000;
		wheelSteeringSensitivity = 0.9;	
		
		airFriction0[] = {
				100, 50, 12
		};
		airFriction1[] = {
				100, 50, 12
		};
		airFriction2[] = {
				100, 50, 12
		};
		
		laserScanner = true;
		/*gunAimDown = -10;
		headaimdown = 0;*/
		memoryPointLRocket = "P Raketa";
		memoryPointRRocket = "L Raketa";
		/*memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";*/
		     
		cost = 10000000;
		type = "VAir";
		threat[] = {0.2, 0.7, 0.9};
		
		class camShakeGForce
		{
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
		};
		minGForce = 0.3;
		maxGForce = 10;
		gForceShakeAttenuation = 0.5;
		

		
        class pilotCamera                               /// camera for pilot to observe sling loading
        {
            class OpticsIn                              /// what is seen if player switches to optics
            {          
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -360;
						maxAngleX = 360;
						initAngleY = 0;
						minAngleY = -350;
						maxAngleY = 350;
						initFov = 0.7;
						minFov = 0.03;
						maxFov = 1.2;
						stabilizedInAxes = 0;
						directionStabilized = 0;
						horizontallyStabilized = 0;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
						stabilizedInAxes = 3;
						directionStabilized = 1;
						horizontallyStabilized = 1;
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						stabilizedInAxes = 3;
						directionStabilized = 1;
						horizontallyStabilized = 1;
					};
				showMiniMapInOptics                             = true; /// allows showing GPS mini map in optics
				showUAVViewpInOptics                    = false;        /// allows showing UAV feed in this optics
				showSlingLoadManagerInOptics    = false;                /// allows displaying of Sling Loading Assistant
            };
				usePiP=1;
            minTurn                 = -360;              //turn
            maxTurn                 = 360;               //turn
            initTurn                = 0;                //turn
            minElev                 = -90;              //turn
            maxElev                 = 90;               //turn
            initElev                = 0;                //turn
            maxXRotSpeed            = 1;                // movement speed
            maxYRotSpeed            = 1;                // movement speed
            pilotOpticsShowCursor   = 1;                //to show aimCursor (is useful to see plane direction)
            controllable            = true;     // set false to have static camera, true to have moving like a turret
        };
        memoryPointDriverOptics = "pip_pos_0";        /// what memory point is the origin of the camera		
		
			class RenderTargets
			{
				class LeftMirror
				{
					renderTarget = "rendertarget1";
					class CameraView1
					{
						pointPosition		= "pippos_1";
						pointDirection		= "pipdir_1";
						renderQuality 		= 0;
						renderVisionMode 	= 4;
						fov 			= 0.7;
					}; 			
				};		
				class MiddleMirror
				{
					renderTarget = "rendertarget2";
					class CameraView1
					{
						pointPosition		= "pippos_2";
						pointDirection		= "pipdir_2";
						renderQuality 		= 0;
						renderVisionMode 	= 4;
						fov 			= 0.7;
					}; 			
				};	
				class RightMirror
				{
					renderTarget = "rendertarget3";
					class CameraView1
					{
						pointPosition		= "pippos_3";
						pointDirection		= "pipdir_3";
						renderQuality 		= 0;
						renderVisionMode 	= 4;
						fov 			= 0.7;
					}; 			
				};			
				class TAD_VIEW
				{
					renderTarget = "rendertarget4";
					class CameraView1
					{
						pointPosition		= "tad_map_pos";
						pointDirection		= "tad_map_dir";
						renderQuality 		= 2;
						renderVisionMode 	= 0;
						fov 			= 0.2;
					}; 			
				};			
			/*	class TGP_VIEW
				{
					renderTarget = "rendertarget5";
					class CameraView1
					{
						pointPosition		= "pip_pos_0";
						pointDirection		= "pip_dir_0";
						renderQuality 		= 2;
						renderVisionMode 	= 0;
						fov 			= 0.7;
					}; 			
				};*/
			};				
				

		#include "UserSource.hpp"
		#include "UserAction.hpp"	
		#include "ACEUserAction.hpp"			
		class WingVortices 
		{
			class WingTipLeft 
			{
				effectName = "A10C_WingVortices";
				position = "cerveny pozicni";
			};
			
			class WingTipRight 
			{
				effectName = "A10C_WingVortices";
				position = "zeleny pozicni";
			};
			
			
		};

		class Exhausts 
		{
			class Exhaust1 
			{
				direction = "exu1_dir";
				effect = "ExhaustsEffectPlane";
				position = "exu1";
			};
			class Exhaust2
			{
				direction = "exu2_dir";
				effect = "ExhaustsEffectPlane";
				position = "exu2";
			};
		};

		class Reflectors
		{
			class Left 
			{
			ambient[] = {100, 100, 100, 0};
			color[] = {7000, 7500, 10000, 1};
			conefadecoef = 10;
			daylight = 0;
			direction = "light_1_dir";
			flaresize = 4;
			hitpoint = "L svetlo";
			innerangle = 20;
			intensity = 50;
			outerangle = 60;
			position = "light_1_pos";
			selection = "L svetlo";
			size = 1;
			useflare = 1;
				class Attenuation 
				{
					constant = 0;
					linear = 0;
					quadratic = 4;
					start = 1;
				};
			};
		};
		
		class MarkerLights 
		{
			class Red_Still_R 
			{
				name = "cerveny pozicni";
				color[] = {1, 0.1, 0.1, 1};
				ambient[] = {0.03, 0.003, 0.003, 1};
				brightness = 0.05;
				dayLight = true;
				blinking = true;
			};
			
			class Green_Still_L 
			{
				name = "zeleny pozicni";
				color[] = {0.1, 1, 0.1, 1};
				ambient[] = {0.003, 0.03, 0.003, 1};
				brightness = 0.05;
				blinking = true;
				dayLight = true;
			};
			class Red_Still_R2
			{
				name = "leftwing_light_pos";
				color[] = {1, 0.1, 0.1, 1};
				ambient[] = {0.03, 0.003, 0.003, 1};
				brightness = 0.05;
				blinking = true;
				dayLight = true;
			};
			
			class Green_Still_L2
			{
				name = "rightwing_light_pos";
				color[] = {0.1, 1, 0.1, 1};
				ambient[] = {0.003, 0.03, 0.003, 1};
				brightness = 0.05;
				blinking = true;
				dayLight = true;
			};
			class Red_Still_R3
			{
				name = "left_light_pos";
				color[] = {1, 0.1, 0.1, 1};
				ambient[] = {0.03, 0.003, 0.003, 1};
				brightness = 0.05;
				blinking = true;
				dayLight = true;
			};
			
			class Green_Still_L3
			{
				name = "right_light_pos";
				color[] = {0.03, 0.3, 0.03, 1};
				ambient[] = {0.003, 0.03, 0.003, 1};
				brightness = 0.05;
				blinking = true;
				dayLight = true;
			};

			class White_blink_C 
			{
				name = "bily pozicni blik";
				color[] = {0.8, 0.8, 0.8, 1};
				ambient[] = {0.03, 0.03, 0.03, 1};
				brightness = 0.05;
				blinking = true;
				dayLight = true;
			};
	
		};



		class eventhandlers
	    {
			Init = "[_this select 0] execVM ""\FIR_A10C\sqs\init\init.sqf"";";
			killed = "_this call BIS_Effects_EH_Killed;";
			fired = "harmfire = [_this] execVM ""\FIR_AirWeaponSystem_US\Script\init\FCS.sqf"";dsms = [_this] execVM ""\FIR_A10C\sqs\init\sms_display.sqf"";gau8_d = [_this] execVM ""\FIR_A10C\sqs\init\gau8_display.sqf"";";
        };
		

		class Damage 
		{
			tex[] = {};
			mat[] = {"FIR_A10C\data\body.rvmat", "FIR_A10C\data\body_damage.rvmat", "FIR_A10C\data\body_wreck.rvmat","FIR_A10C\data\wing.rvmat", "FIR_A10C\data\wing_damage.rvmat", "FIR_A10C\data\wing_wreck.rvmat","FIR_A10C\data\engine.rvmat", "FIR_A10C\data\engine_damage.rvmat", "FIR_A10C\data\engine_wreck.rvmat","FIR_A10C\win\alfa_ca.rvmat","FIR_A10C\win\alfa_ca_damage.rvmat","FIR_A10C\win\alfa_ca_damage.rvmat","FIR_A10C\win\reflective_glass2.rvmat","FIR_A10C\win\reflective_glass2_damage.rvmat","FIR_A10C\win\reflective_glass2_damage.rvmat"};
		};


		class Library 
		{
			libTextDesc = "USAF Mass-Production Attacker Aircraft";
		};

	};
	class bav_A10C : bav_A10C_Base
	{
		scope = 1;
		author = "Firewill";
		model = "\FIR_A10C\FIR_A10C";
		displayName = "A-10C Warthog";
		FIR_A10C_custom_skin = 0;
		hiddenselectionstextures[] = {"FIR_A10C\skin\body_in_co.paa","FIR_A10C\skin\wing_in_co.paa","FIR_A10C\skin\engine_in_co.paa"};
		editorPreview = "\FIR_A10C\ui\preview\pic_standard.paa";
		ades_aircraft = "FIR_A10C_ADES_Skin";

	};

	class bav_A10C_Blank : bav_A10C
	{
		scope = 2;
		author = "Firewill";
		model = "\FIR_A10C\FIR_A10C";
		displayName = "A-10C Warthog";
		FIR_A10C_custom_skin = 1;
		FIR_A10C_custom_name = "Blank";
		FIR_A10C_custom_code = "FIR_A10C_Blank";
		editorPreview = "\FIR_A10C\ui\preview\pic_blank.paa";
		hiddenselectionstextures[] = {"FIR_A10C\skin\body_blank_co.paa","FIR_A10C\skin\wing_blank_co.paa","FIR_A10C\skin\engine_blank_co.paa"};

	
	};

	class PlaneWreck;
	class FIR_A10C_Wreck: PlaneWreck 
	{
		scope = 1;
		class Armory {
			disabled = 1;
		};
		model = "\FIR_A10C\FIR_A10Cwreck.p3d";
		sections[]={"camo1","camo2","camo3"};     
		typicalCargo[] = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 1;
		class Eventhandlers {
		};
	};	
	

	class a10c_canopy : thingX 
	{
		mapSize = 0.78;
		author = "Firewill";
		displayName = "A10C Canopy";
		model = "\FIR_A10C\model\a10_canopy.p3d";
		_generalMacro = "thingX";
		scope = 1;
		simulation = "thingx";
		animated = false;
		reversed = false;
		nameSound = "";
		vehicleClass = "Objects";
		accuracy = 0.2;	// accuracy needed to recognize type of this target
		
		class DestructionEffects {};
	};
	
};


class CfgNonAIVehicles
 {
   class ProxyRetex;
   class ProxyFIR_A10Cwreck: ProxyRetex
   {
     hiddenSelections[] ={"camo1","camo2","camo3"};
	 model = "\FIR_A10C\FIR_A10Cwreck.p3d";
   };
 }; 