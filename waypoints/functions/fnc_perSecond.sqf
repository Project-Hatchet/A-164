/*
 * hatchet_vanilla_waypoints_fnc_perSecond
 *
 * handles occasional updates of data for waypoints
 *
 * params (array)[(object) vehicle]
 */

params ["_vehicle"];

private _wayPoint = [group player, currentWaypoint group player];
private _position = waypointPosition _wayPoint;
if ((count customWaypointPosition) > 0) then {
    _position = customWaypointPosition;
    _vehicle setUserMFDText [1, "MAP MARK"];
} else {
    _vehicle setUserMFDText [1, waypointDescription _wayPoint];
};

private _waypointDirection = _vehicle getDir _position;
_vehicle setUserMFDvalue [0, _waypointDirection];

private _gridArea = [worldName] call ace_common_fnc_getMGRSdata;
private _grid = [_position] call ace_common_fnc_getMapGridFromPos;
private _waypointGridString = format ["%1    %2    %3    %4", _gridArea select 0, _gridArea select 1, _grid select 0, _grid select 1];
_vehicle setUserMFDText [2, _waypointGridString];
private _waypointIndex = currentWaypoint group player;
_vehicle setUserMFDText [3, format["%1/%2", _waypointIndex + 1, count (waypoints group player)]];

// private _zoomLevel = _vehicle getVariable ["MAP_ZoomMult", 1];
// private ["_waypointPosition"];
// {
//     _waypointPosition = waypointPosition [group player, (currentWaypoint group player) + _forEachIndex - 1];
//     if (!(_waypointPosition isEqualTo [0,0,0])) then {
//         _vehicle setUserMFDvalue [_x # 0, _vehicle getRelDir _waypointPosition];
//         _vehicle setUserMFDvalue [_x # 1, ((_vehicle distance2D _waypointPosition) * _zoomLevel) / (hatchet_vanilla_waypoints_mapSize / 2)];
//     } else {
//         _vehicle setUserMFDvalue [_x # 0, -1];
//         _vehicle setUserMFDvalue [_x # 1, -1];
//     };
// } forEach [[2,3],[4,5],[6,7],[8,9],[33,34],[35,36]];

if (speed _vehicle > 2) then {
    private _speedMS = vectorMagnitude (velocity _vehicle);
    private _tofSecondsTotal = (_position distance _vehicle) / _speedMS;
    private _tofHours = floor (_tofSecondsTotal / 60 / 60);
    private _tofMinutes = floor (_tofSecondsTotal / 60 % 60);
    private _tofSeconds = round (_tofSecondsTotal % 60);
    private _tofStr = format["%1:%2:%3",_tofHours, _tofMinutes, _tofSeconds];
    _vehicle setUserMFDText [0, _tofStr];
};
