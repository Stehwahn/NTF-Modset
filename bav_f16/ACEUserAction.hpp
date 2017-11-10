	class ACE_SelfActions 
		{
			class extendrefueling 
			{
				displayName = "Turn on refuelling";
				condition = "_player == driver vehicle _player and _target animationPhase ""fuel_probe"" < 0.5 and speed _target > 100";
				statement = "_target animate [""fuel_probe"",1];_target animate [""refuel_hatch"",1];";
				showDisabled = 0;
				priority = 1;
				icon = "";
			};		
			class retractrefueling 
			{
				displayName = "Turn off refueling";
				condition = "_player == driver vehicle _player and _target animationPhase ""fuel_probe"" > 0.5";
				statement = "_target animate [""fuel_probe"",0];_target animate [""refuel_hatch"",0];";
				showDisabled = 0;
				priority = 1;
				icon = "";				
			};

			class Aircraft_MFD_Open_N
			{
				displayName = "Open I-TGT System";
				condition = "_target getvariable ""TGT_POD"" == ""yes"" and _player in _target and isengineon _target";
				statement = "_target execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf""";
				showDisabled = 0;
				priority = 1;
				icon = "";
			};
			class Fueltank_Jettison
			{
				displayName = "Jettison Fueltank";
				condition = "_player in _target and _target animationPhase ""fuelswitch"" >= 0.9";
				statement = "[_target] execVM ""\FIR_F16\sqs\Jettison\droptanks.sqf"";";
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
