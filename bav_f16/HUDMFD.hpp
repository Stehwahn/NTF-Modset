// Created By geraldbolso1899 (AKA Kimi)
// 20150207

class MFD
{
	#include "MFD\hmd.hpp"
	class HUD_1
	{
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft = 0.2; //0.07;
		borderRight = 0.2; //0.07;
		borderTop = 0.2;
		borderBottom = 0.2;
		color[]={0.082000002,0.40799999,0.039000001,2};
		enableParallax = 1;
		class Bones
		{
			
			class Target {
						type = "vector";
						source = "target";
						#include "MFD\wektor.hpp"
					};

			
					
			class ForwardVec
			{
				type = "vector";
				source = "forward";
				pos0[] = {0.0,0.0};
				pos10[] = {0.0,0.0};
			};
			class Airport1
			{
				type = "vector";
				source = "airportCorner1";
				pos0[] = {0.5,0.53};
				pos10[] = {1.38,1.4};
			};
			class Airport2: Airport1
			{
				source = "airportCorner2";
			};
			class Airport3: Airport1
			{
				source = "airportCorner3";
			};
			class Airport4: Airport1
			{
				source = "airportCorner4";
			};
			class ILS_H
			{
				type = "ils";
				pos0[] = {0.5,0.3380};
				pos3[] = {0.7,0.3380};
			};
			class ILS_W: ILS_H
			{
				pos3[] = {0.5,0.5380};
			};
			class HorizonBankRot
			{
				type="rotational";
				source="horizonBank";
				center[]={0.5,0.4};
				min=-0.52359998;
				max=0.52359998;
				//max=0.52359998;
				minAngle=-45;
				maxAngle=45;
				aspectRatio=1;
			};
			class RadarAltitudeBone
			{
				type="linear";
				source="altitudeAGL";
				sourceScale=1; // meters
				//hideValue=1500;
				min=0;
				max=500;
				minPos[]={0.71,0.30};
				maxPos[]={0.71,0.50};
			};
		};
		class Draw
		{
			alpha = 2;
			color[]={0.082000002,0.40799999,0.039000001,2};
			condition = "on";
			
			
			
			
			
			
			
			
			
			
			class Bank_Marks
			{
				type="line";
				width=5;
				points[]=
				{
					////////////////////////////////////////////////////// LEFT
					{{0.46,0.6264},1},			// 10º r25
					{{0.4549,"1 - 0.2439 - 0.1"},1},			// 10º r26
					{},	
					{{0.4213,0.6161},1},			// 20º r25
					{{0.4111,"1 - 0.2557 - 0.1"},1},			// 20º r26
					{},	
					{{0.385,0.5992},1},			// 30º r25
					{{0.3650,"1 - 0.2662 - 0.1"},1},			// 30º r27
					{},	
					{{0.3373,0.5627},1}, 			// 45º r25
					{{0.3091,"1 - 0.3091 - 0.1"},1},			// 45º r27
					{},	
					/////////////////////////////////////////////////////// RIGHT
					{{0.54,0.6264},1},	// 10º r25
					{{"1 - 0.4549","1 - 0.2439 - 0.1"},1},	// 10º r26
					{},	
					{{0.5785,0.6161},1},	// 20º r25
					{{"1 - 0.411)","1 - 0.2557 - 0.1"},1},	// 20º r26
					{},	
					{{0.615,0.5992},1},	// 30º r25
					{{"1 - 0.3650","1 - 0.2662 - 0.1"},1},	// 30º r27
					{},	
					{{0.6627,0.5627},1}, 	// 45º r25
					{{"1 - 0.3091","1 - 0.3091 - 0.1"},1},	// 45º r27
					{},	
					/////////////////////////////////////////////////////// CENTER
					{{0.5,0.63},1}, 		// 0º r25
					{{0.5,"1 - (0.5 - 0.27) - 0.1"},1}		// 0º r27
				};
			};
			class Bank_Indicator
			{
				type="line";
				width=5;
				points[]=
				{
					{"HorizonBankRot",{0		, -0.27	},1},
					{"HorizonBankRot",{-0.011	, -0.293	},1},
					{"HorizonBankRot",{0.011		, -0.293	},1},
					{"HorizonBankRot",{0		, -0.27	},1}
				};
			};
			
