class HorizonIndicator {
						type = "line";
						width = 3.000000;
						points[]= {
						{"HorizonIndicatorBank", {0.20000, 0.000000},1},
						{"HorizonIndicatorBank", {0.190000, 0.000000},1},
						{"HorizonIndicatorBank", {0.189277, 0.016560},1},
						{"HorizonIndicatorBank", {0.187113, 0.032993},1},
						{"HorizonIndicatorBank", {0.183526, 0.049176},1},
						{"HorizonIndicatorBank", {0.178542, 0.064984},1},
						{"HorizonIndicatorBank", {0.172198, 0.080297},1},
						{"HorizonIndicatorBank", {0.164545, 0.095000},1},
						{"HorizonIndicatorBank", {0.155639, 0.108980},1},
						{"HorizonIndicatorBank", {0.145548, 0.122130},1},
						{"HorizonIndicatorBank", {0.134350, 0.134350},1},
						{"HorizonIndicatorBank", {0.122130, 0.145548},1},
						{"HorizonIndicatorBank", {0.108980, 0.155639},1},
						{"HorizonIndicatorBank", {0.095000, 0.164545},1},
						{"HorizonIndicatorBank", {0.080297, 0.172198},1},
						{"HorizonIndicatorBank", {0.064984, 0.178542},1},
						{"HorizonIndicatorBank", {0.049176, 0.183526},1},
						{"HorizonIndicatorBank", {0.032993, 0.187113},1},
						{"HorizonIndicatorBank", {0.016560, 0.189277},1},
						{"HorizonIndicatorBank", {0.000000, 0.190000},1},
						{"HorizonIndicatorBank", {-0.016560, 0.189277},1},
						{"HorizonIndicatorBank", {-0.032993, 0.187113},1},
						{"HorizonIndicatorBank", {-0.049176, 0.183526},1},
						{"HorizonIndicatorBank", {-0.064984, 0.178542},1},
						{"HorizonIndicatorBank", {-0.080297, 0.172198},1},
						{"HorizonIndicatorBank", {-0.095000, 0.164545},1},
						{"HorizonIndicatorBank", {-0.108980, 0.155639},1},
						{"HorizonIndicatorBank", {-0.122130, 0.145548},1},
						{"HorizonIndicatorBank", {-0.134350, 0.134350},1},
						{"HorizonIndicatorBank", {-0.145548, 0.122130},1},
						{"HorizonIndicatorBank", {-0.155639, 0.108980},1},
						{"HorizonIndicatorBank", {-0.164545, 0.095000},1},
						{"HorizonIndicatorBank", {-0.172198, 0.080297},1},
						{"HorizonIndicatorBank", {-0.178542, 0.064984},1},
						{"HorizonIndicatorBank", {-0.183526, 0.049176},1},
						{"HorizonIndicatorBank", {-0.187113, 0.032993},1},
						{"HorizonIndicatorBank", {-0.189277, 0.016560},1},
						{"HorizonIndicatorBank", {-0.190000, 0.000000},1},
						{"HorizonIndicatorBank", {-0.20000, 0.000000},1}
						};
					};
					
					
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
						{ { "0.29+0.32+0.009","0.40 - 0.28" },1 },// line h
						{ { "0.31+0.32+0.002","0.40 - 0.28" },1 },
						{},
						{ { "0.29+0.32+0.009","0.567 - 0.28" },1 },// line h
						{ { "0.31+0.32","0.567 - 0.28" },1 },
						{},
						{ { "0.29+0.32+0.009","0.40 - 0.28" },1 }, // line v
						{ { "0.29+0.32+0.009","0.567 - 0.28" },1 },
						{},
						{ { "0.29+0.32+0.009",0.20684 },1 }, //lockarea horizontal
						{ { "0.31+0.32",0.20684 },1 },
						{},
						{ { "0.31+0.32",0.20684 },1 }, //lockarea vertical
						{ { "0.31+0.32","0.567 - 0.28" },1 }
						
						
						
					};
				};

class AA{
	type="group";
	condition="aamissile";
	
	class Circle_target{	
				type = "group";
				//condition = "missilelocked";
				
