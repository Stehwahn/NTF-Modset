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
	class bav_F16D_dis
	{
		units[] = {"FIR_F16D","FIR_F16D_WP","FIR_F16D_ROKAF","FIR_F16D_Standard","FIR_F16D_Blank","FIR_F16D_CFTTEST","FIR_F16D_Polish_CFT"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"FIR_AirWeaponSystem_US","A3_Air_F_Beta","FIR_F16D_F"};
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
	class FIR_F16D_Base : Plane_Fighter_03_base_F
	{
		scope = 1;
	};
	class FIR_F16D : FIR_F16D_Base
	{
		scope = 1;
	};
	class FIR_F16D_WP : FIR_F16D
	{
		scope = 1;
	};
	class FIR_F16D_Blank : FIR_F16D
	{
		scope = 1;
	};
	class FIR_F16D_Standard : FIR_F16D
	{
		scope = 1;
	};
	class FIR_F16D_ROKAF : FIR_F16D
	{
		scope = 1;
	};
	class FIR_F16D_CFTTEST : FIR_F16D
	{
		scope = 1;
	};
	class FIR_F16D_Polish_CFT : FIR_F16D_CFTTEST
	{
		scope = 1;
	};
};


