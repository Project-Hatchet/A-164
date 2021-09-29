/*
**	DSMS Weapon Switch
**
**	Usage: [_vehicle, _weaponIndex]
**
**
**
*/

params ["_vehicle", "_index"];
private ["_pylonArray"];

_pylonArray = getPylonMagazines _vehicle;

//TODO: add in a way to get the vehicle weapon from pylon selected
//in CfgMagazines
//the pylon magazine has a variable for 'pylonWeapon'
//if somehow you could get 'pylonweapon' then  you could switch the weapon