class RadarMode{
	condition="activeSensorsOn";
	type="group";
		class NormalMode{
							
							class RangeBand_AAM
							{
								type="line";
								width=3.0;
								points[]=
								{
								{"RDRTargetDist",{0.00,0.0},1},
								{"RDRTargetDist",{-0.010,-0.0129},1},{},
								{"RDRTargetDist",{-0.010,0.0129},1},
								{"RDRTargetDist",{0.00,0.0},1}
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
								pos[]={"RDRTargetDist",{"0.017-0.03","-0.010-0.0129"},1};
								right[]={"RDRTargetDist",{0.017,"-0.010-0.0129"},1};
								down[]={"RDRTargetDist",{"0.017-0.03","0.035-0.0129"},1};
							};
							class Range_marks_AAM
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
									{},
									{ { "0.29+0.32+0.009+0.03","0.20684+0.07" },1 }, //lockarea horizontal
									{ { "0.31+0.32+0.03","0.20684+0.07" },1 },
									{},
									{ { "0.31+0.32+0.03","0.20684+0.07" },1 }, //lockarea vertical
									{ { "0.31+0.32+0.03","0.567 - 0.28+0.07" },1 }
									
									
									
								};
							};
						
													
							class AAM_Perfect_Circle{
								type="line";
								width=1;
								points[]={
								{"Middle", {0.200000, 0.000000},1},
								{"Middle", {0.199239, 0.021789},1},
								{"Middle", {0.196962, 0.043412},1},
								{"Middle", {0.193185, 0.064705},1},
								{"Middle", {0.187939, 0.085505},1},
								{"Middle", {0.181262, 0.105655},1},
								{"Middle", {0.173205, 0.125000},1},
								{"Middle", {0.163830, 0.143394},1},
								{"Middle", {0.153209, 0.160697},1},
								{"Middle", {0.141421, 0.176777},1},
								{"Middle", {0.128558, 0.191511},1},
								{"Middle", {0.114715, 0.204788},1},
								{"Middle", {0.100000, 0.216506},1},
								{"Middle", {0.084524, 0.226577},1},
								{"Middle", {0.068404, 0.234923},1},
								{"Middle", {0.051764, 0.241481},1},
								{"Middle", {0.034730, 0.246202},1},
								{"Middle", {0.017431, 0.249049},1},
								{"Middle", {0.000000, 0.250000},1},
								{"Middle", {-0.017431, 0.249049},1},
								{"Middle", {-0.034730, 0.246202},1},
								{"Middle", {-0.051764, 0.241481},1},
								{"Middle", {-0.068404, 0.234923},1},
								{"Middle", {-0.084524, 0.226577},1},
								{"Middle", {-0.100000, 0.216506},1},
								{"Middle", {-0.114715, 0.204788},1},
								{"Middle", {-0.128558, 0.191511},1},
								{"Middle", {-0.141421, 0.176777},1},
								{"Middle", {-0.153209, 0.160697},1},
								{"Middle", {-0.163830, 0.143394},1},
								{"Middle", {-0.173205, 0.125000},1},
								{"Middle", {-0.181262, 0.105655},1},
								{"Middle", {-0.187939, 0.085505},1},
								{"Middle", {-0.193185, 0.064705},1},
								{"Middle", {-0.196962, 0.043412},1},
								{"Middle", {-0.199239, 0.021789},1},
								{"Middle", {-0.200000, 0.000000},1},
								{"Middle", {-0.199239, -0.021789},1},
								{"Middle", {-0.196962, -0.043412},1},
								{"Middle", {-0.193185, -0.064705},1},
								{"Middle", {-0.187939, -0.085505},1},
								{"Middle", {-0.181262, -0.105655},1},
								{"Middle", {-0.173205, -0.125000},1},
								{"Middle", {-0.163830, -0.143394},1},
								{"Middle", {-0.153209, -0.160697},1},
								{"Middle", {-0.141421, -0.176777},1},
								{"Middle", {-0.128558, -0.191511},1},
								{"Middle", {-0.114715, -0.204788},1},
								{"Middle", {-0.100000, -0.216506},1},
								{"Middle", {-0.084524, -0.226577},1},
								{"Middle", {-0.068404, -0.234923},1},
								{"Middle", {-0.051764, -0.241481},1},
								{"Middle", {-0.034730, -0.246202},1},
								{"Middle", {-0.017431, -0.249049},1},
								{"Middle", {-0.000000, -0.250000},1},
								{"Middle", {0.017431, -0.249049},1},
								{"Middle", {0.034730, -0.246202},1},
								{"Middle", {0.051764, -0.241481},1},
								{"Middle", {0.068404, -0.234923},1},
								{"Middle", {0.084524, -0.226577},1},
								{"Middle", {0.100000, -0.216506},1},
								{"Middle", {0.114715, -0.204788},1},
								{"Middle", {0.128558, -0.191511},1},
								{"Middle", {0.141421, -0.176777},1},
								{"Middle", {0.153209, -0.160697},1},
								{"Middle", {0.163830, -0.143394},1},
								{"Middle", {0.173205, -0.125000},1},
								{"Middle", {0.181262, -0.105655},1},
								{"Middle", {0.187939, -0.085505},1},
								{"Middle", {0.193185, -0.064705},1},
								{"Middle", {0.196962, -0.043412},1},
								{"Middle", {0.199239, -0.021789},1},
								{"Middle", {0.200000, -0.000000},1}
								};
							};
											
						
						class Target_locking{	
								type = "group";
								condition = "missilelocking";
									