			class GearGroup
			{
				type="group";
				condition="ils";
				class GearText
				{
					type="text";
					source="static";
					text="GEAR";
					align="left";
					width=1;
					scale=1;
					pos[]=	{{0.165 			,0.690			},1};
					right[]={{"0.165 + 0.040"	,0.690			},1};
					down[]=	{{0.165 			,"0.690 + 0.040"},1};
				};
				class radarbanda
				{
					type="line";
					width=4;
					points[]=
					{
						{
							"RadarAltitudeBone",
							{-0.005,0.005},
							1
						},
						{
							"RadarAltitudeBone",
							{-0.005,0},
							1
						},
						{
							"RadarAltitudeBone",
							{0,0},
							1
						},
						{{ 0.71,"0.60 - 0.1" },1 },
						{ },
						
						{{ 0.71,"0.40 - 0.1" },1 },  
						{{ 0.72,"0.40 - 0.1" },1 },
						{ },
						{{ 0.71,"0.44 - 0.1" },1 },  
						{{ 0.72,"0.44 - 0.1" },1 },
						{ },
						{{ 0.71,"0.48 - 0.1" },1 },  
						{{ 0.72,"0.48 - 0.1" },1 },
						{ },
						{{ 0.71,"0.52 - 0.1" },1 },  
						{{ 0.72,"0.52 - 0.1" },1 },
						{ },
						{{ 0.71,"0.56 - 0.1" },1 },  
						{{ 0.72,"0.56 - 0.1" },1 },
						{ },
						{{ 0.71,"0.60 - 0.1" },1 },  
						{{ 0.72,"0.60 - 0.1" },1 }
					};
				};
				class radartext_5
				{
					type="text";
					source="static";
					text="5";
					align="right";
					scale=1;
					pos[]= 		{{0.721,"0.385 + 0.00 - 0.1"},1};
					right[]=	{{0.751,"0.385 + 0.00 - 0.1"},1};
					down[]=		{{0.721,"0.415 + 0.00 - 0.1"},1};
				};
				class radartext_4
				{
					type="text";
					source="static";
					text="4";
					align="right";
					scale=1;
					pos[]= 		{{0.721,"0.385 + 0.04 - 0.1"},1};
					right[]=	{{0.751,"0.385 + 0.04 - 0.1"},1};
					down[]=		{{0.721,"0.415 + 0.04 - 0.1"},1};
				};
				class radartext_3
				{
					type="text";
					source="static";
					text="3";
					align="right";
					scale=1;
					pos[]= 		{{0.721,"0.385 + 0.08 - 0.1"},1};
					right[]=	{{0.751,"0.385 + 0.08 - 0.1"},1};
					down[]=		{{0.721,"0.415 + 0.08 - 0.1"},1};
				};
				class radartext_2
				{
					type="text";
					source="static";
					text="2";
					align="right";
					scale=1;
					pos[]= 		{{0.721,"0.385 + 0.120 - 0.1"},1};
					right[]=	{{0.751,"0.385 + 0.120 - 0.1"},1};
					down[]=		{{0.721,"0.415 + 0.120 - 0.1"},1};
				};
				class radartext_1
				{
					type="text";
					source="static";
					text="1";
					align="right";
					scale=1;
					pos[]= 		{{0.721,"0.385 + 0.160 - 0.1"},1};
					right[]=	{{0.751,"0.385 + 0.160 - 0.1"},1};
					down[]=		{{0.721,"0.415 + 0.160 - 0.1"},1};
				};
				class radartext_0
				{
					type="text";
					source="static";
					text="0";
					align="right";
					scale=1;
					pos[]= 		{{0.721,"0.385 + 0.200 - 0.1"},1};
					right[]=	{{0.751,"0.385 + 0.200 - 0.1"},1};
					down[]=		{{0.721,"0.415 + 0.200 - 0.1"},1};
				};
			};
			class FLAPSGroup
			{
				type="group";
				condition="flaps";
				class FLAPSText
				{
					type="text";
					source="static";
					text="FLAPS";
					align="left";
					width=1;
					scale=1;
					pos[]=	{{0.165 			,"0.690	+ 0.05"			},1};
					right[]={{"0.165 + 0.040"	,"0.690	+ 0.05"			},1};
					down[]=	{{0.165 			,"0.690 + 0.05 + 0.040"	},1};
				};
			};
			class LightsGroup
			{
				type="group";
				condition="lights";
				class LightsText
				{
					type="text";
					source="static";
					text="LLS";
					align="left";
					width=1;
					scale=1;
					pos[]=	{{0.165 			,"0.690	+ 0.10"			},1};
					right[]={{"0.165 + 0.040"	,"0.690	+ 0.10"		},1};
					down[]=	{{0.165 			,"0.690 + 0.10 + 0.040"	},1};
				};
			};
			class CollisionLightsGroup
			{
				type="group";
				condition="collisionlights";
				class CollisionLightsText
				{
					type="text";
					source="static";
					text="A-COL";
					align="left";
					width=1;
					scale=1;
					pos[]=	{{0.165 			,"0.690	+ 0.15"			},1};
					right[]={{"0.165 + 0.040"	,"0.690	+ 0.15"			},1};
					down[]=	{{0.165 			,"0.690 + 0.15 + 0.040"	},1};
				};
			};
			
			
			class ILS_Bars
			{
				condition = "ils";
				class Glideslope
				{
					clipTL[] = {0.0,0.0};
					clipBR[] = {1.0,1.0};
					class ILS
					{
						type = "line";
						width=2.5;
						points[] = 
						{
							{ "ForwardVec",1,"ILS_W",1,{ -0.1,0 },1 },
							{ "ForwardVec",1,"ILS_W",1,{ 0.1,0 },1 },
							{  },
							{ "ForwardVec",1,"ILS_W",1,{ 0,0.01 },1 },
							{ "ForwardVec",1,"ILS_W",1,{ 0,-0.01 },1 },
							{  },
							{ "ForwardVec",1,"ILS_W",1,{ 0.05,0.01 },1 },
							{ "ForwardVec",1,"ILS_W",1,{ 0.05,-0.01 },1 },
							{  },
							{ "ForwardVec",1,"ILS_W",1,{ 0.1,0.01 },1 },
							{ "ForwardVec",1,"ILS_W",1,{ 0.1,-0.01 },1 },
							{  },
							{ "ForwardVec",1,"ILS_W",1,{ -0.05,0.01 },1 },
							{ "ForwardVec",1,"ILS_W",1,{ -0.05,-0.01 },1 },
							{  },
							{ "ForwardVec",1,"ILS_W",1,{ -0.1,0.01 },1 },
							{ "ForwardVec",1,"ILS_W",1,{ -0.1,-0.01 },1 },
							{  },
							{ "ForwardVec",1,"ILS_H",1,{ 0,-0.1 },1 },
							{ "ForwardVec",1,"ILS_H",1,{ 0,0.1 },1 },
							{  },
							{ "ForwardVec",1,"ILS_H",1,{ 0.01,0 },1 },
							{ "ForwardVec",1,"ILS_H",1,{ -0.01,0 },1 },
							{  },
							{ "ForwardVec",1,"ILS_H",1,{ 0.01,0.05 },1 },
							{ "ForwardVec",1,"ILS_H",1,{ -0.01,0.05 },1 },
							{  },
							{ "ForwardVec",1,"ILS_H",1,{ 0.01,0.1 },1 },
							{ "ForwardVec",1,"ILS_H",1,{ -0.01,0.1 },1 },
							{  },
							{ "ForwardVec",1,"ILS_H",1,{ 0.01,-0.05 },1 },
							{ "ForwardVec",1,"ILS_H",1,{ -0.01,-0.05 },1 },
							{  },
							{ "ForwardVec",1,"ILS_H",1,{ 0.01,-0.1 },1 },
							{ "ForwardVec",1,"ILS_H",1,{ -0.01,-0.1 },1 },
						};
					};
				};
			};
		};
	};
	
	class HUD_Bars{
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft = 0.2; //0.07;
		borderRight = 0.2; //0.07;
		borderTop = -0.1;
		borderBottom = 0.5;
		color[]={0.082000002,0.40799999,0.039000001,2};
		enableParallax=1;
		class Bones
		{	
			};
		class Draw
		{
			alpha = 2;
			color[]={0.082000002,0.40799999,0.039000001,2};
			condition="on";
			
			class Static
			{
				clipTL[] = {0,0.1};
				clipBR[] = {1,0};
				type = "line";
				width = 5;
				points[] = 
				{
					{ { 0.195,0.400+0.2 },1 }, // speed arrow
					{ { 0.230,0.400+0.2 },1 },
					{ },
					{ { 0.805,0.400+0.2 },1 }, // altitude arrow
					{ { 0.770,0.400+0.2 },1 }
				};
			};
			
			class Right_box
			{
				type = "line";
				width = 3.0;
				points[] = 
				{
					{ { "1 - 0.0200"	,"0.400 - 0.025+0.2		"},1 },
					{ { "1 - 0.1500"	,"0.400 - 0.025	+0.2	"},1 },
					{ { "1 - 0.1650"	,"0.400	+0.2			"},1 },
					{ { "1 - 0.1500"	,"0.400 + 0.025 +0.2	"},1 },
					{ { "1 - 0.0200"	,"0.400 + 0.025 +0.2	"},1 },
					{ { "1 - 0.0200"	,"0.400 - 0.025	+0.2	"},1 }
				};
			};
			class Altitude_ASL_Number
			{
				type="text";
				scale=1;
				width = 1.0;
				align="left";
				source="altitudeASL";
				sourceScale=1;
				pos[]={{"1-0.04","0.40 - 0.035+0.2"},1};
				right[]={{"1 -0.04 + 0.06","0.40 - 0.035+0.2"},1};
				down[]={{"1-0.04","0.40 + 0.035+0.2"},1};
			};
			
			
			class Left_box
			{
				type = "line";
				width = 3.0;
				points[] = 
				{
					{ { 0.0200	,"0.400 - 0.025+0.2		"},1 },
					{ { 0.1500	,"0.400 - 0.025+0.2		"},1 },
					{ { 0.1650	,"0.400		   +0.2		"},1 },
					{ { 0.1500	,"0.400 + 0.025+0.2 	"},1 },
					{ { 0.0200	,"0.400 + 0.025+0.2 	"},1 },
					{ { 0.0200	,"0.400 - 0.025+0.2		"},1 }
				};
			};
			class SpeedNumber
			{
				type="text";
				align="left";
				scale=1;
				source="speed";
				width = 2.0;
				sourceScale=3.6;
				pos[]={{"0.15-0.01","0.40 - 0.035+0.2"},1};
				right[]={{"0.21-0.01","0.40 - 0.035+0.2"},1};
				down[]={{"0.15-0.01","0.40 + 0.035+0.2"},1};
			};
			
