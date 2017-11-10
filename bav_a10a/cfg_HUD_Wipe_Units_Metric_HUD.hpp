class Airspeed_Number
{
	type="text";
	align="left";
	scale=1;
	source="speed";
	sourceScale=3.5999999;
	pos[]=
	{
		{"0.15 + 0.1",0.47},
		1
	};
	right[]=
	{
		{"0.21 + 0.1",0.47},
		1
	};
	down[]=
	{
		{"0.15 + 0.1",0.52999998},
		1
	};
};
class Altitude_MSL_Number
{
	type="text";
	align="right";
	scale=1;
	source="altitudeASL";
	sourceScale=1;
	pos[]=
	{
		{"0.85 - 0.1",0.47},
		1
	};
	right[]=
	{
		{"0.91 - 0.1",0.47},
		1
	};
	down[]=
	{
		{"0.85 - 0.1",0.52999998},
		1
	};
};
class Radar_Altitude_Band
{
	type="group";
	condition="ils";
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
			{{ 0.71,0.60 },1 },
			{ },
			
			{{ 0.71,0.40 },1 },  
			{{ 0.72,0.40 },1 },
			{ },
			{{ 0.71,0.44 },1 },  
			{{ 0.72,0.44 },1 },
			{ },
			{{ 0.71,0.48 },1 },  
			{{ 0.72,0.48 },1 },
			{ },
			{{ 0.71,0.52 },1 },  
			{{ 0.72,0.52 },1 },
			{ },
			{{ 0.71,0.56 },1 },  
			{{ 0.72,0.56 },1 },
			{ },
			{{ 0.71,0.60 },1 },  
			{{ 0.72,0.60 },1 }
		};
	};
	class radartext_5
	{
		type="text";
		source="static";
		text="5";
		align="right";
		scale=1;
		pos[]= 		{{0.721,"0.385 + 0.00"},1};
		right[]=	{{0.751,"0.385 + 0.00"},1};
		down[]=		{{0.721,"0.415 + 0.00"},1};
	};
	class radartext_4
	{
		type="text";
		source="static";
		text="4";
		align="right";
		scale=1;
		pos[]= 		{{0.721,"0.385 + 0.04"},1};
		right[]=	{{0.751,"0.385 + 0.04"},1};
		down[]=		{{0.721,"0.415 + 0.04"},1};
	};
	class radartext_3
	{
		type="text";
		source="static";
		text="3";
		align="right";
		scale=1;
		pos[]= 		{{0.721,"0.385 + 0.08"},1};
		right[]=	{{0.751,"0.385 + 0.08"},1};
		down[]=		{{0.721,"0.415 + 0.08"},1};
	};
	class radartext_2
	{
		type="text";
		source="static";
		text="2";
		align="right";
		scale=1;
		pos[]= 		{{0.721,"0.385 + 0.120"},1};
		right[]=	{{0.751,"0.385 + 0.120"},1};
		down[]=		{{0.721,"0.415 + 0.120"},1};
	};
	class radartext_1
	{
		type="text";
		source="static";
		text="1";
		align="right";
		scale=1;
		pos[]= 		{{0.721,"0.385 + 0.160"},1};
		right[]=	{{0.751,"0.385 + 0.160"},1};
		down[]=		{{0.721,"0.415 + 0.160"},1};
	};
	class radartext_0
	{
		type="text";
		source="static";
		text="0";
		align="right";
		scale=1;
		pos[]= 		{{0.721,"0.385 + 0.200"},1};
		right[]=	{{0.751,"0.385 + 0.200"},1};
		down[]=		{{0.721,"0.415 + 0.200"},1};
	};
};
class Vertical_Speed_Band
{
	type="line";
	width=4;
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
class Altitude_AGL_Text
{
	type="text";
	source="static";
	text="R/";
	align="right";
	scale=1;
	pos[]=
	{
		{"0.85 - 0.1",0.76},
		1
	};
	right[]=
	{
		{"0.89000002 - 0.1",0.76},
		1
	};
	down[]=
	{
		{"0.85 - 0.1",0.80},
		1
	};
};
class Altitude_AGL_Number
{
	type="text";
	source="altitudeAGL";
	sourceScale=1;
	align="right";
	scale=1;
	pos[]=
	{
		{"0.85 - 0.1",0.80},
		1
	};
	right[]=
	{
		{"0.89 - 0.1",0.80},
		1
	};
	down[]=
	{
		{"0.85 - 0.1",0.84},
		1
	};
};
class Vertical_Speed_Text
{
	type="text";
	source="static";
	text="CLIMB/";
	align="right";
	scale=1;
	pos[]=
	{
		{"0.85 - 0.1",0.85001},
		1
	};
	right[]=
	{
		{"0.89 - 0.1",0.85001},
		1
	};
	down[]=
	{
		{"0.85 - 0.1",0.89001},
		1
	};
};
class Vertical_Speed_Number
{
	type="text";
	source="vspeed";
	sourceScale=1;
	align="right";
	scale=1;
	pos[]=
	{
		{"0.85 - 0.1",0.89001},
		1
	};
	right[]=
	{
		{"0.89 - 0.1",0.89001},
		1
	};
	down[]=
	{
		{"0.85 - 0.1",0.93001},
		1
	};
};