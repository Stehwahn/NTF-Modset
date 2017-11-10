_vehicle = _this select 0;

private ["_crew"];
_crew = player;

sleep 1;

disableSerialization;

if(getNumber(configFile >> "CfgVehicles" >> typeOf _vehicle >> "has_rwr") == 0) exitWith {};

//INIT
private ["_type","_threats","_lastScan","_RWRopen","_MaxTargets","_scanInterval","_RWRrange","_oldThreats"];
_type = 0;
_threats = [];
_lastScan = [];
_oldThreats = [];
_RWRopen = false;


// CUSTOMIZABLE PARAMETERS
_maxTargets = 6; /* RWR maximum number of targets on-screen - 6 Primary 6 Secondary at a time, depending on its priority */
_scanInterval0 = 0.5; //RWR scan interval in seconds
_scanInterval = 0.5;
_RWRrange = getNumber(configFile >> "CfgVehicles" >> typeOf _vehicle >> "range"); //RWR range in meters

if (_RWRrange == 0) then {_RWRrange = 10125};

//INCOMING MISSILE EVENT HANDLER
rwr_fireSource = objNull;
private ["_incomingeh"];
_incomingeh = _vehicle addEventHandler ["IncomingMissile", {rwr_fireSource = _this select 2}];

//DEFINE
#define CTRL(A) ((uiNamespace getVariable "ACE_RWR_RU") displayCtrl A)

#define IDCRWRBASE 22000
#define __IDC [22000,22001,22002,22003,22004,22005,22006,22007,22008,22009,22010,22011,22012,22013,22014,22015,22016,22017,22018,22019,22020,22021,22022,22023,22024,22025,22026,22027,22028,22029,22030,22031,22032,22033,22034,22035]
#define __IDC_DIR [22000,22001,22002,22003,22004,22005,22006,22007,22008,22009,22010,22011,22012,22013,22014,22015,22028,22029,22030,22031]

#define SR5RWR_display_width 0.22
#define SR5RWR_display_height 0.2934

// Primary threat direction array
#define __PRIDIR [[IDCRWRBASE + 0,IDCRWRBASE + 1],[IDCRWRBASE + 2,IDCRWRBASE + 3],[IDCRWRBASE + 4,IDCRWRBASE + 5],[IDCRWRBASE + 6,IDCRWRBASE + 7],[IDCRWRBASE + 28,IDCRWRBASE + 29]]
// Secondary threat direction array
#define __SECDIR [[IDCRWRBASE + 8,IDCRWRBASE + 9],[IDCRWRBASE + 10,IDCRWRBASE + 11],[IDCRWRBASE + 12,IDCRWRBASE + 13],[IDCRWRBASE + 14,IDCRWRBASE + 15],[IDCRWRBASE + 30,IDCRWRBASE + 31]]
// Primary threat types array
#define __PRITYP [IDCRWRBASE + 16,IDCRWRBASE + 17,IDCRWRBASE + 18,IDCRWRBASE + 19,IDCRWRBASE + 20,IDCRWRBASE + 21]
// Secondary threat type array
#define __SECTYP [IDCRWRBASE + 22,IDCRWRBASE + 23,IDCRWRBASE + 24,IDCRWRBASE + 25,IDCRWRBASE + 26,IDCRWRBASE + 27]
// Signal strength
#define __SIGNAL IDCRWRBASE + 32
// Launch
#define __LAUNCH IDCRWRBASE + 33
// Signal up
#define __SIGNAL_UP IDCRWRBASE + 34
// Signal down
#define __SIGNAL_DOWN IDCRWRBASE + 35
#define LSWTIME 4

#include "functions.hpp"

//BEGIN MAIN LOOP
private ["_nearStuff","_maxTargets","_threat","_invisibleThreats"];
private ["_LOSorigin","_LOSend","_LOSh","_LOSdist","_LOSvector","_LOS","_posH","_posT","_viewAngleH","_viewAngleT"];
private ["_AX","_AY","_AZ","_BX","_BY","_BZ","_HX","_HY","_HZ","_TX","_TY","_TZ"];
private ["_dir_index","_type_index"];
private ["_LWTIME"];
private "_launcher";

_LWTIME = 0;

uiNamespace setVariable ["ACE_RWR_STATUS", true];