			class HUD_Normal{
				condition="aamissile<1";
				type="group"
				class HUD_Normal2{
					condition="activeSensorsOn";
					type="group"
						class HUD_Normal3{
						#include "MFD\speed.hpp"
						#include "MFD\alt.hpp"
						};
				};
			};
			class HUD_NormalOR{
				condition="(aamissile+activeSensorsOn)<1";
				type="group"
						class HUD_NormaOR1{
						#include "MFD\speed.hpp"
						#include "MFD\alt.hpp"
						};
				
			};
			class HUD_NormalOR2{
				condition="aamissile";
				type="group"
				class HUD_NormalOR22{
					condition="activeSensorsOn";
					type="group"
						class HUD_NormalOR23{
						#include "MFD\speed.hpp"
						#include "MFD\alt.hpp"
						};
				};
			};
			
			
			
			
			
			
			
			
			
		};
		
	};
	#include "MFD\back.hpp"
	class HUD_Horizon
	{
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft = -0.2;
		borderRight = -0.2;
		borderTop = -0.2;
		borderBottom = -0.2;
		color[]={0.082000002,0.40799999,0.039000001,2};
		enableParallax=1;
		class Bones
		{
			class ForwardVec
			{
				type = "vector";
				source = "forward";
				pos0[] = {0,0};
				pos10[] = {0,0};
			};
			class PlaneOrientation
			{
				type="fixed";
				pos[]={0.5,0.30};
			};
			class PlaneOrientation1
			{
				type="fixed";
				pos[]={0.5,0.30};
			};
			
			class Base_Vector
			{
				type = "vector";
				source="radar";
				//pos0[]=	{0.495,0.360};
				//pos10[]={1.200,1.065};
				#include "MFD\wektor.hpp"
			};
			class RadarContact: Base_Vector
			{
				//source="radar";
				//type = "vector";
				type="fixed";
				pos[]={0,0};
			};
			class WeaponAim: Base_Vector
			{
				//type = "vector";
				source = "weapon";
				//pos0[] = {0.5,0.35};
				//pos10[] = {" 0.5 + 0.253 "," 0.35 + 0.253 "};
			};
			
			class Velocity
			{
				type="vector";
				source="velocity";
				#include "MFD\wektor.hpp"
			};
			class Level0
			{
				type="horizon";
				pos0[]=	{0.500,0.350};
				pos10[]={0.900,0.700};
				//pos10[]={0.775,0.775};
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
			
			
		};
		class Draw
		{
			alpha = 2;
			color[]={0.082000002,0.40799999,0.039000001,2};
			condition="on";
			
			
			
			
			class MachineGunCrosshairGroupCross {
						type = "group";
						condition = "mgun";
			class PlaneOrientationCrosshair {
				clipTL[] = {0.000000, 1.000000};
				clipBR[] = {1.000000, 0.000000};
				type = "line";
				condition = "mgun";
				width = 1;
				points[] = {
				{"WeaponAim", {-0.0162, "0+0.047"}, 1},
				{"WeaponAim", {-0.0020, "0+0.047"}, 1},{},
				{"WeaponAim", {0.0048, "0+0.047"}, 1},
				{"WeaponAim", {0.01900, "0+0.047"}, 1}, {},// _
				
				{"WeaponAim", {0.0014, "-0.022500+0.047"}, 1},
				{"WeaponAim", {0.0014, "-0.0034+0.047"}, 1},{},
 				{"WeaponAim", {0.0014, "0.0034+0.047"}, 1},
				{"WeaponAim", {0.0014, "0.022500+0.047"}, 1}, {}};// |
			};
			};
			#include "MFD\ARM.hpp"
			
			class DogfightModeHorizon{
				condition="aamissile";
				type="group";
					class DogfightModeH1{
					condition="activeSensorsOn<1";
					type="group";
						class DogfightModeH2{
						#include "MFD\horizont2.hpp"							
						};	
				};	
			};	
			
			
			
			
			
			
			
			class HUD_Normal{
				condition="aamissile<1";
				type="group"
				class HUD_Normal2{
					condition="activeSensorsOn";
					type="group"
						class HUD_Normal3{
						
						#include "MFD\horizon.hpp"
						#include "MFD\mastermode.hpp"
						#include "MFD\misc.hpp"
						};
				};
			};
			class HUD_NormalOR{
				condition="(aamissile+activeSensorsOn)<1";
				type="group"
						class HUD_NormaOR1{
						
						#include "MFD\horizon.hpp"
						#include "MFD\mastermode.hpp"
						#include "MFD\misc.hpp"
						};
				
			};
			class HUD_NormalOR2{
				condition="aamissile";
				type="group"
				class HUD_NormalOR22{
					condition="activeSensorsOn";
					type="group"
						class HUD_NormalOR23{
						
						#include "MFD\horizon.hpp"
						#include "MFD\mastermode.hpp"
						#include "MFD\misc.hpp"
						};
				};
			};
			
			
			class GForce_Number
					{
						type="text";
						scale=1;
						source="gmeterGrav";
						sourceScale=0.1;
						sourcePrecision=1;
						align="right";
						pos[]= {{"0.695-0.050-0.277","0.945 - 0.89 + 0.15"}, 1};
						right[]= {{"0.72-0.050-0.277","0.945 - 0.89 + 0.15"}, 1};
						down[]= {{"0.695-0.050-0.277","0.975 - 0.89 + 0.15"}, 1};
					};
			
			
			class B_Text{
				type="text";
				align="right";
				source="static";
				text="B0";
				scale=1;
				pos[]= {{"0.695-0.080","1.024 - 0.89 + 0.35"}, 1};
				right[]= {{"0.715-0.080","1.024 - 0.89 + 0.35"}, 1};
				down[]= {{"0.695-0.080","1.054 - 0.89 + 0.35"}, 1};
			};
			class B_Number{
				type = "text";
				source = "targetDist";
				sourceScale = 0.001;
				sourceprecision = 1;
				sourceLength = 2;
				align = "right";
				scale = 1;
				pos[]= {{"0.695-0.06","1.024 - 0.89 + 0.35"}, 1};
				right[]= {{"0.715-0.06","1.024 - 0.89 + 0.35"}, 1};
				down[]= {{"0.695-0.06","1.054 - 0.89 + 0.35"}, 1};
			};
			class Coordinate_NumberX{
				type = "text";
				source = "coordinateX";
				sourceScale = 1;
				sourceprecision = 0;
				sourceLength = 2;
				refreshRate= 1;
				align = "right";
				scale = 1;
				pos[]= {{"0.695-0.080","1.043 - 0.89 + 0.35"}, 1};
				right[]= {{"0.715-0.080","1.043 - 0.89 + 0.35"}, 1};
				down[]= {{"0.695-0.080","1.073 - 0.89 + 0.35"}, 1};
			};
			
			
			
			
			
			
			
			
			
			
			
			
		};
	};
	class HUD_2_Weapons
	{
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft= 0;
		borderRight= 0;
		borderTop= 0;
		borderBottom= 0;
		color[]={0.082000002,0.40799999,0.039000001,2};
		enableParallax=1;
		
