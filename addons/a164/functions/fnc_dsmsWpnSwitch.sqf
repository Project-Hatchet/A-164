#include "script_component.hpp"
/*
**	DSMS Weapon Switch
**
**	Usage: [_vehicle, _weaponIndex]
**
**
**
*/
params ["_vehicle", "_index"];
//private ["_pylonArray", "_weapon", "_weaponMag"];
_pylonArray = getPylonMagazines _vehicle;
_weaponMag = _pylonArray#_index;
_weapon = (configFile >> "CfgMagazines" >> _weaponMag >> "pylonWeapon") call BIS_fnc_getCfgData;
_vehicle selectWeapon _weapon;