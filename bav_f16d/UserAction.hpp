		class UserActions
		{
			class Eject
			{
				priority = 6;
				shortcut = "Eject";
				displayName = "<t color='#a72121'>Ejection Seat</t>";
				condition = "player in this and isengineon this";
				statement = "[this] execVM ""\FIR_F16D\sqs\Ejection\Ejection.sqf"";";
				position = "pos cano";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
		        hideOnUse = 1;
			};

			class ECM_ON
			{
				displayName = "ECM JAMMER ON";
				position = "pos cano";
				radius = 15;
				shortcut = "User2";
				condition = "player in this and this getvariable ""ECMJAMMER"" == ""yes"";";
				statement = "[this] execVM ""\FIR_AirWeaponSystem_US\Script\ECM\ECM_ON.sqf"";";
				onlyforplayer = "False";
				hideOnUse = 1;
			};
			class Afterburner 
			{
				displayName = "Afterburner On";
				position = "pos cano";
				radius = 15;
				shortcut = "User1";
				condition = "speed this >50 and this animationPhase ""ABSwitch"" <= 0.1 and  this animationphase ""Throttle_Speed"" == 1";
				statement = "this execvm ""\FIR_F16D\sqs\FX\F16_FX_Afterburner.sqf"";";
				onlyforplayer = "False";
		        hideOnUse = 1;
				showWindow = 0;
			};
			class Afterburner_1 
			{
				displayName = "Afterburner Off";
				position = "pos cano";
				radius = 15;
				shortcut = "User1";
				condition = "this animationPhase ""ABSwitch"" >= 0.9";
				statement = "this animate [""ABSwitch"",0]";
				onlyforplayer = "False";
		        hideOnUse = 1;
				showWindow = 0;
			};

			class Warhud_on
			{
				displayName = "NV MODE - ON";
				position = "pos cano";
				radius = 15;
				condition = "this getvariable ""f16_hud_type"" == ""war"" and this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this and this animationPhase ""nvhud"" >= 0.9";
				statement = "this animate [""nvhud"",0];";
				onlyforplayer = "false";
				shortcut = "";
		        hideOnUse = 1;
				showWindow = 0;
			};
			class Warhud_OFF
			{
				displayName = "NV MODE - OFF";
				position = "pos cano";
				radius = 15;
				condition = "this animationPhase ""nvhud"" <= 0.1";
				statement = "this animate [""nvhud"",1]";
				onlyforplayer = "false";
				shortcut = "";
		        hideOnUse = 1;
				showWindow = 0;
			};
			class Rear_Swtich_1
			{
				displayName = "Rear Monitor FLIR->NV mode";
				position = "pos cano";
				radius = 15;
				condition = "this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this and this animationPhase ""monitor"" <= 0.9 and this animationPhase ""rear_FLIR_Hide"" <= 0.9";
				statement = "this animate [""rear_FLIR_Hide"",1];";
				onlyforplayer = "false";
				shortcut = "";
		        hideOnUse = 1;
				showWindow = 0;
			};
			class Rear_Swtich_2
			{
				displayName = "Rear Monitor NV->FLIR mode";
				position = "pos cano";
				radius = 15;
				condition = "this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this and this animationPhase ""monitor"" <= 0.9 and this animationPhase ""rear_FLIR_Hide"" >= 0.9";
				statement = "this animate [""rear_FLIR_Hide"",0]";
				onlyforplayer = "false";
				shortcut = "";
		        hideOnUse = 1;
				showWindow = 0;
			};
			
		class TGTPOD_ON
			{
				displayName = "TGP Screen ON";
				position = "pos cano";
				radius = 15;
				condition = "this getvariable ""ITGT_VT"" == ""no"" and this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this";
		//		statement = "this setvariable [""ITGT_VT"",""yes""]; [this] execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\vt_tracking.sqf"";";
				statement = "this setvariable [""ITGT_VT"",""yes""]; [this] execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\vt_tracking.sqf"";";
				onlyforplayer = "false";
				shortcut = "User6";
		        hideOnUse = 1;
				showWindow = 0;
			};
			class TGTPOD_OFF
			{
				displayName = "TGP Screen OFF";
				position = "pos cano";
				radius = 15;
				condition = "this getvariable ""ITGT_VT"" == ""yes""";
				statement = "this setvariable [""ITGT_VT"",""no""];";
				onlyforplayer = "false";
				shortcut = "User6";
		        hideOnUse = 1;
				showWindow = 0;
			};
			class TGTPOD_Zoom_Toggle
			{
				displayName = "TGP Screen Zoom Toggle";
				position = "pos cano";
				radius = 15;
				condition = "this getvariable ""ITGT_VT"" == ""yes""";
				statement = "[this] execVM ""\FIR_F16D\sqs\init\TGP_Switch.sqf"";";
				onlyforplayer = "false";
				shortcut = "User7";
		        hideOnUse = 1;
				showWindow = 0;
			};
			class TGTPOD_Mode_Toggle
			{
				displayName = "TGP ScreenMode Toggle";
				position = "pos cano";
				radius = 15;
				condition = "this getvariable ""ITGT_VT"" == ""yes""";
				statement = "[this] execVM ""\FIR_F16D\sqs\init\TGP_Mode_Switch.sqf"";";
				onlyforplayer = "false";
				shortcut = "User8";
		        hideOnUse = 1;
				showWindow = 0;
			};			
			class fakeaction
			{
				displayName = "";
				position = "pos cano";
				radius = 15;
				condition = "alive this";
				statement = "";
				onlyforplayer = "True";
				priority = 0;
			};
		};