		class Bones
		{
			#include "MFD\aaHUDBone.hpp"
			class ForwardVec
			{
				type = "vector";
				source = "forward";
				pos0[] = {0.0,0.0};
				//pos10[] = {"0.253 + 0.0","0.253 + 0.0"};
				pos10[] = {0.0,0.0};
			};
			
			class WaypointHUD {
				source = "wppoint";
				type = "vector";
				#include "MFD\wektor.hpp"
			
			};
			class TargetingPodTarget {
						source = "pilotcamera";
						type = "vector";
						#include "MFD\wektor.hpp"
					};
			class Velocity
			{
				type="vector";
				source="velocity";
				//pos0[]=	{0.4950,0.3380};
				//pos10[]={1.1950,1.0405};
				#include "MFD\wektor.hpp"
			};
			class NormalizeBombCircle 
			{
						type = "normalizedorsmaller";
						limit = 0.050000;
						aspectRatio = 1.250000;
			};
			class NormalizeRktCircle 
			{
						type = "normalizedorsmaller";
						limit = 0.02;
						aspectRatio = 1.250000;
			};
			class Limit0109 {
						type = "limit";
						limits[]= {0.100000, 0.100000, 0.900000, 0.900000};
					};
			class Base_Vector
			{
				type = "vector";
				source="radar";
				//pos0[]=	{0.495,0.360};
				//pos10[]={1.200,1.065};
				#include "MFD\wektor.hpp"
			};
			class RadarContact: Base_Vector
			{
				//source="radar";
				//type = "vector";
				type="fixed";
				pos[]={0,0};
			};
			class WeaponAim: Base_Vector
			{
				//type = "vector";
				source = "weapon";
				//pos0[] = {0.5,0.35};
				//pos10[] = {" 0.5 + 0.253 "," 0.35 + 0.253 "};
			};
			class Middle
			{
				type = "vector";
				source = "weapon";
				pos0[]=	{0.4950,"0.3380-0.2"};
				pos10[]={1.1950,"1.0405-0.2"};
			};
			class TargetSelected: Base_Vector
			{
				//type = "vector";
				source = "target";
				//pos0[]={0.50,0.40};
				//pos10[]={1.325,1.225};
			};
			class RangeBone
			{
				type="linear";
				source="targetDist";
				sourceScale=1; //meters
				min=0;
				max=12000;
				minPos[]={0.29,0.30};
				maxPos[]={0.29,0.50};
			};
			class Gun_Range_Rot
			{
				type="rotational";
				source="targetDist";
				center[]={0.500,0.338};
				min=0;
				max=2000;
				minAngle=0;
				maxAngle=360;
			};
			class ImpactPoint
			{
				type = "vector";
				source = "ImpactPoint";
				pos0[]=	{0.4950,0.3380};
				pos10[]={1.1950,1.0405};
			};
			
			class ImpactPointRockets
			{
				type = "vector";
				source = "ImpactPoint";
				pos0[]=	{0.4950,"0.3480-0.05"};
				pos10[]={0.925,0.922};
			};
			class MissileFlightTimeRot1 {
						type = "rotational";
						source = "MissileFlightTime";
						sourceScale = 1.000000;
						center[]= {0, 0};
						min = 0;
						max = 0.250000;
						minAngle = 0;
						maxAngle = 9;
						aspectRatio = 1.250000;
					};

					class MissileFlightTimeRot2: MissileFlightTimeRot1 {
						maxAngle = 18;
						max = 0.5;
					};

					class MissileFlightTimeRot3: MissileFlightTimeRot1 {
						maxAngle = 27;
						max = 0.75;
					};

					class MissileFlightTimeRot4: MissileFlightTimeRot1 {
						maxAngle = 36;
						max = 1;
					};

					class MissileFlightTimeRot5: MissileFlightTimeRot1 {
						maxAngle = 45;
						max = 1.25;
					};
					
					class MissileFlightTimeRot6: MissileFlightTimeRot1 {
						maxAngle = 54;
						max = 1.5;
					};

					class MissileFlightTimeRot7: MissileFlightTimeRot1 {
						maxAngle = 63;
						max = 1.75;
					};

					class MissileFlightTimeRot8: MissileFlightTimeRot1 {
						maxAngle = 72;
						max = 2;
					};

					class MissileFlightTimeRot9: MissileFlightTimeRot1 {
						maxAngle = 81;
						max = 2.25;
					};

					class MissileFlightTimeRot10: MissileFlightTimeRot1 {
						maxAngle = 90;
						max = 2.5;
					};

					class MissileFlightTimeRot11: MissileFlightTimeRot1 {
						maxAngle = 99;
						max = 2.75;
					};

					class MissileFlightTimeRot12: MissileFlightTimeRot1 {
						maxAngle = 108;
						max = 3;
					};

					class MissileFlightTimeRot13: MissileFlightTimeRot1 {
						maxAngle = 117;
						max = 3.25;
					};

					class MissileFlightTimeRot14: MissileFlightTimeRot1 {
						maxAngle = 126;
						max = 3.5;
					};

					class MissileFlightTimeRot15: MissileFlightTimeRot1 {
						maxAngle = 135;
						max = 3.75;
					};

					class MissileFlightTimeRot16: MissileFlightTimeRot1 {
						maxAngle = 144;
						max = 4;
					};

					class MissileFlightTimeRot17: MissileFlightTimeRot1 {
						maxAngle = 153;
						max = 4.25;
					};

					class MissileFlightTimeRot18: MissileFlightTimeRot1 {
						maxAngle = 162;
						max = 4.5;
					};

					class MissileFlightTimeRot19: MissileFlightTimeRot1 {
						maxAngle = 171;
						max = 4.75;
					};

					class MissileFlightTimeRot20: MissileFlightTimeRot1 {
						maxAngle = 180;
						max = 5;
					};

