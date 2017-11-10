class Horizont
{
	clipTL[]={0,0};
	clipBR[]={1.0,1.0};
	class Dimmed
	{
		class Level0
		{
			type="line";
			points[]=
			{
				
				{
					"Level0",
					{-0.3,0},
					1,"ForwardVec",1
				},
				
				{
					"Level0",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"Level0",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"Level0",
					{0.3,0},
					1,"ForwardVec",1
				}
			};
		};
		class LevelM5: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelM5",
					{-0.2,-0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelM5",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM5",
					{-0.15000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM5",
					{-0.1,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM5",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM5",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM5",
					{0.1,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM5",
					{0.15000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM5",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM5",
					{0.2,-0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelM5",
				{-0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM5",
				{-0.17,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM5",
				{-0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class VALM_2_5: VALM_1_5
		{
			align="right";
			pos[]=
			{
				"LevelM5",
				{0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM5",
				{0.27,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM5",
				{0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class LevelP5: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP5",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP5",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP5",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP5",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP5",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP5",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelP5",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP5",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP5",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_5: VALP_1_5
		{
			align="right";
			pos[]=
			{
				"LevelP5",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP5",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP5",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class LevelM10: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelM10",
					{-0.2,-0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelM10",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM10",
					{-0.15000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM10",
					{-0.1,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM10",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM10",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM10",
					{0.1,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM10",
					{0.15000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM10",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM10",
					{0.2,-0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelM10",
				{-0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM10",
				{-0.17,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM10",
				{-0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class VALM_2_10: VALM_1_10
		{
			align="right";
			pos[]=
			{
				"LevelM10",
				{0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM10",
				{0.27,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM10",
				{0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class LevelP10: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP10",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP10",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP10",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP10",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP10",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP10",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelP10",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP10",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP10",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_10: VALP_1_10
		{
			align="right";
			pos[]=
			{
				"LevelP10",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP10",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP10",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class LevelM15: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelM15",
					{-0.2,-0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelM15",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM15",
					{-0.15000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM15",
					{-0.1,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM15",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM15",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM15",
					{0.1,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM15",
					{0.15000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM15",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM15",
					{0.2,-0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelM15",
				{-0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM15",
				{-0.17,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM15",
				{-0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class VALM_2_15: VALM_1_15
		{
			align="right";
			pos[]=
			{
				"LevelM15",
				{0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM15",
				{0.27,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM15",
				{0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class LevelP15: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP15",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP15",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP15",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP15",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP15",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP15",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelP15",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP15",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP15",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_15: VALP_1_15
		{
			align="right";
			pos[]=
			{
				"LevelP15",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP15",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP15",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class LevelM20: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelM20",
					{-0.2,-0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelM20",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM20",
					{-0.15000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM20",
					{-0.1,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM20",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM20",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM20",
					{0.1,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM20",
					{0.15000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM20",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM20",
					{0.2,-0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelM20",
				{-0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM20",
				{-0.17,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM20",
				{-0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class VALM_2_20: VALM_1_20
		{
			align="right";
			pos[]=
			{
				"LevelM20",
				{0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM20",
				{0.27,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM20",
				{0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class LevelP20: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP20",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP20",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP20",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP20",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP20",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP20",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelP20",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP20",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP20",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_20: VALP_1_20
		{
			align="right";
			pos[]=
			{
				"LevelP20",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP20",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP20",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class LevelM25: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelM25",
					{-0.2,-0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelM25",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM25",
					{-0.15000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM25",
					{-0.1,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM25",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM25",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM25",
					{0.1,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM25",
					{0.15000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM25",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM25",
					{0.2,-0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelM25",
				{-0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM25",
				{-0.17,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM25",
				{-0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class VALM_2_25: VALM_1_25
		{
			align="right";
			pos[]=
			{
				"LevelM25",
				{0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM25",
				{0.27,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM25",
				{0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class LevelP25: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP25",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP25",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP25",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP25",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP25",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP25",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelP25",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP25",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP25",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_25: VALP_1_25
		{
			align="right";
			pos[]=
			{
				"LevelP25",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP25",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP25",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class LevelM30: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelM30",
					{-0.2,-0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelM30",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM30",
					{-0.15000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM30",
					{-0.1,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM30",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM30",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM30",
					{0.1,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM30",
					{0.15000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM30",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM30",
					{0.2,-0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelM30",
				{-0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM30",
				{-0.17,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM30",
				{-0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class VALM_2_30: VALM_1_30
		{
			align="right";
			pos[]=
			{
				"LevelM30",
				{0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM30",
				{0.27,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM30",
				{0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class LevelP30: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP30",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP30",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP30",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP30",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP30",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP30",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelP30",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP30",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP30",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_30: VALP_1_30
		{
			align="right";
			pos[]=
			{
				"LevelP30",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP30",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP30",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class LevelM35: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelM35",
					{-0.2,-0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelM35",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM35",
					{-0.15000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM35",
					{-0.1,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM35",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM35",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM35",
					{0.1,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM35",
					{0.15000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM35",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM35",
					{0.2,-0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelM35",
				{-0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM35",
				{-0.17,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM35",
				{-0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class VALM_2_35: VALM_1_35
		{
			align="right";
			pos[]=
			{
				"LevelM35",
				{0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM35",
				{0.27,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM35",
				{0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class LevelP35: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP35",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP35",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP35",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP35",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP35",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP35",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelP35",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP35",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP35",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_35: VALP_1_35
		{
			align="right";
			pos[]=
			{
				"LevelP35",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP35",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP35",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class LevelM40: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelM40",
					{-0.2,-0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelM40",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM40",
					{-0.15000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM40",
					{-0.1,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM40",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM40",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM40",
					{0.1,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM40",
					{0.15000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM40",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM40",
					{0.2,-0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelM40",
				{-0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM40",
				{-0.17,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM40",
				{-0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class VALM_2_40: VALM_1_40
		{
			align="right";
			pos[]=
			{
				"LevelM40",
				{0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM40",
				{0.27,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM40",
				{0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class LevelP40: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP40",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP40",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP40",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP40",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP40",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP40",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelP40",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP40",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP40",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_40: VALP_1_40
		{
			align="right";
			pos[]=
			{
				"LevelP40",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP40",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP40",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class LevelM45: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelM45",
					{-0.2,-0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelM45",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM45",
					{-0.15000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM45",
					{-0.1,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM45",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM45",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM45",
					{0.1,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM45",
					{0.15000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM45",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM45",
					{0.2,-0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelM45",
				{-0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM45",
				{-0.17,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM45",
				{-0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class VALM_2_45: VALM_1_45
		{
			align="right";
			pos[]=
			{
				"LevelM45",
				{0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM45",
				{0.27,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM45",
				{0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class LevelP45: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP45",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP45",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP45",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP45",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP45",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP45",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelP45",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP45",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP45",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_45: VALP_1_45
		{
			align="right";
			pos[]=
			{
				"LevelP45",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP45",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP45",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class LevelM50: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelM50",
					{-0.2,-0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelM50",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM50",
					{-0.15000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM50",
					{-0.1,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM50",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM50",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM50",
					{0.1,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM50",
					{0.15000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM50",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM50",
					{0.2,-0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelM50",
				{-0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM50",
				{-0.17,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM50",
				{-0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class VALM_2_50: VALM_1_50
		{
			align="right";
			pos[]=
			{
				"LevelM50",
				{0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM50",
				{0.27,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM50",
				{0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class LevelP50: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP50",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP50",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP50",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP50",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP50",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP50",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
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
			pos[]=
			{
				"LevelP50",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP50",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP50",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_50: VALP_1_50
		{
			align="right";
			pos[]=
			{
				"LevelP50",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP50",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP50",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class LevelM55: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelM55",
					{-0.2,-0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelM55",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM55",
					{-0.15000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM55",
					{-0.1,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM55",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM55",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM55",
					{0.1,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM55",
					{0.15000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM55",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM55",
					{0.2,-0.029999999},
					1,"ForwardVec",1
				}
			};
		};
		class VALM_1_55
		{
			type="text";
			source="static";
			text=-50;
			align="left";
			scale=1;
			sourceScale=1;
			pos[]=
			{
				"LevelM55",
				{-0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM55",
				{-0.17,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM55",
				{-0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class VALM_2_55: VALM_1_55
		{
			align="right";
			pos[]=
			{
				"LevelM55",
				{0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM55",
				{0.27,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM55",
				{0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class LevelP55: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP55",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP55",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP55",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP55",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP55",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP55",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
			};
		};
		class VALP_1_55
		{
			type="text";
			source="static";
			text="50";
			align="left";
			scale=1;
			sourceScale=1;
			pos[]=
			{
				"LevelP55",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP55",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP55",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_55: VALP_1_55
		{
			align="right";
			pos[]=
			{
				"LevelP55",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP55",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP55",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class LevelM60: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelM60",
					{-0.2,-0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelM60",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM60",
					{-0.15000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM60",
					{-0.1,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM60",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM60",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM60",
					{0.1,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM60",
					{0.15000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM60",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM60",
					{0.2,-0.029999999},
					1,"ForwardVec",1
				}
			};
		};
		class VALM_1_60
		{
			type="text";
			source="static";
			text=-50;
			align="left";
			scale=1;
			sourceScale=1;
			pos[]=
			{
				"LevelM60",
				{-0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM60",
				{-0.17,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM60",
				{-0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class VALM_2_60: VALM_1_60
		{
			align="right";
			pos[]=
			{
				"LevelM60",
				{0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM60",
				{0.27,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM60",
				{0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class LevelP60: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP60",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP60",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP60",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP60",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP60",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP60",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
			};
		};
		class VALP_1_60
		{
			type="text";
			source="static";
			text="50";
			align="left";
			scale=1;
			sourceScale=1;
			pos[]=
			{
				"LevelP60",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP60",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP60",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_60: VALP_1_60
		{
			align="right";
			pos[]=
			{
				"LevelP60",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP60",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP60",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class LevelM65: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelM65",
					{-0.2,-0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelM65",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM65",
					{-0.15000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM65",
					{-0.1,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM65",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM65",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM65",
					{0.1,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM65",
					{0.15000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM65",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM65",
					{0.2,-0.029999999},
					1,"ForwardVec",1
				}
			};
		};
		class VALM_1_65
		{
			type="text";
			source="static";
			text=-50;
			align="left";
			scale=1;
			sourceScale=1;
			pos[]=
			{
				"LevelM65",
				{-0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM65",
				{-0.17,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM65",
				{-0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class VALM_2_65: VALM_1_65
		{
			align="right";
			pos[]=
			{
				"LevelM65",
				{0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM65",
				{0.27,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM65",
				{0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class LevelP65: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP65",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP65",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP65",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP65",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP65",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP65",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
			};
		};
		class VALP_1_65
		{
			type="text";
			source="static";
			text="50";
			align="left";
			scale=1;
			sourceScale=1;
			pos[]=
			{
				"LevelP65",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP65",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP65",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_65: VALP_1_65
		{
			align="right";
			pos[]=
			{
				"LevelP65",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP65",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP65",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class LevelM70: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelM70",
					{-0.2,-0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelM70",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM70",
					{-0.15000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM70",
					{-0.1,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM70",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM70",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM70",
					{0.1,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM70",
					{0.15000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM70",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM70",
					{0.2,-0.029999999},
					1,"ForwardVec",1
				}
			};
		};
		class VALM_1_70
		{
			type="text";
			source="static";
			text=-50;
			align="left";
			scale=1;
			sourceScale=1;
			pos[]=
			{
				"LevelM70",
				{-0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM70",
				{-0.17,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM70",
				{-0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class VALM_2_70: VALM_1_70
		{
			align="right";
			pos[]=
			{
				"LevelM70",
				{0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM70",
				{0.27,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM70",
				{0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class LevelP70: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP70",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP70",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP70",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP70",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP70",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP70",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
			};
		};
		class VALP_1_70
		{
			type="text";
			source="static";
			text="50";
			align="left";
			scale=1;
			sourceScale=1;
			pos[]=
			{
				"LevelP70",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP70",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP70",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_70: VALP_1_70
		{
			align="right";
			pos[]=
			{
				"LevelP70",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP70",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP70",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class LevelM75: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelM75",
					{-0.2,-0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelM75",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM75",
					{-0.15000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM75",
					{-0.1,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM75",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM75",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM75",
					{0.1,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM75",
					{0.15000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM75",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM75",
					{0.2,-0.029999999},
					1,"ForwardVec",1
				}
			};
		};
		class VALM_1_75
		{
			type="text";
			source="static";
			text=-50;
			align="left";
			scale=1;
			sourceScale=1;
			pos[]=
			{
				"LevelM75",
				{-0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM75",
				{-0.17,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM75",
				{-0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class VALM_2_75: VALM_1_75
		{
			align="right";
			pos[]=
			{
				"LevelM75",
				{0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM75",
				{0.27,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM75",
				{0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class LevelP75: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP75",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP75",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP75",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP75",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP75",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP75",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
			};
		};
		class VALP_1_75
		{
			type="text";
			source="static";
			text="50";
			align="left";
			scale=1;
			sourceScale=1;
			pos[]=
			{
				"LevelP75",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP75",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP75",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_75: VALP_1_75
		{
			align="right";
			pos[]=
			{
				"LevelP75",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP75",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP75",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class LevelM80: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelM80",
					{-0.2,-0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelM80",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM80",
					{-0.15000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM80",
					{-0.1,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM80",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM80",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM80",
					{0.1,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM80",
					{0.15000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM80",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM80",
					{0.2,-0.029999999},
					1,"ForwardVec",1
				}
			};
		};
		class VALM_1_80
		{
			type="text";
			source="static";
			text=-50;
			align="left";
			scale=1;
			sourceScale=1;
			pos[]=
			{
				"LevelM80",
				{-0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM80",
				{-0.17,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM80",
				{-0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class VALM_2_80: VALM_1_80
		{
			align="right";
			pos[]=
			{
				"LevelM80",
				{0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM80",
				{0.27,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM80",
				{0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class LevelP80: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP80",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP80",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP80",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP80",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP80",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP80",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
			};
		};
		class VALP_1_80
		{
			type="text";
			source="static";
			text="50";
			align="left";
			scale=1;
			sourceScale=1;
			pos[]=
			{
				"LevelP80",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP80",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP80",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_80: VALP_1_80
		{
			align="right";
			pos[]=
			{
				"LevelP80",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP80",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP80",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class LevelM85: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelM85",
					{-0.2,-0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelM85",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM85",
					{-0.15000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM85",
					{-0.1,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM85",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM85",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM85",
					{0.1,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelM85",
					{0.15000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM85",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelM85",
					{0.2,-0.029999999},
					1,"ForwardVec",1
				}
			};
		};
		class VALM_1_85
		{
			type="text";
			source="static";
			text=-50;
			align="left";
			scale=1;
			sourceScale=1;
			pos[]=
			{
				"LevelM85",
				{-0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM85",
				{-0.17,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM85",
				{-0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class VALM_2_85: VALM_1_85
		{
			align="right";
			pos[]=
			{
				"LevelM85",
				{0.22,-0.05000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelM85",
				{0.27,-0.05000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelM85",
				{0.22,-0.00000},
				1,"ForwardVec",1
			};
		};
		class LevelP85: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP85",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP85",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP85",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP85",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP85",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP85",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
			};
		};
		class VALP_1_85
		{
			type="text";
			source="static";
			text="50";
			align="left";
			scale=1;
			sourceScale=1;
			pos[]=
			{
				"LevelP85",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP85",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP85",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_85: VALP_1_85
		{
			align="right";
			pos[]=
			{
				"LevelP85",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP85",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP85",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class LevelP90: Level0
		{
			type="line";
			width=3.0;
			points[]=
			{
				
				{
					"LevelP90",
					{-0.2,0.029999999},
					1,"ForwardVec",1
				},
				
				{
					"LevelP90",
					{-0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP90",
					{-0.050000001,0},
					1,"ForwardVec",1
				},
				{},
				
				{
					"LevelP90",
					{0.050000001,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP90",
					{0.2,0},
					1,"ForwardVec",1
				},
				
				{
					"LevelP90",
					{0.2,0.029999999},
					1,"ForwardVec",1
				}
			};
		};
		class VALP_1_90
		{
			type="text";
			source="static";
			text="50";
			align="left";
			scale=1;
			sourceScale=1;
			pos[]=
			{
				"LevelP90",
				{-0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP90",
				{-0.17,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP90",
				{-0.22,0.05000},
				1,"ForwardVec",1
			};
		};
		class VALP_2_90: VALP_1_90
		{
			align="right";
			pos[]=
			{
				"LevelP90",
				{0.22,0.00000},
				1,"ForwardVec",1
			};
			right[]=
			{
				"LevelP90",
				{0.27,0.00000},
				1,"ForwardVec",1
			};
			down[]=
			{
				"LevelP90",
				{0.22,0.05000},
				1,"ForwardVec",1
			};
		};
	};
};