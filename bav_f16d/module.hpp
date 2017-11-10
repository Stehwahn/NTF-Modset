	class FIR_F16D_Loadout_Module: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "F-16D Loadout Module"; // Name displayed in the menu
	/*	icon = "\myTag_addonName\data\iconNuke_ca.paa";*/ // Map icon. Delete this entry to use the default icon
		category = "ObjectModifiers";

		// Name of function triggered once conditions are met
		function = "FIR_fnc_F16D_Loadout";
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
					class hp1_w1	{name = "AIM-9M"; value = "aim9m";};
					class hp1_w2	{name = "AIM-9X"; value = "aim9x";};
					class hp1_w3	{name = "AIM-120"; value = "aim120";};
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
					class hp2_w1	{name = "Clean"; value = "clean";};
					class hp2_w2	{name = "AIM-9M"; value = "aim9m";};
					class hp2_w3	{name = "AIM-9X"; value = "aim9x";};
					class hp2_w4	{name = "AIM-120"; value = "aim120";};
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
					class hp3_w1	{name = "Clean"; value = "clean";};
					class hp3_w2	{name = "AIM-9M"; value = "aim9m";};
					class hp3_w3	{name = "AIM-9X"; value = "aim9x";};
					class hp3_w4	{name = "AIM-120"; value = "aim120";};
					class hp3_w5	{name = "AIM-7"; value = "aim7";};
					class hp3_w6	{name = "GBU-10"; value = "gbu10";};
					class hp3_w7	{name = "GBU-12 x 1"; value = "gbu12x1";};
					class hp3_w8	{name = "GBU-12 x 2"; value = "gbu12x2";};
					class hp3_eg1	{name = "EGBU-12 x 1"; value = "egbu12x1";};
					class hp3_eg2	{name = "EGBU-12 x 2"; value = "egbu12x2";};
					class hp3_w9	{name = "GBU-24A"; value = "gbu24";};
					class hp3_w10	{name = "GBU-24A w/ BLU-118"; value = "gbu24_blu118";};
					class hp3_w11	{name = "GBU-31"; value = "gbu31";};
					class hp3_w12	{name = "GBU-32"; value = "gbu32";};
					class hp3_w13	{name = "GBU-38 x 1"; value = "gbu38x1";};
					class hp3_w14	{name = "GBU-38 x 2"; value = "gbu38x2";};
					class hp3_w15	{name = "GBU-38 x 3"; value = "gbu38x3";};
					class hp3_54_1	{name = "GBU-54 x 1"; value = "gbu54x1";};
					class hp3_54_2	{name = "GBU-54 x 2"; value = "gbu54x2";};
					class hp3_54_3	{name = "GBU-54 x 3"; value = "gbu54x3";};
					class hp3_w16	{name = "AGM-65D x 1"; value = "agm65dx1";};
					class hp3_w17	{name = "AGM-65D x 3"; value = "agm65dx3";};
					class hp3_w18	{name = "AGM-65G x 1"; value = "agm65g";};
					class hp3_w19	{name = "AGM-65L x 1"; value = "agm65l";};
					class hp3_w20	{name = "AGM-88"; value = "agm88";};
					class hp3_w21	{name = "Mk82 GPB x 3"; value = "mk82gpb";};
					class hp3_w22	{name = "Mk82 Snakeye x 3"; value = "mk82se";};
					class hp3_w23	{name = "Hydra RKT x 1"; value = "hydrax1";};
					class hp3_w24	{name = "Hydra RKT x 2"; value = "hydrax2";};
					class hp3_w25	{name = "Hydra RKT x 3"; value = "hydrax3";};
					class hp3_w26	{name = "Zuni RKT"; value = "zuni";};
					class hp3_w27	{name = "CBU-87 CEM"; value = "cbu87";};
					class hp3_w28	{name = "CBU-89 GATOR"; value = "cbu89";};
					class hp3_w29	{name = "CBU-97 SFW"; value = "cbu97";};					
					class hp3_w30	{name = "CBU-103"; value = "cbu103";};
					class hp3_105	{name = "CBU-105"; value = "cbu105";};
					class hp3_w31	{name = "GBU-39 SDB"; value = "gbu39";};
					class hp3_w32	{name = "GBU-53 SDB II"; value = "gbu53";};
					class hp3_w33	{name = "AGM-154A"; value = "agm154a";};
					class hp3_w34	{name = "AGM-154-A1"; value = "agm154a1";};
					class hp3_w35	{name = "Mk84 GPB"; value = "mk84gp";};
					class hp3_w36	{name = "SUU-25"; value = "suu25";};
					class hp3_w37	{name = "BLU-107/B Durandal x 3"; value = "blu107";};
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
					class hp4_w1	{name = "Clean"; value = "clean";};
					class hp4_w2	{name = "Fueltank"; value = "fueltank";};
					class hp4_w3	{name = "GBU-10"; value = "gbu10";};
					class hp4_w4	{name = "GBU-12 x 1"; value = "gbu12x1";};
					class hp4_w5	{name = "GBU-12 x 2"; value = "gbu12x2";};
					class hp4_w6	{name = "GBU-12 x 3"; value = "gbu12x3";};
					class hp4_eg1	{name = "EGBU-12 x 1"; value = "egbu12x1";};
					class hp4_eg2	{name = "EGBU-12 x 2"; value = "egbu12x2";};
					class hp4_eg3	{name = "EGBU-12 x 3"; value = "egbu12x3";};
					class hp4_w7	{name = "GBU-24A"; value = "gbu24";};
					class hp4_w8	{name = "GBU-24A w/ BLU-118"; value = "gbu24_blu118";};
					class hp4_w9	{name = "GBU-31"; value = "gbu31";};
					class hp4_w10	{name = "GBU-32"; value = "gbu32";};
					class hp4_w11	{name = "GBU-38 x 1"; value = "gbu38x1";};
					class hp4_w12	{name = "GBU-38 x 2"; value = "gbu38x2";};
					class hp4_w13	{name = "GBU-38 x 3"; value = "gbu38x3";};
					class hp4_54_1	{name = "GBU-54 x 1"; value = "gbu54x1";};
					class hp4_54_2	{name = "GBU-54 x 2"; value = "gbu54x2";};
					class hp4_54_3	{name = "GBU-54 x 3"; value = "gbu54x3";};
					class hp4_w14	{name = "AGM-65D x 1"; value = "agm65dx1";};
					class hp4_w15	{name = "AGM-65G x 1"; value = "agm65g";};
					class hp4_w16	{name = "AGM-65L x 1"; value = "agm65l";};
					class hp4_w17	{name = "Mk82 GPB x 3"; value = "mk82gpb";};
					class hp4_w18	{name = "Mk82 Snakeye x 3"; value = "mk82se";};
					class hp4_w19	{name = "Hydra RKT x 1"; value = "hydrax1";};
					class hp4_w20	{name = "Hydra RKT x 2"; value = "hydrax2";};
					class hp4_w21	{name = "Hydra RKT x 3"; value = "hydrax3";};
					class hp4_w22	{name = "Zuni RKT"; value = "zuni";};
					class hp4_w23	{name = "CBU-87 CEM"; value = "cbu87";};
					class hp4_w24	{name = "CBU-89 GATOR"; value = "cbu89";};
					class hp4_w25	{name = "CBU-97 SFW"; value = "cbu97";};					
					class hp4_w26	{name = "CBU-103"; value = "cbu103";};
					class hp4_105	{name = "CBU-105"; value = "cbu105";};
					class hp4_w27	{name = "Mk84 GPB"; value = "mk84gp";};
					class hp4_w28	{name = "SUU-25"; value = "suu25";};
					class hp4_w29	{name = "BLU-107/B Durandal x 3"; value = "blu107";};
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
					class hp5_w1	{name = "ALQ-131 ECM Pod"; value = "alq131";};
					class hp5_w2	{name = "ALQ-184 ECM Pod"; value = "alq184";};
					class hp5_w3	{name = "300gal FUELTANK"; value = "fueltank";};
				};
			};
			class hp5a
  			{
				displayName = "Hardpoint 5A"; // Argument label
				description = "Select Weapon for hp5A"; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class hp5a_w0	{name = "Empty";	value = "empty"; default = 1;}; // Listbox item
					class hp5a_w1	{name = "HTS POD"; value = "hts";};
					class hp5a_w2	{name = "LANTIRN POD"; value = "lantirn";};
					class hp5a_w3	{name = "Sniper XR"; value = "sniperxr";};
					class hp5a_w4	{name = "LITENING"; value = "litening";};
					class hp5a_w5	{name = "Sniper XR + HTS"; value = "sniperhts";};
				};
			};
			class hp6
  			{
				displayName = "Hardpoint 6"; // Argument label
				description = "Select Weapon for hp6"; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class hp6_w0	{name = "Empty";	value = "empty"; default = 1;}; // Listbox item
					class hp6_w1	{name = "Clean"; value = "clean";};
					class hp6_w2	{name = "Fueltank"; value = "fueltank";};
					class hp6_w3	{name = "GBU-10"; value = "gbu10";};
					class hp6_w4	{name = "GBU-12 x 1"; value = "gbu12x1";};
					class hp6_w5	{name = "GBU-12 x 2"; value = "gbu12x2";};
					class hp6_w6	{name = "GBU-12 x 3"; value = "gbu12x3";};
					class hp6_eg1	{name = "EGBU-12 x 1"; value = "egbu12x1";};
					class hp6_eg2	{name = "EGBU-12 x 2"; value = "egbu12x2";};
					class hp6_eg3	{name = "EGBU-12 x 3"; value = "egbu12x3";};
					class hp6_w7	{name = "GBU-24A"; value = "gbu24";};
					class hp6_w8	{name = "GBU-24A w/ BLU-118"; value = "gbu24_blu118";};
					class hp6_w9	{name = "GBU-31"; value = "gbu31";};
					class hp6_w10	{name = "GBU-32"; value = "gbu32";};
					class hp6_w11	{name = "GBU-38 x 1"; value = "gbu38x1";};
					class hp6_w12	{name = "GBU-38 x 2"; value = "gbu38x2";};
					class hp6_w13	{name = "GBU-38 x 3"; value = "gbu38x3";};
					class hp6_54_1	{name = "GBU-54 x 1"; value = "gbu54x1";};
					class hp6_54_2	{name = "GBU-54 x 2"; value = "gbu54x2";};
					class hp6_54_3	{name = "GBU-54 x 3"; value = "gbu54x3";};
					class hp6_w14	{name = "AGM-65D x 1"; value = "agm65dx1";};
					class hp6_w15	{name = "AGM-65G x 1"; value = "agm65g";};
					class hp6_w16	{name = "AGM-65L x 1"; value = "agm65l";};
					class hp6_w17	{name = "Mk82 GPB x 3"; value = "mk82gpb";};
					class hp6_w18	{name = "Mk82 Snakeye x 3"; value = "mk82se";};
					class hp6_w19	{name = "Hydra RKT x 1"; value = "hydrax1";};
					class hp6_w20	{name = "Hydra RKT x 2"; value = "hydrax2";};
					class hp6_w21	{name = "Hydra RKT x 3"; value = "hydrax3";};
					class hp6_w22	{name = "Zuni RKT"; value = "zuni";};
					class hp6_w23	{name = "CBU-87 CEM"; value = "cbu87";};
					class hp6_w24	{name = "CBU-89 GATOR"; value = "cbu89";};
					class hp6_w25	{name = "CBU-97 SFW"; value = "cbu97";};					
					class hp6_w26	{name = "CBU-103"; value = "cbu103";};
					class hp6_105	{name = "CBU-105"; value = "cbu105";};
					class hp6_w27	{name = "Mk84 GPB"; value = "mk84gp";};
					class hp6_w28	{name = "SUU-25"; value = "suu25";};
					class hp6_w29	{name = "BLU-107/B Durandal x 3"; value = "blu107";};
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
					class hp7_w1	{name = "Clean"; value = "clean";};
					class hp7_w2	{name = "AIM-9M"; value = "aim9m";};
					class hp7_w3	{name = "AIM-9X"; value = "aim9x";};
					class hp7_w4	{name = "AIM-120"; value = "aim120";};
					class hp7_w5	{name = "AIM-7"; value = "aim7";};
					class hp7_w6	{name = "GBU-10"; value = "gbu10";};
					class hp7_w7	{name = "GBU-12 x 1"; value = "gbu12x1";};
					class hp7_w8	{name = "GBU-12 x 2"; value = "gbu12x2";};
					class hp7_eg1	{name = "EGBU-12 x 1"; value = "egbu12x1";};
					class hp7_eg2	{name = "EGBU-12 x 2"; value = "egbu12x2";};
					class hp7_w9	{name = "GBU-24A"; value = "gbu24";};
					class hp7_w10	{name = "GBU-24A w/ BLU-118"; value = "gbu24_blu118";};
					class hp7_w11	{name = "GBU-31"; value = "gbu31";};
					class hp7_w12	{name = "GBU-32"; value = "gbu32";};
					class hp7_w13	{name = "GBU-38 x 1"; value = "gbu38x1";};
					class hp7_w14	{name = "GBU-38 x 2"; value = "gbu38x2";};
					class hp7_w15	{name = "GBU-38 x 3"; value = "gbu38x3";};
					class hp7_54_1	{name = "GBU-54 x 1"; value = "gbu54x1";};
					class hp7_54_2	{name = "GBU-54 x 2"; value = "gbu54x2";};
					class hp7_54_3	{name = "GBU-54 x 3"; value = "gbu54x3";};
					class hp7_w16	{name = "AGM-65D x 1"; value = "agm65dx1";};
					class hp7_w17	{name = "AGM-65D x 3"; value = "agm65dx3";};
					class hp7_w18	{name = "AGM-65G x 1"; value = "agm65g";};
					class hp7_w19	{name = "AGM-65L x 1"; value = "agm65l";};
					class hp7_w20	{name = "AGM-88"; value = "agm88";};
					class hp7_w21	{name = "Mk82 GPB x 3"; value = "mk82gpb";};
					class hp7_w22	{name = "Mk82 Snakeye x 3"; value = "mk82se";};
					class hp7_w23	{name = "Hydra RKT x 1"; value = "hydrax1";};
					class hp7_w24	{name = "Hydra RKT x 2"; value = "hydrax2";};
					class hp7_w25	{name = "Hydra RKT x 3"; value = "hydrax3";};
					class hp7_w26	{name = "Zuni RKT"; value = "zuni";};
					class hp7_w27	{name = "CBU-87 CEM"; value = "cbu87";};
					class hp7_w28	{name = "CBU-89 GATOR"; value = "cbu89";};
					class hp7_w29	{name = "CBU-97 SFW"; value = "cbu97";};					
					class hp7_w30	{name = "CBU-103"; value = "cbu103";};
					class hp7_105	{name = "CBU-105"; value = "cbu105";};
					class hp7_w31	{name = "GBU-39 SDB"; value = "gbu39";};
					class hp7_w32	{name = "GBU-53 SDB II"; value = "gbu53";};
					class hp7_w33	{name = "AGM-154A"; value = "agm154a";};
					class hp7_w34	{name = "AGM-154-A1"; value = "agm154a1";};
					class hp7_w35	{name = "Mk84 GPB"; value = "mk84gp";};
					class hp7_w36	{name = "SUU-25"; value = "suu25";};
					class hp7_w37	{name = "BLU-107/B Durandal x 3"; value = "blu107";};
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
					class hp8_w1	{name = "Clean"; value = "clean";};
					class hp8_w2	{name = "AIM-9M"; value = "aim9m";};
					class hp8_w3	{name = "AIM-9X"; value = "aim9x";};
					class hp8_w4	{name = "AIM-120"; value = "aim120";};
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
					class hp9_w1	{name = "AIM-9M"; value = "aim9m";};
					class hp9_w2	{name = "AIM-9X"; value = "aim9x";};
					class hp9_w3	{name = "AIM-120"; value = "aim120";};
				};
			};
		};

		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription: ModuleDescription
		{
			description = "F-16D Loadout Module"; // Short description, will be formatted as structured text
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