									class Target_selected_diamond_small {
										type = "line";
										width=1.5;
										points[]={
										{"ForwardVec",1,"TargetSelected",1, {0, 0.009000},1},
										{"ForwardVec",1,"TargetSelected",1, {-0.007, 0},1},
										{"ForwardVec",1,"TargetSelected",1, {0, -0.009000},1},
										{"ForwardVec",1,"TargetSelected",1, {0.007, 0},1},
										{"ForwardVec",1,"TargetSelected",1, {0, 0.009000},1}};
										
									
									};
									
									class Target_selected_square {
										type = "line";
										width=1.5;
										points[]={
										{"ForwardVec",1,"TargetSelected",1, {0.018, 0.02000},1},
										{"ForwardVec",1,"TargetSelected",1, {-0.018, 0.02000},1},
										{"ForwardVec",1,"TargetSelected",1, {-0.018, -0.02000},1},
										{"ForwardVec",1,"TargetSelected",1, {0.018, -0.02000},1},
										{"ForwardVec",1,"TargetSelected",1, {0.018, 0.02000},1}};
									
									};
							};
						class Target_locked{	
								type = "group";
								condition = "missilelocked";
									
									class Target_selected_diamond_big {
										type = "line";
										width=1.5;
										points[]={
										{"ForwardVec",1,"TargetSelected",1, {0, 0.02000},1},
										{"ForwardVec",1,"TargetSelected",1, {-0.018, 0},1},
										{"ForwardVec",1,"TargetSelected",1, {0, -0.02000},1},
										{"ForwardVec",1,"TargetSelected",1, {0.018, 0},1},
										{"ForwardVec",1,"TargetSelected",1, {0, 0.02000},1}};
																		
									};
									class Target_selected_square {
										type = "line";
										width=1.5;
										points[]={
										{"ForwardVec",1,"TargetSelected",1, {0.018, 0.02000},1},
										{"ForwardVec",1,"TargetSelected",1, {-0.018, 0.02000},1},
										{"ForwardVec",1,"TargetSelected",1, {-0.018, -0.02000},1},
										{"ForwardVec",1,"TargetSelected",1, {0.018, -0.02000},1},
										{"ForwardVec",1,"TargetSelected",1, {0.018, 0.02000},1}};
									
									};
							};
			
						};
				};