					class MissileFlightTimeRot21: MissileFlightTimeRot1 {
						maxAngle = 189;
						max = 5.25
					};
					class MissileFlightTimeRot22: MissileFlightTimeRot1 {
						maxAngle = 198;
						max = 5.5;
					};
					class MissileFlightTimeRot23: MissileFlightTimeRot1 {
						maxAngle = 207;
						max = 5.75;
					};
					class MissileFlightTimeRot24: MissileFlightTimeRot1 {
						maxAngle = 216;
						max = 6;
					};
					class MissileFlightTimeRot25: MissileFlightTimeRot1 {
						maxAngle = 225;
						max = 6.25;
					};
					class MissileFlightTimeRot26: MissileFlightTimeRot1 {
						maxAngle = 234;
						max = 6.5;
					};
					class MissileFlightTimeRot27: MissileFlightTimeRot1 {
						maxAngle = 243;
						max = 6.75;
					};
					class MissileFlightTimeRot28: MissileFlightTimeRot1 {
						maxAngle = 252;
						max = 7;
					};
					class MissileFlightTimeRot29: MissileFlightTimeRot1 {
						maxAngle = 261;
						max = 7.25;
					};
					class MissileFlightTimeRot30: MissileFlightTimeRot1 {
						maxAngle = 270;
						max = 7.5;
					};
					class MissileFlightTimeRot31: MissileFlightTimeRot1 {
						maxAngle = 279;
						max = 7.75;
					};
					class MissileFlightTimeRot32: MissileFlightTimeRot1 {
						maxAngle = 288;
						max = 8;
					};
					class MissileFlightTimeRot33: MissileFlightTimeRot1 {
						maxAngle = 297;
						max = 8.25;
					};
					class MissileFlightTimeRot34: MissileFlightTimeRot1 {
						maxAngle = 306;
						max = 8.5;
					};
					class MissileFlightTimeRot35: MissileFlightTimeRot1 {
						maxAngle = 315;
						max = 8.75;
					};
					class MissileFlightTimeRot36: MissileFlightTimeRot1 {
						maxAngle = 324;
						max = 9;
					};
					class MissileFlightTimeRot37: MissileFlightTimeRot1 {
						maxAngle = 333;
						max = 9.25;
					};
					class MissileFlightTimeRot38: MissileFlightTimeRot1 {
						maxAngle = 342;
						max = 9.5;
					};
					class MissileFlightTimeRot39: MissileFlightTimeRot1 {
						maxAngle = 351;
						max = 9.75;
					};
					class MissileFlightTimeRot40: MissileFlightTimeRot1 {
						maxAngle = 360;
						max = 10;
					};
					#include "MFD\RangeRot.hpp"
					
			
		};
		class Draw
		{	color[]={0.082000002,0.40799999,0.039000001,2};
			//color[] = {0,0.3,0.05};
			alpha=2;
			clipTL[]={0,0};
			clipBR[]={1,1};
			condition="on";
			
		class TargetingPodCondition{
		condition="(ATmissile+missilelocked)<2";
		type = "group";
			class TargetingPodGroup {
						condition = "1-pilotcameralock";

						/*class TargetingPodDir {
							type = "line";
							width = 1;
							#include "MFD\wektor.hpp"
							points[]= {{"TargetingPodTarget", 1, {0.020806, 0.005173}, 1}, {"TargetingPodTarget", 1, {0.020806, -0.005173}, 1}, {}, {"TargetingPodTarget", 1, {0.017638, -0.014732}, 1}, {"TargetingPodTarget", 1, {0.011785, -0.022048}, 1}, {}, {"TargetingPodTarget", 1, {0.004138, -0.026007}, 1}, {"TargetingPodTarget", 1, {-0.004138, -0.026007}, 1}, {}, {"TargetingPodTarget", 1, {-0.011785, -0.022048}, 1}, {"TargetingPodTarget", 1, {-0.017638, -0.014732}, 1}, {}, {"TargetingPodTarget", 1, {-0.020806, -0.005173}, 1}, {"TargetingPodTarget", 1, {-0.020806, 0.005173}, 1}, {}, {"TargetingPodTarget", 1, {-0.017638, 0.014732}, 1}, {"TargetingPodTarget", 1, {-0.011785, 0.022048}, 1}, {}, {"TargetingPodTarget", 1, {-0.004138, 0.026007}, 1}, {"TargetingPodTarget", 1, {0.004138, 0.026007}, 1}, {}, {"TargetingPodTarget", 1, {0.011785, 0.022048}, 1}, {"TargetingPodTarget", 1, {0.017638, 0.014732}, 1}, {}, {"TargetingPodTarget", 1, {0.020806, 0.005173}, 1}, {"TargetingPodTarget", 1, {0.020806, -0.005173}, 1}, {}, {"TargetingPodTarget", 1, {0.017638, -0.014732}, 1}, {"TargetingPodTarget", 1, {0.011785, -0.022048}, 1}, {}, {"TargetingPodTarget", 1, {0.004138, -0.026007}, 1}, {"TargetingPodTarget", 1, {-0.004138, -0.026007}, 1}, {}, {"TargetingPodTarget", 1, {-0.011785, -0.022048}, 1}, {"TargetingPodTarget", 1, {-0.017638, -0.014732}, 1}, {}, {}};
						};*/
						class Targetting_pod_square {
							type = "line";
							width=1.5;
							points[]={
							{"ForwardVec",1,"TargetingPodTarget",1, "Limit0109", 1, {-0.008, 0.01000},1},
							{"ForwardVec",1,"TargetingPodTarget",1, "Limit0109", 1, {0.008, 0.01},1},
							{"ForwardVec",1,"TargetingPodTarget",1, "Limit0109", 1, {0.008, -0.01},1},
							{"ForwardVec",1,"TargetingPodTarget",1, "Limit0109", 1, {-0.008, -0.01},1},
							{"ForwardVec",1,"TargetingPodTarget",1, "Limit0109", 1, {-0.008, 0.01000},1}};
					};
						
						
					};

					
				
					class TargetingPodGroupOn {
						condition = "pilotcameralock";

						/*class TargetingPodDir2 {
							type = "line";
							width = 1;
							#include "MFD\wektor.hpp"
							points[]= {{"TargetingPodTarget", 1, {0.020806, 0.005173}, 1}, {"TargetingPodTarget", 1, {0.020806, -0.005173}, 1}, {}, {"TargetingPodTarget", 1, {0.017638, -0.014732}, 1}, {"TargetingPodTarget", 1, {0.011785, -0.022048}, 1}, {}, {"TargetingPodTarget", 1, {0.004138, -0.026007}, 1}, {"TargetingPodTarget", 1, {-0.004138, -0.026007}, 1}, {}, {"TargetingPodTarget", 1, {-0.011785, -0.022048}, 1}, {"TargetingPodTarget", 1, {-0.017638, -0.014732}, 1}, {}, {"TargetingPodTarget", 1, {-0.020806, -0.005173}, 1}, {"TargetingPodTarget", 1, {-0.020806, 0.005173}, 1}, {}, {"TargetingPodTarget", 1, {-0.017638, 0.014732}, 1}, {"TargetingPodTarget", 1, {-0.011785, 0.022048}, 1}, {}, {"TargetingPodTarget", 1, {-0.004138, 0.026007}, 1}, {"TargetingPodTarget", 1, {0.004138, 0.026007}, 1}, {}, {"TargetingPodTarget", 1, {0.011785, 0.022048}, 1}, {"TargetingPodTarget", 1, {0.017638, 0.014732}, 1}, {}, {"TargetingPodTarget", 1, {0.020806, 0.005173}, 1}, {"TargetingPodTarget", 1, {0.020806, -0.005173}, 1}, {}, {"TargetingPodTarget", 1, {0.017638, -0.014732}, 1}, {"TargetingPodTarget", 1, {0.011785, -0.022048}, 1}, {}, {"TargetingPodTarget", 1, {0.004138, -0.026007}, 1}, {"TargetingPodTarget", 1, {-0.004138, -0.026007}, 1}, {}, {"TargetingPodTarget", 1, {-0.011785, -0.022048}, 1}, {"TargetingPodTarget", 1, {-0.017638, -0.014732}, 1}, {}, {}};
						};*/
						class Targetting_pod_lock_romboid {
							type = "line";
							width=1.5;
							points[]={
							{"ForwardVec",1,"TargetingPodTarget",1, "Limit0109", 1, {0, 0.01000},1},
							{"ForwardVec",1,"TargetingPodTarget",1, "Limit0109", 1, {-0.008, 0},1},
							{"ForwardVec",1,"TargetingPodTarget",1, "Limit0109", 1, {0, -0.01000},1},
							{"ForwardVec",1,"TargetingPodTarget",1, "Limit0109", 1, {0.008, 0},1},
							{"ForwardVec",1,"TargetingPodTarget",1, "Limit0109", 1, {0, 0.01000},1}};
					};
			
				};
			};
			
			
			
			
			
