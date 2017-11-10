class MFD
{
	class HUD_1_Common
	{
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft=0.12;
		borderRight=0.12;
		borderTop=0.05;
		borderBottom=0.15;
		#include "cfg_HUD_Wipe_Color.hpp"
		enableParallax=1;
		class Bones
		{
			class Velocity
			{
				type="vector";
				source="velocity";
				pos0[]={0.5,0.32};
				pos10[]={0.8,0.62};
			};
			class ForwardVec
			{
				type = "vector";
				source = "forward";
				pos0[] = {0.0,0.0};
				//pos10[] = {"0.253 + 0.0","0.253 + 0.0"};
				pos10[] = {0.0,0.0};
			};
			class ILS_H
			{
				type = "ils";
				pos0[] = {0.5,0.32};
				pos3[] = {0.7,0.32};
			};
			class ILS_W: ILS_H
			{
				pos3[] = {0.5,0.53};
			};
			class Level0
			{
				type="horizon";
				pos0[]={0.50,0.32};
				pos10[]={1.5,1.32};
				angle=0;
			};
			class LevelP5: Level0
			{
				angle=5;
			};
			class LevelM5: Level0
			{
				angle=-5;
			};
			class LevelP10: Level0
			{
				angle=10;
			};
			class LevelM10: Level0
			{
				angle=-10;
			};
			class LevelP15: Level0
			{
				angle=15;
			};
			class LevelM15: Level0
			{
				angle=-15;
			};
			class LevelP20: Level0
			{
				angle=20;
			};
			class LevelM20: Level0
			{
				angle=-20;
			};
			class LevelP25: Level0
			{
				angle=25;
			};
			class LevelM25: Level0
			{
				angle=-25;
			};
			class LevelP30: Level0
			{
				angle=30;
			};
			class LevelM30: Level0
			{
				angle=-30;
			};
			class LevelP35: Level0
			{
				angle=35;
			};
			class LevelM35: Level0
			{
				angle=-35;
			};
			class LevelP40: Level0
			{
				angle=40;
			};
			class LevelM40: Level0
			{
				angle=-40;
			};
			class LevelP45: Level0
			{
				angle=45;
			};
			class LevelM45: Level0
			{
				angle=-45;
			};
			class LevelP50: Level0
			{
				angle=50;
			};
			class LevelM50: Level0
			{
				angle=-50;
			};
			class LevelP55: Level0
			{
				angle=55;
			};
			class LevelM55: Level0
			{
				angle=-55;
			};
			class LevelP60: Level0
			{
				angle=60;
			};
			class LevelM60: Level0
			{
				angle=-60;
			};
			class LevelP65: Level0
			{
				angle=65;
			};
			class LevelM65: Level0
			{
				angle=-65;
			};
			class LevelP70: Level0
			{
				angle=70;
			};
			class LevelM70: Level0
			{
				angle=-70;
			};
			class LevelP75: Level0
			{
				angle=75;
			};
			class LevelM75: Level0
			{
				angle=-75;
			};
			class LevelP80: Level0
			{
				angle=80;
			};
			class LevelM80: Level0
			{
				angle=-80;
			};
			class LevelP85: Level0
			{
				angle=85;
			};
			class LevelM85: Level0
			{
				angle=-85;
			};
			class LevelP90: Level0
			{
				angle=90;
			};
		};
		class Draw
		{
			#include "cfg_HUD_Wipe_Color.hpp"
			alpha=0.9;
			clipTL[]={0,0};
			clipBR[]={1,1};
			condition="on";
			#include "cfg_HUD_Wipe_Horizon.hpp"
			#include "cfg_HUD_Wipe_Common.hpp"
		};
	};
	class HUD_2_Metric
	{
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft=0.12;
		borderRight=0.12;
		borderTop=0.05;
		borderBottom=0.15;
		#include "cfg_HUD_Wipe_Color.hpp"
		enableParallax=1;
		class Bones
		{
			class RadarAltitudeBone
			{
				type="linear";
				source="altitudeAGL";
				sourceScale=1; // meters
				//hideValue=1500;
				min=0;
				max=500;
				minPos[]={0.71,0.40};
				maxPos[]={0.71,0.60};
			};
			class VspeedBone
			{
				type="linear";
				source="vspeed";
				sourceScale=1; // m/s
				min=-50;
				max=50;
				minPos[]={0.94,0.40};
				maxPos[]={0.94,0.60};
			};
			class ForwardVec
			{
				type = "vector";
				source = "forward";
				pos0[] = {0.0,0.0};
				pos10[] = {0.0,0.0};
			};
		};
		class Draw
		{
			#include "cfg_HUD_Wipe_Color.hpp"
			alpha=0.9;
			clipTL[]={0,0};
			clipBR[]={1,1};
			condition="on";
			#include "cfg_HUD_Wipe_Units_Metric_HUD.hpp"
		};
	};
	class HUD_3_Weapons
	{
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft = 0.12;
		borderRight = 0.12;
		borderTop = 0.05;
		borderBottom = 0.15;
		#include "cfg_HUD_Wipe_Color.hpp"
		enableParallax = 1;
		class Bones
		{
			class ForwardVec
			{
				type = "vector";
				source = "forward";
				pos0[] = {0,0};
				pos10[] = {0,0};
			};
			class RangeBone
			{
				type = "linear";
				source = "targetDist";
				sourceScale = 1;
				min = 0;
				max = 12000;
				minPos[] = {0.08,0.4};
				maxPos[] = {0.08,0.6};
			};
			class RadarContact
			{
				type = "fixed";
				pos[] = {0,0};
			};
			class WeaponAimGUN
			{
				type = "vector";
				source = "weapon";
				pos0[] = {0.5,0.32};
				pos10[] = {" 0.5 + 0.253 "," 0.32 + 0.253 "};
			};
			class WeaponAimROCKET
			{
				type = "vector";
				source = "weapon";
				pos0[] = {0.5,0.39};
				pos10[] = {" 0.5 + 0.253 "," 0.390 + 0.253 "};
			};
			class TargetSelected
			{
				type = "vector";
				source = "target";
				pos0[] = {0.5,0.50};
				pos10[]={"0.50 + 0.43500","0.50 + 0.43500"};
			};
		};
		class Draw
		{
			#include "cfg_HUD_Wipe_Color.hpp"
			alpha = 0.9;
			clipTL[] = {0,0};
			clipBR[] = {1,1};
			condition = "on";
			class WeaponName
			{
				type = "text";
				source = "weapon";
				sourceScale = 1;
				align = "left";
				scale = 1;
				pos[] = {{ "0.15 + 0.1",0.85 },1};
				right[] = {{ "0.19 + 0.1",0.85 },1};
				down[] = {{ "0.15 + 0.1",0.89 },1};
			};
			class GUN_group
			{
				condition = "mgun";
				type = "group";
				class AmmoCount
				{
					type = "text";
					source = "ammo";
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{ "0.15 + 0.1",0.89 },1};
					right[] = {{ "0.19 + 0.1",0.89 },1};
					down[] = {{ "0.15 + 0.1",0.93 },1};
				};
				class RangeText
				{
					type = "text";
					source = "static";
					text = "RNG/";
					align = "left";
					scale = 1;
					pos[] = {{ "0.15 + 0.1",0.76 },1};
					right[] = {{ "0.19 + 0.1",0.76 },1};
					down[] = {{ "0.15 + 0.1",0.8 },1};
				};
				class RangeNumber
				{
					type = "text";
					source = "targetDist";
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{ "0.15 + 0.1",0.8 },1};
					right[] = {{ "0.19 + 0.1",0.8 },1};
					down[] = {{ "0.15 + 0.1",0.84 },1};
				};
				/*class radar_tgts_GUN
				{
					type = "radar";
					#include "cfg_HUD_Wipe_pos010_HUD.hpp"
					width = 2.5;
					points[] = {{ "ForwardVec",1,"RadarContact",{ -0.02,-0.02 },1 },{ "ForwardVec",1,"RadarContact",{ 0.02,-0.02 },1 },{ "ForwardVec",1,"RadarContact",{ 0.02,0.02 },1 },{ "ForwardVec",1,"RadarContact",{ -0.02,0.02 },1 },{ "ForwardVec",1,"RadarContact",{ -0.02,-0.02 },1 }};
				};
				class Target_selected_GUN
				{
					type = "line";
					width = 4;
					points[] = {{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.03 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.025 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.02 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.015 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.01 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.005 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,0 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0,0.03 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,0.025 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0,0.02 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,0.015 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0,0.01 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,0.005 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ -0.03,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ -0.025,0 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ -0.02,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ -0.015,0 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ -0.01,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ -0.005,0 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0.03,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0.025,0 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0.02,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0.015,0 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0.01,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0.005,0 },1 },{  }};
				};
				class CCIP_circle_GUN
				{
					type = "line";
					width = 5;
					points[] = {{ "ForwardVec",1,"WeaponAimGUN",1,{ "-1.2000 * 0.06","-0.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-1.0000 * 0.06","-0.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.9877 * 0.06","-0.1736 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.9397 * 0.06","-0.3420 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.8660 * 0.06","-0.5000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.7660 * 0.06","-0.6428 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.6428 * 0.06","-0.7660 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.5000 * 0.06","-0.8660 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.3420 * 0.06","-0.9397 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.1736 * 0.06","-0.9877 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.0000 * 0.06","-1.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.1736 * 0.06","-0.9877 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.3420 * 0.06","-0.9397 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.5000 * 0.06","-0.8660 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.6428 * 0.06","-0.7660 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.7660 * 0.06","-0.6428 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.8660 * 0.06","-0.5000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.9397 * 0.06","-0.3420 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.9877 * 0.06","-0.1736 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "1.0000 * 0.06","-0.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "1.2000 * 0.06","-0.0000 * 0.06" },1 },{  },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-1.2000 * 0.06","0.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-1.0000 * 0.06","0.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.9877 * 0.06","0.1736 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.9397 * 0.06","0.3420 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.8660 * 0.06","0.5000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.7660 * 0.06","0.6428 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.6428 * 0.06","0.7660 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.5000 * 0.06","0.8660 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.3420 * 0.06","0.9397 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.1736 * 0.06","0.9877 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.0000 * 0.06","1.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.1736 * 0.06","0.9877 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.3420 * 0.06","0.9397 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.5000 * 0.06","0.8660 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.6428 * 0.06","0.7660 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.7660 * 0.06","0.6428 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.8660 * 0.06","0.5000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.9397 * 0.06","0.3420 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.9877 * 0.06","0.1736 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "1.0000 * 0.06","0.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "1.2000 * 0.06","0.0000 * 0.06" },1 },{  },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.0000 * 0.06","-1.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.0000 * 0.06","-1.2000 * 0.06" },1 },{  },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.0000 * 0.06","1.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.0000 * 0.06","1.2000 * 0.06" },1 },{  },{ "ForwardVec",1,"WeaponAimGUN",1,{ 0.005,0 },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ -0.005,0 },1 },{  },{ "ForwardVec",1,"WeaponAimGUN",1,{ 0,0.005 },1 },{ "ForwardVec",1,"WeaponAimGUN",1,{ 0,-0.005 },1 }};
				};*/
			};
			class ROCKET_group
			{
				condition = "rocket";
				type = "group";
				class AmmoCount
				{
					type = "text";
					source = "ammo";
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{ "0.15 + 0.1",0.89 },1};
					right[] = {{ "0.19 + 0.1",0.89 },1};
					down[] = {{ "0.15 + 0.1",0.93 },1};
				};
				class RangeText
				{
					type = "text";
					source = "static";
					text = "RNG/";
					align = "left";
					scale = 1;
					pos[] = {{ "0.15 + 0.1",0.76 },1};
					right[] = {{ "0.19 + 0.1",0.76 },1};
					down[] = {{ "0.15 + 0.1",0.8 },1};
				};
				class RangeNumber
				{
					type = "text";
					source = "targetDist";
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{ "0.15 + 0.1",0.8 },1};
					right[] = {{ "0.19 + 0.1",0.8 },1};
					down[] = {{ "0.15 + 0.1",0.84 },1};
				};
				/*class radar_tgts_RKT
				{
					type = "radar";
					#include "cfg_HUD_Wipe_pos010_HUD.hpp"
					width = 2.5;
					points[] = {{ "ForwardVec",1,"RadarContact",{ -0.02,-0.02 },1 },{ "ForwardVec",1,"RadarContact",{ 0.02,-0.02 },1 },{ "ForwardVec",1,"RadarContact",{ 0.02,0.02 },1 },{ "ForwardVec",1,"RadarContact",{ -0.02,0.02 },1 },{ "ForwardVec",1,"RadarContact",{ -0.02,-0.02 },1 }};
				};
				class Target_selected_RKT
				{
					type = "line";
					width = 4;
					points[] = {{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.03 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.025 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.02 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.015 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.01 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.005 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,0 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0,0.03 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,0.025 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0,0.02 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,0.015 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0,0.01 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,0.005 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ -0.03,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ -0.025,0 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ -0.02,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ -0.015,0 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ -0.01,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ -0.005,0 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0.03,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0.025,0 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0.02,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0.015,0 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0.01,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0.005,0 },1 },{  }};
				};
				class CCIP_circle_RKT
				{
					type = "line";
					width = 5;
					points[] = {{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-1.2000 * 0.06","-0.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-1.0000 * 0.06","-0.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.9877 * 0.06","-0.1736 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.9397 * 0.06","-0.3420 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.8660 * 0.06","-0.5000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.7660 * 0.06","-0.6428 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.6428 * 0.06","-0.7660 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.5000 * 0.06","-0.8660 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.3420 * 0.06","-0.9397 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.1736 * 0.06","-0.9877 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.0000 * 0.06","-1.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.1736 * 0.06","-0.9877 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.3420 * 0.06","-0.9397 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.5000 * 0.06","-0.8660 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.6428 * 0.06","-0.7660 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.7660 * 0.06","-0.6428 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.8660 * 0.06","-0.5000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.9397 * 0.06","-0.3420 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.9877 * 0.06","-0.1736 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "1.0000 * 0.06","-0.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "1.2000 * 0.06","-0.0000 * 0.06" },1 },{  },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-1.2000 * 0.06","0.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-1.0000 * 0.06","0.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.9877 * 0.06","0.1736 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.9397 * 0.06","0.3420 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.8660 * 0.06","0.5000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.7660 * 0.06","0.6428 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.6428 * 0.06","0.7660 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.5000 * 0.06","0.8660 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.3420 * 0.06","0.9397 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.1736 * 0.06","0.9877 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.0000 * 0.06","1.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.1736 * 0.06","0.9877 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.3420 * 0.06","0.9397 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.5000 * 0.06","0.8660 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.6428 * 0.06","0.7660 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.7660 * 0.06","0.6428 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.8660 * 0.06","0.5000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.9397 * 0.06","0.3420 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.9877 * 0.06","0.1736 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "1.0000 * 0.06","0.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "1.2000 * 0.06","0.0000 * 0.06" },1 },{  },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.0000 * 0.06","-1.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.0000 * 0.06","-1.2000 * 0.06" },1 },{  },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.0000 * 0.06","1.0000 * 0.06" },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.0000 * 0.06","1.2000 * 0.06" },1 },{  },{ "ForwardVec",1,"WeaponAimROCKET",1,{ 0.005,0 },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ -0.005,0 },1 },{  },{ "ForwardVec",1,"WeaponAimROCKET",1,{ 0,0.005 },1 },{ "ForwardVec",1,"WeaponAimROCKET",1,{ 0,-0.005 },1 }};
				};*/
			};
			class AGM_group
			{
				condition = "ATmissile";
				type = "group";
				class AmmoCount
				{
					type = "text";
					source = "ammo";
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{ "0.15 + 0.1",0.89 },1};
					right[] = {{ "0.19 + 0.1",0.89 },1};
					down[] = {{ "0.15 + 0.1",0.93 },1};
				};
				class RangeText
				{
					type = "text";
					source = "static";
					text = "RNG/";
					align = "left";
					scale = 1;
					pos[] = {{ "0.15 + 0.1",0.76 },1};
					right[] = {{ "0.19 + 0.1",0.76 },1};
					down[] = {{ "0.15 + 0.1",0.8 },1};
				};
				class RangeNumber
				{
					type = "text";
					source = "targetDist";
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{ "0.15 + 0.1",0.8 },1};
					right[] = {{ "0.19 + 0.1",0.8 },1};
					down[] = {{ "0.15 + 0.1",0.84 },1};
				};
				/*class radar_tgts_AGM
				{
					type = "radar";
					#include "cfg_HUD_Wipe_pos010_HUD.hpp"
					width = 2.5;
					points[] = {{ "ForwardVec",1,"RadarContact",{ -0.02,-0.02 },1 },{ "ForwardVec",1,"RadarContact",{ 0.02,-0.02 },1 },{ "ForwardVec",1,"RadarContact",{ 0.02,0.02 },1 },{ "ForwardVec",1,"RadarContact",{ -0.02,0.02 },1 },{ "ForwardVec",1,"RadarContact",{ -0.02,-0.02 },1 }};
				};
				class Target_selected_AGM
				{
					type = "line";
					points[] = {{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.02 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0.01,-0.01732 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0.01732,-0.01 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0.02,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0.01732,0.01 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0.01,0.01732 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,0.02 },1 },{ "ForwardVec",1,"TargetSelected",1,{ -0.01,0.01732 },1 },{ "ForwardVec",1,"TargetSelected",1,{ -0.01732,0.01 },1 },{ "ForwardVec",1,"TargetSelected",1,{ -0.02,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ -0.01732,-0.01 },1 },{ "ForwardVec",1,"TargetSelected",1,{ -0.01,-0.01732 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.02 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.02 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.01 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0,0.02 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,0.01 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ 0.02,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0.01,0 },1 },{  },{ "ForwardVec",1,"TargetSelected",1,{ -0.02,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ -0.01,0 },1 }};
				};*/
				class RangeBand_AGM
				{
					type = "line";
					width = 3;
					points[] = {{ "RangeBone",{ 0,0 },1 },{ "RangeBone",{ -0.01,-0.01 },1 },{ "RangeBone",{ -0.01,0.01 },1 },{ "RangeBone",{ 0,0 },1 }};
				};
				class Range_marks_AGM
				{
					type = "line";
					width = 3;
					points[] = {{ { 0.08,0.4 },1 },{ { 0.1,0.4 },1 },{  },{ { 0.08,0.467 },1 },{ { 0.1,0.467 },1 },{  },{ { 0.08,0.567 },1 },{ { 0.1,0.567 },1 },{  },{ { 0.08,0.6 },1 },{ { 0.1,0.6 },1 },{  },{ { 0.08,0.467 },1 },{ { 0.08,0.567 },1 }};
				};
				class TOFtext_AGM
				{
					type = "text";
					align = "right";
					source = "static";
					text = "TOF=";
					scale = 1;
					pos[] = {{ 0.15,0.62 },1};
					right[] = {{ 0.19,0.62 },1};
					down[] = {{ 0.15,0.66 },1};
				};
				class TOFnumber_AGM
				{
					type = "text";
					source = "targetDist";
					sourcescale = 0.0025;
					align = "right";
					scale = 1;
					pos[] = {{ 0.23,0.62 },1};
					right[] = {{ 0.27,0.62 },1};
					down[] = {{ 0.23,0.66 },1};
				};
			};
			class AAM_group
			{
				condition = "AAmissile";
				type = "group";
				class AmmoCount
				{
					type = "text";
					source = "ammo";
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{ "0.15 + 0.1",0.89 },1};
					right[] = {{ "0.19 + 0.1",0.89 },1};
					down[] = {{ "0.15 + 0.1",0.93 },1};
				};
				class RangeText
				{
					type = "text";
					source = "static";
					text = "RNG/";
					align = "left";
					scale = 1;
					pos[] = {{ "0.15 + 0.1",0.76 },1};
					right[] = {{ "0.19 + 0.1",0.76 },1};
					down[] = {{ "0.15 + 0.1",0.8 },1};
				};
				class RangeNumber
				{
					type = "text";
					source = "targetDist";
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{ "0.15 + 0.1",0.8 },1};
					right[] = {{ "0.19 + 0.1",0.8 },1};
					down[] = {{ "0.15 + 0.1",0.84 },1};
				};
				/*class radar_tgts_AAM
				{
					type = "radar";
					#include "cfg_HUD_Wipe_pos010_HUD.hpp"
					width = 2.5;
					points[] = {{ "ForwardVec",1,"RadarContact",{ -0.02,-0.02 },1 },{ "ForwardVec",1,"RadarContact",{ 0.02,-0.02 },1 },{ "ForwardVec",1,"RadarContact",{ 0.02,0.02 },1 },{ "ForwardVec",1,"RadarContact",{ -0.02,0.02 },1 },{ "ForwardVec",1,"RadarContact",{ -0.02,-0.02 },1 }};
				};
				class Target_selected_AAM
				{
					type = "line";
					points[] = {{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.02 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0.01,-0.01732 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0.01732,-0.01 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0.02,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0.01732,0.01 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0.01,0.01732 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,0.02 },1 },{ "ForwardVec",1,"TargetSelected",1,{ -0.01,0.01732 },1 },{ "ForwardVec",1,"TargetSelected",1,{ -0.01732,0.01 },1 },{ "ForwardVec",1,"TargetSelected",1,{ -0.02,0 },1 },{ "ForwardVec",1,"TargetSelected",1,{ -0.01732,-0.01 },1 },{ "ForwardVec",1,"TargetSelected",1,{ -0.01,-0.01732 },1 },{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.02 },1 }};
				};*/
			};
			class BOMB_group
			{
				condition = "Bomb";
				type = "group";
				class AmmoCount
				{
					type = "text";
					source = "ammo";
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{ "0.15 + 0.1",0.89 },1};
					right[] = {{ "0.19 + 0.1",0.89 },1};
					down[] = {{ "0.15 + 0.1",0.93 },1};
				};
				class RangeText
				{
					type = "text";
					source = "static";
					text = "RNG/";
					align = "left";
					scale = 1;
					pos[] = {{ "0.15 + 0.1",0.76 },1};
					right[] = {{ "0.19 + 0.1",0.76 },1};
					down[] = {{ "0.15 + 0.1",0.8 },1};
				};
				class RangeNumber
				{
					type = "text";
					source = "targetDist";
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{ "0.15 + 0.1",0.8 },1};
					right[] = {{ "0.19 + 0.1",0.8 },1};
					down[] = {{ "0.15 + 0.1",0.84 },1};
				};
				/*class radar_tgts_BOMB
				{
					type = "radar";
					#include "cfg_HUD_Wipe_pos010_HUD.hpp"
					width = 2.5;
					points[] = {{ "ForwardVec",1,"RadarContact",{ -0.02,-0.02 },1 },{ "ForwardVec",1,"RadarContact",{ 0.02,-0.02 },1 },{ "ForwardVec",1,"RadarContact",{ 0.02,0.02 },1 },{ "ForwardVec",1,"RadarContact",{ -0.02,0.02 },1 },{ "ForwardVec",1,"RadarContact",{ -0.02,-0.02 },1 }};
				};
				class Crosshairs_BOMB
				{
					type = "line";
					width = 7;
					points[] = {{ { "0 + 0.5","-0.02 + 0.5" },1 },{ { "0.0099999998 + 0.5","-0.01732 + 0.5" },1 },{ { "0.01732 + 0.5","-0.0099999998 + 0.5" },1 },{ { "0.02 + 0.5","0 + 0.5" },1 },{ { "0.01732 + 0.5","0.0099999998 + 0.5" },1 },{ { "0.0099999998 + 0.5","0.01732 + 0.5" },1 },{ { "0 + 0.5","0.02 + 0.5" },1 },{ { "-0.0099999998 + 0.5","0.01732 + 0.5" },1 },{ { "-0.01732 + 0.5","0.0099999998 + 0.5" },1 },{ { "-0.02 + 0.5","0 + 0.5" },1 },{ { "-0.01732 + 0.5","-0.0099999998 + 0.5" },1 },{ { "-0.0099999998 + 0.5","-0.01732 + 0.5" },1 },{ { "0 + 0.5","-0.02 + 0.5" },1 },{  },{ { " -0.005 + 0.5","0 + 0.5" },1 },{ { " 0.005 + 0.5","0 + 0.5" },1 },{  },{ { " -0.00 + 0.5","-0.005 + 0.5" },1 },{ { " 0.00 + 0.5","0.005 + 0.5" },1 }};
				};
				class Target_SPI_BOMB
				{
					type = "line";
					width = 3;
					points[] = {{ "TargetSelected",{ 0,0 },1 },{ "TargetSelected",{ 0,-0.05 },1 }};
				};*/
				class TOFtext_BOMB
				{
					type = "text";
					align = "right";
					source = "static";
					text = "TOF=";
					scale = 1;
					pos[] = {{ 0.15,0.62 },1};
					right[] = {{ 0.19,0.62 },1};
					down[] = {{ 0.15,0.66 },1};
				};
				class TOFnumber_BOMB
				{
					type = "text";
					source = "altitudeASL";
					sourcescale = 0.013;
					align = "right";
					scale = 1;
					pos[] = {{ 0.23,0.62 },1};
					right[] = {{ 0.27,0.62 },1};
					down[] = {{ 0.23,0.66 },1};
				};
			};
		};
	};
	class HUD_4_Collimated
	{
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft=0.12;
		borderRight=0.12;
		borderTop=0.05;
		borderBottom=0.15;
		#include "cfg_HUD_Wipe_Color.hpp"
		enableParallax=1;
		helmetMountedDisplay=1;
		helmetPosition[]={-0.020,0.020,0.1};
		helmetRight[]={0.040000001,0,0};
		helmetDown[]={-0,-0.040000001,0};
		class Bones
		{
			class ForwardVec
			{
				type = "vector";
				source = "forward";
				pos0[] = {0.0,0.0};
				//pos10[] = {"0.253 + 0.0","0.253 + 0.0"};
				pos10[] = {0.43500,0.43500};
			};
			class Velocity
			{
				type="vector";
				source="velocity";
				pos0[]={0.5,0.5};
				pos10[]={0.8,0.8};
				//pos10[]={1.5,1.32};
			};
			class Velocity_Bone_CCIP
			{
				type="vector";
				source="velocity";
				pos0[]={0.5,0.5};
				pos10[]={0.8,0.8};
			};
			class Speed_Bone_CCIP
			{
				type="linear";
				source="speed";
				sourceScale=3.6;
				min=0;
				max=750;
				minPos[]={0.5,0.60};
				maxPos[]={0.5,0.70};
			};
			class Bank_Bone_CCIP
			{
				type="rotational";
				source="horizonBank";
				center[]={0.5,0.5};
				min="-3.1416*2";
				max="3.1416*2";
				minAngle=-360;
				maxAngle=360;
				aspectRatio=1;
			};
			class RadarAltitude_Bone_CCIP
			{
				type="linear";
				source="altitudeAGL";
				sourceScale=1; // meters
				//hideValue=1500;
				min=0;
				max=500;
				minPos[]={0.71,0.35};
				maxPos[]={0.71,0.55};
			};
			class RadarContact
			{
				//source="radar";
				type="fixed";
				pos[]={0,0};
			};
			class WeaponAimGUN
			{
				type="fixed";
				pos[]={0.5,0.5};
				//type = "vector";
				//source = "weapon";
				//pos0[] = {0.5,0.125};
				//pos0[] = {0.5,0.5};
				//pos10[] = {" 0.5 + 0.253 "," 0.50 + 0.253 "};
				//pos10[]={1.382,1.382};
			};
			class WeaponAimROCKET
			{
				type="fixed";
				pos[]={0.5,0.52};
				//type = "vector";
				//source = "weapon";
				//pos0[] = {0.5,0.520};
				//pos10[] = {" 0.5 + 0.253 "," 0.520 + 0.253 "};
				//pos10[]={1.382,1.382};
			};
			class TargetSelected
			{
				type = "vector";
				source = "target";
				pos0[]={ 0.50, 0.50 };
				//pos10[]={" 0.5 + 1.5 ", " 0.32 + 1.5"};
				//pos10[]={1.382,1.382};
				pos10[]={"0.50 + 0.43500","0.50 + 0.43500"};
			};
		};
		class Draw
		{
			#include "cfg_HUD_Wipe_Color.hpp"
			alpha=0.9;
			clipTL[]={0,0};
			clipBR[]={1,1};
			condition="on";
			/*class TVV
			{
				type="line";
				width=7;
				points[]=
				{
					{
						"ForwardVec",1,"Velocity",1,
						{0,-0.02},
						1
					},
					
					{
						"ForwardVec",1,"Velocity",1,
						{0.0099999998,-0.01732},
						1
					},
					
					{
						"ForwardVec",1,"Velocity",1,
						{0.01732,-0.0099999998},
						1
					},
					
					{
						"ForwardVec",1,"Velocity",1,
						{0.02,0},
						1
					},
					
					{
						"ForwardVec",1,"Velocity",1,
						{0.01732,0.0099999998},
						1
					},
					
					{
						"ForwardVec",1,"Velocity",1,
						{0.0099999998,0.01732},
						1
					},
					
					{
						"ForwardVec",1,"Velocity",1,
						{0,0.02},
						1
					},
					
					{
						"ForwardVec",1,"Velocity",1,
						{-0.0099999998,0.01732},
						1
					},
					
					{
						"ForwardVec",1,"Velocity",1,
						{-0.01732,0.0099999998},
						1
					},
					
					{
						"ForwardVec",1,"Velocity",1,
						{-0.02,0},
						1
					},
					
					{
						"ForwardVec",1,"Velocity",1,
						{-0.01732,-0.0099999998},
						1
					},
					
					{
						"ForwardVec",1,"Velocity",1,
						{-0.0099999998,-0.01732},
						1
					},
					
					{
						"ForwardVec",1,"Velocity",1,
						{0,-0.02},
						1
					},
					{},
					
					{
						"ForwardVec",1,"Velocity",1,
						{0.039999999,0},
						1
					},
					
					{
						"ForwardVec",1,"Velocity",1,
						{0.02,0},
						1
					},
					{},
					
					{
						"ForwardVec",1,"Velocity",1,
						{-0.039999999,0},
						1
					},
					
					{
						"ForwardVec",1,"Velocity",1,
						{-0.02,0},
						1
					},
					{},
					
					{
						"ForwardVec",1,"Velocity",1,
						{0,-0.039999999},
						1
					},
					
					{
						"ForwardVec",1,"Velocity",1,
						{0,-0.02},
						1
					}
				};
			};
			class AC_Centerline
			{
				type="group";
				condition="on";
				class AC_Cross
				{
					type = "line";
					width=4;
					points[] = 
					{
						{"ForwardVec",1,{" -0.006 + 0.5" , "0 + 0.32" },1},
						{"ForwardVec",1,{" 0.006 + 0.5" , "0 + 0.32" },1},
						{ },
						{"ForwardVec",1,{" -0.0 + 0.5" , "0.006 + 0.32" },1},
						{"ForwardVec",1,{" 0.0 + 0.5" , "-0.006 + 0.32" },1}
					};
				};
			};*/
			class GUN_group
			{
				condition="mgun";
				type="group";
				/*class radar_tgts_GUN
				{
					type="radar";
					#include "cfg_HUD_Wipe_pos010_HMCS.hpp"
					width=2.5;
					points[]=
					{
						
						{
							"ForwardVec",1,"RadarContact",
							{-0.02,-0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{0.02,-0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{0.02,0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{-0.02,0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{-0.02,-0.02},
							1
						}
					};
				};*/
				class Target_selected_GUN
				{
					type="line";
					width=4;
					points[]=
					{
						//////////////////////////////////////////////// UP
						
						/*{ "ForwardVec",1,"target",{ 0,-0.060 },1 },
						{ "ForwardVec",1,"target",{ 0,-0.055 },1 },
						{},
						{ "ForwardVec",1,"target",{ 0,-0.050 },1 },
						{ "ForwardVec",1,"target",{ 0,-0.045 },1 },
						{},
						{ "ForwardVec",1,"target",{ 0,-0.040 },1 },
						{ "ForwardVec",1,"target",{ 0,-0.035 },1 },
						{},*/
						{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.030 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.025 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.020 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.015 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.010 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.005 },1 },
						{},
						//////////////////////////////////////////////// center
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0 },1 },
						{},
						/////////////////////////////////////////////// DOWN
						
						/*{ "ForwardVec",1,"target",{ 0,0.060 },1 },
						{ "ForwardVec",1,"target",{ 0,0.055 },1 },
						{},
						{ "ForwardVec",1,"target",{ 0,0.050 },1 },
						{ "ForwardVec",1,"target",{ 0,0.045 },1 },
						{},
						{ "ForwardVec",1,"target",{ 0,0.040 },1 },
						{ "ForwardVec",1,"target",{ 0,0.035 },1 },
						{},*/
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0.030 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0.025 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0.020 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0.015 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0.010 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0.005 },1 },
						{},
						/////////////////////////////////////////////// LEFT
						
						/*{ "ForwardVec",1,"target",{ -0.060, 0 },1 },
						{ "ForwardVec",1,"target",{ -0.055, 0 },1 },
						{},
						{ "ForwardVec",1,"target",{ -0.050, 0 },1 },
						{ "ForwardVec",1,"target",{ -0.045, 0 },1 },
						{},
						{ "ForwardVec",1,"target",{ -0.040, 0 },1 },
						{ "ForwardVec",1,"target",{ -0.035, 0 },1 },
						{},*/
						{ "ForwardVec",1,"TargetSelected",1,{ -0.030, 0 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ -0.025, 0 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ -0.020, 0 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ -0.015, 0 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ -0.010, 0 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ -0.005, 0 },1 },
						{},
						/////////////////////////////////////////////// RIGHT
						
						/*{ "ForwardVec",1,"target",{ 0.060, 0 },1 },
						{ "ForwardVec",1,"target",{ 0.055, 0 },1 },
						{},
						{ "ForwardVec",1,"target",{ 0.050, 0 },1 },
						{ "ForwardVec",1,"target",{ 0.045, 0 },1 },
						{},
						{ "ForwardVec",1,"target",{ 0.040, 0 },1 },
						{ "ForwardVec",1,"target",{ 0.035, 0 },1 },
						{},*/
						{ "ForwardVec",1,"TargetSelected",1,{ 0.030, 0 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0.025, 0 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ 0.020, 0 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0.015, 0 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ 0.010, 0 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0.005, 0 },1 },
						{}
					};
				};
				class CCIP_circle_GUN
				{
					type = "line";
					width = 5.0;
					points[] = 
					{
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-1.2000 * 0.06","-0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-1.0000 * 0.06","-0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.9877 * 0.06","-0.1736 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.9397 * 0.06","-0.3420 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.8660 * 0.06","-0.5000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.7660 * 0.06","-0.6428 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.6428 * 0.06","-0.7660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.5000 * 0.06","-0.8660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.3420 * 0.06","-0.9397 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.1736 * 0.06","-0.9877 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.0000 * 0.06","-1.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.1736 * 0.06","-0.9877 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.3420 * 0.06","-0.9397 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.5000 * 0.06","-0.8660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.6428 * 0.06","-0.7660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.7660 * 0.06","-0.6428 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.8660 * 0.06","-0.5000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.9397 * 0.06","-0.3420 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.9877 * 0.06","-0.1736 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "1.0000 * 0.06","-0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "1.2000 * 0.06","-0.0000 * 0.06" },1 },
						{ },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-1.2000 * 0.06","0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-1.0000 * 0.06","0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.9877 * 0.06","0.1736 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.9397 * 0.06","0.3420 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.8660 * 0.06","0.5000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.7660 * 0.06","0.6428 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.6428 * 0.06","0.7660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.5000 * 0.06","0.8660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.3420 * 0.06","0.9397 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.1736 * 0.06","0.9877 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.0000 * 0.06","1.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.1736 * 0.06","0.9877 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.3420 * 0.06","0.9397 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.5000 * 0.06","0.8660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.6428 * 0.06","0.7660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.7660 * 0.06","0.6428 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.8660 * 0.06","0.5000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.9397 * 0.06","0.3420 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "0.9877 * 0.06","0.1736 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "1.0000 * 0.06","0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "1.2000 * 0.06","0.0000 * 0.06" },1 },
						{ },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.0000 * 0.06","-1.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.0000 * 0.06","-1.2000 * 0.06" },1 },
						{ },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.0000 * 0.06","1.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ "-0.0000 * 0.06","1.2000 * 0.06" },1 },
						{ },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ 0.005,0 },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ -0.005,0 },1 },
						{ },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ 0,0.005 },1 },
						{ "ForwardVec",1,"WeaponAimGUN",1,{ 0,-0.005 },1 }
					};
				};
			};
			class ROCKET_group
			{
				condition="rocket";
				type="group";
				/*class radar_tgts_RKT
				{
					type="radar";
					#include "cfg_HUD_Wipe_pos010_HMCS.hpp"
					width=2.5;
					points[]=
					{
						
						{
							"ForwardVec",1,"RadarContact",
							{-0.02,-0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{0.02,-0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{0.02,0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{-0.02,0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{-0.02,-0.02},
							1
						}
					};
				};
				*/
				class Target_selected_RKT
				{
					type="line";
					width=4;
					points[]=
					{
						//////////////////////////////////////////////// UP
						
						/*{ "ForwardVec",1,"target",{ 0,-0.060 },1 },
						{ "ForwardVec",1,"target",{ 0,-0.055 },1 },
						{},
						{ "ForwardVec",1,"target",{ 0,-0.050 },1 },
						{ "ForwardVec",1,"target",{ 0,-0.045 },1 },
						{},
						{ "ForwardVec",1,"target",{ 0,-0.040 },1 },
						{ "ForwardVec",1,"target",{ 0,-0.035 },1 },
						{},*/
						{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.030 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.025 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.020 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.015 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.010 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.005 },1 },
						{},
						//////////////////////////////////////////////// center
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0 },1 },
						{},
						/////////////////////////////////////////////// DOWN
						
						/*{ "ForwardVec",1,"target",{ 0,0.060 },1 },
						{ "ForwardVec",1,"target",{ 0,0.055 },1 },
						{},
						{ "ForwardVec",1,"target",{ 0,0.050 },1 },
						{ "ForwardVec",1,"target",{ 0,0.045 },1 },
						{},
						{ "ForwardVec",1,"target",{ 0,0.040 },1 },
						{ "ForwardVec",1,"target",{ 0,0.035 },1 },
						{},*/
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0.030 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0.025 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0.020 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0.015 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0.010 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0.005 },1 },
						{},
						/////////////////////////////////////////////// LEFT
						
						/*{ "ForwardVec",1,"target",{ -0.060, 0 },1 },
						{ "ForwardVec",1,"target",{ -0.055, 0 },1 },
						{},
						{ "ForwardVec",1,"target",{ -0.050, 0 },1 },
						{ "ForwardVec",1,"target",{ -0.045, 0 },1 },
						{},
						{ "ForwardVec",1,"target",{ -0.040, 0 },1 },
						{ "ForwardVec",1,"target",{ -0.035, 0 },1 },
						{},*/
						{ "ForwardVec",1,"TargetSelected",1,{ -0.030, 0 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ -0.025, 0 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ -0.020, 0 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ -0.015, 0 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ -0.010, 0 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ -0.005, 0 },1 },
						{},
						/////////////////////////////////////////////// RIGHT
						
						/*{ "ForwardVec",1,"target",{ 0.060, 0 },1 },
						{ "ForwardVec",1,"target",{ 0.055, 0 },1 },
						{},
						{ "ForwardVec",1,"target",{ 0.050, 0 },1 },
						{ "ForwardVec",1,"target",{ 0.045, 0 },1 },
						{},
						{ "ForwardVec",1,"target",{ 0.040, 0 },1 },
						{ "ForwardVec",1,"target",{ 0.035, 0 },1 },
						{},*/
						{ "ForwardVec",1,"TargetSelected",1,{ 0.030, 0 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0.025, 0 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ 0.020, 0 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0.015, 0 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ 0.010, 0 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0.005, 0 },1 },
						{}
					};
				};
				class CCIP_circle_RKT
				{
					type = "line";
					width = 5.0;
					points[] = 
					{
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-1.2000 * 0.06","-0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-1.0000 * 0.06","-0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.9877 * 0.06","-0.1736 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.9397 * 0.06","-0.3420 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.8660 * 0.06","-0.5000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.7660 * 0.06","-0.6428 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.6428 * 0.06","-0.7660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.5000 * 0.06","-0.8660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.3420 * 0.06","-0.9397 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.1736 * 0.06","-0.9877 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.0000 * 0.06","-1.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.1736 * 0.06","-0.9877 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.3420 * 0.06","-0.9397 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.5000 * 0.06","-0.8660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.6428 * 0.06","-0.7660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.7660 * 0.06","-0.6428 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.8660 * 0.06","-0.5000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.9397 * 0.06","-0.3420 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.9877 * 0.06","-0.1736 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "1.0000 * 0.06","-0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "1.2000 * 0.06","-0.0000 * 0.06" },1 },
						{ },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-1.2000 * 0.06","0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-1.0000 * 0.06","0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.9877 * 0.06","0.1736 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.9397 * 0.06","0.3420 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.8660 * 0.06","0.5000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.7660 * 0.06","0.6428 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.6428 * 0.06","0.7660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.5000 * 0.06","0.8660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.3420 * 0.06","0.9397 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.1736 * 0.06","0.9877 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.0000 * 0.06","1.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.1736 * 0.06","0.9877 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.3420 * 0.06","0.9397 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.5000 * 0.06","0.8660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.6428 * 0.06","0.7660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.7660 * 0.06","0.6428 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.8660 * 0.06","0.5000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.9397 * 0.06","0.3420 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "0.9877 * 0.06","0.1736 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "1.0000 * 0.06","0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "1.2000 * 0.06","0.0000 * 0.06" },1 },
						{ },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.0000 * 0.06","-1.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.0000 * 0.06","-1.2000 * 0.06" },1 },
						{ },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.0000 * 0.06","1.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ "-0.0000 * 0.06","1.2000 * 0.06" },1 },
						{ },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ 0.005,0 },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ -0.005,0 },1 },
						{ },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ 0,0.005 },1 },
						{ "ForwardVec",1,"WeaponAimROCKET",1,{ 0,-0.005 },1 }
					};
				};
			};
			class AGM_group
			{
				condition="ATmissile";
				type="group";
				/*class radar_tgts_AGM
				{
					type="radar";
					#include "cfg_HUD_Wipe_pos010_HMCS.hpp"
					width=2.5;
					points[]=
					{
						
						{
							"ForwardVec",1,"RadarContact",
							{-0.02,-0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{0.02,-0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{0.02,0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{-0.02,0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{-0.02,-0.02},
							1
						}
					};
				};
				*/
				class Target_selected_AGM
				{
					type = "line";
					points[] = 
					{
						/*{ "TargetSelected",{ 0,"-0.08" },1 },
						{ "TargetSelected",{ 0.05,"-0.0696" },1 },
						{ "TargetSelected",{ 0.087,"-0.50*0.10/(1.5/1.2)" },1 },
						{ "TargetSelected",{ 0.1,"0"},1 },
						{ "TargetSelected",{ 0.087,"0.04" },1 },
						{ "TargetSelected",{ 0.05,"+0.87*0.10/(1.5/1.2)" },1 },
						{ "TargetSelected",{ 0,"0.08"},1 },
						{ "TargetSelected",{ -0.05,"0.0696"},1 },
						{ "TargetSelected",{ -0.087,"+0.50*0.10/(1.5/1.2)" },1 },
						{ "TargetSelected",{ -0.1,"0" },1 },
						{ "TargetSelected",{ -0.087,"-0.04" },1 },
						{ "TargetSelected",{ -0.05,"-0.87*0.10/(1.5/1.2)" },1 },
						{ "TargetSelected",{ 0,"-0.08" },1 },*/
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{0,-0.02},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{0.0099999998,-0.01732},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{0.01732,-0.0099999998},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{0.02,0},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{0.01732,0.0099999998},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{0.0099999998,0.01732},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{0,0.02},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{-0.0099999998,0.01732},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{-0.01732,0.0099999998},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{-0.02,0},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{-0.01732,-0.0099999998},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{-0.0099999998,-0.01732},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{0,-0.02},
							1
						},

						
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.02 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0,-0.01 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0.02 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0,0.01 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ 0.02,0 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ 0.01,0 },1 },
						{},
						{ "ForwardVec",1,"TargetSelected",1,{ -0.02,0 },1 },
						{ "ForwardVec",1,"TargetSelected",1,{ -0.01,0 },1 }
					};
				};
			};
			class AAM_group
			{
				condition="AAmissile";
				type="group";
				/*class radar_tgts_AAM
				{
					type="radar";
					#include "cfg_HUD_Wipe_pos010_HMCS.hpp"
					width=2.5;
					points[]=
					{
						
						{
							"ForwardVec",1,"RadarContact",
							{-0.02,-0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{0.02,-0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{0.02,0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{-0.02,0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{-0.02,-0.02},
							1
						}
					};
				};
				*/
				class Target_selected_AAM
				{
					type = "line";
					points[] = 
					{
						/*{ "TargetSelected",{ 0,"-0.08 + 0.2" },1 },
						{ "TargetSelected",{ 0.05,"-0.0696 + 0.2" },1 },
						{ "TargetSelected",{ 0.087,"-0.50*0.10/(1.5/1.2) + 0.2" },1 },
						{ "TargetSelected",{ 0.1,"0 + 0.2"},1 },
						{ "TargetSelected",{ 0.087,"0.04 + 0.2" },1 },
						{ "TargetSelected",{ 0.05,"+0.87*0.10/(1.5/1.2) + 0.2" },1 },
						{ "TargetSelected",{ 0,"0.08 + 0.2"},1 },
						{ "TargetSelected",{ -0.05,"0.0696 + 0.2"},1 },
						{ "TargetSelected",{ -0.087,"+0.50*0.10/(1.5/1.2) + 0.2" },1 },
						{ "TargetSelected",{ -0.1,"0 + 0.2" },1 },
						{ "TargetSelected",{ -0.087,"-0.04 + 0.2" },1 },
						{ "TargetSelected",{ -0.05,"-0.87*0.10/(1.5/1.2) + 0.2" },1 },
						{ "TargetSelected",{ 0,"-0.08 + 0.2" },1 }*/
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{0,-0.02},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{0.0099999998,-0.01732},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{0.01732,-0.0099999998},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{0.02,0},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{0.01732,0.0099999998},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{0.0099999998,0.01732},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{0,0.02},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{-0.0099999998,0.01732},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{-0.01732,0.0099999998},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{-0.02,0},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{-0.01732,-0.0099999998},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{-0.0099999998,-0.01732},
							1
						},
						
						{
							"ForwardVec",1,"TargetSelected",1,
							{0,-0.02},
							1
						}
					};
				};
			};
			class BOMB_group
			{
				condition="Bomb";
				type="group";
				/*class radar_tgts_BOMB
				{
					type="radar";
					#include "cfg_HUD_Wipe_pos010_HMCS.hpp"
					width=2.5;
					points[]=
					{
						
						{
							"ForwardVec",1,"RadarContact",
							{-0.02,-0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{0.02,-0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{0.02,0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{-0.02,0.02},
							1
						},
						
						{
							"ForwardVec",1,"RadarContact",
							{-0.02,-0.02},
							1
						}
					};
				};
				*/
				class Crosshairs_BOMB
				{
					type = "line";
					width=7;
					points[] = 
					{
						{"ForwardVec",1,{"0 + 0.5" , "-0.02 + 0.5"},1 },
						{"ForwardVec",1,{"0.0099999998 + 0.5" , "-0.01732 + 0.5"},1},
						{"ForwardVec",1,{"0.01732 + 0.5" , "-0.0099999998 + 0.5"},1},
						{"ForwardVec",1,{"0.02 + 0.5" , "0 + 0.5"},1},
						{"ForwardVec",1,{"0.01732 + 0.5" , "0.0099999998 + 0.5"},1},
						{"ForwardVec",1,{"0.0099999998 + 0.5" , "0.01732 + 0.5"},1},
						{"ForwardVec",1,{"0 + 0.5" , "0.02 + 0.5"},1},
						{"ForwardVec",1,{"-0.0099999998 + 0.5" , "0.01732 + 0.5"},1},
						{"ForwardVec",1,{"-0.01732 + 0.5" , "0.0099999998 + 0.5"},1},
						{"ForwardVec",1,{"-0.02 + 0.5" , "0 + 0.5"},1},
						{"ForwardVec",1,{"-0.01732 + 0.5" , "-0.0099999998 + 0.5"},1},
						{"ForwardVec",1,{"-0.0099999998 + 0.5" , "-0.01732 + 0.5"},1},
						{"ForwardVec",1,{"0 + 0.5" , "-0.02 + 0.5"},1},
						{ },
						{"ForwardVec",1,{" -0.005 + 0.5" , "0 + 0.5" },1},
						{"ForwardVec",1,{" 0.005 + 0.5" , "0 + 0.5" },1},
						{ },
						{"ForwardVec",1,{" -0.00 + 0.5" , "-0.005 + 0.5" },1},
						{"ForwardVec",1,{" 0.00 + 0.5" , "0.005 + 0.5" },1}
					};
				};
				class Target_SPI_BOMB
				{
					type = "line";
					width=3;
					points[] = 
					{
					
						{
							"TargetSelected",
							{0,0},
							1
						},
						
						{
							"TargetSelected",
							{0,-0.05},
							1
						},
						
						
					};
				};
			};
		};
	};
	class HMCS_1
	{
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft=0;
		borderRight=0;
		borderTop=0;
		borderBottom=0;
		#include "cfg_HUD_Wipe_Color.hpp"
		class Bones
		{
			class WeaponAim
			{
				type="vector";
				source="weapon";
				pos0[]={0.50,0.50};
				pos10[]={1.382,1.382};
			};
			class RangeBone
			{
				type="linear";
				source="targetDist";
				sourceScale=1; //meters
				min=0;
				max=10000;
				minPos[]={0.8,0.30};
				maxPos[]={0.8,0.70};
			};
			class HorizonIndicatorBank
			{
				type = "rotational";
				source = "horizonBank";
				sourceScale = 1.0;
				center[] = {0.10,0.80};
				min = "-3.1415927";
				max = "3.1415927";
				minAngle = 180;
				maxAngle = -180;
				aspectRatio = 1;
			};
			class HorizonDive_Left
			{
				source = "horizonDive";
				type = "rotational";
				center[] = {0.10,0.80};
				min = "-3.14159265359 / 2";
				max = "3.14159265359 / 2";
				minAngle = 90;
				maxAngle = -90;
				aspectRatio = 1;
			};
			class HorizonDive_Right
			{
				source = "horizonDive";
				type = "rotational";
				center[] = {0.10,0.80};
				min = "-3.14159265359 / 2";
				max = "3.14159265359 / 2";
				minAngle = -90;
				maxAngle = 90;
				aspectRatio = 1;
			};
		};
		class Draw
		{
			#include "cfg_HUD_Wipe_Color.hpp"
			alpha=0.9;
			condition="on";
			#include "cfg_HUD_Wipe_Units_Metric_HMCS.hpp"
			class Left_box
			{
				type = "line";
				width = 3.0;
				points[] = 
				{
					{ { 0.16,0.4 },1 },
					{ { "0.16 - 0.12",0.4 },1 },
					{ { "0.16 - 0.12","0.4 + 0.06" },1 },
					{ { 0.16,"0.4 + 0.06" },1 },
					{ { 0.16,0.4 },1 }
				};
			};
			class Right_box
			{
				type = "line";
				width = 3.0;
				points[] = 
				{
					{ { 0.84,0.4 },1 },
					{ { "0.84 + 0.12",0.4 },1 },
					{ { "0.84 + 0.12","0.4 + 0.06" },1 },
					{ { 0.84,"0.4 + 0.06" },1 },
					{ { 0.84,0.4 },1 }
				};
			};
			/*class Center_box
			{
				type = "line";
				width = 3.0;
				points[] = 
				{
					{ { 0.45,0.01 },1 },
					{ { "0.45 + 0.10",0.01 },1 },
					{ { "0.45 + 0.10","0.01 + 0.05" },1 },
					{ { 0.45,"0.01 + 0.05" },1 },
					{ { 0.45,0.01 },1 }
				};
			};
			class Heading_Number
			{
				type="text";
				scale=1;
				source="heading";
				sourceScale=1;
				align="center";
				pos[]=
				{
					{0.5,0.01},
					1
				};
				right[]=
				{
					{0.55,0.01},
					1
				};
				down[]=
				{
					{0.5,0.06},
					1
				};
			};
			*/
			class Center_box // hercules
			{
				type = "line";
				width = 3.0;
				points[] = 
				{
					{ { 0.455,0.005 },1 },
					{ { "0.455 + 0.09",0.005 },1 },
					{ { "0.455 + 0.09","0.005 + 0.06" },1 },
					{ { "0.455 + 0.052","0.005 + 0.06" },1 },
					{ { "0.455 + 0.045","0.005 + 0.07" },1 },
					{ { "0.455 + 0.038","0.005 + 0.06" },1 },
					{ { 0.455,"0.005 + 0.06" },1 },
					{ { 0.455,0.005 },1 }
				};
			};
			class HeadingNumber // hercules
			{
				type="text";
				scale=1;
				width = 2.0;
				source="heading";
				sourceScale=1;
				align="center";
				pos[]=
				{
					{0.5,0.01},
					1
				};
				right[]=
				{
					{0.55,0.01},
					1
				};
				down[]=
				{
					{0.5,0.06},
					1
				};
			};
			class HeadingScale // hercules
			{
				clipTL[]={0.35,0};
				clipBR[]={0.65,1};
				class Heading_Scale
				{
					type="scale";
					horizontal=1;
					source="heading";
					sourceScale=1;
					width=3;
					//top=0.00000001;
					//center=0.5;
					//bottom=0.99999999;
					top=	0.35;
					center=	0.50;
					bottom=	0.65;
					lineXleft="0.04 + 0.085";
					lineYright="0.03 + 0.085";
					lineXleftMajor="0.04 + 0.085";
					lineYrightMajor="0.02 + 0.085";
					majorLineEach=2;
					numberEach=2;
					step=5;
					//stepSize="0.1";
					stepSize="(0.65 - 0.35) / 5";
					align="center";
					scale=1;
					//pos[]={0.00000001,"0.0 + 0.065"};
					//right[]={0.03,"0.0 + 0.065"};
					//down[]={0.00000001,"0.03 + 0.065"};
					pos[]={0.35,"0.0 + 0.065"};
					right[]={"0.35 + 0.03","0.0 + 0.065"};
					down[]={0.35,"0.03 + 0.065"};
				};
			};
			class Radar_Altitude_Text
			{
				type="text";
				source="static";
				text="R";
				align="right";
				scale=1;
				pos[]=
				{
					{0.85,0.48},
					1
				};
				right[]=
				{
					{0.88,0.48},
					1
				};
				down[]=
				{
					{0.85,0.51},
					1
				};
			};
			class Bank_Indicator
			{
				type = "line";
				width = 4.0;
				points[] = 
				{
					/*{ "HorizonDive",{-0.046,0 },1 },
					{ "HorizonDive",{ 0.046,0 },1 },*/
					{"HorizonIndicatorBank",{"0 *1 /3","-0.02 *1 /3"},1},							
					{"HorizonIndicatorBank",{"0.0099999998 *1 /3","-0.01732 *1 /3"},1},							
					{"HorizonIndicatorBank",{"0.01732 *1 /3","-0.0099999998 *1 /3"},1},		
					{"HorizonIndicatorBank",{"0.02 *1 /3","0 *1 /3"},1},							
					{"HorizonIndicatorBank",{"0.01732 *1 /3","0.0099999998 *1 /3"},1},
					{"HorizonIndicatorBank",{"0.0099999998 *1 /3","0.01732 *1 /3"},1},							
					{"HorizonIndicatorBank",{"0 *1 /3","0.02 *1 /3"},1},							
					{"HorizonIndicatorBank",{"-0.0099999998 *1 /3","0.01732 *1 /3"},1},					
					{"HorizonIndicatorBank",{"-0.01732 *1 /3","0.0099999998 *1 /3"},1},							
					{"HorizonIndicatorBank",{"-0.02 *1 /3","0 *1 /3"},1},						
					{"HorizonIndicatorBank",{"-0.01732 *1 /3","-0.0099999998 *1 /3"},1},							
					{"HorizonIndicatorBank",{"-0.0099999998 *1 /3","-0.01732 *1 /3"},1},							
					{"HorizonIndicatorBank",{"0 *1 /3","-0.02 *1 /3"},1},
					{},							
					{"HorizonIndicatorBank",{0.046,0},1},							
					{"HorizonIndicatorBank",{"0.02 *1 /3",0},1},
					{},							
					{"HorizonIndicatorBank",{-0.046,0},1},							
					{"HorizonIndicatorBank",{"-0.02 *1 /3",0},1},
					{},							
					{"HorizonIndicatorBank",{0,"0.06 *1 /3"},1},
					{"HorizonIndicatorBank",{0,"0.02 *1 /3"},1}
				};
			};
			class Pitch_circle_Left
			{
				type="group";
				clipTL[]={0.0,0.0};
				clipBR[]={0.1,1.0};
				class Pitch_Circle_Group_Left
				{
					type = "line";
					width = 4.0;
					points[] = 
					{
						{"HorizonDive_Left",{"-1.0000 * 0.0500","-0.0000 * 0.0450"},1},			//180
						//----------------------------------------------------------------------------------
						{"HorizonDive_Left",{"-1.0000 * 0.0450","-0.0000 * 0.0450"},1},			//180
						{"HorizonDive_Left",{"-0.9962 * 0.0450","-0.0872 * 0.0450"},1},			//185
						{"HorizonDive_Left",{"-0.9848 * 0.0450","-0.1736 * 0.0450"},1},			//190
						{"HorizonDive_Left",{"-0.9659 * 0.0450","-0.2588 * 0.0450"},1},			//195
						{"HorizonDive_Left",{"-0.9397 * 0.0450","-0.3420 * 0.0450"},1},			//200
						{"HorizonDive_Left",{"-0.9063 * 0.0450","-0.4226 * 0.0450"},1},			//205
						{"HorizonDive_Left",{"-0.8660 * 0.0450","-0.5000 * 0.0450"},1},			//210
						{"HorizonDive_Left",{"-0.8192 * 0.0450","-0.5736 * 0.0450"},1},			//215
						{"HorizonDive_Left",{"-0.7660 * 0.0450","-0.6428 * 0.0450"},1},			//220
						{"HorizonDive_Left",{"-0.7071 * 0.0450","-0.7071 * 0.0450"},1},			//225
						{"HorizonDive_Left",{"-0.6428 * 0.0450","-0.7660 * 0.0450"},1},			//230
						{"HorizonDive_Left",{"-0.5736 * 0.0450","-0.8192 * 0.0450"},1},			//235
						{"HorizonDive_Left",{"-0.5000 * 0.0450","-0.8660 * 0.0450"},1},			//240
						{"HorizonDive_Left",{"-0.4226 * 0.0450","-0.9063 * 0.0450"},1},			//245
						{"HorizonDive_Left",{"-0.3420 * 0.0450","-0.9397 * 0.0450"},1},			//250
						{"HorizonDive_Left",{"-0.2588 * 0.0450","-0.9659 * 0.0450"},1},			//255
						{"HorizonDive_Left",{"-0.1736 * 0.0450","-0.9848 * 0.0450"},1},			//260
						{"HorizonDive_Left",{"-0.0872 * 0.0450","-0.9962 * 0.0450"},1},			//265
						{"HorizonDive_Left",{"-0.0000 * 0.0450","-1.0000 * 0.0450"},1},			//270
						//----------------------------------------------------------------------------------
						{"HorizonDive_Left",{"0.0872 * 0.0450","-0.9962 * 0.0450"},1},			//275
						{"HorizonDive_Left",{"0.1736 * 0.0450","-0.9848 * 0.0450"},1},			//280
						{"HorizonDive_Left",{"0.2588 * 0.0450","-0.9659 * 0.0450"},1},			//285
						{"HorizonDive_Left",{"0.3420 * 0.0450","-0.9397 * 0.0450"},1},			//290
						{"HorizonDive_Left",{"0.4226 * 0.0450","-0.9063 * 0.0450"},1},			//295
						{"HorizonDive_Left",{"0.5000 * 0.0450","-0.8660 * 0.0450"},1},			//300
						{"HorizonDive_Left",{"0.5736 * 0.0450","-0.8192 * 0.0450"},1},			//305
						{"HorizonDive_Left",{"0.6428 * 0.0450","-0.7660 * 0.0450"},1},			//310
						{"HorizonDive_Left",{"0.7071 * 0.0450","-0.7071 * 0.0450"},1},			//315
						{"HorizonDive_Left",{"0.7660 * 0.0450","-0.6428 * 0.0450"},1},			//320
						{"HorizonDive_Left",{"0.8192 * 0.0450","-0.5736 * 0.0450"},1},			//325
						{"HorizonDive_Left",{"0.8660 * 0.0450","-0.5000 * 0.0450"},1},			//330
						{"HorizonDive_Left",{"0.9063 * 0.0450","-0.4226 * 0.0450"},1},			//335
						{"HorizonDive_Left",{"0.9397 * 0.0450","-0.3420 * 0.0450"},1},			//340
						{"HorizonDive_Left",{"0.9659 * 0.0450","-0.2588 * 0.0450"},1},			//345
						{"HorizonDive_Left",{"0.9848 * 0.0450","-0.1736 * 0.0450"},1},			//350
						{"HorizonDive_Left",{"0.9962 * 0.0450","-0.0872 * 0.0450"},1},			//355
						{"HorizonDive_Left",{"1.0000 * 0.0450","-0.0000 * 0.0450"},1},			//360
						//----------------------------------------------------------------------------------
						{"HorizonDive_Left",{"1.0000 * 0.0500","-0.0000 * 0.0450"},1}			//360
					};
				};
			};
			class Pitch_circle_Right
			{
				type="group";
				clipTL[]={0.1,0.0};
				clipBR[]={1.0,1.0};
				class Pitch_Circle_Group_Right
				{
					type = "line";
					width = 4.0;
					points[] = 
					{
						{"HorizonDive_Right",{"-1.0000 * 0.0500","-0.0000 * 0.0450"},1},			//180
						//----------------------------------------------------------------------------------
						{"HorizonDive_Right",{"-1.0000 * 0.0450","-0.0000 * 0.0450"},1},			//180
						{"HorizonDive_Right",{"-0.9962 * 0.0450","-0.0872 * 0.0450"},1},			//185
						{"HorizonDive_Right",{"-0.9848 * 0.0450","-0.1736 * 0.0450"},1},			//190
						{"HorizonDive_Right",{"-0.9659 * 0.0450","-0.2588 * 0.0450"},1},			//195
						{"HorizonDive_Right",{"-0.9397 * 0.0450","-0.3420 * 0.0450"},1},			//200
						{"HorizonDive_Right",{"-0.9063 * 0.0450","-0.4226 * 0.0450"},1},			//205
						{"HorizonDive_Right",{"-0.8660 * 0.0450","-0.5000 * 0.0450"},1},			//210
						{"HorizonDive_Right",{"-0.8192 * 0.0450","-0.5736 * 0.0450"},1},			//215
						{"HorizonDive_Right",{"-0.7660 * 0.0450","-0.6428 * 0.0450"},1},			//220
						{"HorizonDive_Right",{"-0.7071 * 0.0450","-0.7071 * 0.0450"},1},			//225
						{"HorizonDive_Right",{"-0.6428 * 0.0450","-0.7660 * 0.0450"},1},			//230
						{"HorizonDive_Right",{"-0.5736 * 0.0450","-0.8192 * 0.0450"},1},			//235
						{"HorizonDive_Right",{"-0.5000 * 0.0450","-0.8660 * 0.0450"},1},			//240
						{"HorizonDive_Right",{"-0.4226 * 0.0450","-0.9063 * 0.0450"},1},			//245
						{"HorizonDive_Right",{"-0.3420 * 0.0450","-0.9397 * 0.0450"},1},			//250
						{"HorizonDive_Right",{"-0.2588 * 0.0450","-0.9659 * 0.0450"},1},			//255
						{"HorizonDive_Right",{"-0.1736 * 0.0450","-0.9848 * 0.0450"},1},			//260
						{"HorizonDive_Right",{"-0.0872 * 0.0450","-0.9962 * 0.0450"},1},			//265
						{"HorizonDive_Right",{"-0.0000 * 0.0450","-1.0000 * 0.0450"},1},			//270
						//----------------------------------------------------------------------------------
						{"HorizonDive_Right",{"0.0872 * 0.0450","-0.9962 * 0.0450"},1},			//275
						{"HorizonDive_Right",{"0.1736 * 0.0450","-0.9848 * 0.0450"},1},			//280
						{"HorizonDive_Right",{"0.2588 * 0.0450","-0.9659 * 0.0450"},1},			//285
						{"HorizonDive_Right",{"0.3420 * 0.0450","-0.9397 * 0.0450"},1},			//290
						{"HorizonDive_Right",{"0.4226 * 0.0450","-0.9063 * 0.0450"},1},			//295
						{"HorizonDive_Right",{"0.5000 * 0.0450","-0.8660 * 0.0450"},1},			//300
						{"HorizonDive_Right",{"0.5736 * 0.0450","-0.8192 * 0.0450"},1},			//305
						{"HorizonDive_Right",{"0.6428 * 0.0450","-0.7660 * 0.0450"},1},			//310
						{"HorizonDive_Right",{"0.7071 * 0.0450","-0.7071 * 0.0450"},1},			//315
						{"HorizonDive_Right",{"0.7660 * 0.0450","-0.6428 * 0.0450"},1},			//320
						{"HorizonDive_Right",{"0.8192 * 0.0450","-0.5736 * 0.0450"},1},			//325
						{"HorizonDive_Right",{"0.8660 * 0.0450","-0.5000 * 0.0450"},1},			//330
						{"HorizonDive_Right",{"0.9063 * 0.0450","-0.4226 * 0.0450"},1},			//335
						{"HorizonDive_Right",{"0.9397 * 0.0450","-0.3420 * 0.0450"},1},			//340
						{"HorizonDive_Right",{"0.9659 * 0.0450","-0.2588 * 0.0450"},1},			//345
						{"HorizonDive_Right",{"0.9848 * 0.0450","-0.1736 * 0.0450"},1},			//350
						{"HorizonDive_Right",{"0.9962 * 0.0450","-0.0872 * 0.0450"},1},			//355
						{"HorizonDive_Right",{"1.0000 * 0.0450","-0.0000 * 0.0450"},1},			//360
						//----------------------------------------------------------------------------------
						{"HorizonDive_Right",{"1.0000 * 0.0500","-0.0000 * 0.0450"},1}			//360
					};
				};
			};
			class Stall_Text
			{
				type = "group";
				condition = "stall";
				cosslor[] = {1.0,0.0,0.0};
				blinkingPattern[] = {0.2,0.2};
				blinkingStartsOn = 1;
				class StallText
				{
					type = "text";
					source = "static";
					text = "STALL";
					align = "center";
					scale = 1;
					pos[] = {{ 0.5,"0.53 - 0.25" },1};
					right[] = {{ 0.55,"0.53 - 0.25" },1};
					down[] = {{ 0.5,"0.53 - 0.20" },1};
				};
			};
			class Aiming_Crosshair
			{
				type="group";
				condition="on";
				class MachineGunCrosshair
				{
					type="line";
					width=3;
					points[] = 
					{
						{ { "0.020 + 0.5 + 0.02",0.5 },1 },
						{ { "0.010 + 0.5 + 0.02",0.5 },1 },
						{},
						{ { 0.5,"0.020 + 0.5 + 0.02" },1 },
						{ { 0.5,"0.010 + 0.5 + 0.02"},1 },
						{},
						{ { "-0.020 + 0.5 - 0.02", 0.5 },1 },
						{ { "-0.010 + 0.5 - 0.02", 0.5 },1 },
						{},
						{ { 0.5,"-0.020 + 0.5 - 0.02" },1 },
						{ { 0.5,"-0.010 + 0.5 - 0.02" },1 }/*,
						{},
						{{" -0.002 + 0.5" , "0 + 0.5" },1},
						{{" 0.002 + 0.5" , "0 + 0.5" },1},
						{ },
						{{" -0.0 + 0.5" , "0.002 + 0.5" },1},
						{{" 0.0 + 0.5" , "-0.002 + 0.5" },1}*/
					};
				};					
			};
			class Weapon_Name
			{
				type="text";
				source="weapon";
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.83,0.81},
					1
				};
				right[]=
				{
					{0.86,0.81},
					1
				};
				down[]=
				{
					{0.83,0.84},
					1
				};
			};
			class GUN_group
			{
				condition="mgun";
				type="group";
				class rangeHMD
				{
					type="text";
					source="targetDist";
					sourceScale=1;
					align="center";
					scale=1;
					pos[]=
					{
						{0.50,0.82},
						1
					};
					right[]=
					{
						{0.55,0.82},
						1
					};
					down[]=
					{
						{0.50,0.87},
						1
					};
				};
				class MasterMODE
				{
					type="text";
					source="static";
					text="GUNS";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=
					{
						{0.83,0.77},
						1
					};
					right[]=
					{
						{0.87,0.77},
						1
					};
					down[]=
					{
						{0.83,0.81},
						1
					};
				};
				class AmmoCount
				{
					type="text";
					source="ammo";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=
					{
						{0.83,0.84},
						1
					};
					right[]=
					{
						{0.86,0.84},
						1
					};
					down[]=
					{
						{0.83,0.87},
						1
					};
				};
			};
			class RKT_group
			{
				condition="rocket";
				type="group";
				class rangeHMD
				{
					type="text";
					source="targetDist";
					sourceScale=1;
					align="center";
					scale=1;
					pos[]=
					{
						{0.50,0.82},
						1
					};
					right[]=
					{
						{0.55,0.82},
						1
					};
					down[]=
					{
						{0.50,0.87},
						1
					};
				};
				class MasterMODE
				{
					type="text";
					source="static";
					text="A-G";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=
					{
						{0.83,0.77},
						1
					};
					right[]=
					{
						{0.87,0.77},
						1
					};
					down[]=
					{
						{0.83,0.81},
						1
					};
				};
				class AmmoCount
				{
					type="text";
					source="ammo";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=
					{
						{0.83,0.84},
						1
					};
					right[]=
					{
						{0.86,0.84},
						1
					};
					down[]=
					{
						{0.83,0.87},
						1
					};
				};
			};
			class AGM_group
			{
				condition="ATmissile";
				type="group";
				class rangeHMD
				{
					type="text";
					source="targetDist";
					sourceScale=1;
					align="center";
					scale=1;
					pos[]=
					{
						{0.50,0.82},
						1
					};
					right[]=
					{
						{0.55,0.82},
						1
					};
					down[]=
					{
						{0.50,0.87},
						1
					};
				};
				class MasterMODE
				{
					type="text";
					source="static";
					text="A-G";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=
					{
						{0.83,0.77},
						1
					};
					right[]=
					{
						{0.87,0.77},
						1
					};
					down[]=
					{
						{0.83,0.81},
						1
					};
				};
				class AmmoCount
				{
					type="text";
					source="ammo";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=
					{
						{0.83,0.84},
						1
					};
					right[]=
					{
						{0.86,0.84},
						1
					};
					down[]=
					{
						{0.83,0.87},
						1
					};
				};
				class AGM_Crosshair
				{
					type="line";
					width=4;
					points[]=
					{
						{"WeaponAim",{-0.15,"-0.15 + 0.02"},1},
						{"WeaponAim",{-0.15,-0.15},1},
						{"WeaponAim",{"-0.15 + 0.02",-0.15},1},
						{},
						{"WeaponAim",{"0.15 - 0.02",-0.15},1},
						{"WeaponAim",{0.15,-0.15},1},
						{"WeaponAim",{0.15,"-0.15 + 0.02"},1},
						{},
						{"WeaponAim",{0.15,"0.15 - 0.02"},1},
						{"WeaponAim",{0.15,0.15},1},
						{"WeaponAim",{"0.15 - 0.02",0.15},1},
						{},
						{"WeaponAim",{"-0.15 + 0.02",0.15},1},
						{"WeaponAim",{-0.15,0.15},1},
						{"WeaponAim",{-0.15,"0.15 - 0.02"},1}
					};
				};
			};
			class AAM_group
			{
				condition="AAmissile";
				type="group";
				class rangeHMD
				{
					type="text";
					source="targetDist";
					sourceScale=1;
					align="center";
					scale=1;
					pos[]=
					{
						{0.50,0.82},
						1
					};
					right[]=
					{
						{0.55,0.82},
						1
					};
					down[]=
					{
						{0.50,0.87},
						1
					};
				};
				class MasterMODE
				{
					type="text";
					source="static";
					text="A-A";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=
					{
						{0.83,0.77},
						1
					};
					right[]=
					{
						{0.87,0.77},
						1
					};
					down[]=
					{
						{0.83,0.81},
						1
					};
				};
				class AmmoCount
				{
					type="text";
					source="ammo";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=
					{
						{0.83,0.84},
						1
					};
					right[]=
					{
						{0.86,0.84},
						1
					};
					down[]=
					{
						{0.83,0.87},
						1
					};
				};
				class AAM_RangeBand
				{
					type="line";
					width=2;
					points[]=
					{
						
						{
							"RangeBone",
							{-0.00,0.0},
							1
						},
						
						{
							"RangeBone",
							{-0.02,-0.01},
							1
						},
						
						{
							"RangeBone",
							{-0.02,0.01},
							1
						},
						
						{
							"RangeBone",
							{-0.00,0.0},
							1
						}
					};
				};
				class AAM_Range_marks
				{
					type="line";
					width=4;
					points[] = 
					{
						///////////////////////////////// range marks
						{ { 0.81,0.30 },1 },
						{ { 0.79,0.30 },1 },
						{},
						{ { 0.81,0.40 },1 },
						{ { 0.79,0.40 },1 },
						{},
						{ { 0.81,0.50 },1 },
						{ { 0.79,0.50 },1 },
						{},
						{ { 0.81,0.60 },1 },
						{ { 0.79,0.60 },1 },
						{},
						{ { 0.81,0.70 },1 },
						{ { 0.79,0.70 },1 },
						{},
						{ { 0.80,0.30 },1 }, // line
						{ { 0.80,0.50 },1 },
						{},
						{ { 0.79,0.50 },1 }, // line
						{ { 0.79,0.70 },1 },
						{},
						{ { 0.81,0.50 },1 }, // line
						{ { 0.81,0.70 },1 },
						{}
					};
				};
				class AAM_Perfect_Circle
				{
					type="line";
					width=7;
					points[]=
					{
						{"WeaponAim",{"1.0000 * 0.1500","0.0000 * 0.1500"},1},			//0
						{"WeaponAim",{"0.9962 * 0.1500","0.0872 * 0.1500"},1},			//5
						{"WeaponAim",{"0.9848 * 0.1500","0.1736 * 0.1500"},1},			//10
						{"WeaponAim",{"0.9659 * 0.1500","0.2588 * 0.1500"},1},			//15
						{"WeaponAim",{"0.9397 * 0.1500","0.3420 * 0.1500"},1},			//20
						{"WeaponAim",{"0.9063 * 0.1500","0.4226 * 0.1500"},1},			//25
						{"WeaponAim",{"0.8660 * 0.1500","0.5000 * 0.1500"},1},			//30
						{"WeaponAim",{"0.8192 * 0.1500","0.5736 * 0.1500"},1},			//35
						{"WeaponAim",{"0.7660 * 0.1500","0.6428 * 0.1500"},1},			//40
						{"WeaponAim",{"0.7071 * 0.1500","0.7071 * 0.1500"},1},			//45
						{"WeaponAim",{"0.6428 * 0.1500","0.7660 * 0.1500"},1},			//50
						{"WeaponAim",{"0.5736 * 0.1500","0.8192 * 0.1500"},1},			//55
						{"WeaponAim",{"0.5000 * 0.1500","0.8660 * 0.1500"},1},			//60
						{"WeaponAim",{"0.4226 * 0.1500","0.9063 * 0.1500"},1},			//65
						{"WeaponAim",{"0.3420 * 0.1500","0.9397 * 0.1500"},1},			//70
						{"WeaponAim",{"0.2588 * 0.1500","0.9659 * 0.1500"},1},			//75
						{"WeaponAim",{"0.1736 * 0.1500","0.9848 * 0.1500"},1},			//80
						{"WeaponAim",{"0.0872 * 0.1500","0.9962 * 0.1500"},1},			//85
						{"WeaponAim",{"0.0000 * 0.1500","1.0000 * 0.1500"},1},			//90
						//----------------------------------------------------------------------------------
						{"WeaponAim",{"-0.0872 * 0.1500","0.9962 * 0.1500"},1},			//95
						{"WeaponAim",{"-0.1736 * 0.1500","0.9848 * 0.1500"},1},			//100
						{"WeaponAim",{"-0.2588 * 0.1500","0.9659 * 0.1500"},1},			//105
						{"WeaponAim",{"-0.3420 * 0.1500","0.9397 * 0.1500"},1},			//110
						{"WeaponAim",{"-0.4226 * 0.1500","0.9063 * 0.1500"},1},			//115
						{"WeaponAim",{"-0.5000 * 0.1500","0.8660 * 0.1500"},1},			//120
						{"WeaponAim",{"-0.5736 * 0.1500","0.8192 * 0.1500"},1},			//125
						{"WeaponAim",{"-0.6428 * 0.1500","0.7660 * 0.1500"},1},			//130
						{"WeaponAim",{"-0.7071 * 0.1500","0.7071 * 0.1500"},1},			//135
						{"WeaponAim",{"-0.7660 * 0.1500","0.6428 * 0.1500"},1},			//140
						{"WeaponAim",{"-0.8192 * 0.1500","0.5736 * 0.1500"},1},			//145
						{"WeaponAim",{"-0.8660 * 0.1500","0.5000 * 0.1500"},1},			//150
						{"WeaponAim",{"-0.9063 * 0.1500","0.4226 * 0.1500"},1},			//155
						{"WeaponAim",{"-0.9397 * 0.1500","0.3420 * 0.1500"},1},			//160
						{"WeaponAim",{"-0.9659 * 0.1500","0.2588 * 0.1500"},1},			//165
						{"WeaponAim",{"-0.9848 * 0.1500","0.1736 * 0.1500"},1},			//170
						{"WeaponAim",{"-0.9962 * 0.1500","0.0872 * 0.1500"},1},			//175
						{"WeaponAim",{"-1.0000 * 0.1500","0.0000 * 0.1500"},1},			//180
						//----------------------------------------------------------------------------------
						{"WeaponAim",{"-0.9962 * 0.1500","-0.0872 * 0.1500"},1},		//185
						{"WeaponAim",{"-0.9848 * 0.1500","-0.1736 * 0.1500"},1},		//190
						{"WeaponAim",{"-0.9659 * 0.1500","-0.2588 * 0.1500"},1},		//195
						{"WeaponAim",{"-0.9397 * 0.1500","-0.3420 * 0.1500"},1},		//200
						{"WeaponAim",{"-0.9063 * 0.1500","-0.4226 * 0.1500"},1},		//205
						{"WeaponAim",{"-0.8660 * 0.1500","-0.5000 * 0.1500"},1},		//210
						{"WeaponAim",{"-0.8192 * 0.1500","-0.5736 * 0.1500"},1},		//215
						{"WeaponAim",{"-0.7660 * 0.1500","-0.6428 * 0.1500"},1},		//220
						{"WeaponAim",{"-0.7071 * 0.1500","-0.7071 * 0.1500"},1},		//225
						{"WeaponAim",{"-0.6428 * 0.1500","-0.7660 * 0.1500"},1},		//230
						{"WeaponAim",{"-0.5736 * 0.1500","-0.8192 * 0.1500"},1},		//235
						{"WeaponAim",{"-0.5000 * 0.1500","-0.8660 * 0.1500"},1},		//240
						{"WeaponAim",{"-0.4226 * 0.1500","-0.9063 * 0.1500"},1},		//245
						{"WeaponAim",{"-0.3420 * 0.1500","-0.9397 * 0.1500"},1},		//250
						{"WeaponAim",{"-0.2588 * 0.1500","-0.9659 * 0.1500"},1},		//255
						{"WeaponAim",{"-0.1736 * 0.1500","-0.9848 * 0.1500"},1},		//260
						{"WeaponAim",{"-0.0872 * 0.1500","-0.9962 * 0.1500"},1},		//265
						{"WeaponAim",{"-0.0000 * 0.1500","-1.0000 * 0.1500"},1},		//270
						//----------------------------------------------------------------------------------
						{"WeaponAim",{"0.0872 * 0.1500","-0.9962 * 0.1500"},1},			//275
						{"WeaponAim",{"0.1736 * 0.1500","-0.9848 * 0.1500"},1},			//280
						{"WeaponAim",{"0.2588 * 0.1500","-0.9659 * 0.1500"},1},			//285
						{"WeaponAim",{"0.3420 * 0.1500","-0.9397 * 0.1500"},1},			//290
						{"WeaponAim",{"0.4226 * 0.1500","-0.9063 * 0.1500"},1},			//295
						{"WeaponAim",{"0.5000 * 0.1500","-0.8660 * 0.1500"},1},			//300
						{"WeaponAim",{"0.5736 * 0.1500","-0.8192 * 0.1500"},1},			//305
						{"WeaponAim",{"0.6428 * 0.1500","-0.7660 * 0.1500"},1},			//310
						{"WeaponAim",{"0.7071 * 0.1500","-0.7071 * 0.1500"},1},			//315
						{"WeaponAim",{"0.7660 * 0.1500","-0.6428 * 0.1500"},1},			//320
						{"WeaponAim",{"0.8192 * 0.1500","-0.5736 * 0.1500"},1},			//325
						{"WeaponAim",{"0.8660 * 0.1500","-0.5000 * 0.1500"},1},			//330
						{"WeaponAim",{"0.9063 * 0.1500","-0.4226 * 0.1500"},1},			//335
						{"WeaponAim",{"0.9397 * 0.1500","-0.3420 * 0.1500"},1},			//340
						{"WeaponAim",{"0.9659 * 0.1500","-0.2588 * 0.1500"},1},			//345
						{"WeaponAim",{"0.9848 * 0.1500","-0.1736 * 0.1500"},1},			//350
						{"WeaponAim",{"0.9962 * 0.1500","-0.0872 * 0.1500"},1},			//355
						{"WeaponAim",{"1.0000 * 0.1500","-0.0000 * 0.1500"},1}			//360
					};
				};
			};
			class Bomb_group
			{
				condition="bomb";
				type="group";
				class rangeHMD
				{
					type="text";
					source="targetDist";
					sourceScale=1;
					align="center";
					scale=1;
					pos[]=
					{
						{0.50,0.82},
						1
					};
					right[]=
					{
						{0.55,0.82},
						1
					};
					down[]=
					{
						{0.50,0.87},
						1
					};
				};
				class MasterMODE
				{
					type="text";
					source="static";
					text="A-G";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=
					{
						{0.83,0.77},
						1
					};
					right[]=
					{
						{0.87,0.77},
						1
					};
					down[]=
					{
						{0.83,0.81},
						1
					};
				};
				class AmmoCount
				{
					type="text";
					source="ammo";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=
					{
						{0.83,0.84},
						1
					};
					right[]=
					{
						{0.86,0.84},
						1
					};
					down[]=
					{
						{0.83,0.87},
						1
					};
				};
			};
		};
		helmetMountedDisplay=1;
		helmetPosition[]={-0.035,0.0365,0.1};
		helmetRight[]={0.070000001,0,0};
		helmetDown[]={-0,-0.070000001,0};
	};
};