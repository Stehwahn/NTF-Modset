
if((uiNamespace getVariable "ACE_RWR_STATUS")) then {
	uiNamespace setVariable ["ACE_RWR_STATUS", false];
	[localize "STR_RWR_OFF"] call ace_common_fnc_displayTextStructured;
} else {
	if(getNumber(configFile >> "CfgVehicles" >> typeOf (vehicle ACE_player) >> "type_rwr") == 1) then {
		_this spawn rwrmod_fnc_rwr;
	} else {
		_this spawn rwrmod_fnc_rwr_us;
	};
	[localize "STR_RWR_ON"] call ace_common_fnc_displayTextStructured;
};
