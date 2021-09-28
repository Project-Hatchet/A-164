/*
 * waypoints_fnc_setup
 *
 * initial setup of waypoint system
 *
 * params (array)[(object) vehicle]
 */

params ["_vehicle"];

_vehicle setUserMFDValue [0, 0];
_vehicle setUserMFDValue [1, 0];
_vehicle setUserMFDText [0, "--:--:--"];
_vehicle setUserMFDText [1, "NO WPT"];
_vehicle setUserMFDText [2, ""];

hatchet_vanilla_waypoints_mapSize = [] call BIS_fnc_mapSize;

true
