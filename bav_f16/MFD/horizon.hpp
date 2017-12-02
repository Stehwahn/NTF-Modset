class Horizont
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
					class LevelM5: Level0
					{
						type="line";
						width=1;
						points[]=
						{
							{"LevelM5",{-0.100,-0.000},1,"ForwardVec",1},
							{"LevelM5",{-0.090,-0.00075},1,"ForwardVec",1},
							{},
							{"LevelM5",{-0.080,-0.00150},1,"ForwardVec",1},
							{"LevelM5",{-0.070,-0.00225},1,"ForwardVec",1},
							{},
							{"LevelM5",{-0.060,-0.00300},1,"ForwardVec",1},
							{"LevelM5",{-0.050,-0.00375},1,"ForwardVec",1},
							{},
							{"LevelM5",{-0.040,-0.00450},1,"ForwardVec",1},
							{"LevelM5",{-0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM5",{-0.030,-0.015},1,"ForwardVec",1},//middle
							{},
							{"LevelM5",{0.030,-0.015},1,"ForwardVec",1},//middle
							{"LevelM5",{0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM5",{0.040,-0.00450},1,"ForwardVec",1},
							{},
							{"LevelM5",{0.050,-0.00375},1,"ForwardVec",1},
							{"LevelM5",{0.060,-0.00300},1,"ForwardVec",1},
							{},
							{"LevelM5",{0.070,-0.00225},1,"ForwardVec",1},
							{"LevelM5",{0.080,-0.00150},1,"ForwardVec",1},
							{},
							{"LevelM5",{0.090,-0.00075},1,"ForwardVec",1},
							{"LevelM5",{0.100,-0.000},1,"ForwardVec",1}
						};
					};
					class VALM_1_5
					{
						type="text";
						source="static";
						text=-5;
						align="left";
						scale=5;
						sourceScale=1;
						pos[]=	{"LevelM5",{-0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM5",{-0.04500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM5",{-0.08500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_5: VALM_1_5
					{
						align="right";
						pos[]=	{"LevelM5",{0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM5",{0.12500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM5",{0.08500,-0.000},1,"ForwardVec",1};
					};
					class LevelP5: Level0
					{
						type="line";
						width=1;
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
						pos[]=	{"LevelP5",{-0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP5",{-0.04500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP5",{-0.08500,0.040},1,"ForwardVec",1};
					};
					class VALP_2_5: VALP_1_5
					{
						align="right";
						pos[]=	{"LevelP5",{0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP5",{0.12500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP5",{0.08500,0.040},1,"ForwardVec",1};
					};
					class LevelM10: Level0
					{
						type="line";
						width=1;
						points[]=
						{
							{"LevelM10",{-0.100,-0.000},1,"ForwardVec",1},
							{"LevelM10",{-0.090,-0.00075},1,"ForwardVec",1},
							{},
							{"LevelM10",{-0.080,-0.00150},1,"ForwardVec",1},
							{"LevelM10",{-0.070,-0.00225},1,"ForwardVec",1},
							{},
							{"LevelM10",{-0.060,-0.00300},1,"ForwardVec",1},
							{"LevelM10",{-0.050,-0.00375},1,"ForwardVec",1},
							{},
							{"LevelM10",{-0.040,-0.00450},1,"ForwardVec",1},
							{"LevelM10",{-0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM10",{-0.030,-0.015},1,"ForwardVec",1},//middle
							{},
							{"LevelM10",{0.030,-0.015},1,"ForwardVec",1},//middle
							{"LevelM10",{0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM10",{0.040,-0.00450},1,"ForwardVec",1},
							{},
							{"LevelM10",{0.050,-0.00375},1,"ForwardVec",1},
							{"LevelM10",{0.060,-0.00300},1,"ForwardVec",1},
							{},
							{"LevelM10",{0.070,-0.00225},1,"ForwardVec",1},
							{"LevelM10",{0.080,-0.00150},1,"ForwardVec",1},
							{},
							{"LevelM10",{0.090,-0.00075},1,"ForwardVec",1},
							{"LevelM10",{0.100,-0.000},1,"ForwardVec",1}
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
						pos[]=	{"LevelM10",{-0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM10",{-0.04500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM10",{-0.08500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_10: VALM_1_10
					{
						align="right";
						pos[]=	{"LevelM10",{0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM10",{0.12500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM10",{0.08500,-0.000},1,"ForwardVec",1};
					};
					class LevelP10: Level0
					{
						type="line";
						width=1;
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
						pos[]=	{"LevelP10",{-0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP10",{-0.04500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP10",{-0.08500,0.040},1,"ForwardVec",1};
					};
					class VALP_2_10: VALP_1_10
					{
						align="right";
						pos[]=	{"LevelP10",{0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP10",{0.12500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP10",{0.08500,0.040},1,"ForwardVec",1};
					};
					class LevelM15: Level0
					{
						type="line";
						width=1;
						points[]=
						{
							{"LevelM15",{-0.100,-0.000},1,"ForwardVec",1},
							{"LevelM15",{-0.090,-0.00075},1,"ForwardVec",1},
							{},
							{"LevelM15",{-0.080,-0.00150},1,"ForwardVec",1},
							{"LevelM15",{-0.070,-0.00225},1,"ForwardVec",1},
							{},
							{"LevelM15",{-0.060,-0.00300},1,"ForwardVec",1},
							{"LevelM15",{-0.050,-0.00375},1,"ForwardVec",1},
							{},
							{"LevelM15",{-0.040,-0.00450},1,"ForwardVec",1},
							{"LevelM15",{-0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM15",{-0.030,-0.015},1,"ForwardVec",1},//middle
							{},
							{"LevelM15",{0.030,-0.015},1,"ForwardVec",1},//middle
							{"LevelM15",{0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM15",{0.040,-0.00450},1,"ForwardVec",1},
							{},
							{"LevelM15",{0.050,-0.00375},1,"ForwardVec",1},
							{"LevelM15",{0.060,-0.00300},1,"ForwardVec",1},
							{},
							{"LevelM15",{0.070,-0.00225},1,"ForwardVec",1},
							{"LevelM15",{0.080,-0.00150},1,"ForwardVec",1},
							{},
							{"LevelM15",{0.090,-0.00075},1,"ForwardVec",1},
							{"LevelM15",{0.100,-0.000},1,"ForwardVec",1}
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
						pos[]=	{"LevelM15",{-0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM15",{-0.04500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM15",{-0.08500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_15: VALM_1_15
					{
						align="right";
						pos[]=	{"LevelM15",{0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM15",{0.12500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM15",{0.08500,-0.000},1,"ForwardVec",1};
					};
					class LevelP15: Level0
					{
						type="line";
						width=1;
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
						pos[]=	{"LevelP15",{-0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP15",{-0.04500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP15",{-0.08500,0.040},1,"ForwardVec",1};
					};
					class VALP_2_15: VALP_1_15
					{
						align="right";
						pos[]=	{"LevelP15",{0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP15",{0.12500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP15",{0.08500,0.040},1,"ForwardVec",1};
					};
					class LevelM20: Level0
					{
						type="line";
						width=1;
						points[]=
						{
							{"LevelM20",{-0.100,-0.000},1,"ForwardVec",1},
							{"LevelM20",{-0.090,-0.00075},1,"ForwardVec",1},
							{},
							{"LevelM20",{-0.080,-0.00150},1,"ForwardVec",1},
							{"LevelM20",{-0.070,-0.00225},1,"ForwardVec",1},
							{},
							{"LevelM20",{-0.060,-0.00300},1,"ForwardVec",1},
							{"LevelM20",{-0.050,-0.00375},1,"ForwardVec",1},
							{},
							{"LevelM20",{-0.040,-0.00450},1,"ForwardVec",1},
							{"LevelM20",{-0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM20",{-0.030,-0.015},1,"ForwardVec",1},//middle
							{},
							{"LevelM20",{0.030,-0.015},1,"ForwardVec",1},//middle
							{"LevelM20",{0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM20",{0.040,-0.00450},1,"ForwardVec",1},
							{},
							{"LevelM20",{0.050,-0.00375},1,"ForwardVec",1},
							{"LevelM20",{0.060,-0.00300},1,"ForwardVec",1},
							{},
							{"LevelM20",{0.070,-0.00225},1,"ForwardVec",1},
							{"LevelM20",{0.080,-0.00150},1,"ForwardVec",1},
							{},
							{"LevelM20",{0.090,-0.00075},1,"ForwardVec",1},
							{"LevelM20",{0.100,-0.000},1,"ForwardVec",1}
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
						pos[]=	{"LevelM20",{-0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM20",{-0.04500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM20",{-0.08500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_20: VALM_1_20
					{
						align="right";
						pos[]=	{"LevelM20",{0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM20",{0.12500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM20",{0.08500,-0.000},1,"ForwardVec",1};
					};
					class LevelP20: Level0
					{
						type="line";
						width=1;
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
						pos[]=	{"LevelP20",{-0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP20",{-0.04500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP20",{-0.08500,0.040},1,"ForwardVec",1};
					};
					class VALP_2_20: VALP_1_20
					{
						align="right";
						pos[]=	{"LevelP20",{0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP20",{0.12500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP20",{0.08500,0.040},1,"ForwardVec",1};
					};
					class LevelM25: Level0
					{
						type="line";
						width=1;
						points[]=
						{
							{"LevelM25",{-0.100,-0.000},1,"ForwardVec",1},
							{"LevelM25",{-0.090,-0.00075},1,"ForwardVec",1},
							{},
							{"LevelM25",{-0.080,-0.00150},1,"ForwardVec",1},
							{"LevelM25",{-0.070,-0.00225},1,"ForwardVec",1},
							{},
							{"LevelM25",{-0.060,-0.00300},1,"ForwardVec",1},
							{"LevelM25",{-0.050,-0.00375},1,"ForwardVec",1},
							{},
							{"LevelM25",{-0.040,-0.00450},1,"ForwardVec",1},
							{"LevelM25",{-0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM25",{-0.030,-0.015},1,"ForwardVec",1},//middle
							{},
							{"LevelM25",{0.030,-0.015},1,"ForwardVec",1},//middle
							{"LevelM25",{0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM25",{0.040,-0.00450},1,"ForwardVec",1},
							{},
							{"LevelM25",{0.050,-0.00375},1,"ForwardVec",1},
							{"LevelM25",{0.060,-0.00300},1,"ForwardVec",1},
							{},
							{"LevelM25",{0.070,-0.00225},1,"ForwardVec",1},
							{"LevelM25",{0.080,-0.00150},1,"ForwardVec",1},
							{},
							{"LevelM25",{0.090,-0.00075},1,"ForwardVec",1},
							{"LevelM25",{0.100,-0.000},1,"ForwardVec",1}
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
						pos[]=	{"LevelM25",{-0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM25",{-0.04500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM25",{-0.08500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_25: VALM_1_25
					{
						align="right";
						pos[]=	{"LevelM25",{0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM25",{0.12500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM25",{0.08500,-0.000},1,"ForwardVec",1};
					};
					class LevelP25: Level0
					{
						type="line";
						width=1;
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
						pos[]=	{"LevelP25",{-0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP25",{-0.04500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP25",{-0.08500,0.040},1,"ForwardVec",1};
					};
					class VALP_2_25: VALP_1_25
					{
						align="right";
						pos[]=	{"LevelP25",{0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP25",{0.12500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP25",{0.08500,0.040},1,"ForwardVec",1};
					};
					class LevelM30: Level0
					{
						type="line";
						width=1;
						points[]=
						{
							{"LevelM30",{-0.100,-0.000},1,"ForwardVec",1},
							{"LevelM30",{-0.090,-0.00075},1,"ForwardVec",1},
							{},
							{"LevelM30",{-0.080,-0.00150},1,"ForwardVec",1},
							{"LevelM30",{-0.070,-0.00225},1,"ForwardVec",1},
							{},
							{"LevelM30",{-0.060,-0.00300},1,"ForwardVec",1},
							{"LevelM30",{-0.050,-0.00375},1,"ForwardVec",1},
							{},
							{"LevelM30",{-0.040,-0.00450},1,"ForwardVec",1},
							{"LevelM30",{-0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM30",{-0.030,-0.015},1,"ForwardVec",1},//middle
							{},
							{"LevelM30",{0.030,-0.015},1,"ForwardVec",1},//middle
							{"LevelM30",{0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM30",{0.040,-0.00450},1,"ForwardVec",1},
							{},
							{"LevelM30",{0.050,-0.00375},1,"ForwardVec",1},
							{"LevelM30",{0.060,-0.00300},1,"ForwardVec",1},
							{},
							{"LevelM30",{0.070,-0.00225},1,"ForwardVec",1},
							{"LevelM30",{0.080,-0.00150},1,"ForwardVec",1},
							{},
							{"LevelM30",{0.090,-0.00075},1,"ForwardVec",1},
							{"LevelM30",{0.100,-0.000},1,"ForwardVec",1}
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
						pos[]=	{"LevelM30",{-0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM30",{-0.04500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM30",{-0.08500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_30: VALM_1_30
					{
						align="right";
						pos[]=	{"LevelM30",{0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM30",{0.12500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM30",{0.08500,-0.000},1,"ForwardVec",1};
					};
					class LevelP30: Level0
					{
						type="line";
						width=1;
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
						pos[]=	{"LevelP30",{-0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP30",{-0.04500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP30",{-0.08500,0.040},1,"ForwardVec",1};
					};
					class VALP_2_30: VALP_1_30
					{
						align="right";
						pos[]=	{"LevelP30",{0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP30",{0.12500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP30",{0.08500,0.040},1,"ForwardVec",1};
					};
					class LevelM35: Level0
					{
						type="line";
						width=1;
						points[]=
						{
							{"LevelM35",{-0.100,-0.000},1,"ForwardVec",1},
							{"LevelM35",{-0.090,-0.00075},1,"ForwardVec",1},
							{},
							{"LevelM35",{-0.080,-0.00150},1,"ForwardVec",1},
							{"LevelM35",{-0.070,-0.00225},1,"ForwardVec",1},
							{},
							{"LevelM35",{-0.060,-0.00300},1,"ForwardVec",1},
							{"LevelM35",{-0.050,-0.00375},1,"ForwardVec",1},
							{},
							{"LevelM35",{-0.040,-0.00450},1,"ForwardVec",1},
							{"LevelM35",{-0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM35",{-0.030,-0.015},1,"ForwardVec",1},//middle
							{},
							{"LevelM35",{0.030,-0.015},1,"ForwardVec",1},//middle
							{"LevelM35",{0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM35",{0.040,-0.00450},1,"ForwardVec",1},
							{},
							{"LevelM35",{0.050,-0.00375},1,"ForwardVec",1},
							{"LevelM35",{0.060,-0.00300},1,"ForwardVec",1},
							{},
							{"LevelM35",{0.070,-0.00225},1,"ForwardVec",1},
							{"LevelM35",{0.080,-0.00150},1,"ForwardVec",1},
							{},
							{"LevelM35",{0.090,-0.00075},1,"ForwardVec",1},
							{"LevelM35",{0.100,-0.000},1,"ForwardVec",1}
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
						pos[]=	{"LevelM35",{-0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM35",{-0.04500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM35",{-0.08500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_35: VALM_1_35
					{
						align="right";
						pos[]=	{"LevelM35",{0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM35",{0.12500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM35",{0.08500,-0.000},1,"ForwardVec",1};
					};
					class LevelP35: Level0
					{
						type="line";
						width=1;
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
						pos[]=	{"LevelP35",{-0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP35",{-0.04500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP35",{-0.08500,0.040},1,"ForwardVec",1};
					};
					class VALP_2_35: VALP_1_35
					{
						align="right";
						pos[]=	{"LevelP35",{0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP35",{0.12500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP35",{0.08500,0.040},1,"ForwardVec",1};
					};
					class LevelM40: Level0
					{
						type="line";
						width=1;
						points[]=
						{
							{"LevelM40",{-0.100,-0.000},1,"ForwardVec",1},
							{"LevelM40",{-0.090,-0.00075},1,"ForwardVec",1},
							{},
							{"LevelM40",{-0.080,-0.00150},1,"ForwardVec",1},
							{"LevelM40",{-0.070,-0.00225},1,"ForwardVec",1},
							{},
							{"LevelM40",{-0.060,-0.00300},1,"ForwardVec",1},
							{"LevelM40",{-0.050,-0.00375},1,"ForwardVec",1},
							{},
							{"LevelM40",{-0.040,-0.00450},1,"ForwardVec",1},
							{"LevelM40",{-0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM40",{-0.030,-0.015},1,"ForwardVec",1},//middle
							{},
							{"LevelM40",{0.030,-0.015},1,"ForwardVec",1},//middle
							{"LevelM40",{0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM40",{0.040,-0.00450},1,"ForwardVec",1},
							{},
							{"LevelM40",{0.050,-0.00375},1,"ForwardVec",1},
							{"LevelM40",{0.060,-0.00300},1,"ForwardVec",1},
							{},
							{"LevelM40",{0.070,-0.00225},1,"ForwardVec",1},
							{"LevelM40",{0.080,-0.00150},1,"ForwardVec",1},
							{},
							{"LevelM40",{0.090,-0.00075},1,"ForwardVec",1},
							{"LevelM40",{0.100,-0.000},1,"ForwardVec",1}
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
						pos[]=	{"LevelM40",{-0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM40",{-0.04500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM40",{-0.08500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_40: VALM_1_40
					{
						align="right";
						pos[]=	{"LevelM40",{0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM40",{0.12500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM40",{0.08500,-0.000},1,"ForwardVec",1};
					};
					class LevelP40: Level0
					{
						type="line";
						width=1;
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
						pos[]=	{"LevelP40",{-0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP40",{-0.04500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP40",{-0.08500,0.040},1,"ForwardVec",1};
					};
					class VALP_2_40: VALP_1_40
					{
						align="right";
						pos[]=	{"LevelP40",{0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP40",{0.12500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP40",{0.08500,0.040},1,"ForwardVec",1};
					};
					class LevelM45: Level0
					{
						type="line";
						width=1;
						points[]=
						{
							{"LevelM45",{-0.100,-0.000},1,"ForwardVec",1},
							{"LevelM45",{-0.090,-0.00075},1,"ForwardVec",1},
							{},
							{"LevelM45",{-0.080,-0.00150},1,"ForwardVec",1},
							{"LevelM45",{-0.070,-0.00225},1,"ForwardVec",1},
							{},
							{"LevelM45",{-0.060,-0.00300},1,"ForwardVec",1},
							{"LevelM45",{-0.050,-0.00375},1,"ForwardVec",1},
							{},
							{"LevelM45",{-0.040,-0.00450},1,"ForwardVec",1},
							{"LevelM45",{-0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM45",{-0.030,-0.015},1,"ForwardVec",1},//middle
							{},
							{"LevelM45",{0.030,-0.015},1,"ForwardVec",1},//middle
							{"LevelM45",{0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM45",{0.040,-0.00450},1,"ForwardVec",1},
							{},
							{"LevelM45",{0.050,-0.00375},1,"ForwardVec",1},
							{"LevelM45",{0.060,-0.00300},1,"ForwardVec",1},
							{},
							{"LevelM45",{0.070,-0.00225},1,"ForwardVec",1},
							{"LevelM45",{0.080,-0.00150},1,"ForwardVec",1},
							{},
							{"LevelM45",{0.090,-0.00075},1,"ForwardVec",1},
							{"LevelM45",{0.100,-0.000},1,"ForwardVec",1}
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
						pos[]=	{"LevelM45",{-0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM45",{-0.04500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM45",{-0.08500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_45: VALM_1_45
					{
						align="right";
						pos[]=	{"LevelM45",{0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM45",{0.12500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM45",{0.08500,-0.000},1,"ForwardVec",1};
					};
					class LevelP45: Level0
					{
						type="line";
						width=1;
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
						pos[]=	{"LevelP45",{-0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP45",{-0.04500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP45",{-0.08500,0.040},1,"ForwardVec",1};
					};
					class VALP_2_45: VALP_1_45
					{
						align="right";
						pos[]=	{"LevelP45",{0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP45",{0.12500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP45",{0.08500,0.040},1,"ForwardVec",1};
					};
					class LevelM50: Level0
					{
						type="line";
						width=1;
						points[]=
						{
							{"LevelM50",{-0.100,-0.000},1,"ForwardVec",1},
							{"LevelM50",{-0.090,-0.00075},1,"ForwardVec",1},
							{},
							{"LevelM50",{-0.080,-0.00150},1,"ForwardVec",1},
							{"LevelM50",{-0.070,-0.00225},1,"ForwardVec",1},
							{},
							{"LevelM50",{-0.060,-0.00300},1,"ForwardVec",1},
							{"LevelM50",{-0.050,-0.00375},1,"ForwardVec",1},
							{},
							{"LevelM50",{-0.040,-0.00450},1,"ForwardVec",1},
							{"LevelM50",{-0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM50",{-0.030,-0.015},1,"ForwardVec",1},//middle
							{},
							{"LevelM50",{0.030,-0.015},1,"ForwardVec",1},//middle
							{"LevelM50",{0.030,-0.00525},1,"ForwardVec",1},
							{"LevelM50",{0.040,-0.00450},1,"ForwardVec",1},
							{},
							{"LevelM50",{0.050,-0.00375},1,"ForwardVec",1},
							{"LevelM50",{0.060,-0.00300},1,"ForwardVec",1},
							{},
							{"LevelM50",{0.070,-0.00225},1,"ForwardVec",1},
							{"LevelM50",{0.080,-0.00150},1,"ForwardVec",1},
							{},
							{"LevelM50",{0.090,-0.00075},1,"ForwardVec",1},
							{"LevelM50",{0.100,-0.000},1,"ForwardVec",1}
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
						pos[]=	{"LevelM50",{-0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM50",{-0.04500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM50",{-0.08500,-0.000},1,"ForwardVec",1};
					};
					class VALM_2_50: VALM_1_50
					{
						align="right";
						pos[]=	{"LevelM50",{0.08500,-0.040},1,"ForwardVec",1};
						right[]={"LevelM50",{0.12500,-0.040},1,"ForwardVec",1};
						down[]=	{"LevelM50",{0.08500,-0.000},1,"ForwardVec",1};
					};
					class LevelP50: Level0
					{
						type="line";
						width=1;
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
						pos[]=	{"LevelP50",{-0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP50",{-0.04500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP50",{-0.08500,0.040},1,"ForwardVec",1};
					};
					class VALP_2_50: VALP_1_50
					{
						align="right";
						pos[]=	{"LevelP50",{0.08500,0.000},1,"ForwardVec",1};
						right[]={"LevelP50",{0.12500,0.000},1,"ForwardVec",1};
						down[]=	{"LevelP50",{0.08500,0.040},1,"ForwardVec",1};
					};
				};
			};