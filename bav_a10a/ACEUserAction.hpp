	class ACE_SelfActions 
		{
			class extendrefueling 
			{
				displayName = "Turn on refuelling";
				condition = "_player == driver vehicle _player and _target animationPhase ""fuel_probe"" < 0.5 and speed _target > 100";
				statement = "_target animate [""fuel_probe"",1];_target animate [""refuel_door"",1];";
				showDisabled = 0;
				priority = 1;
				icon = "";
			};
			class retractrefueling 
			{
				displayName = "Turn off refueling";
				condition = "_player == driver vehicle _player and _target animationPhase ""fuel_probe"" > 0.5";
				statement = "_target animate [""fuel_probe"",0];_target animate [""refuel_door"",0];";
				showDisabled = 0;
				priority = 1;
				icon = "";
			};
			class rwr_15 
			{
				displayName = "$STR_RWR";
				condition = "(_player == driver vehicle _player || _player == gunner vehicle _player)";
				statement = "call rwrmod_fnc_interaction";
				showDisabled = 0;
				priority = 1;
				icon = "";
			};
		};