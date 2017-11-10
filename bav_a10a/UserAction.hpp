	class UserActions
		{
			class Eject
			{
				priority = 6;
				shortcut = "Eject";
				displayName = "<t color='#a72121'>Ejection Seat</t>";
				condition = "player in this and isengineon this";
				statement = "[this] execVM ""\FIR_A10A\sqs\Ejection\Ejection.sqf"";";
				position = "pos cano";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
		        hideOnUse = 1;
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
				hideOnUse = 1;
			};
			class ECM_ON
			{
				displayName = "ECM JAMMER ON";
				position = "pos cano";
				radius = 15;
				shortcut = "User2";
				condition = "this getvariable ""ECMJAMMER"" == ""yes"";";
				statement = "[this] execVM ""\FIR_AirWeaponSystem_US\Script\ECM\ECM_ON.sqf"";";
				onlyforplayer = "False";
				hideOnUse = 1;
			};
			class TGTPOD_ON
			{
				displayName = "TVM ON";
				position = "pos cano";
				radius = 15;
				condition = "this getvariable ""ITGT_VT"" == ""no"" and currentWeapon this == ""FIR_AGM65"" and this ammo ""FIR_AGM65"" >= 1 and player in this and isengineon this";
				statement = "this setvariable [""ITGT_VT"",""yes""];[this] execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\TVM_tracking.sqf"";";
				onlyforplayer = "false";
				shortcut = "User6";
		        hideOnUse = 1;
				showWindow = 0;
			};
			class TGTPOD_OFF
			{
				displayName = "TVM OFF";
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
				statement = "[this] execVM ""\FIR_A10A\sqs\init\TGP_Switch.sqf"";";
				onlyforplayer = "false";
				shortcut = "User7";
		        hideOnUse = 1;
				showWindow = 0;
			};
			class MAV_TGT_LOCK
			{
				displayName = "Target acquisition";
				position = "pos cano";
				radius = 15;
				condition = "(this getvariable ""ITGT_VT"" == ""yes"") and (currentmagazine this == ""FIR_AGM65B_P_1rnd_M"" or currentmagazine this == ""FIR_AGM65B_P_3rnd_M"")";
				statement = "[this] execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\MAV_Lock.sqf"";";
				onlyforplayer = "false";
				shortcut = "";
		        hideOnUse = 1;
				showWindow = 0;
			};
		
		};