			class WeaponName
			{
				type="text";
				source="weapon";
				sourceScale=1;
				align="left";
				scale=1;
				pos[]=	{{"0.55 - 0.0","0.89 - 0.1"},1};
				right[]={{"0.59 - 0.0","0.89 - 0.1"},1};
				down[]=	{{"0.55 - 0.0","0.93 - 0.1"},1};
			};
			#include "MFD\mgun.hpp"
			class DogfightMode{
				condition="aamissile";
				type="group";
					class DogfightMode{
					condition="activeSensorsOn<1";
					type="group";
						class DogfightMode{
						#include "MFD\aaHUDDraw.hpp"							
						};	
				};	
			};	
			
			class WPHud {
						condition = "wpvalid";

						class WPHudDir {
							type = "line";
							width = 3;
							points[]= {
							{"WaypointHUD", 1, "Limit0109", 1, {0.008000, 0.000000},1},
							{"WaypointHUD", 1, "Limit0109", 1, {0.007518, 0.003420},1},
							{"WaypointHUD", 1, "Limit0109", 1, {0.006128, 0.006428},1},
							{"WaypointHUD", 1, "Limit0109", 1, {0.004000, 0.008660},1},
							{"WaypointHUD", 1, "Limit0109", 1, {0.001389, 0.009848},1},
							{"WaypointHUD", 1, "Limit0109", 1, {-0.001389, 0.009848},1},
							{"WaypointHUD", 1, "Limit0109", 1, {-0.004000, 0.008660},1},
							{"WaypointHUD", 1, "Limit0109", 1, {-0.006128, 0.006428},1},
							{"WaypointHUD", 1, "Limit0109", 1, {-0.007518, 0.003420},1},
							{"WaypointHUD", 1, "Limit0109", 1, {-0.008000, 0.000000},1},
							{"WaypointHUD", 1, "Limit0109", 1, {-0.007518, -0.003420},1},
							{"WaypointHUD", 1, "Limit0109", 1, {-0.006128, -0.006428},1},
							{"WaypointHUD", 1, "Limit0109", 1, {-0.004000, -0.008660},1},
							{"WaypointHUD", 1, "Limit0109", 1, {-0.001389, -0.009848},1},
							{"WaypointHUD", 1, "Limit0109", 1, {0.001389, -0.009848},1},
							{"WaypointHUD", 1, "Limit0109", 1, {0.004000, -0.008660},1},
							{"WaypointHUD", 1, "Limit0109", 1, {0.006128, -0.006428},1},
							{"WaypointHUD", 1, "Limit0109", 1, {0.007518, -0.003420},1},
							{"WaypointHUD", 1, "Limit0109", 1, {0.008000, -0.000000},1},
							
							
								{},{},
											
							{"WaypointHUD", 1, {0.00000, 0.000000}, 1},
							{"WaypointHUD", -1, "Velocity", 1, "NormalizeBombCircle", 1, "WaypointHUD", 1, {0.000000, 0.000000}, 1}};
										
						
						};
					};
					
			class ROCKET_group
			{
				condition="rocket";
				type="group";
				
				class RadarBoxes_RKT
				{
						type = "radar";
						#include "MFD\wektor.hpp"
						width = 1;
						points[] = {{{-0.002000, -0.002500}, 1}, {{0.002000, -0.002500}, 1}, {{0.002000, 0.002500}, 1}, {{-0.002000, 0.002500}, 1}, {{-0.002000, -0.002500}, 1}};
				};
				
				class Rocket_lock_cross {
							type = "line";
							width=1.5;
							points[]={						
							{"ForwardVec",1,"TargetSelected",1, {-0.01, 0.01200},1},
							{"ForwardVec",1,"TargetSelected",1, {0.01, -0.012},1},{},
							
							{"ForwardVec",1,"TargetSelected",1, {0.01, 0.012},1},
							{"ForwardVec",1,"TargetSelected",1, {-0.01, -0.012},1}											
							};
					};
					
				
							
					
					
				class CCIP_circle_RKT
				{
					type = "line";
					width = 1.5;
					points[]={
						{"impactpointRockets", {0.016000, 0.000000},1},
						{"impactpointRockets", {0.015757, 0.003473},1},
						{"impactpointRockets", {0.015035, 0.006840},1},
						{"impactpointRockets", {0.013856, 0.010000},1},
						{"impactpointRockets", {0.012257, 0.012856},1},
						{"impactpointRockets", {0.010285, 0.015321},1},
						{"impactpointRockets", {0.008000, 0.017321},1},
						{"impactpointRockets", {0.005472, 0.018794},1},
						{"impactpointRockets", {0.002778, 0.019696},1},
						{"impactpointRockets", {0.000000, 0.020000},1},
						{"impactpointRockets", {-0.002778, 0.019696},1},
						{"impactpointRockets", {-0.005472, 0.018794},1},
						{"impactpointRockets", {-0.008000, 0.017321},1},
						{"impactpointRockets", {-0.010285, 0.015321},1},
						{"impactpointRockets", {-0.012257, 0.012856},1},
						{"impactpointRockets", {-0.013856, 0.010000},1},
						{"impactpointRockets", {-0.015035, 0.006840},1},
						{"impactpointRockets", {-0.015757, 0.003473},1},
						{"impactpointRockets", {-0.016000, 0.000000},1},
						{"impactpointRockets", {-0.015757, -0.003473},1},
						{"impactpointRockets", {-0.015035, -0.006840},1},
						{"impactpointRockets", {-0.013856, -0.010000},1},
						{"impactpointRockets", {-0.012257, -0.012856},1},
						{"impactpointRockets", {-0.010285, -0.015321},1},
						{"impactpointRockets", {-0.008000, -0.017321},1},
						{"impactpointRockets", {-0.005472, -0.018794},1},
						{"impactpointRockets", {-0.002778, -0.019696},1},
						{"impactpointRockets", {-0.000000, -0.020000},1},
						{"impactpointRockets", {0.002778, -0.019696},1},
						{"impactpointRockets", {0.005472, -0.018794},1},
						{"impactpointRockets", {0.008000, -0.017321},1},
						{"impactpointRockets", {0.010285, -0.015321},1},
						{"impactpointRockets", {0.012257, -0.012856},1},
						{"impactpointRockets", {0.013856, -0.010000},1},
						{"impactpointRockets", {0.015035, -0.006840},1},
						{"impactpointRockets", {0.015757, -0.003473},1},
						{"impactpointRockets", {0.016000, -0.000000},1},
							{},
						{"impactpointRockets", -1, "Velocity", 1, "NormalizeRktCircle", 1, "impactpointRockets", 1, {0.000000, 0.000000}, 1}, 
						{"Velocity", 1, "Limit0109", 1, {0.000000, 0.000000}, 1}
						};
				};
				class Range_RKT
				{
					type = "line";
					width = 2.0;
					points[] = 
					{
						{ "Gun_Range_Rot",{ 0,"1.0000 * 0.06" },1,"ForwardVec",1 },
						{ "Gun_Range_Rot",{ 0,"1.3000 * 0.06" },1,"ForwardVec",1 }
					};
				};
			};
			class AGM_group
			{
				condition="ATmissile";
				type="group";
				/*class RangeNumber
				{
					type="text";
					source="targetDist";
					sourceScale=1;
					align="center";
					scale=1;
					pos[]=
					{
						{0.5,0.75},
						1
					};
					right[]=
					{
						{0.55,0.75},
						1
					};
					down[]=
					{
						{0.5,0.80},
						1
					};
				};
				*/

