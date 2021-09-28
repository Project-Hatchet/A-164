/*
 * hatchet_vanilla_waypoints_fnc_perFrame
 *
 * handles per frame updates of data for FMS
 *
 * params (array)[(object) vehicle, (SCALAR) frameTime]
 */

params ["_vehicle", "_frameTime"];


if ((count customWaypointPosition) > 0) then {
    _vehicle setUserMFDvalue [1, _vehicle distance2D customWaypointPosition];
} else {
    private _wayPoint = [group player, currentWaypoint group player];
    private _position = waypointPosition _wayPoint;
    _vehicle setUserMFDvalue [1, _vehicle distance2D _position];
};