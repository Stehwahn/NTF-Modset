_vec = _this select 0;

if(getNumber(configFile >> "CfgVehicles" >> typeOf _vec >> "type_rwr") == 1) then {
	_this spawn rwrmod_fnc_rwr;
} else {
	_this spawn rwrmod_fnc_rwr_us;
};