while { (_crew == driver _vehicle || {_crew == gunner _vehicle} || {_crew == commander _vehicle}) && {alive _crew} && {alive _vehicle} && (uiNamespace getVariable "ACE_RWR_STATUS")} do {
	//GATHER ALL NEARBY CARS AND TANKS
	_nearStuff = getPos _vehicle nearEntities [["air","tank","min_rf_sa_22","min_rf_sa_22_desert"], _RWRrange * 0.8];
	// private _nearStuff = vehicles select {_vehicle distance _x < _RWRrange};
	// _nearStuff deleteAt (_nearStuff find _vehicle);

	//SET NUMBER OF TARGETS
	_maxTargets = if (count _nearStuff < 6) then {count _nearStuff} else {6};
	if (count _nearStuff > 0) then {
		//ACQUIRE THREATS AND BUILD ARRAY
		for "_y" from 0 to (_maxTargets - 1) do {
			_threat = _nearStuff select _y;
			if (getNumber(configFile >> "CfgVehicles" >> typeOf _threat >> "radarType") == 4 && {_threat != _vehicle} && {({alive _x} count crew _threat > 0)} && {!(_threat in _threats)} && {!(_threat isKindOf "ParachuteBase")}) then {
				_threats set [count _threats, _threat];
			};
		};
		
		//CHECK FOR RADIO VISIBILITY
		_invisibleThreats = [];
		for "_y" from 0 to (count _threats - 1) do {
			_threat = _threats select _y;
			_LOSorigin = getPosASL _vehicle;
			_LOSorigin set [2, (_LOSorigin select 2) + 0 ];
			_LOSend = getPosASL _threat;
			_LOSdist = _vehicle distance _threat;
			_posH = _vehicle worldToModel [_LOSend select 0, _LOSend select 1, (_LOSend select 2) + 0];
			_LOSvector = [(_posH select 0) / _LOSdist, (_posH select 1) / _LOSdist, (_posH select 2) / _LOSdist];
			_LOS = true;
			private _vPositon = (getPosASLVisual _vehicle) vectorAdd [0,0,-2];
		    private _posx = getPosASLVisual _threat vectorAdd [0,0,2];
		    if((count (lineIntersectsObjs [_vPositon, _posx, _threat]) <= 1)  && !(terrainIntersectASL [_vPositon, _posx]))then{ _LOS = false };
			if (_LOS && {!(_threat in _invisibleThreats)}) then { _invisibleThreats set [count _invisibleThreats, _threat] };
		};
		
		if ((count (_threats - _invisibleThreats) > 0) && {({alive _x} count crew _threat > 0)}) then {
			if !(_RWRopen) then {
				135737 cutRsc ["ACE_RWR_RU","PLAIN"];
				_RWRopen = true;
				// INITIATE RWR15
				call clearAllControls;
			};
		
			for "_y" from 0 to (count _threats - 1) do {
				_threat = _threats select _y;
				
				// PRIORITIY TYPES
				/* On Primary threat:
				 - Big direction indicator lamps light up
				 - Small direction indicator lamps light up
				 - Big type indicator lamp lights up
				 - Small type indicator lamp lights up
				
				 On Secondary threat:
				 - Small direction indicator lamps light up
				 - Small type indicator lamp lights up
				
				 Maximum 6 primary threats can be displayed
				 N, 3, X, H, F, C = All Big type indicator lamps light up && All Small type indicator lamps light up
				
				 Maximum 6 secondary threats can be displayed
				 All small type indicator lamps light up */
				
				/* Aircraft is always a primary threat!  */
				_type = if (_threat isKindOf "Plane") then { "PRIMARY" } else { "SECONDARY" };
				
				/* If there is only one threat available, it becomes the primary threat - even if it is a secondary class threat  */
				if (count _threats == 1) then { _type = "PRIMARY" };
				/* Once there is a primary class threat detected, priority switches back again */
				//if (_type == "PRIMARY") then { _vehicle setVariable [QGVAR(primary_threat),_threat]; };
				
				// GET DIRECTION TOWARDS OWN AIRCRAFT
				if (_threat in _threats && {!(_threat in _invisibleThreats)}) then {
					//GET VECTOR POSITIONS
					_p1 = getPos _vehicle;
					_p2 = getPos _threat;
					_AX = _p1 select 0;
					_BX = _p2 select 0;
					_AY = _p1 select 1;
					_BY = _p2 select 1;
					
					_dir = (_BX - _AX) atan2 (_BY - _AY); // 180 to -180 degree
					// RELATIVE TO VEHICLE
					_dir = _dir - getDir _vehicle;
					if (_dir < 0) then { _dir = 360 + _dir; };
					if (_dir > 180) then { _dir = _dir - 360; };
					_dir = round _dir;
					
					// GET DIRECTION
					switch (true) do {
						// LEFT
						// 10
						case (_dir < 0 && {_dir >= -10}) : { _dir_index = [[0,0]]; };
						// 10 + 30
						case (_dir < -10 && {_dir > -30}) : { _dir_index = [[0,0],[1,0]]; };
						// 30
						case (_dir == -30) : { _dir_index = [[1,0]]; };
						// 30 + 50
						case (_dir < -30 && {_dir > -50}) : { _dir_index = [[1,0],[2,0]]; };
						// 50
						case (_dir == -50) : { _dir_index = [[2,0]]; };
						// 50 + 90
						case (_dir < -50 && {_dir > -90}) : { _dir_index = [[2,0],[3,0]]; };
						// 90
						case (_dir == -90) : { _dir_index = [[3,0]]; };
						// > 90
						case (_dir < -90) : { _dir_index = [[4,0]]; };
						
						// RIGHT
						// 10
						case (_dir > 0 && {_dir <= 10}) : { _dir_index = [[0,1]]; };
						// 10 + 30
						case (_dir > 10 && {_dir < 30}) : { _dir_index = [[0,1],[1,1]]; };
						// 30
						case (_dir == 30) : { _dir_index = [[1,1]]; };
						// 30 + 50
						case (_dir > 30 && {_dir < 50}) : { _dir_index = [[1,1],[2,1]]; };
						// 50
						case (_dir == 50) : { _dir_index = [[2,1]]; };
						// 50 + 90
						case (_dir > 50 && {_dir < 90}) : { _dir_index = [[2,1],[3,1]]; };
						// 90
						case (_dir == 90) : { _dir_index = [[3,1]]; };
						// > 90
						case (_dir > 90) : {  _dir_index = [[4,1]];};
					};
				
					//DISPLAY THREAT ON RWR UI
					_type_index = 0;/*getNumber(configFile >> "CfgVehicles" >> typeOf _threat >> "threat_img_spo");*/
					
					//NEW THREAT
					if !(_threat in _lastScan) then {
						_lastScan set [count _lastScan, _threat];
					};
					// THREAT TYPE DISPLAY
					if(_threat isKindOf "Tank")then{
						_type_index = 3;
					};
					if(_threat isKindOf "Air")then{
						_type_index = 0;
					};
					if(_threat isKindOf "min_rf_sa_22")then{
						_type_index = 3;
					};
					if(_threat isKindOf "min_rf_sa_22_desert")then{
						_type_index = 3;
					};
					[_type,_type_index,true] call showThreatTypes;
					
					// THREAT DIRECTION DISPLAY
					if !(isnil "_dir_index") then {[_type,_dir_index,true] call showThreatDirection};
					
					// SIGNAL STRENGTH PRIMARY
					[_type,_threat,_vehicle] call displaySignalStrength;
					
					// SIGNAL LOCK WARNING
					[_type,_threat,_vehicle] call displayLockWarning;

					/*// RHS MI-24 RWR
					if(_vehicle isKindOf "RHS_Mi24_base")then{
						[_type,_vehicle,_threat,_dir] call displayMiRwr;
					};*/

					
					//LAUNCH
					if (_threat == rwr_fireSource) then {
						_launched = _vehicle getVariable ["LaunchWarning",false];
						if (!_launched) then {
						    _vehicle setVariable ["LaunchWarning",true];
							[_vehicle] call displayLaunchWarning;
							rwr_fireSource = objNull;
						};
					} else {
						_vehicle setVariable ["LaunchWarning",false];
					};
					sleep _scanInterval0;
				} else {
					//THREAT IS ACTIVE BUT OUT OF RANGE
					if (_threat in _lastScan) then {_lastScan = _lastScan - [_threat] };
					if (_threat == rwr_fireSource) then { rwr_fireSource = objNull };
					if (_RWRopen && {count (_threats - _invisibleThreats) <= 0}) then {
						135737 cutRsc ["Default","PLAIN"];
						_vehicle setVariable ["LaunchWarning",false];
						_RWRopen = false;
					};
					// RESET 
					[_type,_type_index,false] call showThreatTypes;
				}; //END IF (_vehicle distance _threat > _RWRrange)
			}; //END for (threats)
		} else {
			//NO THREATS
			_lastScan = [];
			135737 cutRsc ["Default","PLAIN"];
			_RWRopen = false;
			_vehicle setVariable ["LaunchWarning",false];
			rwr_fireSource = objNull;
		}; //END if (count _threats > 0)
	}else {
		//NO THREATS
		_lastScan = [];
		135737 cutRsc ["Default","PLAIN"];
		_RWRopen = false;
		_vehicle setVariable ["LaunchWarning",false];
		rwr_fireSource = objNull;
	}; //END if (count _nearStuff > 0)
	sleep _scanInterval;
	//CLEANING
	_rmthreats = [];
	for "_y" from 0 to (count _threats - 1) do {
		_threat = _threats select _y;
		if (damage _threat > 0.9  && {_threat in _threats})	then { //THREAT DESTROYED
			_rmthreats set [count _rmthreats, _threat];
		};
		if (_threat distance _vehicle > (_RWRrange * 0.8)) then { //THREAT OUT OF RANGE
			_rmthreats set [count _rmthreats, _threat];
		};
	};
	if (count _rmthreats > 0) then {
		_threats = _threats - _rmthreats;
		_oldThreats = _oldThreats - _rmthreats;
		_lastScan = _lastScan - _rmthreats;
		_threats = _threats - [objNull];
		_oldThreats = _oldThreats - [objNull];
		_lastScan = _lastScan - [objNull];
	};
	if (_threat in _threats && {!(_threat in _invisibleThreats)} && (time - _LWTIME >= LSWTIME) && {({alive _x} count crew _threat > 0)}) then {
	    _LWTIME = time;
		playSound ["ACE_RWR15_TRACK",true];
	};
}; //END While Main Loop

135737 cutRsc ["Default","PLAIN"];
_vehicle setVariable ["LaunchWarning", false];
_vehicle removeEventHandler ["IncomingMissile", _incomingeh];
//[_crew, 1, ["ACE_SelfActions", "spo_15"]] call ace_interact_menu_fnc_removeActionFromObject;