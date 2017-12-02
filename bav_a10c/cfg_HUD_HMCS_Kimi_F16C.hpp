// Created By geraldbolso1899 (AKA Kimi)
// 20150207

class MFD
{
	class HUD_1
	{
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft = 0; //0.07;
		borderRight = 0; //0.07;
		borderTop = 0;
		borderBottom = 0;
		color[] = {0,1,0,0.1};
		enableParallax = 1;
		class Bones
		{
			class ForwardVec
			{
				type = "vector";
				source = "forward";
				pos0[] = {0.0,0.0};
				pos10[] = {0.0,0.0};
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
				min=-3.1416;
				max=3.1416;
				//max=0.52359998;
				minAngle=-180;
				maxAngle=180;
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
			alpha = 0.9;
			color[]={0.15000001,1,0.15000001};
			condition = "on";
			class Static
			{
				clipTL[] = {0,0.1};
				clipBR[] = {1,0};
				type = "line";
				width = 9.0;
				points[] = 
				{
					{ { 0.195,0.400 },1 }, // speed arrow
					{ { 0.220,0.400 },1 },
					{ },
					{ { 0.805,0.400 },1 }, // altitude arrow
					{ { 0.780,0.400 },1 }
				};
			};
			class Speed_Scale_Top
			{
				clipTL[]={0,0};
				clipBR[]={1,"0.400 - 0.035"};
				type="group";
				class speed_scale
				{
					type = "scale";
					scale = 1;
					source = "speed";
					sourceScale = 3.6;
					align = "left";
					width=5;
					lineXleft = 		0.175;
					lineYright = 		0.195;
					lineXleftMajor = 	0.165;
					lineYrightMajor = 	0.195;
					top = 		0.200;
					center = 	0.400;
					bottom = 	0.600;
					step = 20;
					StepSize = "(0.60- 0.2)/15";
					horizontal = 0;
					numberEach = 5;
					majorLineEach = 5;
					pos[] = 	{0.13	,0.175	};
					right[] = 	{0.17	,0.175	};
					down[] = 	{0.13	,0.215	};
				};
			};
			class Speed_Scale_Right
			{
				clipTL[]={0.1650,"0.400 - 0.035"};
				clipBR[]={1,"0.400 + 0.035"};
				type="group";
				class speed_scale
				{
					type = "scale";
					scale = 1;
					source = "speed";
					sourceScale = 3.6;
					align = "left";
					width=5;
					lineXleft = 		0.175;
					lineYright = 		0.195;
					lineXleftMajor = 	0.165;
					lineYrightMajor = 	0.195;
					top = 		0.200;
					center = 	0.400;
					bottom = 	0.600;
					step = 20;
					StepSize = "(0.60- 0.2)/15";
					horizontal = 0;
					numberEach = 5;
					majorLineEach = 5;
					pos[] = 	{0.13	,0.175	};
					right[] = 	{0.17	,0.175	};
					down[] = 	{0.13	,0.215	};
				};
			};
			class Speed_Scale_Bottom
			{
				clipTL[]={0,"0.400 + 0.035"};
				clipBR[]={1,1};
				type="group";
				class speed_scale
				{
					type = "scale";
					scale = 1;
					source = "speed";
					sourceScale = 3.6;
					align = "left";
					width=5;
					lineXleft = 		0.175;
					lineYright = 		0.195;
					lineXleftMajor = 	0.165;
					lineYrightMajor = 	0.195;
					top = 		0.200;
					center = 	0.400;
					bottom = 	0.600;
					step = 20;
					StepSize = "(0.60- 0.2)/15";
					horizontal = 0;
					numberEach = 5;
					majorLineEach = 5;
					pos[] = 	{0.13	,0.175	};
					right[] = 	{0.17	,0.175	};
					down[] = 	{0.13	,0.215	};
				};
			};
			class Left_box
			{
				type = "line";
				width = 3.0;
				points[] = 
				{
					{ { 0.0200	,"0.400 - 0.025		"},1 },
					{ { 0.1500	,"0.400 - 0.025		"},1 },
					{ { 0.1650	,"0.400				"},1 },
					{ { 0.1500	,"0.400 + 0.025 	"},1 },
					{ { 0.0200	,"0.400 + 0.025 	"},1 },
					{ { 0.0200	,"0.400 - 0.025		"},1 }
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
					{0.15,"0.40 - 0.035"},
					1
				};
				right[]=
				{
					{0.21,"0.40 - 0.035"},
					1
				};
				down[]=
				{
					{0.15,"0.40 + 0.035"},
					1
				};
			};
			
			class Altitude_Scale_Top
			{
				clipTL[]={0		,0				};
				clipBR[]={1		,"0.400 - 0.035"};
				type="group";
				class altitude_scale
				{
					type = "scale";
					scale = 1;
					source = "altitudeASL";
					sourceScale=1;
					align = "right";
					//width=4;
					lineXleft = 		0.805;
					lineYright = 		0.825;
					lineXleftMajor = 	0.805;
					lineYrightMajor = 	0.835;
					top = 		0.600;
					center = 	0.400;
					bottom = 	0.200;
					step = 20;
					StepSize = "(0.60- 0.20)/15";
					horizontal = 0;
					numberEach = 5;
					majorLineEach = 5;
					pos[] = 	{0.850	,0.575	};
					right[] = 	{0.890	,0.575	};
					down[] = 	{0.850	,0.615	};
				};
			};
			class Altitude_Scale_Left
			{
				clipTL[]={0				,"0.400 - 0.035"	};
				clipBR[]={"1 - 0.1650"	,"0.400 + 0.035"	};
				type="group";
				class altitude_scale
				{
					type = "scale";
					scale = 1;
					source = "altitudeASL";
					sourceScale=1;
					align = "right";
					//width=4;
					lineXleft = 		0.805;
					lineYright = 		0.825;
					lineXleftMajor = 	0.805;
					lineYrightMajor = 	0.835;
					top = 		0.600;
					center = 	0.400;
					bottom = 	0.200;
					step = 20;
					StepSize = "(0.60- 0.20)/15";
					horizontal = 0;
					numberEach = 5;
					majorLineEach = 5;
					pos[] = 	{0.850	,0.575	};
					right[] = 	{0.890	,0.575	};
					down[] = 	{0.850	,0.615	};
				};
			};
			class Altitude_Scale_Bottom
			{
				clipTL[]={0		,"0.400 + 0.035"};
				clipBR[]={1		,1				};
				type="group";
				class altitude_scale
				{
					type = "scale";
					scale = 1;
					source = "altitudeASL";
					sourceScale=1;
					align = "right";
					//width=4;
					lineXleft = 		0.805;
					lineYright = 		0.825;
					lineXleftMajor = 	0.805;
					lineYrightMajor = 	0.835;
					top = 		0.600;
					center = 	0.400;
					bottom = 	0.200;
					step = 20;
					StepSize = "(0.60- 0.20)/15";
					horizontal = 0;
					numberEach = 5;
					majorLineEach = 5;
					pos[] = 	{0.850	,0.575	};
					right[] = 	{0.890	,0.575	};
					down[] = 	{0.850	,0.615	};
				};
			};
			class Right_box
			{
				type = "line";
				width = 3.0;
				points[] = 
				{
					{ { "1 - 0.0200"	,"0.400 - 0.025		"},1 },
					{ { "1 - 0.1500"	,"0.400 - 0.025		"},1 },
					{ { "1 - 0.1650"	,"0.400				"},1 },
					{ { "1 - 0.1500"	,"0.400 + 0.025 	"},1 },
					{ { "1 - 0.0200"	,"0.400 + 0.025 	"},1 },
					{ { "1 - 0.0200"	,"0.400 - 0.025		"},1 }
				};
			};
			class Altitude_ASL_Number
			{
				type="text";
				scale=1;
				width = 2.0;
				align="right";
				source="altitudeASL";
				sourceScale=1;
				pos[]=
				{
					{"1 - 0.15","0.40 - 0.035"},
					1
				};
				right[]=
				{
					{"1 - 0.15 + 0.06","0.40 - 0.035"},
					1
				};
				down[]=
				{
					{"1 - 0.15","0.40 + 0.035"},
					1
				};
			};
			
			class Heading_Scale
			{
				type="scale";
				horizontal=1;
				source="heading";
				sourceScale=1.0;
				width=5;
				top=	0.35;
				center=	0.50;
				bottom=	0.65;
				lineXleft=			"0.06 + 0.05";
				lineYright=			"0.05 + 0.05";
				lineXleftMajor=		"0.06 + 0.05";
				lineYrightMajor=	"0.04 + 0.05";
				majorLineEach=2;
				numberEach=2;
				step=5;
				stepSize="(0.65 - 0.35) / 5";
				align="center";
				scale=1;
				pos[]=
				{
					0.35,
					"0.0 + 0.05"
				};
				right[]=
				{
					0.38,
					"0.0 + 0.05"
				};
				down[]=
				{
					0.35,
					"0.03 + 0.05"
				};
			};
			class Heading_Arrow
			{
				type="line";
				width=4;
				points[]=
				{
					
					{
						{0.50,"0.95 - 0.89 + 0.05"},
						1
					},
					{
						{0.515,"0.965 - 0.89 + 0.05"},
						1
					},
					{
						{0.485,"0.965 - 0.89 + 0.05"},
						1
					},
					{
						{0.50,"0.95 - 0.89 + 0.05"},
						1
					}
				};
			};
			