				class RadarBoxes_AGM
				{
						type = "radar";
						#include "MFD\wektor.hpp"
						width = 1;
						points[] = {{{-0.002000, -0.002500}, 1}, {{0.002000, -0.002500}, 1}, {{0.002000, 0.002500}, 1}, {{-0.002000, 0.002500}, 1}, {{-0.002000, -0.002500}, 1}};
				};
				
									
				class AGM_lock_romboid {
							type = "line";
							width=1.5;
							points[]={
							{"ForwardVec",1,"TargetSelected",1, {0, 0.01200},1},
							{"ForwardVec",1,"TargetSelected",1, {-0.01, 0},1},
							{"ForwardVec",1,"TargetSelected",1, {0, -0.01200},1},
							{"ForwardVec",1,"TargetSelected",1, {0.01, 0},1},
							{"ForwardVec",1,"TargetSelected",1, {0, 0.01200},1},{},
							
							{"ForwardVec",1,"TargetSelected",1, {-0.01, 0.01200},1},
							{"ForwardVec",1,"TargetSelected",1, {0.01, -0.012},1},{},
							
							{"ForwardVec",1,"TargetSelected",1, {0.01, 0.012},1},
							{"ForwardVec",1,"TargetSelected",1, {-0.01, -0.012},1}											
							};
					};
					
				class RangeBand_AGM
							{
								type="line";
								width=3.0;
								points[]=
								{
								{"AGMTargetDist",{0.00,0.0},1},
								{"AGMTargetDist",{-0.010,-0.0129},1},{},
								{"AGMTargetDist",{-0.010,0.0129},1},
								{"AGMTargetDist",{0.00,0.0},1}
								};
							};
							class RangeText_AGM
							{
								type="text";
								align="left";
								scale=1;
								source="targetdist";
								sourcelength=2;
								sourceScale=0.01;
								pos[]={{"0.31+0.32+0.03","0.567 - 0.28+0.07"},1};
								right[]={{"0.31+0.32+0.03","0.567 - 0.28+0.07"},1};
								down[]={{"0.31+0.32","0.567 - 0.28+0.07+0.03"},1};
							};
							class Range_marks_AGM
							{
								type="line";
								width=3.0;
								points[] = 
								{
									//range marks
									{ { "0.29+0.32+0.009+0.03","0.40 - 0.28+0.07" },1 },// line h
									{ { "0.31+0.32+0.002+0.03","0.40 - 0.28+0.07" },1 },
									{},
									{ { "0.29+0.32+0.009+0.03","0.567 - 0.28+0.07" },1 },// line h
									{ { "0.31+0.32+0.03","0.567 - 0.28+0.07" },1 },
									{},
									{ { "0.29+0.32+0.009+0.03","0.40 - 0.28+0.07" },1 }, // line v
									{ { "0.29+0.32+0.009+0.03","0.567 - 0.28+0.07" },1 },							
								};
							};
			};
			class AAM_group
			{
				condition="AAmissile";
				type="group";
				
				
			#include "MFD\RadarMode.hpp"
			class RadarBoxes_AAM
				{
						type = "radar";
				#include "MFD\wektor.hpp"
						width = 3;
						points[] = {{{-0.002000, -0.002500}, 1}, {{0.002000, -0.002500}, 1}, {{0.002000, 0.002500}, 1}, {{-0.002000, 0.002500}, 1}, {{-0.002000, -0.002500}, 1}};
				};
		};
			
			class BOMB_group
			{
				condition="Bomb";
				type="group";
				
				/*class RangeNumber
				{
					type="text";
					source="targetDist";
					sourceScale=1;
					align="center";
					scale=1;
					pos[]=
					{
						{0.5,0.75},
						1
					};
					right[]=
					{
						{0.55,0.75},
						1
					};
					down[]=
					{
						{0.5,0.80},
						1
					};
				};
				*/
				class RadarBoxes_BOMB
				{
						type = "radar";
						#include "MFD\wektor.hpp"
						width = 2;
						points[] = {{{-0.002000, -0.002500}, 1}, {{0.002000, -0.002500}, 1}, {{0.002000, 0.002500}, 1}, {{-0.002000, 0.002500}, 1}, {{-0.002000, -0.002500}, 1}};
				};
					
				class Crosshairs_BOMB
				{
					type = "line";
					width=2;
					points[]={
						{"impactpoint", {0.016000, 0.000000},1},
						{"impactpoint", {0.015757, 0.003473},1},
						{"impactpoint", {0.015035, 0.006840},1},
						{"impactpoint", {0.013856, 0.010000},1},
						{"impactpoint", {0.012257, 0.012856},1},
						{"impactpoint", {0.010285, 0.015321},1},
						{"impactpoint", {0.008000, 0.017321},1},
						{"impactpoint", {0.005472, 0.018794},1},
						{"impactpoint", {0.002778, 0.019696},1},
						{"impactpoint", {0.000000, 0.020000},1},
						{"impactpoint", {-0.002778, 0.019696},1},
						{"impactpoint", {-0.005472, 0.018794},1},
						{"impactpoint", {-0.008000, 0.017321},1},
						{"impactpoint", {-0.010285, 0.015321},1},
						{"impactpoint", {-0.012257, 0.012856},1},
						{"impactpoint", {-0.013856, 0.010000},1},
						{"impactpoint", {-0.015035, 0.006840},1},
						{"impactpoint", {-0.015757, 0.003473},1},
						{"impactpoint", {-0.016000, 0.000000},1},
						{"impactpoint", {-0.015757, -0.003473},1},
						{"impactpoint", {-0.015035, -0.006840},1},
						{"impactpoint", {-0.013856, -0.010000},1},
						{"impactpoint", {-0.012257, -0.012856},1},
						{"impactpoint", {-0.010285, -0.015321},1},
						{"impactpoint", {-0.008000, -0.017321},1},
						{"impactpoint", {-0.005472, -0.018794},1},
						{"impactpoint", {-0.002778, -0.019696},1},
						{"impactpoint", {-0.000000, -0.020000},1},
						{"impactpoint", {0.002778, -0.019696},1},
						{"impactpoint", {0.005472, -0.018794},1},
						{"impactpoint", {0.008000, -0.017321},1},
						{"impactpoint", {0.010285, -0.015321},1},
						{"impactpoint", {0.012257, -0.012856},1},
						{"impactpoint", {0.013856, -0.010000},1},
						{"impactpoint", {0.015035, -0.006840},1},
						{"impactpoint", {0.015757, -0.003473},1},
						{"impactpoint", {0.016000, -0.000000},1},
							{},
						{"ImpactPoint", -1, "Velocity", 1, "NormalizeBombCircle", 1, "ImpactPoint", 1, {0.000000, 0.000000}, 1}, 
						{"Velocity", 1, "Limit0109", 1, {0.000000, 0.000000}, 1}
					};
				};
				
				
				
						
						class shape {
							type = "line";
							width = 2;
							points[]= {
							{"TargetSelected", 1, {0.00000, -50.000}, 1},
							{"TargetSelected", 1, {0.000000, 50.000}, 1}};
						};
						