				class Target_selected_AAM
				{
					type = "line";
					width=1.5;
					points[]={
					{"ForwardVec",1,"TargetSelected",1, {0.038400, 0.000000},1},
					{"ForwardVec",1,"TargetSelected",1, {0.038254, 0.004183},1},{},
					{"ForwardVec",1,"TargetSelected",1, {0.037092, 0.012423},1},
					{"ForwardVec",1,"TargetSelected",1, {0.036084, 0.016417},1},{},
					{"ForwardVec",1,"TargetSelected",1, {0.033255, 0.024000},1},
					{"ForwardVec",1,"TargetSelected",1, {0.031455, 0.027532},1},{},
					{"ForwardVec",1,"TargetSelected",1, {0.027153, 0.033941},1},
					{"ForwardVec",1,"TargetSelected",1, {0.024683, 0.036770},1},{},
					{"ForwardVec",1,"TargetSelected",1, {0.019200, 0.041569},1},
					{"ForwardVec",1,"TargetSelected",1, {0.016229, 0.043503},1},{},
					{"ForwardVec",1,"TargetSelected",1, {0.009939, 0.046364},1},
					{"ForwardVec",1,"TargetSelected",1, {0.006668, 0.047271},1},{},
					{"ForwardVec",1,"TargetSelected",1, {0.000000, 0.048000},1},
					{"ForwardVec",1,"TargetSelected",1, {-0.003347, 0.047817},1},{},
					{"ForwardVec",1,"TargetSelected",1, {-0.009939, 0.046364},1},
					{"ForwardVec",1,"TargetSelected",1, {-0.013134, 0.045105},1},{},
					{"ForwardVec",1,"TargetSelected",1, {-0.019200, 0.041569},1},
					{"ForwardVec",1,"TargetSelected",1, {-0.022025, 0.039319},1},{},
					{"ForwardVec",1,"TargetSelected",1, {-0.027153, 0.033941},1},
					{"ForwardVec",1,"TargetSelected",1, {-0.029416, 0.030854},1},{},
					{"ForwardVec",1,"TargetSelected",1, {-0.033255, 0.024000},1},
					{"ForwardVec",1,"TargetSelected",1, {-0.034802, 0.020286},1},{},
					{"ForwardVec",1,"TargetSelected",1, {-0.037092, 0.012423},1},
					{"ForwardVec",1,"TargetSelected",1, {-0.037817, 0.008335},1},{},
					{"ForwardVec",1,"TargetSelected",1, {-0.038400, 0.000000},1},
					{"ForwardVec",1,"TargetSelected",1, {-0.038254, -0.004183},1},{},
					{"ForwardVec",1,"TargetSelected",1, {-0.037092, -0.012423},1},
					{"ForwardVec",1,"TargetSelected",1, {-0.036084, -0.016417},1},{},
					{"ForwardVec",1,"TargetSelected",1, {-0.033255, -0.024000},1},
					{"ForwardVec",1,"TargetSelected",1, {-0.031455, -0.027532},1},{},
					{"ForwardVec",1,"TargetSelected",1, {-0.027153, -0.033941},1},
					{"ForwardVec",1,"TargetSelected",1, {-0.024683, -0.036770},1},{},
					{"ForwardVec",1,"TargetSelected",1, {-0.019200, -0.041569},1},
					{"ForwardVec",1,"TargetSelected",1, {-0.016229, -0.043503},1},{},
					{"ForwardVec",1,"TargetSelected",1, {-0.009939, -0.046364},1},
					{"ForwardVec",1,"TargetSelected",1, {-0.006668, -0.047271},1},{},
					{"ForwardVec",1,"TargetSelected",1, {-0.000000, -0.048000},1},
					{"ForwardVec",1,"TargetSelected",1, {0.003347, -0.047817},1},{},
					{"ForwardVec",1,"TargetSelected",1, {0.009939, -0.046364},1},
					{"ForwardVec",1,"TargetSelected",1, {0.013134, -0.045105},1},{},
					{"ForwardVec",1,"TargetSelected",1, {0.019200, -0.041569},1},
					{"ForwardVec",1,"TargetSelected",1, {0.022025, -0.039319},1},{},
					{"ForwardVec",1,"TargetSelected",1, {0.027153, -0.033941},1},
					{"ForwardVec",1,"TargetSelected",1, {0.029416, -0.030854},1},{},
					{"ForwardVec",1,"TargetSelected",1, {0.033255, -0.024000},1},
					{"ForwardVec",1,"TargetSelected",1, {0.034802, -0.020286},1},{},
					{"ForwardVec",1,"TargetSelected",1, {0.037092, -0.012423},1},
					{"ForwardVec",1,"TargetSelected",1, {0.037817, -0.008335},1},{},
					{"ForwardVec",1,"TargetSelected",1, {0.038400, -0.000000},1},
					{"ForwardVec",1,"TargetSelected",1, {0.038254, 0.004183},1},{}
					};
					
				
					
				};
				
				class Target_dist_AAM
				{
					type = "line";
					width=2;
					points[]= 
							{
							{"RangeRot1", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot2", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot3", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot4", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot5", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot6", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot7", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot8", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot9", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot10", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot11", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot12", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot13", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot14", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot15", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot16", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot17", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot18", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot19", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot20", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot21", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot22", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot23", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot24", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot25", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot26", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot27", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot28", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot29", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot30", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot31", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot32", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot33", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot34", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot35", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot36", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot37", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot38", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot39", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot40", {0, 0.039000}, 1, "TargetSelected", 1}, 
							{"RangeRot40", {0, 0.03000}, 1, "TargetSelected", 1}};
				};
			
			
			
			
			class Circle_target_square_locked{	
				type = "group";
				condition = "missilelocked";
				
					class Target_selected_AAM {
					type = "line";
					width=1.5;
					points[]={
					{"ForwardVec",1,"TargetSelected",1, {0, 0.009000},1},
					{"ForwardVec",1,"TargetSelected",1, {-0.007, 0},1},
					{"ForwardVec",1,"TargetSelected",1, {0, -0.009000},1},
					{"ForwardVec",1,"TargetSelected",1, {0.007, 0},1},
					{"ForwardVec",1,"TargetSelected",1, {0, 0.009000},1}};
				
					};
				
				};
			class Circle_target_square_locking{	
				type = "group";
				condition = "missilelocking";
				blinkingPattern[] = {0.100000, 0.100000};
				blinkingStartsOn = 1;
				
					class Target_selected_AAM {
					type = "line";
					width=1.5;
					points[]={
					{"ForwardVec",1,"TargetSelected",1, {0, 0.02000},1},
					{"ForwardVec",1,"TargetSelected",1, {-0.018, 0},1},
					{"ForwardVec",1,"TargetSelected",1, {0, -0.02000},1},
					{"ForwardVec",1,"TargetSelected",1, {0.018, 0},1},
					{"ForwardVec",1,"TargetSelected",1, {0, 0.02000},1}};
				
					};
				
				};
			};
};
				
				