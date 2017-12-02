	class UserActions
		{

			class Eject
			{
				priority = 6;
				shortcut = "Eject";
				displayName = "<t color='#a72121'>Ejection Seat</t>";
				condition = "player in this and isengineon this";
				statement = "[this] execVM ""\FIR_A10C\sqs\Ejection\Ejection.sqf"";";
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
			};			
			class TGTPOD_ON
			{
				displayName = "TGP Screen ON";
				position = "pos cano";
				radius = 15;
				condition = "this getvariable ""ITGT_VT"" == ""no"" and this getvariable ""TGT_POD"" == ""yes"" and player in this and isengineon this";
		//		statement = "this setvariable [""ITGT_VT"",""yes""]; [this] execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\vt_tracking.sqf"";";
				statement = "this setvariable [""ITGT_VT"",""yes""]; this animate [""mfd_R_hide"",1];this animate [""tgp_arm"",1];[this] execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\vt_tracking.sqf"";";
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
				statement = "this setvariable [""ITGT_VT"",""no""]; this animate [""mfd_R_hide"",0];this animate [""tgp_arm"",0];";
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
				statement = "[this] execVM ""\FIR_A10C\sqs\init\TGP_Switch.sqf"";";
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
				statement = "[this] execVM ""\FIR_A10C\sqs\init\TGP_Mode_Switch.sqf"";";
				onlyforplayer = "false";
				shortcut = "User8";
		        hideOnUse = 1;
				showWindow = 0;
			};			

		};