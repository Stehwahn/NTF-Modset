/*
*	Voice informer
*	by TECAK, Blender
*/

private ["_vehicle", "_var_minAngle", "_var_speed2", "_var_maxAngle", "_var_damage", "_var_speed", "_var_height", "_var_height2", "_angleWarning", "_overloadWarning", "_speedWarning", "_heightWarning", "_heightWarning2", "_damWarning", "_cawsOnAction", "_cawsOffAction", "_fnc_caws", "_fnc_engineCheck","_fuelWarning1500","_fuelWarning800","_fuelWarning500","_fuelWarninglow","_hullwarning","_fuelleftWarning","_fuelrightWarning","_engineleftWarning","_enginerightWarning","_instWarning","_instWarning","_AilerondamageleftWarning","_AilerondamagerightWarning","_RudderdamageleftWarning","_RudderdamagerightWarning","_ElevatordamageleftWarning","_ElevatordamagerightWarning","_ejectwarning"];

#define minAngleTime 25
#define maxAngleTime 10
#define damWarningTime 30
#define speedWarningTime 6
#define heightWarningTime 15
#define heightWarning2Time 6
#define fuelWarningTime 30

_vehicle = _this select 0;
if (count _this > 1) then {
	_var_minAngle = _this select 1;
	_var_maxAngle = _this select 2;
	_var_damage = _this select 3;
	_var_speed = _this select 4;
	_var_height = _this select 5;
    _var_height2 = _this select 6;
    _var_speed2 = _this select 7;
} else {
	_var_minAngle = -0.5;
	_var_maxAngle = 0.45;
	_var_damage = 0.4;
	_var_speed = 460;
	_var_height = 250;
    _var_height2 = 40;
    _var_speed2 = 200;
};
// Set timestamp delay variables
_angleWarning = 0;
_overloadWarning = 0;
_speedWarning = 0;
_heightWarning = 0;
_heightWarning2 = 0;
_damWarning = 0;
_fuelWarning1500 = 0;
_fuelWarning800 = 0;
_fuelWarning500 = 0;
_fuelWarninglow = 0;
_hullwarning = 0;
_fuelleftWarning = 0;
_fuelrightWarning = 0;
_engineleftWarning = 0;
_enginerightWarning = 0;
_instWarning = 0;
_AilerondamageleftWarning = 0;
_AilerondamagerightWarning = 0;
_RudderdamageleftWarning = 0;
_RudderdamagerightWarning = 0;
_ElevatordamageleftWarning = 0;
_ElevatordamagerightWarning = 0;
_ejectwarning = 0;

// Set vehicle variables
_vehicle setVariable ["caws", true, false];
_vehicle setVariable ["gear", true, false];

// Landing Gear EH
 _vehicle addEventHandler ["gear", {(_this select 0) setVariable ["gear", (_this select 1), false]}];

// Actions
_cawsOnAction = _vehicle addAction [localize "STR_BLND_Caws_ON", "\ri65b\noScript.sqf", '(_this select 0) setVariable ["caws", true, false]; playSound "online";', 0, false, false, "", 'player in (crew _target) && !(_target getVariable ["caws", false])'];
_cawsOffAction = _vehicle addAction [localize "STR_BLND_Caws_OFF", "\ri65b\noScript.sqf", '(_this select 0) setVariable ["caws", false, false]', 0, false, false, "", 'player in (crew _target) && _target getVariable ["caws", false]'];

_fnc_caws = {
	if ((player in (crew _this)) &&	_this getVariable "caws") then
	{
		if (alive _this) then { true } else { false }
	} else {
		false
	}
};

