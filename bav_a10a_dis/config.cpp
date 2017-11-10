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
	class bav_A10A_dis
	{
		units[] = {"FIR_A10A","FIR_A10A_74fs","FIR_A10A_MD","FIR_A10A_47fs","FIR_A10A_Blank","FIR_A10A_Camo1","FIR_A10A_Camo2"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"FIR_AirWeaponSystem_US","A3_Air_F_Beta","FIR_A10A_F"};
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
	class Plane_CAS_01_base_F : Plane_Base_F{};
	class FIR_A10A_Base : Plane_CAS_01_base_F
	{
		scope = 1;
	};
		class FIR_A10A : FIR_A10A_Base
	{
		scope = 1;
	};
	class FIR_A10A_Standard : FIR_A10A
	{
		scope = 1;
	};	
	class FIR_A10A_74fs : FIR_A10A
	{
		scope = 1;
	};
	class FIR_A10A_47fs : FIR_A10A
	{
		scope = 1;
	};
	class FIR_A10A_MD : FIR_A10A
	{
		scope = 1;
	};
	class FIR_A10A_Blank : FIR_A10A
	{
		scope = 1;
	};
	class FIR_A10A_Camo1 : FIR_A10A
	{
		scope = 1;
	};
	class FIR_A10A_Camo2 : FIR_A10A
	{
		scope = 1;
	};
};