				class Bomb_lock_romboid {
							type = "line";
							width=1.5;
							points[]={
							{"ForwardVec",1,"TargetSelected",1, {0, 0.01200},1},
							{"ForwardVec",1,"TargetSelected",1, {-0.01, 0},1},
							{"ForwardVec",1,"TargetSelected",1, {0, -0.01200},1},
							{"ForwardVec",1,"TargetSelected",1, {0.01, 0},1},
							{"ForwardVec",1,"TargetSelected",1, {0, 0.01200},1},{},
							
							{"ForwardVec",1,"TargetSelected",1, {-0.01, 0.01200},1},
							{"ForwardVec",1,"TargetSelected",1, {0.01, -0.012},1},{},
							
							{"ForwardVec",1,"TargetSelected",1, {0.01, 0.012},1},
							{"ForwardVec",1,"TargetSelected",1, {-0.01, -0.012},1}											
							};
					};
				
				class RangeBand_Bomb
							{
								type="line";
								width=3.0;
								points[]=
								{
								{"BOMBTargetDist",{0.00,0.0},1},
								{"BOMBTargetDist",{-0.010,-0.0129},1},{},
								{"BOMBTargetDist",{-0.010,0.0129},1},
								{"BOMBTargetDist",{0.00,0.0},1}
								};
							};
							class RangeText_Bomb
							{
								type="text";
								align="left";
								scale=1;
								source="targetdist";
								sourcelength=2;
								sourceScale=0.01;
								pos[]={"BOMBTargetDist",{"0.017-0.03","-0.010-0.0129"},1};
								right[]={"BOMBTargetDist",{0.017,"-0.010-0.0129"},1};
								down[]={"BOMBTargetDist",{"0.017-0.03","0.035-0.0129"},1};
							};
							class Range_marks_Bomb
							{
								type="line";
								width=3.0;
								points[] = 
								{
									//range marks
									{ { "0.29+0.32+0.009+0.03","0.40 - 0.28+0.07" },1 },// line h
									{ { "0.31+0.32+0.002+0.03","0.40 - 0.28+0.07" },1 },
									{},
									{ { "0.29+0.32+0.009+0.03","0.567 - 0.28+0.07" },1 },// line h
									{ { "0.31+0.32+0.03","0.567 - 0.28+0.07" },1 },
									{},
									{ { "0.29+0.32+0.009+0.03",0.27684 },1 }, //lockarea horizontal
									{ { "0.31+0.32+0.002+0.03",0.27684 },1 },
									{},
									{ { "0.29+0.32+0.009+0.03",0.27684 },1 }, // line v
									{ { "0.29+0.32+0.009+0.03","0.567 - 0.28+0.07" },1 },							
								};
							};
				
				
			};
			
			
			
			
			
			
			class PlaneMovementCrosshair {
						clipTL[] = {0.000000, 1.000000};
						clipBR[] = {1.000000, 0.000000};
						type = "line";
						width = 2.000000;
						/*points[]= {{"Velocity", {0, -0.025000}, 1}, {"Velocity", {0.010000, -0.021650}, 1}, {"Velocity", {0.017320, -0.012500}, 1}, {"Velocity", {0.020000, 0}, 1}, {"Velocity", {0.017320, 0.012500}, 1}, {"Velocity", {0.010000, 0.021650}, 1}, {"Velocity", {0, 0.025000}, 1}, {"Velocity", {-0.010000, 0.021650}, 1}, {"Velocity", {-0.017320, 0.012500}, 1}, {"Velocity", {-0.020000, 0}, 1}, {"Velocity", {-0.017320, -0.012500}, 1}, {"Velocity", {-0.010000, -0.021650}, 1}, {"Velocity", {0, -0.025000}, 1}, {}, {"Velocity", {0.040000, 0}, 1}, {"Velocity", {0.020000, 0}, 1}, {}, {"Velocity", {-0.040000, 0}, 1}, {"Velocity", {-0.020000, 0}, 1}, {},
						{"Velocity", {0, -0.050000}, 1}, {"Velocity", {0, -0.025000}, 1}};*/
						points[]=
						{
							{"Velocity",1,{"0 *1 /2","-0.02 *1 /2"},1},							
							{"Velocity",1,{"0.0099999998 *1 /2","-0.01732 *1 /2"},1},							
							{"Velocity",1,{"0.01732 *1 /2","-0.0099999998 *1 /2"},1},		
							{"Velocity",1,{"0.02 *1 /2","0 *1 /2"},1},							
							{"Velocity",1,{"0.01732 *1 /2","0.0099999998 *1 /2"},1},
							{"Velocity",1,{"0.0099999998 *1 /2","0.01732 *1 /2"},1},							
							{"Velocity",1,{"0 *1 /2","0.02 *1 /2"},1},							
							{"Velocity",1,{"-0.0099999998 *1 /2","0.01732 *1 /2"},1},					
							{"Velocity",1,{"-0.01732 *1 /2","0.0099999998 *1 /2"},1},							
							{"Velocity",1,{"-0.02 *1 /2","0 *1 /2"},1},						
							{"Velocity",1,{"-0.01732 *1 /2","-0.0099999998 *1 /2"},1},							
							{"Velocity",1,{"-0.0099999998 *1 /2","-0.01732 *1 /2"},1},							
							{"Velocity",1,{"0 *1 /2","-0.02 *1 /2"},1},
							{},							
							{"Velocity",1,{0.031,0},1},							
							{"Velocity",1,{"(0.02 *1 /2)",0},1},
							{},							
							{"Velocity",1,{-0.031,0},1},							
							{"Velocity",1,{"(-0.02 *1 /2)",0},1},
							{},							
							{"Velocity",1,{0,"(-0.039999999 *1 /2)"},1},
							{"Velocity",1,{0,"(-0.02 *1 /2)"},1}
						};
						
						};
			
		};
	};
	 
};