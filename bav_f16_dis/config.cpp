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
	class bav_F16_dis
	{
		units[] = {"FIR_F16C","FIR_F16C_ROKAF","FIR_F16C_Makos","FIR_F16C_Standard","FIR_F16C_Polish","FIR_F16C_TWAS","FIR_F16C_TWAS2","FIR_F16C_CFTTEST","FIR_F16C_Polish_CFT","FIR_F16C_HG","FIR_F16C_WP","FIR_F16C_Osan","FIR_F16C_Ag_arctic","FIR_F16C_Ag_flanker","FIR_F16C_Ag_lizard","FIR_F16C_ENEMY_TYPE_A","FIR_F16C_Blank","FIR_F16C_WW","FIR_F16C_ROKAF_B32","FIR_F16C_AV"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"FIR_AirWeaponSystem_US","A3_Air_F_Beta","FIR_F16_F"};
	};
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
	class FIR_F16_Base : Plane_Fighter_03_base_F
	{
		scope = 1;
	};
	class FIR_F16C : FIR_F16_Base
	{
		scope = 1;
	};
	class FIR_F16C_Standard : FIR_F16C
	{
		scope = 1;
	};
	class FIR_F16C_AV : FIR_F16C
	{
		scope = 1;
	};
	class FIR_F16C_ROKAF : FIR_F16C
	{
		scope = 1;
	};
	class FIR_F16C_ROKAF_B32 : FIR_F16C
	{
		scope = 1;
	};
	class FIR_F16C_WW : FIR_F16C
	{
		scope = 1;
	};
	class FIR_F16C_Polish : FIR_F16C
	{
		scope = 1;
	};
	class FIR_F16C_HG : FIR_F16C
	{
		scope = 1;
	};
	class FIR_F16C_WP : FIR_F16C
	{
		scope = 1;
	};
	class FIR_F16C_Osan : FIR_F16C
	{
		scope = 1;
	};
	class FIR_F16C_Makos : FIR_F16C
	{
		scope = 1;
	};
	class FIR_F16C_Blank : FIR_F16C
	{
		scope = 1;
	};
	class FIR_F16C_Ag_arctic : FIR_F16C
	{
		scope = 1;
	};
	class FIR_F16C_Ag_flanker : FIR_F16C
	{
		scope = 1;
	};
	class FIR_F16C_Ag_lizard : FIR_F16C
	{
		scope = 1;
	};
	class FIR_F16C_ENEMY_TYPE_A:FIR_F16C
	{
		scope = 1;
	};
	class FIR_F16C_CFTTEST : FIR_F16C
	{
		scope = 1;
	};

	class FIR_F16C_Polish_CFT : FIR_F16C_CFTTEST
	{
		scope = 1;
	};
};
