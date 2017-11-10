			class AR_box{
			type="line";
				width=1;
				points[]=
				{
					{{"0.675-0.055","0.98 - 0.89 + 0.35"},1},
					{{"0.725-0.050","0.98 - 0.89 + 0.35"},1},
					{{"0.725-0.050","1.002 - 0.89 + 0.35"},1},
					{{"0.675-0.055","1.002 - 0.89 + 0.35"},1},
					{{"0.675-0.055","0.98 - 0.89 + 0.35"},1},
					
					};	
			};
			class AR_Number{
			type = "text";
				source = "altitudeAGL";
				sourceScale = 1;
				sourceLength = 4;
				align = "left";
				scale = 1;
				pos[]= {{"0.695-0.050+0.025","0.975 - 0.89 + 0.35"}, 1};
				right[]= {{"0.72-0.050+0.025","0.975 - 0.89 + 0.35"}, 1};
				down[]= {{"0.695-0.050+0.025","1.005 - 0.89 + 0.35"}, 1};
			};
			class AR_Text{
				type="text";
				align="left";
				source="static";
				text="AR";
				scale=1;
				pos[]= {{"0.695-0.080","0.975 - 0.89 + 0.35"}, 1};
				right[]= {{"0.715-0.080","0.975 - 0.89 + 0.35"}, 1};
				down[]= {{"0.695-0.080","1.005 - 0.89 + 0.35"}, 1};
			};
			
			class AL_Text{
				type="text";
				align="right";
				source="static";
				text="AL 200";
				scale=1;
				pos[]= {{"0.695-0.080","1.005 - 0.89 + 0.35"}, 1};
				right[]= {{"0.715-0.080","1.005 - 0.89 + 0.35"}, 1};
				down[]= {{"0.695-0.080","1.035 - 0.89 + 0.35"}, 1};
			};
			
			class WpDist_Number{
				type = "text";
				source = "wpdist";
				sourceScale = 0.001;
				sourceprecision = 0;
				sourceLength = 3;
				align = "right";
				scale = 1;
				pos[]= {{"0.695-0.080","1.062 - 0.89 + 0.35"}, 1};
				right[]= {{"0.715-0.080","1.062 - 0.89 + 0.35"}, 1};
				down[]= {{"0.695-0.080","1.092 - 0.89 + 0.35"}, 1};
			};
			class WpSign{
				type="text";
				align="right";
				source="static";
				text=">";
				scale=1;
				pos[]= {{"0.695-0.080+0.022","1.061 - 0.89 + 0.35"}, 1};
				right[]= {{"0.715-0.080+0.022","1.061 - 0.89 + 0.35"}, 1};
				down[]= {{"0.695-0.080+0.022","1.091 - 0.89 + 0.35"}, 1};
			};
			class WpIndex{
				type = "text";
				source = "wpindex";
				sourceScale = 1;
				sourceprecision = 0;
				sourceLength = 2;
				align = "right";
				scale = 1;
				pos[]= {{"0.695-0.080+0.029","1.062 - 0.89 + 0.35"}, 1};
				right[]= {{"0.715-0.080+0.029","1.062 - 0.89 + 0.35"}, 1};
				down[]= {{"0.695-0.080+0.029","1.092 - 0.89 + 0.35"}, 1};
			};
			
			
			class Heading_Scale
			{
				type="scale";
				horizontal=1;
				source="heading";
				sourceScale=0.100000;
				width=2;
				top=	0.35;
				center=	0.50;
				bottom=	0.65;
				lineXleft=			"0.06 + 0.05";
				lineYright=			"0.07 + 0.05";
				lineXleftMajor=		"0.06 + 0.05";
				lineYrightMajor=	"0.08 + 0.05";
				majorLineEach=2;
				numberEach=2;
				step="1/2";
				stepSize="(0.65 - 0.35) / 5";
				align="center";
				scale=1;
				pos[]={0.35,"0.025 + 0.05"};
				right[]={0.38,"0.025 + 0.05"};
				down[]={0.35,"0.055 + 0.05"};
			};
					
			
			class Heading_Number
			{
				type = "text";
				source = "heading";
				sourceScale = 1;
				sourceLength = 3;
				align = "right";
				scale = 1;
				pos[]= {{0.484,"0.945 - 0.89 + 0.08"}, 1};
				right[]= {{0.514,"0.945 - 0.89 + 0.08"}, 1};
				down[]= {{0.484,"0.975 - 0.89 + 0.08"}, 1};
				
			};
			
			class Heading_Box
			{
				type="line";
				width=2;
				points[]=
				{
					{{0.475,"0.98 - 0.89 + 0.05"},1},
					{{0.525,"0.98 - 0.89 + 0.05"},1},
					{{0.525,"1.002 - 0.89 + 0.05"},1},
					{{0.475,"1.002 - 0.89 + 0.05"},1},
					{{0.475,"0.98 - 0.89 + 0.05"},1},
					
					};
			};
			
			class MachSpeed_Number{
				type = "text";
				source = "speed";
				sourceScale = 0.00294;
				sourceprecision = 2;
				sourceLength = 1;
				align = "left";
				scale = 1;
				pos[]= {{"0.695-0.050-0.247","0.975 - 0.89 + 0.35"}, 1};
				right[]= {{"0.72-0.050-0.247","0.975 - 0.89 + 0.35"}, 1};
				down[]= {{"0.695-0.050-0.247","1.005 - 0.89 + 0.35"}, 1};
			};
			
	class StallGroup {
						type = "group";
						condition = "stall";
						blinkingPattern[] = {0.200000, 0.200000};
						blinkingStartsOn = 1;

					
						
						class StallCross{
						type = "line";
						width = 1.500000;
						points[]= {
						{"PlaneOrientation", {-0.05900, 0.059000}, 1},
						{"PlaneOrientation", {0.05900, -0.059000}, 1},
						{},
						{"PlaneOrientation", {-0.05900, -0.059000}, 1},
						{"PlaneOrientation", {0.05900, 0.059000}, 1}};
							
							
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
									{"PlaneOrientation", {-0.05900, 0.059000}, 1},
									{"PlaneOrientation", {0.05900, -0.059000}, 1},
									{},
									{"PlaneOrientation", {-0.05900, -0.059000}, 1},
									{"PlaneOrientation", {0.05900, 0.059000}, 1}};								
									};	
							};
						};
					};
				};
			
			