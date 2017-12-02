
rwrmod_fnc_getIn = compile preprocessFileLineNumbers "\rwrmod\fnc_getin.sqf";
rwrmod_fnc_rwr = compile preprocessFileLineNumbers "\rwrmod\fnc_rwr.sqf";
rwrmod_fnc_rwr_us = compile preprocessFileLineNumbers "\rwrmod\fnc_rwr_us.sqf";
rwrmod_fnc_interaction = compile preprocessFileLineNumbers "\rwrmod\fnc_rwr_interaction.sqf";

enum_specification = [
	["Справа снизу", 0],
	["Справа сверху", 1],
	["Слева сверху", 2],
	["Слева снизу", 3]
];

rwr_us_pos = 3;