while { alive _vehicle } do {
	if (_vehicle call _fnc_caws) then {
		_speed = speed _vehicle;
		_height = getPos _vehicle select 2;
		_angle = vectorDir _vehicle select 2;
		_fuelstate = fuel _vehicle;
		_gear = _vehicle getVariable "gear";
		_enginedamageleft = _vehicle getHitPointDamage "hitEngine";
		_enginedamageright = _vehicle getHitPointDamage "hitEngine2";
		_dam = _vehicle getHitPointDamage "HitHull";
		_fuelleft = _vehicle getHitPointDamage "HitFuel";
		_fuelright = _vehicle getHitPointDamage "HitFuel2";
		_inst = _vehicle getHitPointDamage "HitAvionics";
		_Ailerondamageleft = _vehicle getHitPointDamage "HitLAileron";
		_Ailerondamageright = _vehicle getHitPointDamage "HitRAileron";
		_Rudderdamageleft = _vehicle getHitPointDamage "HitLCRudder";
		_Rudderdamageright = _vehicle getHitPointDamage "HitRRudder";
		_Elevatordamageleft = _vehicle getHitPointDamage "HitLCElevator";
        _Elevatordamageright = _vehicle getHitPointDamage "HitRElevator";
		
		if ((_angle < _var_minAngle) && (isEngineOn _vehicle) && (_height > 800) && (time - _angleWarning >= minAngleTime)) then {
			_angleWarning = time;
			playSound ["exangle", true];
		};
		if ((_angle > _var_maxAngle) && (_height > 300) && (_speed > _var_speed) && (time - _overloadWarning >= maxAngleTime)) then {
			_overloadWarning = time;
			playSound ["gforce", true];
		};
		if (!(isEngineOn _vehicle) && !(_gear) && (_height >= 20) && (time - _ejectwarning >= fuelWarningTime)) then {
		    _ejectwarning = time;
			playSound ["ejectpilot", true];
		};
		if !(isnil "_fuelleft") then {
		if ((_fuelleft == 1) && (time - _fuelleftWarning >= heightWarningTime) && (isEngineOn _vehicle)) then {
			_fuelleftWarning = 10800;
			playSound ["FuelF", true];
		};
		};
		if !(isnil "_fuelright") then {
		if ((_fuelright == 1) && (time - _fuelrightWarning >= heightWarningTime) && (isEngineOn _vehicle)) then {
			_fuelrightWarning = 10800;
			playSound ["FuelF", true];
		};
		};
		if !(isnil "_enginedamageleft") then {
		if ((_enginedamageleft == 1) && (time - _engineleftWarning >= heightWarningTime)) then {
			_engineleftWarning = 10800;
			sleep 3; playSound ["LEF", true];
		};
		};
		if !(isnil "_enginedamageright") then {
		if ((_enginedamageright == 1) && (time - _enginerightWarning >= heightWarningTime)) then {
			_enginerightWarning = 10800;
			sleep 5; playSound ["REF", true];
		};
		};
		if !(isnil "_inst") then {
		if ((_inst == 1) && (time - _instWarning >= heightWarningTime) && (isEngineOn _vehicle)) then {
			_instWarning = 10800;
			playSound ["SysF", true];
		};
		};
		if !(isnil "_Ailerondamageleft") then {
		if ((_Ailerondamageleft == 1) && (time - _AilerondamageleftWarning >= heightWarningTime) && (isEngineOn _vehicle)) then {
			_AilerondamageleftWarning = 10800;
			playSound ["ControlsF", true];
		};
		};
		if !(isnil "_Ailerondamageright") then {
		if ((_Ailerondamageright == 1) && (time - _AilerondamagerightWarning >= heightWarningTime) && (isEngineOn _vehicle)) then {
			_AilerondamagerightWarning = 10800;
			playSound ["ControlsF", true];	
		};
		};
		if !(isnil "_Rudderdamageleft") then {
		if ((_Rudderdamageleft == 1) && (time - _RudderdamageleftWarning >= heightWarningTime) && (isEngineOn _vehicle)) then {
			_RudderdamageleftWarning = 10800;
			playSound ["ControlsF", true];
		};
		};
		if !(isnil "_Rudderdamageright") then {
		if ((_Rudderdamageright == 1) && (time - _RudderdamagerightWarning >= heightWarningTime) && (isEngineOn _vehicle)) then {
			_RudderdamagerightWarning = 10800;
			playSound ["ControlsF", true];
		};
		};
		if !(isnil "_Elevatordamageleft") then {
		if ((_Elevatordamageleft == 1) && (time - _ElevatordamageleftWarning >= heightWarningTime) && (isEngineOn _vehicle)) then {
			_ElevatordamageleftWarning = 10800;
			playSound ["ControlsF", true];
		};
		};
		if !(isnil "_Elevatordamageright") then {
		if ((_Elevatordamageright == 1) && (time - _ElevatordamagerightWarning >= heightWarningTime) && (isEngineOn _vehicle)) then {
			_ElevatordamagerightWarning = 10800;
			playSound ["ControlsF", true];
		};
		};
		if ((_height < _var_height && !_gear) && (isEngineOn _vehicle) && (_angle < 0) && (_height > 100) && (time - _heightWarning >= heightWarningTime)) then {
			_heightWarning = time;
			playSound ["altitude", true];
		};
        if ((_speed < _var_speed2 && !_gear) && (isEngineOn _vehicle) && (_angle > 0) && (time - _speedWarning >= speedWarningTime)) then {
			_speedWarning = time;
			playSound ["speed", true];
		};
        if ((_height < _var_height2 && !_gear) && (isEngineOn _vehicle) && (_angle < 0) && (time - _heightWarning2 >= heightWarning2Time)) then {
			_heightWarning2 = time;
			playSound ["pullUp", true];
        };
		if ((_fuelstate > 0.8) && (_fuelstate <= 0.85 && !_gear) && (time - _fuelWarning1500 >= fuelWarningTime)) then {
             _fuelWarning1500 = 10800;
             playSound ["fuel1500", true];
        };
		if ((_fuelstate > 0.45) && (_fuelstate <= 0.5 && !_gear) && (time - _fuelWarning800 >= fuelWarningTime)) then {
             _fuelWarning800 = 10800;
             playSound ["fuel800", true];
        };
		if ((_fuelstate > 0.25) && (_fuelstate <= 0.3 && !_gear) && (time - _fuelWarning500 >= fuelWarningTime)) then {
             _fuelWarning500 = 10800;
             playSound ["fuel500", true];
        };
		if ((_fuelstate > 0.05) && (_fuelstate <= 0.10 && !_gear) && (time - _fuelWarninglow >= fuelWarningTime)) then {
             _fuelWarninglow = 10800;
             playSound ["fuellow", true];
        };
		sleep 0.7261
	} else {
		sleep 3
	}
};

_vehicle removeAction _cawsOnAction;
_vehicle removeAction _cawsOffAction;