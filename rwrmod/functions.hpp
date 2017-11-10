clearControls = {
	_controls = _this select 0;
	{
		if (ctrlShown CTRL(_x)) then {
			CTRL(_x) ctrlShow false;
			CTRL(_x) ctrlCommit 0;
		};
	} foreach _controls;
};
clearAllControls = {
	[__IDC] call clearControls;
};
displayThreatTypes = {
	_ctrl = _this select 0;
	_show = _this select 1;
	CTRL(_ctrl) ctrlShow _show;
	CTRL(_ctrl) ctrlCommit 0;
};
showThreatTypes = {
	_type = _this select 0;
	_type_index = _this select 1;
	_show = _this select 2;
	switch (_type) do {
		case "SECONDARY": {
			/* Light up secondary threat type  */
			[(__SECTYP select _type_index),_show] call displayThreatTypes;
			/* Check if primary threat lamp is still lit up  */
			_c = __PRITYP select _type_index;
			if (ctrlShown CTRL(_c)) then {
				[[_c]] call clearControls;
			};
		};
		case "PRIMARY": {
			/* Light up primary threat type */
			[(__PRITYP select _type_index),_show] call displayThreatTypes;
			[(__SECTYP select _type_index),_show] call displayThreatTypes;
		};
	};
};
displayThreatDirection = displayThreatTypes;
showThreatDirection = {
	_type = _this select 0;
	_dir_index = _this select 1;
	_show = _this select 2;
	// CLEAR
	[__IDC_DIR] call clearControls;
	{
		
		_element = _x select 0; // Direction lights index
		_light = _x select 1; // Direction lights side
		switch (_type) do {
			case "SECONDARY": {
				// Light up secondary threat type
				[(__SECDIR select _element) select _light,_show] call displayThreatDirection;
			};
			case "PRIMARY": {
				// Light up primary threat type
				[(__PRIDIR select _element) select _light,_show] call displayThreatDirection;
				[(__SECDIR select _element) select _light,_show] call displayThreatDirection;
			};
		};
	} foreach _dir_index;
};
displaySignalStrength = {
	_type = _this select 0;
	_threat = _this select 1;
	_vehicle = _this select 2;
	private ["_rwrrange","_threatrange","_strength","_int"];
	//_verified	= _vehicle getVariable QGVAR(primary_threat);
	if (_type == "PRIMARY" /*&& _threat == _verified*/) then {
		_rwrrange = getNumber(configFile >> "CfgVehicles" >> typeOf _vehicle >> "range"); //RWR range in meters
		if (_rwrrange == 0) then {_rwrrange = 8100};
		if(getPosASL _threat select 2 > getPosASL _vehicle select 2) then {
			CTRL(__SIGNAL_UP) ctrlShow true;
			CTRL(__SIGNAL_DOWN) ctrlShow false;
		}else{
			CTRL(__SIGNAL_DOWN) ctrlShow true;
			CTRL(__SIGNAL_UP) ctrlShow false;
		};
		_threatrange = _vehicle distance _threat;
		_strength = round((_threatrange/_rwrrange) * 100);
		switch (true) do {
			case (_strength < 10): { _int = 100; };
			case (_strength > 90): { _int = 10; };
			case (_strength > 78): { _int = 20; };
			case (_strength > 65): { _int = 30; };
			case (_strength > 55): { _int = 40; };
			case (_strength > 45): { _int = 50; };
			case (_strength > 35): { _int = 60; };
			case (_strength > 25): { _int = 70; };
			case (_strength > 15): { _int = 80; };
			case (_strength > 10): { _int = 90; };
		};
		if (isnil "_int") then { _int = 0; };
		CTRL(__SIGNAL) ctrlSetText format["rwrmod\data\threat_signal_strength%1.paa",_int];
		CTRL(__SIGNAL) ctrlShow true;
		CTRL(__SIGNAL) ctrlCommit 0;
		CTRL(__SIGNAL_UP) ctrlCommit 0;
		CTRL(__SIGNAL_DOWN) ctrlCommit 0;
	};
};
displayLaunchWarning = {
	_vehicle = _this select 0;
	_vehicle setVariable ["LaunchWarning",true];
	_vehicle spawn {
		for "_i" from 2 to 10 do {
			// 4 FLASHES AND AUDIO TONE
			if (_i mod 2 == 0) then {
				CTRL(__LAUNCH) ctrlSetText "rwrmod\data\threat_launch.paa";
				CTRL(__LAUNCH) ctrlShow true;
				playSound ["ACE_RWR15_IR",true];
			} else {
				CTRL(__LAUNCH) ctrlSetText "";
				CTRL(__LAUNCH) ctrlShow false;
			};
			CTRL(__LAUNCH) ctrlCommit 0;
			sleep 0.2;
		};
		_this setVariable ["LaunchWarning",false];
	};
};
displayLockWarning = {
	_type = _this select 0;
	_threat = _this select 1;
	_vehicle = _this select 2;
	_launched = _vehicle getVariable ["LaunchWarning",false];
		if (getNumber(configFile >> "CfgVehicles" >> typeOf _threat >> "radarType") == 4 && {_threat != _vehicle} && {({alive _x} count crew _threat > 0)} && (_threat aimedAtTarget [_vehicle] > 0) && {!_launched}) then {
			CTRL(__LAUNCH) ctrlSetText "rwrmod\data\threat_launch.paa";
			CTRL(__LAUNCH) ctrlShow true;
		} else {
			CTRL(__LAUNCH) ctrlSetText "";
			CTRL(__LAUNCH) ctrlShow false;
		};
		CTRL(__LAUNCH) ctrlCommit 0;	
};		