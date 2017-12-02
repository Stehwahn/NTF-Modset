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
	class bav_F16D_F
	{
		units[] = {"FIR_F16D","FIR_F16D_WP","FIR_F16D_ROKAF","FIR_F16D_Standard","FIR_F16D_Blank","FIR_F16D_CFTTEST","FIR_F16D_Polish_CFT"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"FIR_AirWeaponSystem_US","A3_Air_F_Beta","FIR_F16D_F"};
	};
};

#include "CfgFX.hpp"
#include "gui.hpp"

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		FIR_F16D_Pilot = "FIR_F16D_Pilot";
	};
};
 
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class States
	{
		class pilot_plane_cas_01;
		class FIR_F16D_Pilot: pilot_plane_cas_01
		{
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};  
			file = "FIR_F16D\anim\FIR_F16_Pilot.rtm";
			interpolateTo[] = {KIA_FIR_F16D_Pilot,1};
			leaning = "empty";    
		};
		class KIA_FIR_F16D_Pilot : DefaultDie 
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = "false";
			terminal = true;
			file = "FIR_F16D\anim\FIR_F16_KIA_Pilot.rtm";
			connectTo[] = {"DeadState", 0.1};
		};
	};
};

class CfgFunctions
{
	class FIR
	{
		class FIR_F16D_Init_Function
		{
			class F16D_LoadAttribute
			{
				file = "\FIR_F16D\sqs\init\loadattribute.sqf";
			};
			class F16D_SaveAttribute
			{
				file = "\FIR_F16D\sqs\init\saveattribute.sqf";
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
		class FIR_F16D_PilotCombo: Title
		{
			attributeLoad = "[_this controlsGroupCtrl 100, _config] call FIR_fnc_F16D_LoadAttribute;";
			attributeSave = "[_this controlsGroupCtrl 100, _config] call FIR_fnc_F16D_SaveAttribute;";
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
						class type3
						{
							text = "Type 3(JHMCS)";
							data = "type3";
						};
						class type4
						{
							text = "Type 4(Scorpion HMCS)";
							data = "type4";
						};
					};
				};
			};
		};
	};
};
class SensorTemplatePassiveRadar;
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
	class Plane_Fighter_03_base_F : Plane_Base_F{};
	class bav_F16D_Base : Plane_Fighter_03_base_F
	{
		class SimpleObject
		{
			eden = 1;
	animate[] = {{"cft_hide",1},{"cft_backbone_hide",1},{"normalwing_hide",1},{"chutewing_hide",1},{"wing_standard_hide",0}};
			verticalOffset = 2.261;
			verticalOffsetWorld = -0.114;
		};		
		irTarget = 1;
		irTargetSize = 0.7;
		radarTarget = 1;
		radarTargetSize = 0.7;
		memoryPointGun = "kulomet";		
		selectionFireAnim = "zasleh";						/// what selection is hidden when machinegun doesn't shoot
		simulation="airplane";
		scope = 1;
		model = "\FIR_F16D\FIR_F16D";
		displayName = "F-16D Fighting Falcon";
		crew = "B_Pilot_F";
		icon = "\FIR_F16D\pic\icon.paa";
		picture = "\FIR_F16D\pic\f16pic.paa";
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
		driveraction = "FIR_F16D_Pilot";
		hiddenselections[]= {"camo1","camo2","camo3","insignia","name_1","name_2","name_3","name_4","name_5","name_6","name_7","name_8","name_9","name_10","rank_tag","roundel_L_t","roundel_L_b","roundel_R_t","roundel_R_b","decal_1","decal_2","decal_3","decal_4","Vertical_L","Vertical_R","num_1","num_2","num_3",	"cam_tracking","mfd_overlay","mfd_overlay2","mfd_tad","tad",
			"sms_1",
			"sms_2",
			"sms_3",
			"sms_4",
			"sms_5",
			"sms_6",
			"sms_7",
			"sms_8",
			"sms_9",		
			"kill_1_1",
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
			"kill_100_9",
			"ded_freq_1",
			"ded_freq_2",
			"ded_freq_3"};
		hiddenselectionstextures[] = {"FIR_F16D\skin\body_d_standard_co","FIR_F16D\skin\wing_WP_co.paa",""};	

		driverCanEject = false;
		showAllTargets = 2;
		
		AWS_RFD_FONT_TYPE = "f16_ded";	
		AWS_MFD_OVERLAY_TGP = "\FIR_F16\gauge\MFD_TGP.paa";
		//AWS_MFD_OVERLAY_MSSL = "\FIR_A10C\cockpit\mfd_tgp_ca.paa";
		AWS_MFD_OVERLAY_TAD = "\FIR_F16\gauge\MFD_HSD.paa";				
		
		acceleration = 300;
		driveoncomponent[] = {"gear_1", "gear_2", "gear_3"};
		
		LESH_canBeTowed = 1;
		LESH_towFromFront = 1;
		LESH_AxisOffsetTarget[] = {0,8,-2.43};
		LESH_WheelOffset[] = {0,-2};
		
		USAF_RefuelType = "probe";
		USAF_RefuelPoint = "refuel_probe";
		USAF_RefuelAnimation = "fuel_probe";		
		
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

		radartype = 4;
		lockdetectionsystem = 2 + 8 + 4;
		incommingmissliedetectionsystem = 16;

		maxSpeed = 2340;
		
		armor = 100;
		armorStructured = 1;
		envelope[] = {0.000000, 0.800000, 2.900000, 5, 7.800000, 9.300000, 9.500000, 9.800000, 8.200000, 5.600000, 3.200000, 2.600000, 2.100000, 1.700000, 1.400000,1.350000,1.300000,1.150000, 0};
			angleOfIndicence=0.052359872;
		draconicForceXCoef = 4.5;
		draconicForceYCoef = 6.5;
		draconicForceZCoef = 8.5;
		draconicTorqueXCoef = 2.5;
		draconicTorqueYCoef = 3.0;			
				
		irScanRangeMin = 10;
		irScanRangeMax = 30000;
		irScanToEyeFactor = 32;
		fuelCapacity = 1000;
		aileronSensitivity = 0.9;
		elevatorSensitivity = 1.1;	
		/*aileronSensitivity = 1.7;
		elevatorSensitivity = 1.4;	*/
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
		
		
		weapons[] = {"FIR_MasterArm","FIR_M61A2","FIR_CMLauncher"};
		magazines[] = {"FIR_M61A2_511rnd_M","FIR_240rnd_CMFlare_Chaff_Magazine"};
	soundSetSonicBoom[] = {"Plane_Fighter_SonicBoom_SoundSet"};		
	class Components: Components
		{
			class SensorsManagerComponent 
			{
			class Components {
				class IRSensorComponent: SensorTemplateIR {
					class AirTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					angleRangeHorizontal = 360;
					angleRangeVertical = 90;
					maxTrackableSpeed = 400;
					componentType = "IRSensorComponent";
					typeRecognitionDistance = 2000;
					maxFogSeeThrough = 0.995;
					color[] = {1, 0, 0, 1};
					allowsMarking = 1;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					animDirection = "";
					aimDown = 0;
					minTrackableSpeed = -1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
				};
				class VisualSensorComponent: SensorTemplateVisual {
					class AirTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					angleRangeHorizontal = 26;
					angleRangeVertical = 20;
					maxTrackableSpeed = 100;
					aimDown = 0;
					animDirection = "pipturret";
					componentType = "VisualSensorComponent";
					nightRangeCoef = 0;
					maxFogSeeThrough = 0.94;
					color[] = {1, 1, 0.5, 0.8};
					typeRecognitionDistance = 2000;
					allowsMarking = 1;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					minTrackableSpeed = -1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
				};
				class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {
					componentType = "PassiveRadarSensorComponent";
					class AirTarget {
						minRange = 45000;
						maxRange = 45000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget {
						minRange = 20000;
						maxRange = 20000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					typeRecognitionDistance = 12000;
					angleRangeHorizontal = 360;
					angleRangeVertical = 360;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					animDirection = "";
					aimDown = 0;
					color[] = {0.5, 1, 0.5, 0.5};
					minTrackableSpeed = -1e+010;
					maxTrackableSpeed = 1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
					allowsMarking = 0;
				};
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
					class AirTarget {
						minRange = 30000;
						maxRange = 30000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget {
						minRange = 8000;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					typeRecognitionDistance = 8000;
					angleRangeHorizontal = 45;
					angleRangeVertical = 45;
					groundNoiseDistanceCoef = 0.2;
					componentType = "ActiveRadarSensorComponent";
					maxGroundNoiseDistance = 200;
					minSpeedThreshold = 30;
					maxSpeedThreshold = 40;
					color[] = {0, 1, 1, 1};
					allowsMarking = 1;
					animDirection = "";
					aimDown = 0;
					minTrackableSpeed = -1e+010;
					maxTrackableSpeed = 1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
				};
				class LaserSensorComponent: SensorTemplateLaser {
					componentType = "LaserSensorComponent";
					class AirTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					angleRangeHorizontal = 180;
					angleRangeVertical = 180;
					typeRecognitionDistance = 0;
					color[] = {1, 1, 1, 0};
					allowsMarking = 1;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					animDirection = "";
					aimDown = 0;
					minTrackableSpeed = -1e+010;
					maxTrackableSpeed = 1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
				};
				class NVSensorComponent: SensorTemplateNV {
					componentType = "NVSensorComponent";
					color[] = {1, 1, 1, 0};
					typeRecognitionDistance = 0;
					class AirTarget {
						minRange = 8000;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget {
						minRange = 8000;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					angleRangeHorizontal = 90;
					angleRangeVertical = 90;
					allowsMarking = 1;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					animDirection = "";
					aimDown = 0;
					minTrackableSpeed = -1e+010;
					maxTrackableSpeed = 1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
				};
			};
		};				
			class TransportPylonsComponent
			{
				UIPicture = "\FIR_F16\UI\f16_dynamic_ca.paa";
				class Presets 
				{
					class Empty 
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class CAP 
					{
						displayName = "CAP";
						attachment[] = {"FIR_AIM120_P_1rnd_M", "FIR_AIM9X_P_1rnd_M", "FIR_AIM120_P_1rnd_M", "FIR_F16C_Fueltank_P_1rnd_M","FIR_F16C_center_Fueltank_P_1rnd_M","FIR_Empty_P_1rnd_M","FIR_F16C_Fueltank_P_1rnd_M","FIR_AIM120_P_1rnd_M","FIR_AIM9X_P_1rnd_M","FIR_AIM120_P_1rnd_M"};
					};
					class CAS_1 
					{
						displayName = "CAS 1";
						attachment[] = {"FIR_AIM120_P_1rnd_M", "FIR_AIM9X_P_1rnd_M", "FIR_GBU31_P_1rnd_M", "FIR_F16C_Fueltank_P_1rnd_M","FIR_F16C_center_Fueltank_P_1rnd_M","FIR_LantirnPod_P_1rnd_M","FIR_F16C_Fueltank_P_1rnd_M","FIR_GBU31_P_1rnd_M","FIR_AIM9X_P_1rnd_M","FIR_AIM120_P_1rnd_M"};
					};
					class CAS_2
					{
						displayName = "CAS 2";
						attachment[] = {"FIR_AIM120_P_1rnd_M", "FIR_AIM9X_P_1rnd_M", "FIR_AGM65D_P_3rnd_M", "FIR_Mk82_snakeye_P_3rnd_M","FIR_ECMPod_P_1rnd_M","FIR_LantirnPod_P_1rnd_M","FIR_Mk82_snakeye_P_3rnd_M","FIR_Hydra_P_21rnd_M","FIR_AIM9X_P_1rnd_M","FIR_AIM120_P_1rnd_M"};
					};
					class SEAD
					{
						displayName = "SEAD";
						attachment[] = {"FIR_AIM120_P_1rnd_M", "FIR_AIM9X_P_1rnd_M", "FIR_AGM88_P_1rnd_M", "FIR_F16C_Fueltank_P_1rnd_M","FIR_ALQ184_1_P_1rnd_M","FIR_SniperXR_HTS_P_1rnd_M","FIR_F16C_Fueltank_P_1rnd_M","FIR_AGM88_P_1rnd_M","FIR_AIM9X_P_1rnd_M","FIR_AIM120_P_1rnd_M"};
					};
					class Scramble
					{
						displayName = "Scramble";
						attachment[] = {"FIR_AIM9X_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_Empty_P_1rnd_M","FIR_F16C_center_Fueltank_P_1rnd_M","FIR_Empty_P_1rnd_M","FIR_Empty_P_1rnd_M","FIR_Empty_P_1rnd_M","FIR_Empty_P_1rnd_M","FIR_AIM9X_P_1rnd_M"};
					};
				};					
				class pylons
				{
					class pylons1
					{
						hardpoints[] = {"FIR_F16_AA_HP","FIR_MISC"};
						attachment = "FIR_AIM120_P_1rnd_M";
						priority = 5;
						maxweight = 300;
						UIposition[] = {0.35,0.0};
					};
					class pylons2: pylons1
					{
						hardpoints[] = {"FIR_F16_AA_HP","FIR_MISC"};
						priority = 4;
						attachment = "FIR_AIM9X_P_1rnd_M";
						maxweight = 500;
						UIposition[] = {0.345,0.05};
					};
					class pylons3: pylons1
					{
						hardpoints[] = {"FIR_F16_Combined_HP","FIR_MISC"};
						priority = 3;
						attachment = "FIR_AIM120_P_1rnd_M";
						maxweight = 1050;
						UIposition[] = {0.34,0.1};
					};
					class pylons4: pylons1
					{
						hardpoints[] = {"FIR_F16_AG_HP","FIR_MISC"};
						priority = 2;
						attachment = "FIR_F16C_Fueltank_P_1rnd_M";
						maxweight = 1200;
						UIposition[] = {0.33,0.2};
					};
					class pylons5: pylons1
					{
						hardpoints[] = {"FIR_F16_Under_HP","FIR_MISC"};
						priority = 1;
						attachment = "FIR_F16C_center_Fueltank_P_1rnd_M";
						maxweight = 1200;
						UIposition[] = {0.33,0.25};
					};
					class pylons6: pylons1
					{
						hardpoints[] = {"FIR_F16_Aux_HP","FIR_MISC"};
						UIposition[] = {0.33,0.3};
						attachment = "FIR_Empty_P_1rnd_M";
					};
					class pylons7: pylons4
					{
						UIposition[] = {0.33,0.35};
						mirroredMissilePos = 1;
					};
					class pylons8: pylons3
					{
						UIposition[] = {0.33,0.40};
						mirroredMissilePos = 1;
					};
					class pylons9: pylons2
					{
						UIposition[] = {0.34,0.45};
						mirroredMissilePos = 1;
					};
					class pylons10: pylons1
					{
						UIposition[] = {0.345,0.5};
						mirroredMissilePos = 1;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				defaultDisplay = "EmptyDisplay";
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
						range[] = {2000,4000,8000,16000,30000};
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
						range[] = {2000,4000,8000,16000,30000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};	

		
		class NewTurret;
		class Turrets 
		{
			class MainTurret: NewTurret
			{
				commanding = -1;
				isCopilot = 1;
				gunnerName = "Instructor";
				primaryGunner = 0;
				primaryObserver=1;
				proxyIndex=1;
				CanEject = true;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerAction="FIR_F16D_Pilot";
				gunnerInAction="FIR_F16D_Pilot";
				gunnerLeftHandAnimName = "throttle_r";  
				gunnerRightHandAnimName = "stick_r";  
				gunnerleftleganimname = "pedal_r";
				gunnerrightleganimname = "pedal_r";
				maxHorizontalRotSpeed = 8.2;
				maxVerticalRotSpeed = 8.2;
				stabilizedInAxes = 0;
				startEngine = 0;
				body = "main1turret";
				gun = "main1gun";
				animationSourceBody = "mainturret";
				animationSourceGun = "maingun";
				minElev = -90;
				maxElev = 15.0;
				initElev = -45;
				minTurn = -350;
				maxTurn = 350;
				initTurn = 0;
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				gunBeg = "ustihlavne1";
				gunEnd = "konechlavne1";		
				memoryPointGunnerOptics = "ustihlavne1";
				selectionFireAnim = "";
				turretInfoType = "RscOptics_UAV_gunner";
				turretFollowFreeLook = false;
				gunnerForceOptics = 0;
				weapons[] = {};
				magazines[] = {};
				class OpticsIn
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
						directionStabilized = 0;
						horizontallyStabilized = 0;
						stabilizedInAxes = 3;
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
						directionStabilized = 1;
						horizontallyStabilized = 1;
						stabilizedInAxes = 3;
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						directionStabilized = 1;
						horizontallyStabilized = 1;
						stabilizedInAxes = 3;
					};
				};
				class OpticsOut
				{
					class ViewGunner
					{
						initFov = 1;
						minFov = 0.6;
						maxFov = 0.85;
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 85;
						initAngleY = 0;
						minAngleY = -130;
						maxAngleY = 130;
						minMoveX = -0.2;
						maxMoveX = 0.2;
						minMoveY = -0.025;
						maxMoveY = 0.1;
						minMoveZ = -0.2;
						maxMoveZ = 0.2;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
						stabilizedInAxes = 0;
					};
				};
			};
		};			
		
		class RenderTargets
 		{
 			class nvhud
 			{
 				renderTarget = "rendertarget0";
 				class CameraView1
 				{
 					pointPosition		= "war_pos";
 					pointDirection		= "war_end";
 					renderQuality 		= 2;
 					renderVisionMode 	= 1;
 					fov 			= 0.5;
 				}; 			
 			};			
 			class MFD_Flir_Rear
 			{
 				renderTarget = "rendertarget2";
 				class CameraView1
 				{
 					pointPosition		= "konechlavne1";
 					pointDirection		= "ustihlavne1";
 					renderQuality 		= 2;
 					renderVisionMode 	= 2;
 					fov 			= 0.7;
 				}; 			
 			};	
 			class MFD_NAV_Rear
 			{
 				renderTarget = "rendertarget3";
 				class CameraView1
 				{
 					pointPosition		= "war_pos";
 					pointDirection		= "war_end";
 					renderQuality 		= 2;
 					renderVisionMode 	= 1;
 					fov 			= 0.5;
 				}; 			
 			};	
 		};
		
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

		#include "cfg_HUD_HMCS_Kimi_F16C.hpp"
		#include "UserSource.hpp"
		#include "UserAction.hpp"
		#include "ACEUserAction.hpp"
		class WingVortices 
		{
			class WingTipLeft 
			{
				effectName = "F16_WingVortices";
				position = "cerveny pozicni";
			};
			
			class WingTipRight 
			{
				effectName = "F16_WingVortices";
				position = "zeleny pozicni";
			};
			
			class BodyLeft_inner 
			{
				effectName = "F16_BodyVortices";
				position = "body_vapour_L_S";
			};
			
			class BodyRight_inner 
			{
				effectName = "F16_BodyVortices";
				position = "body_vapour_R_S";
			};
			class BodyLeft_outer 
			{
				effectName = "F16_BodyVortices";
				position = "body_vapour_L_E";
			};
			
			class BodyRight_outer 
			{
				effectName = "F16_BodyVortices";
				position = "body_vapour_R_E";
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
			Init = "[_this select 0] execVM ""\FIR_F16D\sqs\init\init.sqf"";";
			killed = "_this call BIS_Effects_EH_Killed;";
			fired = "harmfire = [_this] execVM ""\FIR_AirWeaponSystem_US\Script\init\FCS.sqf"";harmfire = [_this] execVM ""\FIR_F16D\sqs\init\sms_display.sqf"";";
        };
		
		
		class Attributes 
		{

		};		

		class Damage 
		{
			tex[] = {};
			mat[] = {"FIR_F16D\Tex\body.rvmat", "FIR_F16D\Tex\body_damage.rvmat", "FIR_F16D\Tex\body_destruct.rvmat","FIR_F16D\Tex\wing.rvmat", "FIR_F16D\Tex\wing_damage.rvmat", "FIR_F16D\Tex\wing_destruct.rvmat","FIR_F16D\win\alfa_ca.rvmat","FIR_F16D\win\alfa_ca_damage.rvmat","FIR_F16D\win\alfa_ca_damage.rvmat","FIR_F16D\win\reflective_glass2.rvmat","FIR_F16D\win\reflective_glass2_damage.rvmat","FIR_F16D\win\reflective_glass2_damage.rvmat"};
		};

		class Library 
		{
			libTextDesc = "USAF Mass-Production Fighter Aircraft";
		};

	};

	class bav_F16D : bav_F16D_Base
	{
		scope = 2;
		author = "Firewill";
		model = "\FIR_F16D\FIR_F16D";
		displayName = "F-16D Fighting Falcon";
		fir_f16d_custom_skin = 0;
		/*fir_f16_custom_name = "Standard";
		fir_f16_custom_code = "FIR_F16C";
		fir_f16_custom_preview_pic = "\FIR_F16\ui\preview\pic_usaf.paa";*/
		hiddenselectionstextures[] = {"FIR_F16D\skin\body_d_standard_co","FIR_F16D\skin\wing_WP_co.paa"};	
		
		ades_aircraft = "FIR_F16D_ADES_Skin";	
		fir_f16_engine = "GE"; /*GE = F110-GE-129 Model / PW = F100-PW-229 Model*/
		fir_f16_aux = "iff_n";/*iff_n = no iff / iff = iff*/
		fir_f16_hud = "war";		/*war = WAR:Wide Angle Raster Hud for Blk4x / std = Standard HUD for Others*/
		fir_f16_vwt = "standard"; /* standard = standard vertical wing / dragchute = vertical wing with drag chute */
		editorPreview = "\FIR_F16D\ui\preview\pic_usaf.paa";
	};
	class bav_F16D_WP : bav_F16D
	{
		scope = 2;
		author = "Firewill";
		model = "\FIR_F16D\FIR_F16D";
		displayName = "F-16D (Wolfpack)";
		fir_f16d_custom_skin = 1;
		fir_f16d_custom_name = "Wolfpack";
		fir_f16d_custom_code = "FIR_F16D_WP";
		fir_f16d_custom_preview_pic = "\FIR_F16D\ui\preview\pic_wp.paa";
		hiddenselectionstextures[] = {"FIR_F16D\skin\body_d_co.paa","FIR_F16D\skin\wing_WP_co.paa"};	
	
		fir_f16_engine = "GE"; /*GE = F110-GE-129 Model / PW = F100-PW-229 Model*/
		fir_f16_aux = "iff_n";/*iff_n = no iff / iff = iff*/
		fir_f16_hud = "war";		/*war = WAR:Wide Angle Raster Hud for Blk4x / std = Standard HUD for Others*/
		fir_f16_vwt = "standard"; /* standard = standard vertical wing / dragchute = vertical wing with drag chute */
		editorPreview = "\FIR_F16D\ui\preview\pic_wp.paa";
	};
	class bav_F16D_Blank : bav_F16D
	{
		scope = 2;
		author = "Firewill";
		model = "\FIR_F16D\FIR_F16D";
		displayName = "F-16D (Blank)";
		fir_f16d_custom_skin = 1;
		fir_f16d_custom_name = "Blank";
		fir_f16d_custom_code = "FIR_F16D_Blank";
		fir_f16d_custom_preview_pic = "\FIR_F16D\ui\preview\pic_blank.paa";
		hiddenselectionstextures[] = {"FIR_F16D\skin\body_blank_d_co.paa","FIR_F16D\skin\wing_blank_co.paa"};	
	
		fir_f16_engine = "GE"; /*GE = F110-GE-129 Model / PW = F100-PW-229 Model*/
		fir_f16_aux = "iff_n";/*iff_n = no iff / iff = iff*/
		fir_f16_hud = "war";		/*war = WAR:Wide Angle Raster Hud for Blk4x / std = Standard HUD for Others*/
		fir_f16_vwt = "standard"; /* standard = standard vertical wing / dragchute = vertical wing with drag chute */
		editorPreview = "\FIR_F16D\ui\preview\pic_blank.paa";
	};
	class bav_F16D_Standard : bav_F16D
	{
		scope = 1;
		author = "Firewill";
		displayName = "F-16D Fighting Falcon";
		fir_f16d_custom_skin = 1;
		fir_f16d_custom_name = "Standard";
		fir_f16d_custom_code = "FIR_F16D_Standard";
		fir_f16d_custom_preview_pic = "\FIR_F16D\ui\preview\pic_usaf.paa";
		hiddenselectionstextures[] = {"FIR_F16D\skin\body_d_standard_co","FIR_F16D\skin\wing_WP_co.paa"};	
	};
	class bav_F16D_ROKAF : bav_F16D
	{
		scope = 2;
		author = "Firewill";
		displayName = "F-16D (ROKAF)";
		fir_f16d_custom_skin = 1;
		fir_f16d_custom_name = "ROKAF";
		fir_f16d_custom_code = "FIR_F16D_ROKAF";
		fir_f16d_custom_preview_pic = "\FIR_F16D\ui\preview\pic_rokaf.paa";
		hiddenselectionstextures[] = {"FIR_F16D\skin\body_rokaf_d_co.paa","FIR_F16D\skin\wing_rokaf_co.paa"};
		

		fir_f16_engine = "PW";
		fir_f16_aux = "iff";
		fir_f16_hud = "std";	
		fir_f16_vwt = "standard";	
		editorPreview = "\FIR_F16D\ui\preview\pic_rokaf.paa";		
	};
	class bav_F16D_CFTTEST : bav_F16D
	{
		scope = 2;
		author = "Firewill";
		displayName = "F-16D (CFT TEST)";
		fir_f16d_cft_custom_skin = 1;
		fir_f16d_custom_name = "D CFT TEST";
		fir_f16d_custom_code = "FIR_F16D_CFTTEST";
		fir_f16d_custom_preview_pic = "\FIR_F16D\ui\preview\pic_blank_cft.paa";
		hiddenselectionstextures[] = {"FIR_F16D\skin\body_blank_d_co.paa","FIR_F16D\skin\wing_blank_co.paa","FIR_F16D\skin\cft_blank_co.paa"};	
		
		ades_aircraft = "FIR_F16D_CFT_ADES_Skin";	
		fir_f16_engine = "GE";
		fir_f16_aux = "iff_n";
		fir_f16_hud = "std";	
		fir_f16_vwt = "standard";	
		fir_f16d_cft = "cft_normal"; /*cft_normal = cft and normal wing - standard / cft_chute = cft and chute wing / cft_no_normal = normal wing without cft / cft_no_chute = chute wing without cft */
		editorPreview = "\FIR_F16D\ui\preview\pic_blank_cft.paa";		
	};
	class bav_F16D_Polish_CFT : bav_F16D_CFTTEST
	{
		scope = 2;
		author = "Firewill";
		displayName = "F-16D Block 52+(Polish w/CFT)";
		fir_f16d_cft_custom_skin = 1;
		fir_f16d_custom_name = "Polish w/ CFT";
		fir_f16d_custom_code = "FIR_F16D_Polish_CFT";
		fir_f16d_custom_preview_pic = "\FIR_F16D\ui\preview\pic_polish_cft.paa";
		hiddenselectionstextures[] = {"FIR_F16D\skin\body_paf_co.paa","FIR_F16D\skin\wing_paf_co.paa","FIR_F16D\skin\cft_paf_co.paa"};	
		

		fir_f16_engine = "PW";
		fir_f16_aux = "iff";
		fir_f16_hud = "std";	
		fir_f16_vwt = "standard";	
		fir_f16d_cft = "cft_chute"; /*cft_normal = cft and normal wing - standard / cft_chute = cft and chute wing / cft_no_normal = normal wing without cft / cft_no_chute = chute wing without cft */
		editorPreview = "\FIR_F16D\ui\preview\pic_polish_cft.paa";	
	};
	class PlaneWreck;
	class FIR_F16DWreck: PlaneWreck 
	{
		scope = 1;
		class Armory {
			disabled = 1;
		};
		model = "\FIR_F16D\FIR_F16Dwreck.p3d";
		typicalCargo[] = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 1;
		class Eventhandlers {
		};
	};
	class f16d_canopy : thingX 
	{
		mapSize = 0.78;
		author = "Firewill";
		displayName = "F16d Canopy";
		model = "\FIR_F16d\model\f16_canopy.p3d";
		_generalMacro = "thingX";
		scope = protected;
		simulation = "thingx";
		animated = false;
		reversed = false;
		nameSound = "";
		vehicleClass = "Objects";
		accuracy = 0.2;	// accuracy needed to recognize type of this target
		
		class DestructionEffects {};
	};
};


