class Horizont2
			{
				clipTL[]={0.2,0.2};
				clipBR[]={0.8,0.68};
				class Dimmed
				{
					class Level0
					{
						type="line";
						width=1;
						points[]=
						{
							{"Level0",{-5.000,0.000},1,"ForwardVec",1},
							{"Level0",{-0.050,0.000},1,"ForwardVec",1},
							{},
							{"Level0",{0.050,0.000},1,"ForwardVec",1},
							{"Level0",{5.000,0.000},1,"ForwardVec",1}
						};
					};
				};
			};
class Bearing
				{
					type = "text";
					source = "heading";
					sourceScale = 1;
					scale=1;
					align="right"
					pos[]= {{"0.695-0.050-0.344","1.043 - 0.89 + 0.35"}, 1};
					right[]= {{"0.72-0.050-0.344","1.043 - 0.89 + 0.35"}, 1};
					down[]= {{"0.695-0.050-0.344","1.073 - 0.89 + 0.35"}, 1};
				};
				