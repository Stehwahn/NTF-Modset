	class FIR_A10C_Loadout_Module: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "A-10C Loadout Module"; // Name displayed in the menu
	/*	icon = "\myTag_addonName\data\iconNuke_ca.paa";*/ // Map icon. Delete this entry to use the default icon
		category = "ObjectModifiers";

		// Name of function triggered once conditions are met
		function = "FIR_fnc_A10C_Loadout";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 1;
		// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isGlobal = 1;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 1;
		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		isDisposable = 1;
		// // 1 to run init function in Eden Editor as well
		is3DEN = 0;

		// Menu displayed when the module is placed or double-clicked on by Zeus
/*		curatorInfoType = "RscDisplayAttributeModuleF14D";*/

		// Module arguments
		class Arguments: ArgumentsBaseUnits
		{
			// Arguments shared by specific module type (have to be mentioned in order to be placed on top)
			class Units: Units {};
			// Module specific arguments
			class hp1
  			{
				displayName = "Hardpoint 1"; // Argument label
				description = "Select Weapon for HP1"; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class hp1_w0	{name = "Empty";	value = "empty"; default = 1;}; // Listbox item
					class hp1_w1	{name = "AIM-9M"; value = "aim9";};
					class hp1_w2	{name = "AIM-9X"; value = "aim9x";};
					class hp1_w3	{name = "ALQ-131"; value = "alq131";};
					class hp1_w4	{name = "ALQ-184"; value = "alq184";};
				};
			};
			class hp2
  			{
				displayName = "Hardpoint 2"; // Argument label
				description = "Select Weapon for hp2"; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class hp2_w0	{name = "Empty";	value = "empty"; default = 1;}; // Listbox item
					class hp2_w1	{name = "hydra"; value = "hydra";};
					class hp2_w2	{name = "Zuni"; value = "zuni";};
					class hp2_apkws	{name = "APKWS"; value = "apkws";};
					class hp2_w3	{name = "hydra White Smoke"; value = "ws";};
					class hp2_w4	{name = "hydra Red Smoke"; value = "rs";};
					class hp2_w5	{name = "hydra Orange Smoke"; value = "os";};
					class hp2_w6	{name = "hydra Purple smoke"; value = "ps";};
					class hp2_w7	{name = "SUU-25 Flare Dispenser"; value = "suu25";};
					class hp2_w8	{name = "Mk82 GPB"; value = "mk82gp";};
					class hp2_w9	{name = "Mk82 Snakeye"; value = "mk82se";};
					class hp2_w10	{name = "GBU-12"; value = "gbu12";};
					class hp2_w11	{name = "GBU-38"; value = "gbu38";};
					class hp2_gbu54	{name = "GBU-54"; value = "gbu54";};
				};
			};
			class hp3
  			{
				displayName = "Hardpoint 3"; // Argument label
				description = "Select Weapon for hp3"; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class hp3_w0	{name = "Empty";	value = "empty"; default = 1;}; // Listbox item
					class hp3_w1	{name = "AGM-65D x 1"; value = "agm65dx1";};
					class hp3_w2	{name = "AGM-65G x 1"; value = "agm65gx1";};
					class hp3_w3	{name = "AGM-65L x 1"; value = "agm65lx1";};
					class hp3_w4	{name = "AGM-65D x 3"; value = "agm65dx3";};
					class hp3_w5	{name = "GBU-10"; value = "gbu10";};
					class hp3_w6	{name = "GBU-12"; value = "gbu12";};
					class hp3_w7	{name = "GBU-31"; value = "gbu31";};
					class hp3_w8	{name = "GBU-32"; value = "gbu32";};
					class hp3_w9	{name = "GBU-38"; value = "gbu38";};
					class hp3_gbu54	{name = "GBU-54"; value = "gbu54";};
					class hp3_w10	{name = "Mk82 GPB x 1"; value = "mk82gpx1";};
					class hp3_w11	{name = "Mk82 GPB x 3"; value = "mk82gpx3";};
					class hp3_w12	{name = "Mk82 Snakeye x 1"; value = "mk82sex1";};
					class hp3_w13	{name = "Mk82 Snakeye x 3"; value = "mk82sex3";};
					class hp3_w14	{name = "CBU-87"; value = "cbu87";};
					class hp3_w15	{name = "CBU-89"; value = "cbu89";};
					class hp3_w16	{name = "CBU-97"; value = "cbu97";};
					class hp3_w17	{name = "CBU-103"; value = "cbu103";};
					class hp3_cbu105	{name = "CBU-105"; value = "cbu105";};
					class hp3_w18	{name = "hydra"; value = "hydra";};
					class hp3_w19	{name = "Zuni"; value = "zuni";};
					class hp3_apkws	{name = "APKWS"; value = "apkws";};
					class hp3_w20	{name = "hydra White Smoke"; value = "ws";};
					class hp3_w21	{name = "hydra Red Smoke"; value = "rs";};
					class hp3_w22	{name = "hydra Orange Smoke"; value = "os";};
					class hp3_w23	{name = "hydra Purple smoke"; value = "ps";};
					class hp3_w24	{name = "SUU-25 Flare Dispenser"; value = "suu25";};
				};
			};
			class hp4
  			{
				displayName = "Hardpoint 4"; // Argument label
				description = "Select Weapon for hp4"; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class hp4_w0	{name = "Empty";	value = "empty"; default = 1;}; // Listbox item
					class hp4_w1	{name = "GBU-10"; value = "gbu10";};
					class hp4_w2	{name = "GBU-12 x 1"; value = "gbu12x1";};
					class hp4_w3	{name = "GBU-12 x 3"; value = "gbu12x3";};
					class hp4_w4	{name = "GBU-31"; value = "gbu31";};
					class hp4_w5	{name = "GBU-32"; value = "gbu32";};
					class hp4_w6	{name = "GBU-38 x 1"; value = "gbu38x1";};
					class hp4_w7	{name = "GBU-38 x 3"; value = "gbu38x3";};
					class hp4_gbu54x1	{name = "GBU-54 x 1"; value = "gbu54x1";};
					class hp4_gbu54x3	{name = "GBU-54 x 3"; value = "gbu54x3";};
					class hp4_w8	{name = "Mk82 GPB x 1"; value = "mk82gpx1";};
					class hp4_w9	{name = "Mk82 GPB x 3"; value = "mk82gpx3";};
					class hp4_w10	{name = "Mk82 Snakeye x 1"; value = "mk82sex1";};
					class hp4_w11	{name = "Mk82 Snakeye x 3"; value = "mk82sex3";};
					class hp4_w12	{name = "CBU-87"; value = "cbu87";};
					class hp4_w13	{name = "CBU-89"; value = "cbu89";};
					class hp4_w14	{name = "CBU-97"; value = "cbu97";};
					class hp4_w15	{name = "CBU-103"; value = "cbu103";};
					class hp4_cbu105	{name = "CBU-105"; value = "cbu105";};
					class hp4_w16	{name = "hydra"; value = "hydra";};
					class hp4_apkws	{name = "APKWS"; value = "apkws";};
				};
			};
			class hp5
  			{
				displayName = "Hardpoint 5"; // Argument label
				description = "Select Weapon for hp5"; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class hp5_w0	{name = "Empty";	value = "empty"; default = 1;}; // Listbox item
					class hp5_w1	{name = "GBU-12 x 1"; value = "gbu12x1";};
					class hp5_w2	{name = "GBU-12 x 3"; value = "gbu12x3";};
					class hp5_w3	{name = "GBU-38 x 1"; value = "gbu38x1";};
					class hp5_w4	{name = "GBU-38 x 3"; value = "gbu38x3";};
					class hp5_gbu54x1	{name = "GBU-54 x 1"; value = "gbu54x1";};
					class hp5_gbu54x3	{name = "GBU-54 x 3"; value = "gbu54x3";};
					class hp5_w5	{name = "Mk82 GPB x 1"; value = "mk82gpx1";};
					class hp5_w6	{name = "Mk82 GPB x 3"; value = "mk82gpx3";};
					class hp5_w7	{name = "Mk82 Snakeye x 1"; value = "mk82sex1";};
					class hp5_w8	{name = "Mk82 Snakeye x 3"; value = "mk82sex3";};
					class hp5_w9	{name = "CBU-87"; value = "cbu87";};
					class hp5_w10	{name = "CBU-89"; value = "cbu89";};
					class hp5_w11	{name = "CBU-97"; value = "cbu97";};
					class hp5_w12	{name = "CBU-103"; value = "cbu103";};
					class hp5_cbu105	{name = "CBU-105"; value = "cbu105";};
					class hp5_w13	{name = "hydra"; value = "hydra";};
					class hp5_apkws	{name = "APKWS"; value = "apkws";};
				};
			};
			class hp7
  			{
				displayName = "Hardpoint 7"; // Argument label
				description = "Select Weapon for hp7"; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class hp7_w0	{name = "Empty";	value = "empty"; default = 1;}; // Listbox item
					class hp7_w1	{name = "GBU-12 x 1"; value = "gbu12x1";};
					class hp7_w2	{name = "GBU-12 x 3"; value = "gbu12x3";};
					class hp7_w3	{name = "GBU-38 x 1"; value = "gbu38x1";};
					class hp7_w4	{name = "GBU-38 x 3"; value = "gbu38x3";};
					class hp7_gbu54x1	{name = "GBU-54 x 1"; value = "gbu54x1";};
					class hp7_gbu54x3	{name = "GBU-54 x 3"; value = "gbu54x3";};
					class hp7_w5	{name = "Mk82 GPB x 1"; value = "mk82gpx1";};
					class hp7_w6	{name = "Mk82 GPB x 3"; value = "mk82gpx3";};
					class hp7_w7	{name = "Mk82 Snakeye x 1"; value = "mk82sex1";};
					class hp7_w8	{name = "Mk82 Snakeye x 3"; value = "mk82sex3";};
					class hp7_w9	{name = "CBU-87"; value = "cbu87";};
					class hp7_w10	{name = "CBU-89"; value = "cbu89";};
					class hp7_w11	{name = "CBU-97"; value = "cbu97";};
					class hp7_w12	{name = "CBU-103"; value = "cbu103";};
					class hp7_cbu105	{name = "CBU-105"; value = "cbu105";};
					class hp7_w13	{name = "hydra"; value = "hydra";};
					class hp7_apkws	{name = "APKWS"; value = "apkws";};
				};
			};
			class hp8
  			{
				displayName = "Hardpoint 8"; // Argument label
				description = "Select Weapon for hp8"; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class hp8_w0	{name = "Empty";	value = "empty"; default = 1;}; // Listbox item
					class hp8_w1	{name = "GBU-10"; value = "gbu10";};
					class hp8_w2	{name = "GBU-12 x 1"; value = "gbu12x1";};
					class hp8_w3	{name = "GBU-12 x 3"; value = "gbu12x3";};
					class hp8_w4	{name = "GBU-31"; value = "gbu31";};
					class hp8_w5	{name = "GBU-32"; value = "gbu32";};
					class hp8_w6	{name = "GBU-38 x 1"; value = "gbu38x1";};
					class hp8_w7	{name = "GBU-38 x 3"; value = "gbu38x3";};
					class hp8_gbu54x1	{name = "GBU-54 x 1"; value = "gbu54x1";};
					class hp8_gbu54x3	{name = "GBU-54 x 3"; value = "gbu54x3";};
					class hp8_w8	{name = "Mk82 GPB x 1"; value = "mk82gpx1";};
					class hp8_w9	{name = "Mk82 GPB x 3"; value = "mk82gpx3";};
					class hp8_w10	{name = "Mk82 Snakeye x 1"; value = "mk82sex1";};
					class hp8_w11	{name = "Mk82 Snakeye x 3"; value = "mk82sex3";};
					class hp8_w12	{name = "CBU-87"; value = "cbu87";};
					class hp8_w13	{name = "CBU-89"; value = "cbu89";};
					class hp8_w14	{name = "CBU-97"; value = "cbu97";};
					class hp8_w15	{name = "CBU-103"; value = "cbu103";};
					class hp8_cbu105	{name = "CBU-105"; value = "cbu105";};
					class hp8_w16	{name = "hydra"; value = "hydra";};
					class hp8_apkws	{name = "APKWS"; value = "apkws";};
				};
			};
			class hp9
  			{
				displayName = "Hardpoint 9"; // Argument label
				description = "Select Weapon for hp9"; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class hp9_w0	{name = "Empty";	value = "empty"; default = 1;}; // Listbox item
					class hp9_w1	{name = "AGM-65D x 1"; value = "agm65dx1";};
					class hp9_w2	{name = "AGM-65G x 1"; value = "agm65gx1";};
					class hp9_w3	{name = "AGM-65L x 1"; value = "agm65lx1";};
					class hp9_w4	{name = "AGM-65D x 3"; value = "agm65dx3";};
					class hp9_w5	{name = "GBU-10"; value = "gbu10";};
					class hp9_w6	{name = "GBU-12"; value = "gbu12";};
					class hp9_w7	{name = "GBU-31"; value = "gbu31";};
					class hp9_w8	{name = "GBU-32"; value = "gbu32";};
					class hp9_w9	{name = "GBU-38"; value = "gbu38";};
					class hp9_gbu54	{name = "GBU-54"; value = "gbu54";};
					class hp9_w10	{name = "Mk82 GPB x 1"; value = "mk82gpx1";};
					class hp9_w11	{name = "Mk82 GPB x 3"; value = "mk82gpx3";};
					class hp9_w12	{name = "Mk82 Snakeye x 1"; value = "mk82sex1";};
					class hp9_w13	{name = "Mk82 Snakeye x 3"; value = "mk82sex3";};
					class hp9_w14	{name = "CBU-87"; value = "cbu87";};
					class hp9_w15	{name = "CBU-89"; value = "cbu89";};
					class hp9_w16	{name = "CBU-97"; value = "cbu97";};
					class hp9_w17	{name = "CBU-103"; value = "cbu103";};
					class hp9_cbu105	{name = "CBU-105"; value = "cbu105";};
					class hp9_w18	{name = "hydra"; value = "hydra";};
					class hp9_w19	{name = "Zuni"; value = "zuni";};
					class hp9_apkws	{name = "APKWS"; value = "apkws";};
					class hp9_w20	{name = "hydra White Smoke"; value = "ws";};
					class hp9_w21	{name = "hydra Red Smoke"; value = "rs";};
					class hp9_w22	{name = "hydra Orange Smoke"; value = "os";};
					class hp9_w23	{name = "hydra Purple smoke"; value = "ps";};
					class hp9_w24	{name = "SUU-25 Flare Dispenser"; value = "suu25";};
				};
			};
			class hp10
  			{
				displayName = "Hardpoint 10"; // Argument label
				description = "Select Weapon for hp10"; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class hp10_w0	{name = "Empty";	value = "empty"; default = 1;}; // Listbox item
					class hp10_w1	{name = "hydra"; value = "hydra";};
					class hp10_w2	{name = "Zuni"; value = "zuni";};
					class hp10_apkws	{name = "APKWS"; value = "apkws";};
					class hp10_w3	{name = "hydra White Smoke"; value = "ws";};
					class hp10_w4	{name = "hydra Red Smoke"; value = "rs";};
					class hp10_w5	{name = "hydra Orange Smoke"; value = "os";};
					class hp10_w6	{name = "hydra Purple smoke"; value = "ps";};
					class hp10_w7	{name = "SUU-25 Flare Dispenser"; value = "suu25";};
					class hp10_w8	{name = "Mk82 GPB"; value = "mk82gp";};
					class hp10_w9	{name = "Mk82 Snakeye"; value = "mk82se";};
					class hp10_w10	{name = "GBU-12"; value = "gbu12";};
					class hp10_w11	{name = "GBU-38"; value = "gbu38";};
					class hp10_gbu54	{name = "GBU-54"; value = "gbu54";};
					class hp10_w12	{name = "LITENING"; value = "litening";};
					class hp10_w13	{name = "Sniper XR"; value = "sniperxr";};
				};
			};
			class hp11
  			{
				displayName = "Hardpoint 11"; // Argument label
				description = "Select Weapon for HP11"; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class hp11_w0	{name = "Empty";	value = "empty"; default = 1;}; // Listbox item
					class hp11_w1	{name = "AIM-9M"; value = "aim9";};
					class hp11_w2	{name = "AIM-9X"; value = "aim9x";};
				};
			};
			class hpgun
  			{
				displayName = "Gun"; // Argument label
				description = "Select Weapon for gun"; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class hpgun_w0	{name = "Standard";	value = "standard"; default = 1;}; // Listbox item
					class hpgun_w1	{name = "No Tracer"; value = "notracer";};
					class hpgun_w2	{name = "Mighty"; value = "mighty";};
					class hpgun_w3	{name = "ACE"; value = "ace";};
				};
			};
		};

		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription: ModuleDescription
		{
			description = "A-10A Loadout Module"; // Short description, will be formatted as structured text
			sync[] = {"LocationArea_F"}; // Array of synced entities (can contain base classes)
	 
			class LocationArea_F
			{
				description[] = { // Multi-line descriptions are supported
					"First line",
					"Second line"
				};
				position = 1; // Position is taken into effect
				direction = 1; // Direction is taken into effect
				optional = 1; // Synced entity is optional
				duplicate = 1; // Multiple entities of this type can be synced
				synced[] = {"AnyVehicle"}; // Pre-define entities like "AnyBrain" can be used. See the list below
			};
		};
	};
