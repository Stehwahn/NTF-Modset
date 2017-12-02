class HMCS_ALL
	{
		topLeft="HUD_top_left";
		topRight="HUD_top_right";
		bottomLeft="HUD_bottom_left";
		borderLeft=0;
		borderRight=0;
		borderTop=0;
		borderBottom=0;
		color[]={0.082000002,0.40799999,0.039000001,2};
		enableParallax=0;
		class Bones
		{
			class DogfightAmmoMax {
						type = "linear";
						source = "LarAmmoMax";
						sourceScale = 0.4800000;
						min = 0;
						max = 1;
						minPos[]={"0.30+0.32-0.002+0.1","0.40 - 0.28+0.22"};
						maxPos[]={"0.30+0.32-0.002+0.1","0.567 - 0.28+0.22"};
					};

					class DogfightAmmoMin: DogfightAmmoMax {
						source = "LarAmmoMin";
					};

					class DogfightTargetDist: DogfightAmmoMax {
						source = "LarTargetDist";
					};
			class Fixed_Horizon
			{
				type="fixed";
				pos[]={0.90,0.80};
			};
			class WeaponAim
			{
				type="vector";
				source="weapon";
				pos0[]={0.50,0.50};
				pos10[]={1.382,1.382};
			};
			class PlaneW
			{
				type="fixed";
				pos[]={0.5,0.5};
				pos10[]={0.7739999,0.76999};
			};
			class Target
					{
						type="vector";
						source="targetToView";
						pos0[]={0.5,0.5};
						pos10[]={0.7739999,0.769999};
					};
			class Limit0109
					{
						type="limit";
						limits[]={0.10000001,0.10000001,0.89999,0.89999};
					};
			class RangeBone
			{
				type="linear";
				source="targetDist";
				sourceScale=1; //meters
				min=0;
				max=10000;
				minPos[]={0.8,0.40};
				maxPos[]={0.8,0.60};
			};
			class NormalizeBombCircle {
						type = "normalizedorsmaller";
						limit = 0.070000;
						aspectRatio = 1.250000;
					};
			class HorizonIndicatorBank
			{
				type = "rotational";
				source = "horizonBank";
				sourceScale = 1.0;
				center[] = {0.90,0.80};
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
				center[] = {0.90,0.80};
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
				center[] = {0.90,0.80};
				min = "-3.14159265359 / 2";
				max = "3.14159265359 / 2";
				minAngle = -90;
				maxAngle = 90;
				aspectRatio = 1;
			};
			/*class VspeedBone
			{
				type="linear";
				source="vspeed";
				sourceScale=1; // m/s
				min=-50;
				max=50;
				minPos[]={0.94,0.60};
				maxPos[]={0.94,0.60};
			};*/
		};
		class Draw
		{
			color[]={0.082000002,0.40799999,0.039000001,2};
			alpha=2;
			condition="on";
			//------------------------------------------------------------ Speed
			class HideOnTurn
						{
							condition="(abs(cameraHeadingDiff))>12";
							class Limiter
							{	
			class Left_box
			{
				type = "line";
				width = 2;
				points[]=
						{{"PlaneW",{"-0.3500001+0.11",-0.02},1},
						{"PlaneW",{"-0.3500001+0.11","-0.02+0.04"},1},
						{"PlaneW",{-0.3300001,"-0.02+0.04"},1},
						{"PlaneW",{-0.3300001,-0.02},1},
						{"PlaneW",{"-0.3500001+0.11",-0.02},1}
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
				pos[]=
						{
							"PlaneW",
							{"-0.3500001+0.11+0.01-0.05+0.03",-0.026},
							1
						};
						right[]=
						{
							"PlaneW",
							{"-0.3500001+0.11+0.01+0.03",-0.026},
							1
						};
						down[]=
						{
							"PlaneW",
							{"-0.3500001+0.11+0.01-0.05+0.03","-0.026+0.05"},
							1
						};
			};
			
			
			/*class TargetDiamond
					{
						condition="target";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									
									{0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									
									{-0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									
									{-0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									
									{0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									
									{0.02,0.02},
									1
								},{},{},{"PlaneW", 1, {0.00000, 0.000000}, 1},
								{"PlaneW", -1, "Target",1,"NormalizeBombCircle", 1, "PlaneW", 1, {0.000000, 0.000000}, 1}
							};
						};
					};*/
			
			
			
		
			/*//------------------------------------------------------------ Altitude
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
			class AltNumber: SpeedNumber
			{
				align="right";
				source="altitudeASL";
				sourceScale=1;
				pos[]=
				{
					{0.85,0.40},
					1
				};
				right[]=
				{
					{0.90,0.40},
					1
				};
				down[]=
				{
					{0.85,0.45},
					1
				};
			};
			*/
	
			class AltitudeIndicatorBox
					{
						type="line";
						width=2;
						points[]=
						{{"PlaneW",{"0.3500001-0.11",-0.02},1},
						{"PlaneW",{"0.3500001-0.11","-0.02+0.04"},1},
						{"PlaneW",{"0.3500001+0.02","-0.02+0.04"},1},
						{"PlaneW",{"0.3500001+0.02",-0.02},1},
						{"PlaneW",{"0.3500001-0.11",-0.02},1}
						};
					};
					class AltitudeNumberASL
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						sourceLenght=4;
						align="left";
						width = 2.0;
						scale=1;
						pos[]=
						{
							"PlaneW",
							{"0.35000001+0.01",-0.026},
							1
						};
						right[]=
						{
							"PlaneW",
							{"0.35000001+0.05+0.01",-0.026},
							1
						};
						down[]=
						{
							"PlaneW",
							{"0.35000001+0.01","-0.026+0.05"},
							1
						};
					};
		
			
			
			//------------------------------------------------------------ Miscellaneous
		
			
			
			//------------------------------------------------------------ Weapons
			class AimingCrosshair
			{
				type="group";
				condition="on";
				class Cross
							{
								type="line";
								width=2;
								points[]=
								{
								{"PlaneW",{-0.005,0},1},
								{"PlaneW",{-0.039999999,0},1},
								{},
								{"PlaneW",{0.005,0},1},
								{"PlaneW",{0.039999999,0},1},
								{},
								{"PlaneW",{0,"-0.019708+0.015"},1},
								{"PlaneW",{0,-0.039416101},1},
								{},
								{"PlaneW",{0,"0.019708-0.015"},1},
								{"PlaneW",{0,0.039416101},1},
								};	
							};					
			};
		
		
		/*class Targetline{
						class shape{
							type="line";
							width=2;
							points[]={
								{"PlaneW", 1, {0.00000, 0.000000}, 1},
								{"PlaneW", -1, "Target",1,"NormalizeBombCircle", 1, "PlaneW", 1, {0.000000, 0.000000}, 1}};
						};
			}*/
			
			
			class Targetline_locked{
				condition="targetDist>1";
				type="group";
				class Cond{
				type="line";
				width=2;
				points[]={
					{"PlaneW", 1, {0.00000, 0.000000}, 1},
					{"PlaneW", -1, "Target", 1, "NormalizeBombCircle", 1, "PlaneW", 1, {0.000000, 0.000000}, 1}};
				};
			}
			
			
			class RadarBoxes_HMD
				{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.773,0.773};
						width=4;
						points[] = {{{-0.002000, -0.002500}, 1}, {{0.002000, -0.002500}, 1}, {{0.002000, 0.002500}, 1}, {{-0.002000, 0.002500}, 1}, {{-0.002000, -0.002500}, 1}};
				};
			class Target_locked_HMD{	
								type = "group";
								condition = "missilelocked";
									class DistBand{
										type = "group";
										condition = "aamissile";
										class RangeBand_AAM
														{
															type="line";
															width=3.0;
															points[]=
															{
															{"DogfightTargetDist",{0.00,0.0},1},
															{"DogfightTargetDist",{-0.010,-0.0129},1},{},
															{"DogfightTargetDist",{-0.010,0.0129},1},
															{"DogfightTargetDist",{0.00,0.0},1}
															};
														};
										class RangeText_AAM
														{
															type="text";
															align="left";
															scale=1;
															source="targetdist";
															sourcelength=2;
															sourceScale=0.01;
															pos[]={"DogfightTargetDist",{"0.017-0.03","-0.010-0.0129"},1};
															right[]={"DogfightTargetDist",{0.017,"-0.010-0.0129"},1};
															down[]={"DogfightTargetDist",{"0.017-0.03","0.035-0.0129"},1};
														};		
										class Range_marks_AAM
														{
															type="line";
															width=3.0;
															points[] = 
															{
																//range marks
																{ { "0.29+0.32+0.009+0.1","0.40 - 0.28+0.22" },1 },// line h
																{ { "0.31+0.32+0.002+0.1","0.40 - 0.28+0.22" },1 },
																{},
																{ { "0.29+0.32+0.009+0.1","0.567 - 0.28+0.22" },1 },// line h
																{ { "0.31+0.32+0.1","0.567 - 0.28+0.22" },1 },
																{},
																{ { "0.29+0.32+0.009+0.1","0.40 - 0.28+0.22" },1 }, // line v
																{ { "0.29+0.32+0.009+0.1","0.567 - 0.28+0.22" },1 },
																{},
																{ { "0.29+0.32+0.009+0.1","0.20684+0.22" },1 }, //lockarea horizontal
																{ { "0.31+0.32+0.1","0.20684+0.22" },1 },
																{},
																{ { "0.31+0.32+0.1","0.20684+0.22" },1 }, //lockarea vertical
																{ { "0.31+0.32+0.1","0.567 - 0.28+0.22" },1 }
																
																
																
															};
														};
									}
									
									class Target_selected_square {
										type = "line";
										width=1.5;
										points[]={
										{"Target",1,"Limit0109", 1, {0.018, 0.02000},1},
										{"Target",1,"Limit0109", 1,  {-0.018, 0.02000},1},
										{"Target",1,"Limit0109", 1,  {-0.018, -0.02000},1},
										{"Target",1, "Limit0109", 1, {0.018, -0.02000},1},
										{"Target",1, "Limit0109", 1, {0.018, 0.02000},1}};
									
									};
							};
			

					class Heading_Scale
					{
						type="scale";
						horizontal=1;
						source="cameraDir";
						sourceScale=0.100000;
						width=2;
						top=	0.35;
						center=	0.50;
						bottom=	0.65;
						lineXleft=			"0.06 + 0.05+0.63+0.02";
						lineYright=			"0.07 + 0.05+0.63+0.02";
						lineXleftMajor=		"0.06 + 0.05+0.63+0.02";
						lineYrightMajor=	"0.08 + 0.05+0.63+0.02";
						majorLineEach=2;
						numberEach=2;
						step="1/2";
						stepSize="(0.65 - 0.35) / 5";
						align="center";
						scale=1;
						pos[]={0.35,"0.025 + 0.05+0.63+0.02"};
						right[]={0.38,"0.025 + 0.05+0.63+0.02"};
						down[]={0.35,"0.055 + 0.05+0.63+0.02"};
					};
							
					
					class Heading_Number
					{
						type = "text";
						source = "cameraDir";
						sourceScale = 1;
						sourceLength = 3;
						align = "right";
						scale = 1;
						pos[]= {{0.484,"0.945 - 0.89 + 0.08+0.63+0.02"}, 1};
						right[]= {{"0.484+0.05","0.945 - 0.89 + 0.08+0.63+0.02"}, 1};
						down[]= {{0.484,"0.945 - 0.89 + 0.08+0.63+0.05+0.02"}, 1};
						
					};
			
					class WpDist_Number{
						type = "text";
						source = "wpdist";
						sourceScale = 0.001;
						sourceprecision = 0;
						sourceLength = 3;
						align = "right";
						scale = 1;
						pos[]= {{"0.695-0.080+0.09","1.062 - 0.89 + 0.35+0.11"}, 1};
						right[]= {{"0.695-0.080+0.05+0.09","1.062 - 0.89 + 0.35+0.11"}, 1};
						down[]= {{"0.695-0.080+0.09","1.062 - 0.89 + 0.35+0.05+0.11"}, 1};
					};
					class WpSign{
						type="text";
						align="right";
						source="static";
						text=">";
						scale=1;
						pos[]= {{"0.695-0.080+0.022+0.032+0.09","1.061 - 0.89 + 0.35+0.11"}, 1};
						right[]= {{"0.695-0.080+0.022+0.05+0.032+0.09","1.061 - 0.89 + 0.35+0.11"}, 1};
						down[]= {{"0.695-0.080+0.022+0.032+0.09","1.061 - 0.89 + 0.35+0.05+0.11"}, 1};
					};
					class WpIndex{
						type = "text";
						source = "wpindex";
						sourceScale = 1;
						sourceprecision = 0;
						sourceLength = 2;
						align = "right";
						scale = 1;
						pos[]= {{"0.695-0.080+0.029+0.042+0.09","1.062 - 0.89 + 0.35+0.11"}, 1};
						right[]= {{"0.695-0.080+0.029+0.042+0.06+0.09","1.062 - 0.89 + 0.35+0.11"}, 1};
						down[]= {{"0.695-0.080+0.029+0.042+0.09","1.062 - 0.89 + 0.35+0.05+0.11"}, 1};
					};
					class GForce_Number
					{
						type="text";
						scale=1;
						source="gmeterGrav";
						sourceScale=0.1;
						sourcePrecision=1;
						align="left";
						pos[]= {{"0.695-0.050-0.260-0.02","0.632-0.2"}, 1};
						right[]= {{"0.695-0.050-0.260+0.05-0.02","0.632-0.2"}, 1};
						down[]= {{"0.695-0.050-0.260-0.02","0.682-0.2"}, 1};
					};
					
			#include "ARMHMD.hpp"
			class StallGroup {
						type = "group";
						condition = "stall";
						blinkingPattern[] = {0.200000, 0.200000};
						blinkingStartsOn = 1;

					
						
						class StallCross{
						type = "line";
						width = 1.500000;
						points[]= {
						{"PlaneW", {-0.05900, 0.059000}, 1},
						{"PlaneW", {0.05900, -0.059000}, 1},
						{},
						{"PlaneW", {-0.05900, -0.059000}, 1},
						{"PlaneW", {0.05900, 0.059000}, 1}};
							
							
						};	
			
				};
		class AltWarn {
		type = "group";
		condition = "altitudeAGL<150";
			class cond2{
				type = "group";
				condition = "speed>40";
					class cond2{
						type = "group";
						condition = "ils<1";
							class cond3{
							type = "group";
							condition = "AoA<0";
							blinkingPattern[] = {0.200000, 0.200000};
							blinkingStartsOn = 1;
								class AltCross{
								type = "line";
								width = 1.500000;
								points[]= {
									{"PlaneW", {-0.05900, 0.059000}, 1},
									{"PlaneW", {0.05900, -0.059000}, 1},
									{},
									{"PlaneW", {-0.05900, -0.059000}, 1},
									{"PlaneW", {0.05900, 0.059000}, 1}};								
									};	
							};
						};
					};
				};
			
			
			
			
			
			
			
			
			};
			};
		};
		helmetMountedDisplay=1;
		helmetPosition[]={-0.032499999,0.032499999,0.1};
		helmetRight[]={0.064999998,0,0};
		helmetDown[]={0,-0.064999998,0};
	};