			class Bank_Marks
			{
				type="line";
				width=3;
				points[]=
				{
					////////////////////////////////////////////////////// LEFT
					{{0.4566,"1 - 0.2538 - 0.1"},1},			// 10º r25
					{{0.4549,"1 - 0.2439 - 0.1"},1},			// 10º r26
					{},	
					{{0.4145,"1 - 0.2651 - 0.1"},1},			// 20º r25
					{{0.4111,"1 - 0.2557 - 0.1"},1},			// 20º r26
					{},	
					{{0.3750,"1 - 0.2835 - 0.1"},1},			// 30º r25
					{{0.3650,"1 - 0.2662 - 0.1"},1},			// 30º r27
					{},	
					{{0.3232,"1 - 0.3232 - 0.1"},1}, 			// 45º r25
					{{0.3091,"1 - 0.3091 - 0.1"},1},			// 45º r27
					{},	
					/////////////////////////////////////////////////////// RIGHT
					{{"1 - 0.4566","1 - 0.2538 - 0.1"},1},	// 10º r25
					{{"1 - 0.4549","1 - 0.2439 - 0.1"},1},	// 10º r26
					{},	
					{{"1 - 0.4145","1 - 0.2651 - 0.1"},1},	// 20º r25
					{{"1 - 0.411)","1 - 0.2557 - 0.1"},1},	// 20º r26
					{},	
					{{"1 - 0.3750","1 - 0.2835 - 0.1"},1},	// 30º r25
					{{"1 - 0.3650","1 - 0.2662 - 0.1"},1},	// 30º r27
					{},	
					{{"1 - 0.3232","1 - 0.3232 - 0.1"},1}, 	// 45º r25
					{{"1 - 0.3091","1 - 0.3091 - 0.1"},1},	// 45º r27
					{},	
					/////////////////////////////////////////////////////// CENTER
					{{0.5,"1 - (0.5 - 0.25) - 0.1"},1}, 		// 0º r25
					{{0.5,"1 - (0.5 - 0.27) - 0.1"},1}		// 0º r27
				};
			};
			class Bank_Indicator
			{
				type="line";
				width=3;
				points[]=
				{
					{"HorizonBankRot",{0		, -0.27	},1},
					{"HorizonBankRot",{-0.01	, -0.29	},1},
					{"HorizonBankRot",{0.01		, -0.29	},1},
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
			
			class Raltitude_text
			{
				type="text";
				align="left";
				source="static";
				text="R:";
				scale=1;
				width=1;
				pos[]=	{{"0.805","0.69"},1};
				right[]={{"0.845","0.69"},1};
				down[]=	{{"0.805","0.73"},1};
			};
			class Raltitude_number
			{
				type="text";
				align="right";
				source="altitudeAGL";
				sourceScale=1;
				scale=1;
				width=1;
				pos[]=	{{"0.805 + 0.01","0.69"},1};
				right[]={{"0.845 + 0.01","0.69"},1};
				down[]=	{{"0.805 + 0.01","0.73"},1};
			};
			class Alpha_text
			{
				type="text";
				align="left";
				source="static";
				//text="α:";
				text="a:";
				scale=1;
				width=1;
				pos[]=	{{"0.805","0.69 + 0.05"},1};
				right[]={{"0.845","0.69 + 0.05"},1};
				down[]=	{{"0.805","0.73 + 0.05"},1};
			};
			class Alpha_number
			{
				type="text";
				align="right";
				source="horizonDive";
				sourceScale=57.29578;
				scale=1;
				width=1;
				pos[]=	{{"0.805 + 0.01","0.69 + 0.05"},1};
				right[]={{"0.845 + 0.01","0.69 + 0.05"},1};
				down[]=	{{"0.805 + 0.01","0.73 + 0.05"},1};
			};
			class Climb_text
			{
				type="text";
				align="left";
				source="static";
				//text="α:";
				text="VS:";
				scale=1;
				width=1;
				pos[]=	{{"0.805","0.69 + 0.10"},1};
				right[]={{"0.845","0.69 + 0.10"},1};
				down[]=	{{"0.805","0.73 + 0.10"},1};
			};
			class Climb_number
			{
				type="text";
				align="right";
				source="vspeed";
				sourceScale=1;
				scale=1;
				width=1;
				pos[]=	{{"0.805 + 0.01","0.69 + 0.10"},1};
				right[]={{"0.845 + 0.01","0.69 + 0.10"},1};
				down[]=	{{"0.805 + 0.01","0.73 + 0.10"},1};
			};
			class Fuel_text
			{
				type="text";
				align="left";
				source="static";
				text="Fuel:";
				scale=1;
				width=1;
				pos[]=	{{"0.805","0.69 + 0.15"},1};
				right[]={{"0.845","0.69 + 0.15"},1};
				down[]=	{{"0.805","0.73 + 0.15"},1};
			};
			class Fuel_number
			{
				type="text";
				align="right";
				source="fuel";
				sourceScale=100;
				scale=1;
				width=1;
				pos[]=	{{"0.805 + 0.01","0.69 + 0.15"},1};
				right[]={{"0.845 + 0.01","0.69 + 0.15"},1};
				down[]=	{{"0.805 + 0.01","0.73 + 0.15"},1};
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
	class HUD_Horizon
	{
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft = -0.2;
		borderRight = -0.2;
		borderTop = -0.2;
		borderBottom = -0.2;
		color[]={0.15000001,1,0.15000001,1};
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
			class Velocity
			{
				type="vector";
				source="velocity";
				pos0[]={0.5,0.3};
				pos10[]={0.65,0.45};
			};
			class Level0
			{
				type="horizon";
				pos0[]=	{0.500,0.300};
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
			alpha = 0.9;
			color[]={0.15000001,1,0.15000001};
			condition="on";
			class Waterline_mark
			{
				type="group";
				class waterline
				{
					type="line";
					width=2.5;
					points[]=
					{
						{ "ForwardVec",1,"PlaneOrientation",1,{ -0.025,0.000 },1 },
						{ "ForwardVec",1,"PlaneOrientation",1,{ -0.010,0.000 },1 },
						///
						{ "ForwardVec",1,"PlaneOrientation",1,{ -0.005,0.0085 },1 },
						{ "ForwardVec",1,"PlaneOrientation",1,{ 0.000,0.000 },1 },
						{ "ForwardVec",1,"PlaneOrientation",1,{ 0.005,0.0085 },1 },
						///
						{ "ForwardVec",1,"PlaneOrientation",1,{ 0.010,0.000 },1 },
						{ "ForwardVec",1,"PlaneOrientation",1,{ 0.025,0.000 },1 }
					};
				};
			};
			class PlaneMovementCrosshair
			{
				type="group";
				class TVV
				{
					type="line";
					width=3.0;
					points[]=
					{
						{"ForwardVec",1,"Velocity",1,{"0 *1 /2","-0.02 *1 /2"},1},							
						{"ForwardVec",1,"Velocity",1,{"0.0099999998 *1 /2","-0.01732 *1 /2"},1},							
						{"ForwardVec",1,"Velocity",1,{"0.01732 *1 /2","-0.0099999998 *1 /2"},1},		
						{"ForwardVec",1,"Velocity",1,{"0.02 *1 /2","0 *1 /2"},1},							
						{"ForwardVec",1,"Velocity",1,{"0.01732 *1 /2","0.0099999998 *1 /2"},1},
						{"ForwardVec",1,"Velocity",1,{"0.0099999998 *1 /2","0.01732 *1 /2"},1},							
						{"ForwardVec",1,"Velocity",1,{"0 *1 /2","0.02 *1 /2"},1},							
						{"ForwardVec",1,"Velocity",1,{"-0.0099999998 *1 /2","0.01732 *1 /2"},1},					
						{"ForwardVec",1,"Velocity",1,{"-0.01732 *1 /2","0.0099999998 *1 /2"},1},							
						{"ForwardVec",1,"Velocity",1,{"-0.02 *1 /2","0 *1 /2"},1},						
						{"ForwardVec",1,"Velocity",1,{"-0.01732 *1 /2","-0.0099999998 *1 /2"},1},							
						{"ForwardVec",1,"Velocity",1,{"-0.0099999998 *1 /2","-0.01732 *1 /2"},1},							
						{"ForwardVec",1,"Velocity",1,{"0 *1 /2","-0.02 *1 /2"},1},
						{},							
						{"ForwardVec",1,"Velocity",1,{0.025,0},1},							
						{"ForwardVec",1,"Velocity",1,{"0.02 *1 /2",0},1},
						{},							
						{"ForwardVec",1,"Velocity",1,{-0.025,0},1},							
						{"ForwardVec",1,"Velocity",1,{"-0.02 *1 /2",0},1},
						{},							
						{"ForwardVec",1,"Velocity",1,{0,"-0.039999999 *1 /2"},1},
						{"ForwardVec",1,"Velocity",1,{0,"-0.02 *1 /2"},1}
					};
				};
			};
			class Horizont
			{
				clipTL[]={0.2,0.2};
				clipBR[]={0.8,0.68};
				class Dimmed
				{
					class Level0
					{
						type="line";
						points[]=
						{
							{"Level0",{-7.000,0.000},1,"ForwardVec",1},
							{"Level0",{-0.050,0.000},1,"ForwardVec",1},
							{},
							{"Level0",{0.050,0.000},1,"ForwardVec",1},
							{"Level0",{7.000,0.000},1,"ForwardVec",1}
						};
					};
					class LevelM5: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelM5",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelM5",{-0.090,0.000},1,"ForwardVec",1},
							{},
							{"LevelM5",{-0.080,0.000},1,"ForwardVec",1},
							{"LevelM5",{-0.070,0.000},1,"ForwardVec",1},
							{},
							{"LevelM5",{-0.060,0.000},1,"ForwardVec",1},
							{"LevelM5",{-0.050,0.000},1,"ForwardVec",1},
							{},
							{"LevelM5",{-0.040,0.000},1,"ForwardVec",1},
							{"LevelM5",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelM5",{-0.030,-0.010},1,"ForwardVec",1},
							{},
							{"LevelM5",{0.030,-0.010},1,"ForwardVec",1},
							{"LevelM5",{0.030,0.000},1,"ForwardVec",1},
							{"LevelM5",{0.040,0.000},1,"ForwardVec",1},
							{},
							{"LevelM5",{0.050,0.000},1,"ForwardVec",1},
							{"LevelM5",{0.060,0.000},1,"ForwardVec",1},
							{},
							{"LevelM5",{0.070,0.000},1,"ForwardVec",1},
							{"LevelM5",{0.080,0.000},1,"ForwardVec",1},
							{},
							{"LevelM5",{0.090,0.000},1,"ForwardVec",1},
							{"LevelM5",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALM_1_5
					{
						type="text";
						source="static";
						text=-5;
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelM5",{-0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM5",{-0.08500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM5",{-0.11500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_5: VALM_1_5
					{
						align="right";
						pos[]=	{"LevelM5",{0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM5",{0.14500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM5",{0.11500,-0.000},1,"ForwardVec",1};
					};
					class LevelP5: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelP5",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelP5",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelP5",{-0.030,0.010},1,"ForwardVec",1},
							{},
							{"LevelP5",{0.030,0.010},1,"ForwardVec",1},
							{"LevelP5",{0.030,0.000},1,"ForwardVec",1},
							{"LevelP5",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALP_1_5
					{
						type="text";
						source="static";
						text="5";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelP5",{-0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP5",{-0.08500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP5",{-0.11500,0.030},1,"ForwardVec",1};
					};
					class VALP_2_5: VALP_1_5
					{
						align="right";
						pos[]=	{"LevelP5",{0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP5",{0.14500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP5",{0.11500,0.030},1,"ForwardVec",1};
					};
					class LevelM10: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelM10",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelM10",{-0.090,0.000},1,"ForwardVec",1},
							{},
							{"LevelM10",{-0.080,0.000},1,"ForwardVec",1},
							{"LevelM10",{-0.070,0.000},1,"ForwardVec",1},
							{},
							{"LevelM10",{-0.060,0.000},1,"ForwardVec",1},
							{"LevelM10",{-0.050,0.000},1,"ForwardVec",1},
							{},
							{"LevelM10",{-0.040,0.000},1,"ForwardVec",1},
							{"LevelM10",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelM10",{-0.030,-0.010},1,"ForwardVec",1},
							{},
							{"LevelM10",{0.030,-0.010},1,"ForwardVec",1},
							{"LevelM10",{0.030,0.000},1,"ForwardVec",1},
							{"LevelM10",{0.040,0.000},1,"ForwardVec",1},
							{},
							{"LevelM10",{0.050,0.000},1,"ForwardVec",1},
							{"LevelM10",{0.060,0.000},1,"ForwardVec",1},
							{},
							{"LevelM10",{0.070,0.000},1,"ForwardVec",1},
							{"LevelM10",{0.080,0.000},1,"ForwardVec",1},
							{},
							{"LevelM10",{0.090,0.000},1,"ForwardVec",1},
							{"LevelM10",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALM_1_10
					{
						type="text";
						source="static";
						text=-10;
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelM10",{-0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM10",{-0.08500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM10",{-0.11500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_10: VALM_1_10
					{
						align="right";
						pos[]=	{"LevelM10",{0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM10",{0.14500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM10",{0.11500,-0.000},1,"ForwardVec",1};
					};
					class LevelP10: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelP10",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelP10",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelP10",{-0.030,0.010},1,"ForwardVec",1},
							{},
							{"LevelP10",{0.030,0.010},1,"ForwardVec",1},
							{"LevelP10",{0.030,0.000},1,"ForwardVec",1},
							{"LevelP10",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALP_1_10
					{
						type="text";
						source="static";
						text="10";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelP10",{-0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP10",{-0.08500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP10",{-0.11500,0.030},1,"ForwardVec",1};
					};
					class VALP_2_10: VALP_1_10
					{
						align="right";
						pos[]=	{"LevelP10",{0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP10",{0.14500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP10",{0.11500,0.030},1,"ForwardVec",1};
					};
					class LevelM15: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelM15",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelM15",{-0.090,0.000},1,"ForwardVec",1},
							{},
							{"LevelM15",{-0.080,0.000},1,"ForwardVec",1},
							{"LevelM15",{-0.070,0.000},1,"ForwardVec",1},
							{},
							{"LevelM15",{-0.060,0.000},1,"ForwardVec",1},
							{"LevelM15",{-0.050,0.000},1,"ForwardVec",1},
							{},
							{"LevelM15",{-0.040,0.000},1,"ForwardVec",1},
							{"LevelM15",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelM15",{-0.030,-0.010},1,"ForwardVec",1},
							{},
							{"LevelM15",{0.030,-0.010},1,"ForwardVec",1},
							{"LevelM15",{0.030,0.000},1,"ForwardVec",1},
							{"LevelM15",{0.040,0.000},1,"ForwardVec",1},
							{},
							{"LevelM15",{0.050,0.000},1,"ForwardVec",1},
							{"LevelM15",{0.060,0.000},1,"ForwardVec",1},
							{},
							{"LevelM15",{0.070,0.000},1,"ForwardVec",1},
							{"LevelM15",{0.080,0.000},1,"ForwardVec",1},
							{},
							{"LevelM15",{0.090,0.000},1,"ForwardVec",1},
							{"LevelM15",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALM_1_15
					{
						type="text";
						source="static";
						text=-15;
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelM15",{-0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM15",{-0.08500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM15",{-0.11500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_15: VALM_1_15
					{
						align="right";
						pos[]=	{"LevelM15",{0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM15",{0.14500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM15",{0.11500,-0.000},1,"ForwardVec",1};
					};
					class LevelP15: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelP15",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelP15",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelP15",{-0.030,0.010},1,"ForwardVec",1},
							{},
							{"LevelP15",{0.030,0.010},1,"ForwardVec",1},
							{"LevelP15",{0.030,0.000},1,"ForwardVec",1},
							{"LevelP15",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALP_1_15
					{
						type="text";
						source="static";
						text="15";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelP15",{-0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP15",{-0.08500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP15",{-0.11500,0.030},1,"ForwardVec",1};
					};
					class VALP_2_15: VALP_1_15
					{
						align="right";
						pos[]=	{"LevelP15",{0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP15",{0.14500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP15",{0.11500,0.030},1,"ForwardVec",1};
					};
					class LevelM20: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelM20",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelM20",{-0.090,0.000},1,"ForwardVec",1},
							{},
							{"LevelM20",{-0.080,0.000},1,"ForwardVec",1},
							{"LevelM20",{-0.070,0.000},1,"ForwardVec",1},
							{},
							{"LevelM20",{-0.060,0.000},1,"ForwardVec",1},
							{"LevelM20",{-0.050,0.000},1,"ForwardVec",1},
							{},
							{"LevelM20",{-0.040,0.000},1,"ForwardVec",1},
							{"LevelM20",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelM20",{-0.030,-0.010},1,"ForwardVec",1},
							{},
							{"LevelM20",{0.030,-0.010},1,"ForwardVec",1},
							{"LevelM20",{0.030,0.000},1,"ForwardVec",1},
							{"LevelM20",{0.040,0.000},1,"ForwardVec",1},
							{},
							{"LevelM20",{0.050,0.000},1,"ForwardVec",1},
							{"LevelM20",{0.060,0.000},1,"ForwardVec",1},
							{},
							{"LevelM20",{0.070,0.000},1,"ForwardVec",1},
							{"LevelM20",{0.080,0.000},1,"ForwardVec",1},
							{},
							{"LevelM20",{0.090,0.000},1,"ForwardVec",1},
							{"LevelM20",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALM_1_20
					{
						type="text";
						source="static";
						text=-20;
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelM20",{-0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM20",{-0.08500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM20",{-0.11500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_20: VALM_1_20
					{
						align="right";
						pos[]=	{"LevelM20",{0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM20",{0.14500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM20",{0.11500,-0.000},1,"ForwardVec",1};
					};
					class LevelP20: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelP20",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelP20",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelP20",{-0.030,0.010},1,"ForwardVec",1},
							{},
							{"LevelP20",{0.030,0.010},1,"ForwardVec",1},
							{"LevelP20",{0.030,0.000},1,"ForwardVec",1},
							{"LevelP20",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALP_1_20
					{
						type="text";
						source="static";
						text="20";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelP20",{-0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP20",{-0.08500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP20",{-0.11500,0.030},1,"ForwardVec",1};
					};
					class VALP_2_20: VALP_1_20
					{
						align="right";
						pos[]=	{"LevelP20",{0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP20",{0.14500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP20",{0.11500,0.030},1,"ForwardVec",1};
					};
					class LevelM25: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelM25",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelM25",{-0.090,0.000},1,"ForwardVec",1},
							{},
							{"LevelM25",{-0.080,0.000},1,"ForwardVec",1},
							{"LevelM25",{-0.070,0.000},1,"ForwardVec",1},
							{},
							{"LevelM25",{-0.060,0.000},1,"ForwardVec",1},
							{"LevelM25",{-0.050,0.000},1,"ForwardVec",1},
							{},
							{"LevelM25",{-0.040,0.000},1,"ForwardVec",1},
							{"LevelM25",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelM25",{-0.030,-0.010},1,"ForwardVec",1},
							{},
							{"LevelM25",{0.030,-0.010},1,"ForwardVec",1},
							{"LevelM25",{0.030,0.000},1,"ForwardVec",1},
							{"LevelM25",{0.040,0.000},1,"ForwardVec",1},
							{},
							{"LevelM25",{0.050,0.000},1,"ForwardVec",1},
							{"LevelM25",{0.060,0.000},1,"ForwardVec",1},
							{},
							{"LevelM25",{0.070,0.000},1,"ForwardVec",1},
							{"LevelM25",{0.080,0.000},1,"ForwardVec",1},
							{},
							{"LevelM25",{0.090,0.000},1,"ForwardVec",1},
							{"LevelM25",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALM_1_25
					{
						type="text";
						source="static";
						text=-25;
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelM25",{-0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM25",{-0.08500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM25",{-0.11500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_25: VALM_1_25
					{
						align="right";
						pos[]=	{"LevelM25",{0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM25",{0.14500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM25",{0.11500,-0.000},1,"ForwardVec",1};
					};
					class LevelP25: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelP25",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelP25",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelP25",{-0.030,0.010},1,"ForwardVec",1},
							{},
							{"LevelP25",{0.030,0.010},1,"ForwardVec",1},
							{"LevelP25",{0.030,0.000},1,"ForwardVec",1},
							{"LevelP25",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALP_1_25
					{
						type="text";
						source="static";
						text="25";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelP25",{-0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP25",{-0.08500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP25",{-0.11500,0.030},1,"ForwardVec",1};
					};
					class VALP_2_25: VALP_1_25
					{
						align="right";
						pos[]=	{"LevelP25",{0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP25",{0.14500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP25",{0.11500,0.030},1,"ForwardVec",1};
					};
					class LevelM30: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelM30",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelM30",{-0.090,0.000},1,"ForwardVec",1},
							{},
							{"LevelM30",{-0.080,0.000},1,"ForwardVec",1},
							{"LevelM30",{-0.070,0.000},1,"ForwardVec",1},
							{},
							{"LevelM30",{-0.060,0.000},1,"ForwardVec",1},
							{"LevelM30",{-0.050,0.000},1,"ForwardVec",1},
							{},
							{"LevelM30",{-0.040,0.000},1,"ForwardVec",1},
							{"LevelM30",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelM30",{-0.030,-0.010},1,"ForwardVec",1},
							{},
							{"LevelM30",{0.030,-0.010},1,"ForwardVec",1},
							{"LevelM30",{0.030,0.000},1,"ForwardVec",1},
							{"LevelM30",{0.040,0.000},1,"ForwardVec",1},
							{},
							{"LevelM30",{0.050,0.000},1,"ForwardVec",1},
							{"LevelM30",{0.060,0.000},1,"ForwardVec",1},
							{},
							{"LevelM30",{0.070,0.000},1,"ForwardVec",1},
							{"LevelM30",{0.080,0.000},1,"ForwardVec",1},
							{},
							{"LevelM30",{0.090,0.000},1,"ForwardVec",1},
							{"LevelM30",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALM_1_30
					{
						type="text";
						source="static";
						text=-30;
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelM30",{-0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM30",{-0.08500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM30",{-0.11500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_30: VALM_1_30
					{
						align="right";
						pos[]=	{"LevelM30",{0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM30",{0.14500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM30",{0.11500,-0.000},1,"ForwardVec",1};
					};
					class LevelP30: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelP30",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelP30",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelP30",{-0.030,0.010},1,"ForwardVec",1},
							{},
							{"LevelP30",{0.030,0.010},1,"ForwardVec",1},
							{"LevelP30",{0.030,0.000},1,"ForwardVec",1},
							{"LevelP30",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALP_1_30
					{
						type="text";
						source="static";
						text="30";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelP30",{-0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP30",{-0.08500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP30",{-0.11500,0.030},1,"ForwardVec",1};
					};
					class VALP_2_30: VALP_1_30
					{
						align="right";
						pos[]=	{"LevelP30",{0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP30",{0.14500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP30",{0.11500,0.030},1,"ForwardVec",1};
					};
					class LevelM35: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelM35",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelM35",{-0.090,0.000},1,"ForwardVec",1},
							{},
							{"LevelM35",{-0.080,0.000},1,"ForwardVec",1},
							{"LevelM35",{-0.070,0.000},1,"ForwardVec",1},
							{},
							{"LevelM35",{-0.060,0.000},1,"ForwardVec",1},
							{"LevelM35",{-0.050,0.000},1,"ForwardVec",1},
							{},
							{"LevelM35",{-0.040,0.000},1,"ForwardVec",1},
							{"LevelM35",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelM35",{-0.030,-0.010},1,"ForwardVec",1},
							{},
							{"LevelM35",{0.030,-0.010},1,"ForwardVec",1},
							{"LevelM35",{0.030,0.000},1,"ForwardVec",1},
							{"LevelM35",{0.040,0.000},1,"ForwardVec",1},
							{},
							{"LevelM35",{0.050,0.000},1,"ForwardVec",1},
							{"LevelM35",{0.060,0.000},1,"ForwardVec",1},
							{},
							{"LevelM35",{0.070,0.000},1,"ForwardVec",1},
							{"LevelM35",{0.080,0.000},1,"ForwardVec",1},
							{},
							{"LevelM35",{0.090,0.000},1,"ForwardVec",1},
							{"LevelM35",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALM_1_35
					{
						type="text";
						source="static";
						text=-35;
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelM35",{-0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM35",{-0.08500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM35",{-0.11500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_35: VALM_1_35
					{
						align="right";
						pos[]=	{"LevelM35",{0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM35",{0.14500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM35",{0.11500,-0.000},1,"ForwardVec",1};
					};
					class LevelP35: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelP35",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelP35",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelP35",{-0.030,0.010},1,"ForwardVec",1},
							{},
							{"LevelP35",{0.030,0.010},1,"ForwardVec",1},
							{"LevelP35",{0.030,0.000},1,"ForwardVec",1},
							{"LevelP35",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALP_1_35
					{
						type="text";
						source="static";
						text="35";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelP35",{-0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP35",{-0.08500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP35",{-0.11500,0.030},1,"ForwardVec",1};
					};
					class VALP_2_35: VALP_1_35
					{
						align="right";
						pos[]=	{"LevelP35",{0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP35",{0.14500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP35",{0.11500,0.030},1,"ForwardVec",1};
					};
					class LevelM40: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelM40",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelM40",{-0.090,0.000},1,"ForwardVec",1},
							{},
							{"LevelM40",{-0.080,0.000},1,"ForwardVec",1},
							{"LevelM40",{-0.070,0.000},1,"ForwardVec",1},
							{},
							{"LevelM40",{-0.060,0.000},1,"ForwardVec",1},
							{"LevelM40",{-0.050,0.000},1,"ForwardVec",1},
							{},
							{"LevelM40",{-0.040,0.000},1,"ForwardVec",1},
							{"LevelM40",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelM40",{-0.030,-0.010},1,"ForwardVec",1},
							{},
							{"LevelM40",{0.030,-0.010},1,"ForwardVec",1},
							{"LevelM40",{0.030,0.000},1,"ForwardVec",1},
							{"LevelM40",{0.040,0.000},1,"ForwardVec",1},
							{},
							{"LevelM40",{0.050,0.000},1,"ForwardVec",1},
							{"LevelM40",{0.060,0.000},1,"ForwardVec",1},
							{},
							{"LevelM40",{0.070,0.000},1,"ForwardVec",1},
							{"LevelM40",{0.080,0.000},1,"ForwardVec",1},
							{},
							{"LevelM40",{0.090,0.000},1,"ForwardVec",1},
							{"LevelM40",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALM_1_40
					{
						type="text";
						source="static";
						text=-40;
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelM40",{-0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM40",{-0.08500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM40",{-0.11500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_40: VALM_1_40
					{
						align="right";
						pos[]=	{"LevelM40",{0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM40",{0.14500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM40",{0.11500,-0.000},1,"ForwardVec",1};
					};
					class LevelP40: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelP40",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelP40",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelP40",{-0.030,0.010},1,"ForwardVec",1},
							{},
							{"LevelP40",{0.030,0.010},1,"ForwardVec",1},
							{"LevelP40",{0.030,0.000},1,"ForwardVec",1},
							{"LevelP40",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALP_1_40
					{
						type="text";
						source="static";
						text="40";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelP40",{-0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP40",{-0.08500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP40",{-0.11500,0.030},1,"ForwardVec",1};
					};
					class VALP_2_40: VALP_1_40
					{
						align="right";
						pos[]=	{"LevelP40",{0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP40",{0.14500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP40",{0.11500,0.030},1,"ForwardVec",1};
					};
					class LevelM45: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelM45",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelM45",{-0.090,0.000},1,"ForwardVec",1},
							{},
							{"LevelM45",{-0.080,0.000},1,"ForwardVec",1},
							{"LevelM45",{-0.070,0.000},1,"ForwardVec",1},
							{},
							{"LevelM45",{-0.060,0.000},1,"ForwardVec",1},
							{"LevelM45",{-0.050,0.000},1,"ForwardVec",1},
							{},
							{"LevelM45",{-0.040,0.000},1,"ForwardVec",1},
							{"LevelM45",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelM45",{-0.030,-0.010},1,"ForwardVec",1},
							{},
							{"LevelM45",{0.030,-0.010},1,"ForwardVec",1},
							{"LevelM45",{0.030,0.000},1,"ForwardVec",1},
							{"LevelM45",{0.040,0.000},1,"ForwardVec",1},
							{},
							{"LevelM45",{0.050,0.000},1,"ForwardVec",1},
							{"LevelM45",{0.060,0.000},1,"ForwardVec",1},
							{},
							{"LevelM45",{0.070,0.000},1,"ForwardVec",1},
							{"LevelM45",{0.080,0.000},1,"ForwardVec",1},
							{},
							{"LevelM45",{0.090,0.000},1,"ForwardVec",1},
							{"LevelM45",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALM_1_45
					{
						type="text";
						source="static";
						text=-45;
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelM45",{-0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM45",{-0.08500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM45",{-0.11500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_45: VALM_1_45
					{
						align="right";
						pos[]=	{"LevelM45",{0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM45",{0.14500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM45",{0.11500,-0.000},1,"ForwardVec",1};
					};
					class LevelP45: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelP45",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelP45",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelP45",{-0.030,0.010},1,"ForwardVec",1},
							{},
							{"LevelP45",{0.030,0.010},1,"ForwardVec",1},
							{"LevelP45",{0.030,0.000},1,"ForwardVec",1},
							{"LevelP45",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALP_1_45
					{
						type="text";
						source="static";
						text="45";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelP45",{-0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP45",{-0.08500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP45",{-0.11500,0.030},1,"ForwardVec",1};
					};
					class VALP_2_45: VALP_1_45
					{
						align="right";
						pos[]=	{"LevelP45",{0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP45",{0.14500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP45",{0.11500,0.030},1,"ForwardVec",1};
					};
					class LevelM50: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelM50",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelM50",{-0.090,0.000},1,"ForwardVec",1},
							{},
							{"LevelM50",{-0.080,0.000},1,"ForwardVec",1},
							{"LevelM50",{-0.070,0.000},1,"ForwardVec",1},
							{},
							{"LevelM50",{-0.060,0.000},1,"ForwardVec",1},
							{"LevelM50",{-0.050,0.000},1,"ForwardVec",1},
							{},
							{"LevelM50",{-0.040,0.000},1,"ForwardVec",1},
							{"LevelM50",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelM50",{-0.030,-0.010},1,"ForwardVec",1},
							{},
							{"LevelM50",{0.030,-0.010},1,"ForwardVec",1},
							{"LevelM50",{0.030,0.000},1,"ForwardVec",1},
							{"LevelM50",{0.040,0.000},1,"ForwardVec",1},
							{},
							{"LevelM50",{0.050,0.000},1,"ForwardVec",1},
							{"LevelM50",{0.060,0.000},1,"ForwardVec",1},
							{},
							{"LevelM50",{0.070,0.000},1,"ForwardVec",1},
							{"LevelM50",{0.080,0.000},1,"ForwardVec",1},
							{},
							{"LevelM50",{0.090,0.000},1,"ForwardVec",1},
							{"LevelM50",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALM_1_50
					{
						type="text";
						source="static";
						text=-50;
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelM50",{-0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM50",{-0.08500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM50",{-0.11500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_50: VALM_1_50
					{
						align="right";
						pos[]=	{"LevelM50",{0.11500,-0.030},1,"ForwardVec",1};
						right[]={"LevelM50",{0.14500,-0.030},1,"ForwardVec",1};
						down[]=	{"LevelM50",{0.11500,-0.000},1,"ForwardVec",1};
					};
					class LevelP50: Level0
					{
						type="line";
						width=2.5;
						points[]=
						{
							{"LevelP50",{-0.100,0.000},1,"ForwardVec",1},
							{"LevelP50",{-0.030,0.000},1,"ForwardVec",1},
							{"LevelP50",{-0.030,0.010},1,"ForwardVec",1},
							{},
							{"LevelP50",{0.030,0.010},1,"ForwardVec",1},
							{"LevelP50",{0.030,0.000},1,"ForwardVec",1},
							{"LevelP50",{0.100,0.000},1,"ForwardVec",1}
						};
					};
					class VALP_1_50
					{
						type="text";
						source="static";
						text="50";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=	{"LevelP50",{-0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP50",{-0.08500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP50",{-0.11500,0.030},1,"ForwardVec",1};
					};
					class VALP_2_50: VALP_1_50
					{
						align="right";
						pos[]=	{"LevelP50",{0.11500,0.000},1,"ForwardVec",1};
						right[]={"LevelP50",{0.14500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP50",{0.11500,0.030},1,"ForwardVec",1};
					};
				};
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
		color[]={0,1,0,0.1};
		enableParallax=1;
		class Bones
		{
			class ForwardVec
			{
				type = "vector";
				source = "forward";
				pos0[] = {0.0,0.0};
				//pos10[] = {"0.253 + 0.0","0.253 + 0.0"};
				pos10[] = {0.0,0.0};
			};
			class Base_Vector
			{
				type = "vector";
				source="radar";
				//pos0[]=	{0.495,0.360};
				//pos10[]={1.200,1.065};
				#include "cfg_Vector_0_10.hpp"
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
		};
		class Draw
		{
			color[]={0.15000001,1,0.15000001};
			//color[] = {0,0.3,0.05};
			alpha=0.9;
			clipTL[]={0,0};
			clipBR[]={1,1};
			condition="on";
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
			class GUN_group
			{
				condition="mgun";
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
				class AmmoCount
				{
					type="text";
					source="ammo";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=	{{0.56,"0.89 - 0.1"},1};
					right[]={{0.60,"0.89 - 0.1"},1};
					down[]=	{{0.56,"0.93 - 0.1"},1};
				};
				class Separating_stick
				{
					type="line";
					width=4;
					points[] = 
					{
						{{ 0.5555,"0.885 - 0.1" },1 },
						{{ 0.5555,"0.935 - 0.1" },1 }
					};
				};
				class ARMtext
				{
					type="text";
					align="center";
					source="static";
					text="ARM";
					scale=1;
					pos[]=	{{0.50,"0.93 - 0.1"},1};
					right[]={{0.54,"0.93 - 0.1"},1};
					down[]=	{{0.50,"0.97 - 0.1"},1};
				};
				class Master_MODE
				{
					type="text";
					align="center";
					source="static";
					text="GUNS";
					scale=1;
					pos[]=	{{0.50,"0.85 - 0.1"},1};
					right[]={{0.54,"0.85 - 0.1"},1};
					down[]=	{{0.50,"0.89 - 0.1"},1};
				};
				class radar_tgts_GUN
				{
					type="radar";
					//pos0[]=	{0.495,0.360};
					//pos10[]={1.200,1.065};
					#include "cfg_Vector_0_10.hpp"
					width=2.5;
					points[]=
					{
						{"ForwardVec",1,"RadarContact",{-0.02,-0.02},1},
						{"ForwardVec",1,"RadarContact",{0.02,-0.02},1},
						{"ForwardVec",1,"RadarContact",{0.02,0.02},1},
						{"ForwardVec",1,"RadarContact",{-0.02,0.02},1},
						{"ForwardVec",1,"RadarContact",{-0.02,-0.02},1}
					};
				};
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
						{ "ForwardVec",1,"WeaponAim",1,{ "-1.2000 * 0.06","-0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-1.0000 * 0.06","-0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.9877 * 0.06","-0.1736 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.9397 * 0.06","-0.3420 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.8660 * 0.06","-0.5000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.7660 * 0.06","-0.6428 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.6428 * 0.06","-0.7660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.5000 * 0.06","-0.8660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.3420 * 0.06","-0.9397 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.1736 * 0.06","-0.9877 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.0000 * 0.06","-1.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.1736 * 0.06","-0.9877 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.3420 * 0.06","-0.9397 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.5000 * 0.06","-0.8660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.6428 * 0.06","-0.7660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.7660 * 0.06","-0.6428 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.8660 * 0.06","-0.5000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.9397 * 0.06","-0.3420 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.9877 * 0.06","-0.1736 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "1.0000 * 0.06","-0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "1.2000 * 0.06","-0.0000 * 0.06" },1 },
						{ },
						{ "ForwardVec",1,"WeaponAim",1,{ "-1.2000 * 0.06","0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-1.0000 * 0.06","0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.9877 * 0.06","0.1736 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.9397 * 0.06","0.3420 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.8660 * 0.06","0.5000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.7660 * 0.06","0.6428 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.6428 * 0.06","0.7660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.5000 * 0.06","0.8660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.3420 * 0.06","0.9397 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.1736 * 0.06","0.9877 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.0000 * 0.06","1.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.1736 * 0.06","0.9877 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.3420 * 0.06","0.9397 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.5000 * 0.06","0.8660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.6428 * 0.06","0.7660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.7660 * 0.06","0.6428 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.8660 * 0.06","0.5000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.9397 * 0.06","0.3420 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.9877 * 0.06","0.1736 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "1.0000 * 0.06","0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "1.2000 * 0.06","0.0000 * 0.06" },1 },
						{ },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.0000 * 0.06","-1.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.0000 * 0.06","-1.2000 * 0.06" },1 },
						{ },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.0000 * 0.06","1.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.0000 * 0.06","1.2000 * 0.06" },1 },
						{ },
						{ "ForwardVec",1,"WeaponAim",1,{ 0.005,0 },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ -0.005,0 },1 },
						{ },
						{ "ForwardVec",1,"WeaponAim",1,{ 0,0.005 },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ 0,-0.005 },1 }
					};
				};
				class Range_GUN
				{
					type = "line";
					width = 7.0;
					points[] = 
					{
						{ "Gun_Range_Rot",{ 0,"1.0000 * 0.06" },1,"ForwardVec",1 },
						{ "Gun_Range_Rot",{ 0,"1.3000 * 0.06" },1,"ForwardVec",1 }
					};
				};
			};
			class ROCKET_group
			{
				condition="rocket";
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
				class AmmoCount
				{
					type="text";
					source="ammo";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=	{{0.56,"0.89 - 0.1"},1};
					right[]={{0.60,"0.89 - 0.1"},1};
					down[]=	{{0.56,"0.93 - 0.1"},1};
				};
				class Separating_stick
				{
					type="line";
					width=4;
					points[] = 
					{
						{{ 0.5555,"0.885 - 0.1" },1 },
						{{ 0.5555,"0.935 - 0.1" },1 }
					};
				};
				class ARMtext
				{
					type="text";
					align="center";
					source="static";
					text="ARM";
					scale=1;
					pos[]=	{{0.50,"0.93 - 0.1"},1};
					right[]={{0.54,"0.93 - 0.1"},1};
					down[]=	{{0.50,"0.97 - 0.1"},1};
				};
				class Master_MODE
				{
					type="text";
					align="center";
					source="static";
					text="A-G";
					scale=1;
					pos[]=	{{0.50,"0.85 - 0.1"},1};
					right[]={{0.54,"0.85 - 0.1"},1};
					down[]=	{{0.50,"0.89 - 0.1"},1};
				};
				class radar_tgts_RKT
				{
					type="radar";
					//pos0[]=	{0.495,0.360};
					//pos10[]={1.200,1.065};
					#include "cfg_Vector_0_10.hpp"
					width=2.5;
					points[]=
					{
						{"ForwardVec",1,"RadarContact",{-0.02,-0.02},1},
						{"ForwardVec",1,"RadarContact",{0.02,-0.02},1},
						{"ForwardVec",1,"RadarContact",{0.02,0.02},1},
						{"ForwardVec",1,"RadarContact",{-0.02,0.02},1},
						{"ForwardVec",1,"RadarContact",{-0.02,-0.02},1}
					};
				};
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
						{ "ForwardVec",1,"WeaponAim",1,{ "-1.2000 * 0.06","-0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-1.0000 * 0.06","-0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.9877 * 0.06","-0.1736 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.9397 * 0.06","-0.3420 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.8660 * 0.06","-0.5000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.7660 * 0.06","-0.6428 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.6428 * 0.06","-0.7660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.5000 * 0.06","-0.8660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.3420 * 0.06","-0.9397 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.1736 * 0.06","-0.9877 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.0000 * 0.06","-1.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.1736 * 0.06","-0.9877 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.3420 * 0.06","-0.9397 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.5000 * 0.06","-0.8660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.6428 * 0.06","-0.7660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.7660 * 0.06","-0.6428 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.8660 * 0.06","-0.5000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.9397 * 0.06","-0.3420 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.9877 * 0.06","-0.1736 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "1.0000 * 0.06","-0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "1.2000 * 0.06","-0.0000 * 0.06" },1 },
						{ },
						{ "ForwardVec",1,"WeaponAim",1,{ "-1.2000 * 0.06","0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-1.0000 * 0.06","0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.9877 * 0.06","0.1736 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.9397 * 0.06","0.3420 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.8660 * 0.06","0.5000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.7660 * 0.06","0.6428 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.6428 * 0.06","0.7660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.5000 * 0.06","0.8660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.3420 * 0.06","0.9397 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.1736 * 0.06","0.9877 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.0000 * 0.06","1.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.1736 * 0.06","0.9877 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.3420 * 0.06","0.9397 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.5000 * 0.06","0.8660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.6428 * 0.06","0.7660 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.7660 * 0.06","0.6428 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.8660 * 0.06","0.5000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.9397 * 0.06","0.3420 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "0.9877 * 0.06","0.1736 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "1.0000 * 0.06","0.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "1.2000 * 0.06","0.0000 * 0.06" },1 },
						{ },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.0000 * 0.06","-1.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.0000 * 0.06","-1.2000 * 0.06" },1 },
						{ },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.0000 * 0.06","1.0000 * 0.06" },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ "-0.0000 * 0.06","1.2000 * 0.06" },1 },
						{ },
						{ "ForwardVec",1,"WeaponAim",1,{ 0.005,0 },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ -0.005,0 },1 },
						{ },
						{ "ForwardVec",1,"WeaponAim",1,{ 0,0.005 },1 },
						{ "ForwardVec",1,"WeaponAim",1,{ 0,-0.005 },1 }
					};
				};
				class Range_RKT
				{
					type = "line";
					width = 7.0;
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
				class AmmoCount
				{
					type="text";
					source="ammo";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=	{{0.56,"0.89 - 0.1"},1};
					right[]={{0.60,"0.89 - 0.1"},1};
					down[]=	{{0.56,"0.93 - 0.1"},1};
				};
				class Separating_stick
				{
					type="line";
					width=4;
					points[] = 
					{
						{{ 0.5555,"0.885 - 0.1" },1 },
						{{ 0.5555,"0.935 - 0.1" },1 }
					};
				};
				class ARMtext
				{
					type="text";
					align="center";
					source="static";
					text="ARM";
					scale=1;
					pos[]=	{{0.50,"0.93 - 0.1"},1};
					right[]={{0.54,"0.93 - 0.1"},1};
					down[]=	{{0.50,"0.97 - 0.1"},1};
				};
				class Master_MODE
				{
					type="text";
					align="center";
					source="static";
					text="A-G";
					scale=1;
					pos[]=	{{0.50,"0.85 - 0.1"},1};
					right[]={{0.54,"0.85 - 0.1"},1};
					down[]=	{{0.50,"0.89 - 0.1"},1};
				};
				class radar_tgts_AGM
				{
					type="radar";
					//pos0[]=	{0.495,0.360};
					//pos10[]={1.200,1.065};
					#include "cfg_Vector_0_10.hpp"
					width=2.5;
					points[]=
					{
						{"ForwardVec",1,"RadarContact",{-0.02,-0.02},1},
						{"ForwardVec",1,"RadarContact",{0.02,-0.02},1},
						{"ForwardVec",1,"RadarContact",{0.02,0.02},1},
						{"ForwardVec",1,"RadarContact",{-0.02,0.02},1},
						{"ForwardVec",1,"RadarContact",{-0.02,-0.02},1}
					};
				};
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
				class RangeBand_AGM
				{
					type="line";
					width=3.0;
					points[]=
					{
						
						{
							"RangeBone",
							{0.00,0.0},
							1
						},
						
						{
							"RangeBone",
							{-0.01,-0.01},
							1
						},
						
						{
							"RangeBone",
							{-0.01,0.01},
							1
						},
						
						{
							"RangeBone",
							{0.00,0.0},
							1
						}
					};
				};
				class Range_marks_AGM
				{
					type="line";
					width=3.0;
					points[] = 
					{
						///////////////////////////////// range marks
						{ { 0.29,"0.40 - 0.1" },1 },
						{ { 0.31,"0.40 - 0.1" },1 },
						{},
						{ { 0.29,"0.467 - 0.1" },1 },
						{ { 0.31,"0.467 - 0.1" },1 },
						{},
						{ { 0.29,"0.567 - 0.1" },1 },
						{ { 0.31,"0.567 - 0.1" },1 },
						{},
						{ { 0.29,"0.60 - 0.1" },1 },
						{ { 0.31,"0.60 - 0.1" },1 },
						{},
						{ { 0.29,"0.467 - 0.1" },1 }, // line
						{ { 0.29,"0.567 - 0.1" },1 },
					};
				};
			};
			class AAM_group
			{
				condition="AAmissile";
				type="group";
				class AmmoCount
				{
					type="text";
					source="ammo";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=	{{0.56,"0.89 - 0.1"},1};
					right[]={{0.60,"0.89 - 0.1"},1};
					down[]=	{{0.56,"0.93 - 0.1"},1};
				};
				class Separating_stick
				{
					type="line";
					width=4;
					points[] = 
					{
						{{ 0.5555,"0.885 - 0.1" },1 },
						{{ 0.5555,"0.935 - 0.1" },1 }
					};
				};
				class ARMtext
				{
					type="text";
					align="center";
					source="static";
					text="ARM";
					scale=1;
					pos[]=	{{0.50,"0.93 - 0.1"},1};
					right[]={{0.54,"0.93 - 0.1"},1};
					down[]=	{{0.50,"0.97 - 0.1"},1};
				};
				class Master_MODE
				{
					type="text";
					align="center";
					source="static";
					text="A-A";
					scale=1;
					pos[]=	{{0.50,"0.85 - 0.1"},1};
					right[]={{0.54,"0.85 - 0.1"},1};
					down[]=	{{0.50,"0.89 - 0.1"},1};
				};
				class AAM_Perfect_Circle
				{
					type="line";
					width=3;
					points[]=
					{
						{"WeaponAim",{"1.0000 * 0.1750","0.0000 * 0.1750"},1},			//0
						{"WeaponAim",{"0.9962 * 0.1750","0.0872 * 0.1750"},1},			//5
						{"WeaponAim",{"0.9848 * 0.1750","0.1736 * 0.1750"},1},			//10
						{"WeaponAim",{"0.9659 * 0.1750","0.2588 * 0.1750"},1},			//15
						{"WeaponAim",{"0.9397 * 0.1750","0.3420 * 0.1750"},1},			//20
						{"WeaponAim",{"0.9063 * 0.1750","0.4226 * 0.1750"},1},			//25
						{"WeaponAim",{"0.8660 * 0.1750","0.5000 * 0.1750"},1},			//30
						{"WeaponAim",{"0.8192 * 0.1750","0.5736 * 0.1750"},1},			//35
						{"WeaponAim",{"0.7660 * 0.1750","0.6428 * 0.1750"},1},			//40
						{"WeaponAim",{"0.7071 * 0.1750","0.7071 * 0.1750"},1},			//45
						{"WeaponAim",{"0.6428 * 0.1750","0.7660 * 0.1750"},1},			//50
						{"WeaponAim",{"0.5736 * 0.1750","0.8192 * 0.1750"},1},			//55
						{"WeaponAim",{"0.5000 * 0.1750","0.8660 * 0.1750"},1},			//60
						{"WeaponAim",{"0.4226 * 0.1750","0.9063 * 0.1750"},1},			//65
						{"WeaponAim",{"0.3420 * 0.1750","0.9397 * 0.1750"},1},			//70
						{"WeaponAim",{"0.2588 * 0.1750","0.9659 * 0.1750"},1},			//75
						{"WeaponAim",{"0.1736 * 0.1750","0.9848 * 0.1750"},1},			//80
						{"WeaponAim",{"0.0872 * 0.1750","0.9962 * 0.1750"},1},			//85
						{"WeaponAim",{"0.0000 * 0.1750","1.0000 * 0.1750"},1},			//90
						//----------------------------------------------------------------------------------
						{"WeaponAim",{"-0.0872 * 0.1750","0.9962 * 0.1750"},1},			//95
						{"WeaponAim",{"-0.1736 * 0.1750","0.9848 * 0.1750"},1},			//100
						{"WeaponAim",{"-0.2588 * 0.1750","0.9659 * 0.1750"},1},			//105
						{"WeaponAim",{"-0.3420 * 0.1750","0.9397 * 0.1750"},1},			//110
						{"WeaponAim",{"-0.4226 * 0.1750","0.9063 * 0.1750"},1},			//115
						{"WeaponAim",{"-0.5000 * 0.1750","0.8660 * 0.1750"},1},			//120
						{"WeaponAim",{"-0.5736 * 0.1750","0.8192 * 0.1750"},1},			//125
						{"WeaponAim",{"-0.6428 * 0.1750","0.7660 * 0.1750"},1},			//130
						{"WeaponAim",{"-0.7071 * 0.1750","0.7071 * 0.1750"},1},			//135
						{"WeaponAim",{"-0.7660 * 0.1750","0.6428 * 0.1750"},1},			//140
						{"WeaponAim",{"-0.8192 * 0.1750","0.5736 * 0.1750"},1},			//145
						{"WeaponAim",{"-0.8660 * 0.1750","0.5000 * 0.1750"},1},			//150
						{"WeaponAim",{"-0.9063 * 0.1750","0.4226 * 0.1750"},1},			//155
						{"WeaponAim",{"-0.9397 * 0.1750","0.3420 * 0.1750"},1},			//160
						{"WeaponAim",{"-0.9659 * 0.1750","0.2588 * 0.1750"},1},			//165
						{"WeaponAim",{"-0.9848 * 0.1750","0.1736 * 0.1750"},1},			//170
						{"WeaponAim",{"-0.9962 * 0.1750","0.0872 * 0.1750"},1},			//175
						{"WeaponAim",{"-1.0000 * 0.1750","0.0000 * 0.1750"},1},			//180
						//----------------------------------------------------------------------------------
						{"WeaponAim",{"-0.9962 * 0.1750","-0.0872 * 0.1750"},1},		//185
						{"WeaponAim",{"-0.9848 * 0.1750","-0.1736 * 0.1750"},1},		//190
						{"WeaponAim",{"-0.9659 * 0.1750","-0.2588 * 0.1750"},1},		//195
						{"WeaponAim",{"-0.9397 * 0.1750","-0.3420 * 0.1750"},1},		//200
						{"WeaponAim",{"-0.9063 * 0.1750","-0.4226 * 0.1750"},1},		//205
						{"WeaponAim",{"-0.8660 * 0.1750","-0.5000 * 0.1750"},1},		//210
						{"WeaponAim",{"-0.8192 * 0.1750","-0.5736 * 0.1750"},1},		//215
						{"WeaponAim",{"-0.7660 * 0.1750","-0.6428 * 0.1750"},1},		//220
						{"WeaponAim",{"-0.7071 * 0.1750","-0.7071 * 0.1750"},1},		//225
						{"WeaponAim",{"-0.6428 * 0.1750","-0.7660 * 0.1750"},1},		//230
						{"WeaponAim",{"-0.5736 * 0.1750","-0.8192 * 0.1750"},1},		//235
						{"WeaponAim",{"-0.5000 * 0.1750","-0.8660 * 0.1750"},1},		//240
						{"WeaponAim",{"-0.4226 * 0.1750","-0.9063 * 0.1750"},1},		//245
						{"WeaponAim",{"-0.3420 * 0.1750","-0.9397 * 0.1750"},1},		//250
						{"WeaponAim",{"-0.2588 * 0.1750","-0.9659 * 0.1750"},1},		//255
						{"WeaponAim",{"-0.1736 * 0.1750","-0.9848 * 0.1750"},1},		//260
						{"WeaponAim",{"-0.0872 * 0.1750","-0.9962 * 0.1750"},1},		//265
						{"WeaponAim",{"-0.0000 * 0.1750","-1.0000 * 0.1750"},1},		//270
						//----------------------------------------------------------------------------------
						{"WeaponAim",{"0.0872 * 0.1750","-0.9962 * 0.1750"},1},			//275
						{"WeaponAim",{"0.1736 * 0.1750","-0.9848 * 0.1750"},1},			//280
						{"WeaponAim",{"0.2588 * 0.1750","-0.9659 * 0.1750"},1},			//285
						{"WeaponAim",{"0.3420 * 0.1750","-0.9397 * 0.1750"},1},			//290
						{"WeaponAim",{"0.4226 * 0.1750","-0.9063 * 0.1750"},1},			//295
						{"WeaponAim",{"0.5000 * 0.1750","-0.8660 * 0.1750"},1},			//300
						{"WeaponAim",{"0.5736 * 0.1750","-0.8192 * 0.1750"},1},			//305
						{"WeaponAim",{"0.6428 * 0.1750","-0.7660 * 0.1750"},1},			//310
						{"WeaponAim",{"0.7071 * 0.1750","-0.7071 * 0.1750"},1},			//315
						{"WeaponAim",{"0.7660 * 0.1750","-0.6428 * 0.1750"},1},			//320
						{"WeaponAim",{"0.8192 * 0.1750","-0.5736 * 0.1750"},1},			//325
						{"WeaponAim",{"0.8660 * 0.1750","-0.5000 * 0.1750"},1},			//330
						{"WeaponAim",{"0.9063 * 0.1750","-0.4226 * 0.1750"},1},			//335
						{"WeaponAim",{"0.9397 * 0.1750","-0.3420 * 0.1750"},1},			//340
						{"WeaponAim",{"0.9659 * 0.1750","-0.2588 * 0.1750"},1},			//345
						{"WeaponAim",{"0.9848 * 0.1750","-0.1736 * 0.1750"},1},			//350
						{"WeaponAim",{"0.9962 * 0.1750","-0.0872 * 0.1750"},1},			//355
						{"WeaponAim",{"1.0000 * 0.1750","-0.0000 * 0.1750"},1}			//360
					};
				};
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
				};*/
				class radar_tgts_AAM
				{
					type="radar";
					//pos0[]=	{0.495,0.360};
					//pos10[]={1.200,1.065};
					#include "cfg_Vector_0_10.hpp"
					width=2.5;
					points[]=
					{
						{"ForwardVec",1,"RadarContact",{-0.02,-0.02},1},
						{"ForwardVec",1,"RadarContact",{0.02,-0.02},1},
						{"ForwardVec",1,"RadarContact",{0.02,0.02},1},
						{"ForwardVec",1,"RadarContact",{-0.02,0.02},1},
						{"ForwardVec",1,"RadarContact",{-0.02,-0.02},1}
					};
				};
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
				class AmmoCount
				{
					type="text";
					source="ammo";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=	{{0.56,"0.89 - 0.1"},1};
					right[]={{0.60,"0.89 - 0.1"},1};
					down[]=	{{0.56,"0.93 - 0.1"},1};
				};
				class Separating_stick
				{
					type="line";
					width=4;
					points[] = 
					{
						{{ 0.5555,"0.885 - 0.1" },1 },
						{{ 0.5555,"0.935 - 0.1" },1 }
					};
				};
				class ARMtext
				{
					type="text";
					align="center";
					source="static";
					text="ARM";
					scale=1;
					pos[]=	{{0.50,"0.93 - 0.1"},1};
					right[]={{0.54,"0.93 - 0.1"},1};
					down[]=	{{0.50,"0.97 - 0.1"},1};
				};
				class Master_MODE
				{
					type="text";
					align="center";
					source="static";
					text="A-G";
					scale=1;
					pos[]=	{{0.50,"0.85 - 0.1"},1};
					right[]={{0.54,"0.85 - 0.1"},1};
					down[]=	{{0.50,"0.89 - 0.1"},1};
				};
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
				class radar_tgts_BOMB
				{
					type="radar";
					//pos0[]=	{0.495,0.360};
					//pos10[]={1.200,1.065};
					#include "cfg_Vector_0_10.hpp"
					width=2.5;
					points[]=
					{
						{"ForwardVec",1,"RadarContact",{-0.02,-0.02},1},
						{"ForwardVec",1,"RadarContact",{0.02,-0.02},1},
						{"ForwardVec",1,"RadarContact",{0.02,0.02},1},
						{"ForwardVec",1,"RadarContact",{-0.02,0.02},1},
						{"ForwardVec",1,"RadarContact",{-0.02,-0.02},1}
					};
				};
				class Crosshairs_BOMB
				{
					type = "line";
					width=7;
					points[] = 
					{
						{{"0 + 0.5" , "-0.02 + 0.5"},1 },
						{{"0.0099999998 + 0.5" , "-0.01732 + 0.5"},1},
						{{"0.01732 + 0.5" , "-0.0099999998 + 0.5"},1},
						{{"0.02 + 0.5" , "0 + 0.5"},1},
						{{"0.01732 + 0.5" , "0.0099999998 + 0.5"},1},
						{{"0.0099999998 + 0.5" , "0.01732 + 0.5"},1},
						{{"0 + 0.5" , "0.02 + 0.5"},1},
						{{"-0.0099999998 + 0.5" , "0.01732 + 0.5"},1},
						{{"-0.01732 + 0.5" , "0.0099999998 + 0.5"},1},
						{{"-0.02 + 0.5" , "0 + 0.5"},1},
						{{"-0.01732 + 0.5" , "-0.0099999998 + 0.5"},1},
						{{"-0.0099999998 + 0.5" , "-0.01732 + 0.5"},1},
						{{"0 + 0.5" , "-0.02 + 0.5"},1},
						{ },
						{{" -0.005 + 0.5" , "0 + 0.5" },1},
						{{" 0.005 + 0.5" , "0 + 0.5" },1},
						{ },
						{{" -0.00 + 0.5" , "-0.005 + 0.5" },1},
						{{" 0.00 + 0.5" , "0.005 + 0.5" },1}
						
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
	class HMCS_ALL
	{
		topLeft="HUD_top_left";
		topRight="HUD_top_right";
		bottomLeft="HUD_bottom_left";
		borderLeft=0;
		borderRight=0;
		borderTop=0;
		borderBottom=0;
		color[]={0.15000001,1,0.15000001,1};
		class Bones
		{
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
			color[]={0.15000001,1,0.15000001};
			alpha=0.8;
			condition="on";
			//------------------------------------------------------------ Speed
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
					{0.15,0.40},
					1
				};
				right[]=
				{
					{0.20,0.40},
					1
				};
				down[]=
				{
					{0.15,0.45},
					1
				};
			};
			class MachText_Dot
			{
				type="text";
				source="static";
				text="0.";
				align="left";
				scale=1;
				pos[]=
				{
					{"0.09 + 0.0",0.48},
					1
				};
				right[]=
				{
					{"0.12 + 0.0",0.48},
					1
				};
				down[]=
				{
					{"0.09 + 0.0",0.51},
					1
				};
			};
			class MachNumber
			{
				type="text";
				align="left";
				scale=1;
				source="speed";
				sourceScale=0.0288;
				pos[]=
				{
					{"0.11 + 0.0",0.48},
					1
				};
				right[]=
				{
					{"0.14 + 0.0",0.48},
					1
				};
				down[]=
				{
					{"0.11 + 0.0",0.51},
					1
				};
			};
			class MachText_M
			{
				type="text";
				source="static";
				text="M";
				align="left";
				scale=1;
				pos[]=
				{
					{"0.14 + 0.0",0.48},
					1
				};
				right[]=
				{
					{"0.17 + 0.0",0.48},
					1
				};
				down[]=
				{
					{"0.14 + 0.0",0.51},
					1
				};
			};
			//------------------------------------------------------------ Altitude
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
			class RadarAltitude_Text
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
			class RadarAltitude_Number
			{
				type="text";
				source="altitudeAGL";
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=
				{
					{0.871,0.48},
					1
				};
				right[]=
				{
					{0.901,0.48},
					1
				};
				down[]=
				{
					{0.871,0.51},
					1
				};
			};
			//------------------------------------------------------------ Heading
			class Center_box
			{
				type = "line";
				width = 3.0;
				points[] = 
				{
					{ { 0.46			,0.89 			},1 },
					{ { "0.46 + 0.03"	,0.89 			},1 },
					{ { "0.46 + 0.04"	,"0.89 - 0.01"	},1 },
					{ { "0.46 + 0.05"	,0.89 			},1 },
					{ { "0.46 + 0.08"	,0.89 			},1 },
					{ { "0.46 + 0.08"	,"0.89 + 0.05" 	},1 },
					{ { 0.46			,"0.89 + 0.05" 	},1 },
					{ { 0.46			,0.89 			},1 }
				};
			};
			class Heading_Number: SpeedNumber
			{
				source="heading";
				sourceScale=1;
				align="center";
				pos[]=
				{
					{0.5,0.89},
					1
				};
				right[]=
				{
					{0.55,0.89},
					1
				};
				down[]=
				{
					{0.5,0.94},
					1
				};
			};
			class Heading_Scale_Top
			{
				clipTL[]={0.00,0.00};
				clipBR[]={1.00,0.89};
				type="group";
				class Heading_tape
				{
					type="scale";
					horizontal=1;
					source="heading";
					sourceScale=1;
					width=5;
					top=0.35;
					center=0.50;
					bottom=0.65;
					lineXleft="0.89 - 0.03";
					lineYright="0.89 - 0.02";
					lineXleftMajor="0.89 - 0.03";
					lineYrightMajor="0.89 - 0.01";
					majorLineEach=2;
					numberEach=2;
					step=5;
					stepSize="(0.65 - 0.35) / 5";
					align="center";
					scale=1;
					pos[]=
					{
						0.35,
						"0.0 + 0.89"
					};
					right[]=
					{
						0.38,
						"0.0 + 0.89"
					};
					down[]=
					{
						0.35,
						"0.03 + 0.89"
					};
				};
			};
			class Heading_Scale_Right
			{
				clipTL[]={"0.46 + 0.08",0.89};
				clipBR[]={1.00,"0.89 + 0.05"};
				type="group";
				class Heading_tape
				{
					type="scale";
					horizontal=1;
					source="heading";
					sourceScale=1;
					width=5;
					top=0.35;
					center=0.50;
					bottom=0.65;
					lineXleft="0.89 - 0.03";
					lineYright="0.89 - 0.02";
					lineXleftMajor="0.89 - 0.03";
					lineYrightMajor="0.89 - 0.01";
					majorLineEach=2;
					numberEach=2;
					step=5;
					stepSize="(0.65 - 0.35) / 5";
					align="center";
					scale=1;
					pos[]=
					{
						0.35,
						"0.0 + 0.89"
					};
					right[]=
					{
						0.38,
						"0.0 + 0.89"
					};
					down[]=
					{
						0.35,
						"0.03 + 0.89"
					};
				};
			};
			class Heading_Scale_Bottom
			{
				clipTL[]={0.00,"0.89 + 0.05"};
				clipBR[]={1.00,1.00};
				type="group";
				class Heading_tape
				{
					type="scale";
					horizontal=1;
					source="heading";
					sourceScale=1;
					width=5;
					top=0.35;
					center=0.50;
					bottom=0.65;
					lineXleft="0.89 - 0.03";
					lineYright="0.89 - 0.02";
					lineXleftMajor="0.89 - 0.03";
					lineYrightMajor="0.89 - 0.01";
					majorLineEach=2;
					numberEach=2;
					step=5;
					stepSize="(0.65 - 0.35) / 5";
					align="center";
					scale=1;
					pos[]=
					{
						0.35,
						"0.0 + 0.89"
					};
					right[]=
					{
						0.38,
						"0.0 + 0.89"
					};
					down[]=
					{
						0.35,
						"0.03 + 0.89"
					};
				};
			};
			class Heading_Scale_Left
			{
				clipTL[]={0.00,0.89};
				clipBR[]={0.46,"0.89 + 0.05"};
				type="group";
				class Heading_tape
				{
					type="scale";
					horizontal=1;
					source="heading";
					sourceScale=1;
					width=5;
					top=0.35;
					center=0.50;
					bottom=0.65;
					lineXleft="0.89 - 0.03";
					lineYright="0.89 - 0.02";
					lineXleftMajor="0.89 - 0.03";
					lineYrightMajor="0.89 - 0.01";
					majorLineEach=2;
					numberEach=2;
					step=5;
					stepSize="(0.65 - 0.35) / 5";
					align="center";
					scale=1;
					pos[]=
					{
						0.35,
						"0.0 + 0.89"
					};
					right[]=
					{
						0.38,
						"0.0 + 0.89"
					};
					down[]=
					{
						0.35,
						"0.03 + 0.89"
					};
				};
			};
			//------------------------------------------------------------ Miscellaneous
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
				clipBR[]={0.9,1.0};
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
				clipTL[]={0.9,0.0};
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
			class Stall_Group
			{
				type = "group";
				condition = "stall";
				color[] = {1.0,0.0,0.0};
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
			/*class Vertical_Speed_Band
			{
				type = "group";
				condition="ils";
				class Vspeed_band
				{
					type="line";
					width=3;
					points[]=
					{
						{
							"VspeedBone",
							{0.007,-0.007},
							1
						},
						{
							"VspeedBone",
							{0,0},
							1
						},
						{
							"VspeedBone",
							{0.007,0.007},
							1
						},
						{ },
						{
							"VspeedBone",
							{0,0},
							1
						},
						{
							"VspeedBone",
							{0.012,0},
							1
						},
						{{ 0.952,0.50 },1 },
						{ },
						
						{{ 0.92,0.40 },1 },  //
						{{ 0.94,0.40 },1 },
						{ },
						{{ 0.92,0.42 },1 },  
						{{ 0.93,0.42 },1 },
						{ },
						{{ 0.92,0.44 },1 },  
						{{ 0.93,0.44 },1 },
						{ },
						{{ 0.92,0.46 },1 },  
						{{ 0.93,0.46 },1 },
						{ },
						{{ 0.92,0.48 },1 },  
						{{ 0.93,0.48 },1 },
						{ },
						{{ 0.92,0.50 },1 },  //
						{{ 0.94,0.50 },1 },
						{ },
						{{ 0.92,0.52 },1 },  
						{{ 0.93,0.52 },1 },
						{ },
						{{ 0.92,0.54 },1 },  
						{{ 0.93,0.54 },1 },
						{ },
						{{ 0.92,0.56 },1 },  
						{{ 0.93,0.56 },1 },
						{ },
						{{ 0.92,0.58 },1 },  
						{{ 0.93,0.58 },1 },
						{ },
						{{ 0.92,0.60 },1 },  //
						{{ 0.94,0.60 },1 },
					};
				};
			};*/
			//------------------------------------------------------------ Weapons
			class AimingCrosshair
			{
				type="group";
				condition="on";
				class HMCS_Crosshair
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
			class WeaponName
			{
				type="text";
				source="weapon";
				sourceScale=1;
				align="left";
				scale=1;
				pos[]=	{{0.14,0.75},1};
				right[]={{0.18,0.75},1};
				down[]=	{{0.14,0.79},1};
			};
			class GUN_Group
			{
				condition="mgun";
				type="group";
				class AmmoCount
				{
					type="text";
					source="ammo";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=
					{
						{0.15,0.75},
						1
					};
					right[]=
					{
						{0.19,0.75},
						1
					};
					down[]=
					{
						{0.15,0.79},
						1
					};
				};
				class Separating_stick
				{
					type="line";
					width=4;
					points[] = 
					{
						{ { 0.1455,"0.885 - 0.14" },1 },
						{ { 0.1455,"0.935 - 0.14" },1 }
					};
				};
				class ARMtext
				{
					type="text";
					align="center";
					source="static";
					text="ARM";
					scale=1;
					pos[]=
					{
						{0.09,"0.93 - 0.14"},
						1
					};
					right[]=
					{
						{0.13,"0.93 - 0.14"},
						1
					};
					down[]=
					{
						{0.09,"0.97 - 0.14"},
						1
					};
				};
				class Master_MODE
				{
					type="text";
					align="center";
					source="static";
					text="GUNS";
					scale=1;
					pos[]=
					{
						{0.09,"0.85 - 0.14"},
						1
					};
					right[]=
					{
						{0.13,"0.85 - 0.14"},
						1
					};
					down[]=
					{
						{0.09,"0.89 - 0.14"},
						1
					};
				};
				/*class RangeNumber
				{
					type="text";
					source="targetDist";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=
					{
						{0.50999999,0.94},
						1
					};
					right[]=
					{
						{0.56,0.94},
						1
					};
					down[]=
					{
						{0.50999999,0.98000002},
						1
					};
				};
				class RangeText
				{
					type="text";
					source="static";
					text="RNG";
					align="left";
					scale=1;
					pos[]=
					{
						{0.49000001,0.94},
						1
					};
					right[]=
					{
						{0.54000002,0.94},
						1
					};
					down[]=
					{
						{0.49000001,0.98000002},
						1
					};
				};
				*/
			};
			class RKT_Group
			{
				condition="rocket";
				type="group";
				class AmmoCount
				{
					type="text";
					source="ammo";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=
					{
						{0.15,0.75},
						1
					};
					right[]=
					{
						{0.19,0.75},
						1
					};
					down[]=
					{
						{0.15,0.79},
						1
					};
				};
				class Separating_stick
				{
					type="line";
					width=4;
					points[] = 
					{
						{ { 0.1455,"0.885 - 0.14" },1 },
						{ { 0.1455,"0.935 - 0.14" },1 }
					};
				};
				class ARMtext
				{
					type="text";
					align="center";
					source="static";
					text="ARM";
					scale=1;
					pos[]=
					{
						{0.09,"0.93 - 0.14"},
						1
					};
					right[]=
					{
						{0.13,"0.93 - 0.14"},
						1
					};
					down[]=
					{
						{0.09,"0.97 - 0.14"},
						1
					};
				};
				class Master_MODE
				{
					type="text";
					align="center";
					source="static";
					text="A-G";
					scale=1;
					pos[]=
					{
						{0.09,"0.85 - 0.14"},
						1
					};
					right[]=
					{
						{0.13,"0.85 - 0.14"},
						1
					};
					down[]=
					{
						{0.09,"0.89 - 0.14"},
						1
					};
				};
				/*class RangeNumber
				{
					type="text";
					source="targetDist";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=
					{
						{0.50999999,0.94},
						1
					};
					right[]=
					{
						{0.56,0.94},
						1
					};
					down[]=
					{
						{0.50999999,0.98000002},
						1
					};
				};
				class RangeText
				{
					type="text";
					source="static";
					text="RNG";
					align="left";
					scale=1;
					pos[]=
					{
						{0.49000001,0.94},
						1
					};
					right[]=
					{
						{0.54000002,0.94},
						1
					};
					down[]=
					{
						{0.49000001,0.98000002},
						1
					};
				};
				*/
			};
			class AGM_Group
			{
				condition="ATmissile";
				type="group";
				class AmmoCount
				{
					type="text";
					source="ammo";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=
					{
						{0.15,0.75},
						1
					};
					right[]=
					{
						{0.19,0.75},
						1
					};
					down[]=
					{
						{0.15,0.79},
						1
					};
				};
				class Separating_stick
				{
					type="line";
					width=4;
					points[] = 
					{
						{ { 0.1455,"0.885 - 0.14" },1 },
						{ { 0.1455,"0.935 - 0.14" },1 }
					};
				};
				class ARMtext
				{
					type="text";
					align="center";
					source="static";
					text="ARM";
					scale=1;
					pos[]=
					{
						{0.09,"0.93 - 0.14"},
						1
					};
					right[]=
					{
						{0.13,"0.93 - 0.14"},
						1
					};
					down[]=
					{
						{0.09,"0.97 - 0.14"},
						1
					};
				};
				class Master_MODE
				{
					type="text";
					align="center";
					source="static";
					text="A-G";
					scale=1;
					pos[]=
					{
						{0.09,"0.85 - 0.14"},
						1
					};
					right[]=
					{
						{0.13,"0.85 - 0.14"},
						1
					};
					down[]=
					{
						{0.09,"0.89 - 0.14"},
						1
					};
				};
				class AGM_Crosshair
				{
					type="line";
					width=4;
					points[] = 
					{
						{ { 0.41,0.43 },1 },
						{ { 0.41,0.41 },1 },
						{ { 0.43,0.41 },1 },
						{},
						{ { 0.57,0.41 },1 },
						{ { 0.59,0.41 },1 },
						{ { 0.59,0.43 },1 },
						{},
						{ { 0.59,0.57 },1 },
						{ { 0.59,0.59 },1 },
						{ { 0.57,0.59 },1 },
						{},
						{ { 0.43,0.59 },1 },
						{ { 0.41,0.59 },1 },
						{ { 0.41,0.57 },1 }
					};
				};
				class AGM_Range_Marks
				{
					type="line";
					width=4;
					points[] = 
					{	
						{ { 0.805,0.40 },1 },
						{ { 0.795,0.40 },1 },
						{},
						{ { 0.805,0.45 },1 },
						{ { 0.795,0.45 },1 },
						{},
						/*{ { 0.805,0.50 },1 },
						{ { 0.795,0.50 },1 },
						{},*/
						{ { 0.805,0.55 },1 },
						{ { 0.795,0.55 },1 },
						{},
						{ { 0.805,0.60 },1 },
						{ { 0.795,0.60 },1 },
						{},
						{ { 0.795,0.45 },1 }, // line
						{ { 0.795,0.55 },1 },
					};
				};
				class RangerNumber
				{
					type="text";
					source="targetdist";
					sourceScale=1;
					align="center";
					scale=1;
					pos[]=	{{0.80,0.615},1};
					right[]={{0.83,0.615},1};
					down[]=	{{0.80,0.645},1};
				};
				class RangeBand
				{
					type="line";
					width=2;
					points[]=
					{
						{"RangeBone",{-0.005	,0.0		},1},
						{"RangeBone",{-0.015	,-0.005		},1},
						{"RangeBone",{-0.015	,0.005		},1},
						{"RangeBone",{-0.005	,0.0		},1}
					};
				};
				class TOFtext
				{
					type="text";
					align="left";
					source="static";
					text="TOF=";
					scale=1;
					pos[]=
					{
						{0.795,0.65},
						1
					};
					right[]=
					{
						{0.825,0.65},
						1
					};
					down[]=
					{
						{0.795,0.68},
						1
					};
				};
				class TOFnumber
				{
					type="text";
					source="targetDist";
					sourcescale = 0.0025;
					align="right";
					scale=1;
					pos[]=
					{
						{0.805,0.65},
						1
					};
					right[]=
					{
						{0.835,0.65},
						1
					};
					down[]=
					{
						{0.805,0.68},
						1
					};
				};
			};
			class AAM_Group
			{
				condition="AAmissile";
				type="group";
				class AmmoCount
				{
					type="text";
					source="ammo";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=
					{
						{0.15,0.75},
						1
					};
					right[]=
					{
						{0.19,0.75},
						1
					};
					down[]=
					{
						{0.15,0.79},
						1
					};
				};
				class Separating_stick
				{
					type="line";
					width=4;
					points[] = 
					{
						{ { 0.1455,"0.885 - 0.14" },1 },
						{ { 0.1455,"0.935 - 0.14" },1 }
					};
				};
				class ARMtext
				{
					type="text";
					align="center";
					source="static";
					text="ARM";
					scale=1;
					pos[]=
					{
						{0.09,"0.93 - 0.14"},
						1
					};
					right[]=
					{
						{0.13,"0.93 - 0.14"},
						1
					};
					down[]=
					{
						{0.09,"0.97 - 0.14"},
						1
					};
				};
				class Master_MODE
				{
					type="text";
					align="center";
					source="static";
					text="A-A";
					scale=1;
					pos[]=
					{
						{0.09,"0.85 - 0.14"},
						1
					};
					right[]=
					{
						{0.13,"0.85 - 0.14"},
						1
					};
					down[]=
					{
						{0.09,"0.89 - 0.14"},
						1
					};
				};
				class RangeBand
				{
					type="line";
					width=2;
					points[]=
					{
						{"RangeBone",{-0.005	,0.0		},1},
						{"RangeBone",{-0.015	,-0.005		},1},
						{"RangeBone",{-0.015	,0.005		},1},
						{"RangeBone",{-0.005	,0.0		},1}
					};
				};
				class AAM_Range_Marks
				{
					type="line";
					width=2;
					points[] = 
					{
						{ { 0.805,0.40 },1 },
						{ { 0.795,0.40 },1 },
						{},
						{ { 0.805,0.45 },1 },
						{ { 0.795,0.45 },1 },
						{},
						{ { 0.805,0.50 },1 },
						{ { 0.795,0.50 },1 },
						{},
						{ { 0.805,0.55 },1 },
						{ { 0.795,0.55 },1 },
						{},
						{ { 0.805,0.60 },1 },
						{ { 0.795,0.60 },1 },
						{},
						{ { 0.80,0.40 },1 }, // line
						{ { 0.80,0.50 },1 },
						{},
						{ { 0.795,0.50 },1 }, // line
						{ { 0.795,0.60 },1 },
						{},
						{ { 0.805,0.50 },1 }, // line
						{ { 0.805,0.60 },1 }
					};
				};
				class AAM_Perfect_Circle
				{
					type="line";
					width=3;
					points[]=
					{
						{"WeaponAim",{"1.0000 * 0.1750","0.0000 * 0.1750"},1},			//0
						{"WeaponAim",{"0.9962 * 0.1750","0.0872 * 0.1750"},1},			//5
						{"WeaponAim",{"0.9848 * 0.1750","0.1736 * 0.1750"},1},			//10
						{"WeaponAim",{"0.9659 * 0.1750","0.2588 * 0.1750"},1},			//15
						{"WeaponAim",{"0.9397 * 0.1750","0.3420 * 0.1750"},1},			//20
						{"WeaponAim",{"0.9063 * 0.1750","0.4226 * 0.1750"},1},			//25
						{"WeaponAim",{"0.8660 * 0.1750","0.5000 * 0.1750"},1},			//30
						{"WeaponAim",{"0.8192 * 0.1750","0.5736 * 0.1750"},1},			//35
						{"WeaponAim",{"0.7660 * 0.1750","0.6428 * 0.1750"},1},			//40
						{"WeaponAim",{"0.7071 * 0.1750","0.7071 * 0.1750"},1},			//45
						{"WeaponAim",{"0.6428 * 0.1750","0.7660 * 0.1750"},1},			//50
						{"WeaponAim",{"0.5736 * 0.1750","0.8192 * 0.1750"},1},			//55
						{"WeaponAim",{"0.5000 * 0.1750","0.8660 * 0.1750"},1},			//60
						{"WeaponAim",{"0.4226 * 0.1750","0.9063 * 0.1750"},1},			//65
						{"WeaponAim",{"0.3420 * 0.1750","0.9397 * 0.1750"},1},			//70
						{"WeaponAim",{"0.2588 * 0.1750","0.9659 * 0.1750"},1},			//75
						{"WeaponAim",{"0.1736 * 0.1750","0.9848 * 0.1750"},1},			//80
						{"WeaponAim",{"0.0872 * 0.1750","0.9962 * 0.1750"},1},			//85
						{"WeaponAim",{"0.0000 * 0.1750","1.0000 * 0.1750"},1},			//90
						//----------------------------------------------------------------------------------
						{"WeaponAim",{"-0.0872 * 0.1750","0.9962 * 0.1750"},1},			//95
						{"WeaponAim",{"-0.1736 * 0.1750","0.9848 * 0.1750"},1},			//100
						{"WeaponAim",{"-0.2588 * 0.1750","0.9659 * 0.1750"},1},			//105
						{"WeaponAim",{"-0.3420 * 0.1750","0.9397 * 0.1750"},1},			//110
						{"WeaponAim",{"-0.4226 * 0.1750","0.9063 * 0.1750"},1},			//115
						{"WeaponAim",{"-0.5000 * 0.1750","0.8660 * 0.1750"},1},			//120
						{"WeaponAim",{"-0.5736 * 0.1750","0.8192 * 0.1750"},1},			//125
						{"WeaponAim",{"-0.6428 * 0.1750","0.7660 * 0.1750"},1},			//130
						{"WeaponAim",{"-0.7071 * 0.1750","0.7071 * 0.1750"},1},			//135
						{"WeaponAim",{"-0.7660 * 0.1750","0.6428 * 0.1750"},1},			//140
						{"WeaponAim",{"-0.8192 * 0.1750","0.5736 * 0.1750"},1},			//145
						{"WeaponAim",{"-0.8660 * 0.1750","0.5000 * 0.1750"},1},			//150
						{"WeaponAim",{"-0.9063 * 0.1750","0.4226 * 0.1750"},1},			//155
						{"WeaponAim",{"-0.9397 * 0.1750","0.3420 * 0.1750"},1},			//160
						{"WeaponAim",{"-0.9659 * 0.1750","0.2588 * 0.1750"},1},			//165
						{"WeaponAim",{"-0.9848 * 0.1750","0.1736 * 0.1750"},1},			//170
						{"WeaponAim",{"-0.9962 * 0.1750","0.0872 * 0.1750"},1},			//175
						{"WeaponAim",{"-1.0000 * 0.1750","0.0000 * 0.1750"},1},			//180
						//----------------------------------------------------------------------------------
						{"WeaponAim",{"-0.9962 * 0.1750","-0.0872 * 0.1750"},1},		//185
						{"WeaponAim",{"-0.9848 * 0.1750","-0.1736 * 0.1750"},1},		//190
						{"WeaponAim",{"-0.9659 * 0.1750","-0.2588 * 0.1750"},1},		//195
						{"WeaponAim",{"-0.9397 * 0.1750","-0.3420 * 0.1750"},1},		//200
						{"WeaponAim",{"-0.9063 * 0.1750","-0.4226 * 0.1750"},1},		//205
						{"WeaponAim",{"-0.8660 * 0.1750","-0.5000 * 0.1750"},1},		//210
						{"WeaponAim",{"-0.8192 * 0.1750","-0.5736 * 0.1750"},1},		//215
						{"WeaponAim",{"-0.7660 * 0.1750","-0.6428 * 0.1750"},1},		//220
						{"WeaponAim",{"-0.7071 * 0.1750","-0.7071 * 0.1750"},1},		//225
						{"WeaponAim",{"-0.6428 * 0.1750","-0.7660 * 0.1750"},1},		//230
						{"WeaponAim",{"-0.5736 * 0.1750","-0.8192 * 0.1750"},1},		//235
						{"WeaponAim",{"-0.5000 * 0.1750","-0.8660 * 0.1750"},1},		//240
						{"WeaponAim",{"-0.4226 * 0.1750","-0.9063 * 0.1750"},1},		//245
						{"WeaponAim",{"-0.3420 * 0.1750","-0.9397 * 0.1750"},1},		//250
						{"WeaponAim",{"-0.2588 * 0.1750","-0.9659 * 0.1750"},1},		//255
						{"WeaponAim",{"-0.1736 * 0.1750","-0.9848 * 0.1750"},1},		//260
						{"WeaponAim",{"-0.0872 * 0.1750","-0.9962 * 0.1750"},1},		//265
						{"WeaponAim",{"-0.0000 * 0.1750","-1.0000 * 0.1750"},1},		//270
						//----------------------------------------------------------------------------------
						{"WeaponAim",{"0.0872 * 0.1750","-0.9962 * 0.1750"},1},			//275
						{"WeaponAim",{"0.1736 * 0.1750","-0.9848 * 0.1750"},1},			//280
						{"WeaponAim",{"0.2588 * 0.1750","-0.9659 * 0.1750"},1},			//285
						{"WeaponAim",{"0.3420 * 0.1750","-0.9397 * 0.1750"},1},			//290
						{"WeaponAim",{"0.4226 * 0.1750","-0.9063 * 0.1750"},1},			//295
						{"WeaponAim",{"0.5000 * 0.1750","-0.8660 * 0.1750"},1},			//300
						{"WeaponAim",{"0.5736 * 0.1750","-0.8192 * 0.1750"},1},			//305
						{"WeaponAim",{"0.6428 * 0.1750","-0.7660 * 0.1750"},1},			//310
						{"WeaponAim",{"0.7071 * 0.1750","-0.7071 * 0.1750"},1},			//315
						{"WeaponAim",{"0.7660 * 0.1750","-0.6428 * 0.1750"},1},			//320
						{"WeaponAim",{"0.8192 * 0.1750","-0.5736 * 0.1750"},1},			//325
						{"WeaponAim",{"0.8660 * 0.1750","-0.5000 * 0.1750"},1},			//330
						{"WeaponAim",{"0.9063 * 0.1750","-0.4226 * 0.1750"},1},			//335
						{"WeaponAim",{"0.9397 * 0.1750","-0.3420 * 0.1750"},1},			//340
						{"WeaponAim",{"0.9659 * 0.1750","-0.2588 * 0.1750"},1},			//345
						{"WeaponAim",{"0.9848 * 0.1750","-0.1736 * 0.1750"},1},			//350
						{"WeaponAim",{"0.9962 * 0.1750","-0.0872 * 0.1750"},1},			//355
						{"WeaponAim",{"1.0000 * 0.1750","-0.0000 * 0.1750"},1}			//360
					};
				};
				class RangerNumber
				{
					type="text";
					source="targetdist";
					sourceScale=1;
					align="center";
					scale=1;
					pos[]=	{{0.80,0.615},1};
					right[]={{0.83,0.615},1};
					down[]=	{{0.80,0.645},1};
				};
			};
			class Bomb_Group
			{
				condition="Bomb";
				type="group";
				class AmmoCount
				{
					type="text";
					source="ammo";
					sourceScale=1;
					align="right";
					scale=1;
					pos[]=
					{
						{0.15,0.75},
						1
					};
					right[]=
					{
						{0.19,0.75},
						1
					};
					down[]=
					{
						{0.15,0.79},
						1
					};
				};
				class Separating_stick
				{
					type="line";
					width=4;
					points[] = 
					{
						{ { 0.1455,"0.885 - 0.14" },1 },
						{ { 0.1455,"0.935 - 0.14" },1 }
					};
				};
				class ARMtext
				{
					type="text";
					align="center";
					source="static";
					text="ARM";
					scale=1;
					pos[]=
					{
						{0.09,"0.93 - 0.14"},
						1
					};
					right[]=
					{
						{0.13,"0.93 - 0.14"},
						1
					};
					down[]=
					{
						{0.09,"0.97 - 0.14"},
						1
					};
				};
				class Master_MODE
				{
					type="text";
					align="center";
					source="static";
					text="A-G";
					scale=1;
					pos[]=
					{
						{0.09,"0.85 - 0.14"},
						1
					};
					right[]=
					{
						{0.13,"0.85 - 0.14"},
						1
					};
					down[]=
					{
						{0.09,"0.89 - 0.14"},
						1
					};
				};
				class Range_marks_Bomb
				{
					type="line";
					width=4;
					points[] = 
					{
						{ { 0.805,0.40 },1 },
						{ { 0.795,0.40 },1 },
						{},
						{ { 0.805,0.45 },1 },
						{ { 0.795,0.45 },1 },
						{},
						{ { 0.805,0.50 },1 },
						{ { 0.795,0.50 },1 },
						{},
						{ { 0.805,0.55 },1 },
						{ { 0.795,0.55 },1 },
						{},
						{ { 0.805,0.60 },1 },
						{ { 0.795,0.60 },1 },
						{},
						{ { 0.805,0.40 },1 }, // line
						{ { 0.805,0.60 },1 }
					};
				};
				class RangeBand
				{
					type="line";
					width=2;
					points[]=
					{
						{"RangeBone",{-0.005	,0.0		},1},
						{"RangeBone",{-0.015	,-0.005		},1},
						{"RangeBone",{-0.015	,0.005		},1},
						{"RangeBone",{-0.005	,0.0		},1}
					};
				};
				class RangerNumber
				{
					type="text";
					source="targetdist";
					sourceScale=1;
					align="center";
					scale=1;
					pos[]=	{{0.80,0.615},1};
					right[]={{0.83,0.615},1};
					down[]=	{{0.80,0.645},1};
				};
				class TOFtext
				{
					type="text";
					align="left";
					source="static";
					text="TOF=";
					scale=1;
					pos[]=
					{
						{0.795,0.65},
						1
					};
					right[]=
					{
						{0.825,0.65},
						1
					};
					down[]=
					{
						{0.795,0.68},
						1
					};
				};
				class TOFnumber
				{
					type="text";
					source="targetDist";
					sourcescale = 0.013;
					align="right";
					scale=1;
					pos[]=
					{
						{0.805,0.65},
						1
					};
					right[]=
					{
						{0.835,0.65},
						1
					};
					down[]=
					{
						{0.805,0.68},
						1
					};
				};
			};
		};
		helmetMountedDisplay=1;
		helmetPosition[]={-0.035,0.035,0.1};
		helmetRight[]={0.070000001,0,0};
		helmetDown[]={-0,-0.070000001,0};
	};
};