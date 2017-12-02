class Total_Velocity_Vector
{
	clipTL[]={0,1};
	clipBR[]={1,0};
	type="line";
	width=6;
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
};
class Gear_Text
{
	type="group";
	condition="ils";
	class GearText
	{
		type="text";
		source="static";
		text="GEAR";
		align="left";
		scale=1;
		pos[]=
		{
			
			{
				"0.15 + 0.1",
				"0.53 - 0.40"
			},
			1
		};
		right[]=
		{
			
			{
				"0.20 + 0.1",
				"0.53 - 0.40"
			},
			1
		};
		down[]=
		{
			
			{
				"0.15 + 0.1",
				"0.53 - 0.40 + 0.05"
			},
			1
		};
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
				{ "ILS_W",1,{ -0.2,0 },1,"ForwardVec",1,"ForwardVec",1 },
				{ "ILS_W",1,{ 0.2,0 },1,"ForwardVec",1 },
				{  },
				{ "ILS_W",1,{ 0,0.02 },1,"ForwardVec",1 },
				{ "ILS_W",1,{ 0,-0.02 },1,"ForwardVec",1 },
				{  },
				{ "ILS_W",1,{ 0.1,0.02 },1,"ForwardVec",1 },
				{ "ILS_W",1,{ 0.1,-0.02 },1,"ForwardVec",1 },
				{  },
				{ "ILS_W",1,{ 0.2,0.02 },1,"ForwardVec",1 },
				{ "ILS_W",1,{ 0.2,-0.02 },1,"ForwardVec",1 },
				{  },
				{ "ILS_W",1,{ -0.1,0.02 },1,"ForwardVec",1 },
				{ "ILS_W",1,{ -0.1,-0.02 },1,"ForwardVec",1 },
				{  },
				{ "ILS_W",1,{ -0.2,0.02 },1,"ForwardVec",1 },
				{ "ILS_W",1,{ -0.2,-0.02 },1,"ForwardVec",1 },
				{  },
				{ "ILS_H",1,{ 0,-0.2 },1,"ForwardVec",1 },
				{ "ILS_H",1,{ 0,0.2 },1,"ForwardVec",1 },
				{  },
				{ "ILS_H",1,{ 0.02,0 },1,"ForwardVec",1 },
				{ "ILS_H",1,{ -0.02,0 },1,"ForwardVec",1 },
				{  },
				{ "ILS_H",1,{ 0.02,0.1 },1,"ForwardVec",1 },
				{ "ILS_H",1,{ -0.02,0.1 },1,"ForwardVec",1 },
				{  },
				{ "ILS_H",1,{ 0.02,0.2 },1,"ForwardVec",1 },
				{ "ILS_H",1,{ -0.02,0.2 },1,"ForwardVec",1 },
				{  },
				{ "ILS_H",1,{ 0.02,-0.1 },1,"ForwardVec",1 },
				{ "ILS_H",1,{ -0.02,-0.1 },1,"ForwardVec",1 },
				{  },
				{ "ILS_H",1,{ 0.02,-0.2 },1,"ForwardVec",1 },
				{ "ILS_H",1,{ -0.02,-0.2 },1,"ForwardVec",1 },
				{  }
			};
		};
	};
};
class Stall_Text
{
	type="group";
	condition="stall";
	color[]={1,0,0};
	blinkingPattern[]={0.2,0.2};
	blinkingStartsOn=1;
	class StallText
	{
		type="text";
		source="static";
		text="STALL";
		align="center";
		scale=1;
		pos[]=
		{
			
			{
				0.5,
				"0.53 - 0.25"
			},
			1
		};
		right[]=
		{
			
			{
				0.55000001,
				"0.53 - 0.25"
			},
			1
		};
		down[]=
		{
			
			{
				0.5,
				"0.53 - 0.21"
			},
			1
		};
	};
};
class Flaps_Text
{
	type="group";
	condition="flaps";
	class FLAPSText
	{
		type="text";
		source="static";
		text="FLAPS";
		align="left";
		scale=1;
		pos[]=
		{
			
			{
				"0.15 + 0.1",
				"0.53 - 0.35"
			},
			1
		};
		right[]=
		{
			
			{
				"0.20 + 0.1",
				"0.53 - 0.35"
			},
			1
		};
		down[]=
		{
			
			{
				"0.15 + 0.1",
				"0.53 - 0.35 + 0.05"
			},
			1
		};
	};
};
class Anti_Collision_Lights_Text
{
	type="group";
	condition="collisionlights";
	class CollisionLightsText
	{
		type="text";
		source="static";
		text="A-COL";
		align="left";
		scale=1;
		pos[]=
		{
			
			{
				"0.15 + 0.1",
				"0.53 - 0.25"
			},
			1
		};
		right[]=
		{
			
			{
				"0.20 + 0.1",
				"0.53 - 0.25"
			},
			1
		};
		down[]=
		{
			
			{
				"0.15 + 0.1",
				"0.53 - 0.25 + 0.05"
			},
			1
		};
	};
};
class Landing_Lights_Text
{
	type="group";
	condition="lights";
	class LightsText
	{
		type="text";
		source="static";
		text="LLS";
		align="left";
		scale=1;
		pos[]=
		{
			
			{
				"0.15 + 0.1",
				"0.53 - 0.30"
			},
			1
		};
		right[]=
		{
			
			{
				"0.20 + 0.1",
				"0.53 - 0.30"
			},
			1
		};
		down[]=
		{
			
			{
				"0.15 + 0.1",
				"0.53 - 0.30 + 0.05"
			},
			1
		};
	};
};
class Mach_Text_M
{
	type="text";
	source="static";
	text="M";
	align="left";
	scale=1;
	pos[]=
	{
		{"0.1501 + 0.1",0.53},
		1
	};
	right[]=
	{
		{"0.2001 + 0.1",0.53},
		1
	};
	down[]=
	{
		{"0.1501 + 0.1",0.58},
		1
	};
};
class Mach_Text_Dot
{
	type="text";
	source="static";
	text="0.";
	align="left";
	scale=1;
	pos[]=
	{
		{"0.09 + 0.1",0.53},
		1
	};
	right[]=
	{
		{"0.14 + 0.1",0.53},
		1
	};
	down[]=
	{
		{"0.09 + 0.1",0.58},
		1
	};
};
class Mach_Number
{
	type="text";
	align="left";
	scale=1;
	source="speed";
	sourceScale=0.0288;
	pos[]=
	{
		{"0.12 + 0.1",0.53},
		1
	};
	right[]=
	{
		{"0.17 + 0.1",0.53},
		1
	};
	down[]=
	{
		{"0.12 + 0.1",0.58},
		1
	};
};
class Heading_Number
{
	type="text";
	scale=1;
	source="heading";
	sourceScale=1;
	align="right";
	pos[]=
	{
		{"0.85 - 0.1",0.15},
		1
	};
	right[]=
	{
		{"0.90 - 0.1",0.15},
		1
	};
	down[]=
	{
		{"0.85 - 0.1",0.20},
		1
	};
};
class Pitch_Number
{
	type="text";
	source="horizonDive";
	sourceScale=57.29578;
	align="right";
	scale=1;
	pos[]=
	{
		{"0.85 - 0.1",0.54},
		1
	};
	right[]=
	{
		{"0.90 - 0.1",0.54},
		1
	};
	down[]=
	{
		{"0.85 - 0.1",0.59},
		1
	};
};
class Heading_Arrow
{
	type="line";
	width=4;
	points[]=
	{
		
		{
			{0.50,0.95},
			1
		},
		{
			{0.515,0.965},
			1
		},
		{
			{0.485,0.965},
			1
		},
		{
			{0.50,0.95},
			1
		}
	};
};
class Heading_Scale
{
	type="scale";
	horizontal=1;
	source="heading";
	sourceScale=0.1;
	width=5;
	top=0.35;
	center=0.50;
	bottom=0.65;
	lineXleft="0.06 + 0.89";
	lineYright="0.05 + 0.89";
	lineXleftMajor="0.06 + 0.89";
	lineYrightMajor="0.04 + 0.89";
	majorLineEach=2;
	numberEach=2;
	step="1 / 2";
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
