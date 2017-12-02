			class Altitude_Scale_Top
			{
				clipTL[]={0		,0				};
				clipBR[]={1		,"0.400 - 0.035+0.2"};
				type="group";
				class altitude_scale
				{
					type = "scale";
					scale = 1;
					source = "altitudeASL";
					sourceScale=1;
					align = "right";
					width=2;
					lineXleft = 		0.805;
					lineYright = 		0.825;
					lineXleftMajor = 	0.805;
					lineYrightMajor = 	0.835;
					top = 		"0.600+0.2";
					center = 	"0.400+0.2";
					bottom = 	"0.200+0.2";
					step = 20;
					StepSize = "(0.60- 0.20)/15";
					horizontal = 0;
					numberEach = 5;
					majorLineEach = 5;
					pos[] = 	{0.860	,"0.575+0.2"	};
					right[] = 	{0.890	,"0.575+0.2"	};
					down[] = 	{0.860	,"0.615+0.2"	};
				};
			};
			class Altitude_Scale_Left
			{
				clipTL[]={0				,"0.400 - 0.035+0.2"	};
				clipBR[]={"1 - 0.1650"	,"0.400 + 0.035+0.2"	};
				type="group";
				class altitude_scale
				{
					type = "scale";
					scale = 1;
					source = "altitudeASL";
					sourceScale=1;
					align = "right";
					width=2;
					lineXleft = 		0.805;
					lineYright = 		0.825;
					lineXleftMajor = 	0.805;
					lineYrightMajor = 	0.835;
					top = 		"0.600+0.2";
					center = 	"0.400+0.2";
					bottom = 	"0.200+0.2";
					step = 20;
					StepSize = "(0.60- 0.20)/15";
					horizontal = 0;
					numberEach = 5;
					majorLineEach = 5;
					pos[] = 	{0.860	,"0.575+0.2"	};
					right[] = 	{0.890	,"0.575+0.2"	};
					down[] = 	{0.860	,"0.615+0.2"	};
				};
			};
			class Altitude_Scale_Bottom
			{
				clipTL[]={0		,"0.400 + 0.035+0.2"};
				clipBR[]={1		,1				};
				type="group";
				class altitude_scale
				{
					type = "scale";
					scale = 1;
					source = "altitudeASL";
					sourceScale=1;
					align = "right";
					width=2;
					lineXleft = 		0.805;
					lineYright = 		0.825;
					lineXleftMajor = 	0.805;
					lineYrightMajor = 	0.835;
					top = 		"0.600+0.2";
					center = 	"0.400+0.2";
					bottom = 	"0.200+0.2";
					step = 20;
					StepSize = "(0.60- 0.20)/15";
					horizontal = 0;
					numberEach = 5;
					majorLineEach = 5;
					pos[] = 	{0.860	,"0.575+0.2"	};
					right[] = 	{0.890	,"0.575+0.2"	};
					down[] = 	{0.860	,"0.615+0.2"	};
				};
			};