class Sensor
{
	type = "sensor";
	pos[] = {"HSICenter", 1, {-0.35,-0.35}, 1};
	down[] = {"HSICenter", 1, {0.35,0.35}, 1};
	showTargetTypes = 1+2+4+8+16+32+64+128+256+512+1024;
	/*	1 - Sensor sectors,
		2 - Threats,
		4 - Marked tgt symbol,
		8 - Own detection,
		16 - Remote detection,
		32 - Active detection,
		64 - Passive detection,
		128 - Ground tgts,
		256 - Air tgts,
		512 - Men,
		1024 - Special (laser, NV)
		*/
	width = 1; // default width of lines can by different in case of class XXXX used instead of arrays
	sensorLineType = 1; // same as "lineType"
	sensorLineWidth = 2;
	range = 8000;
	class MissileThreat
	{
		TEXT_MFD_R_SCALE_STATIC(TEXT,-0.02,-0.02,0.8,"center","M")
	};
	class rwr // there's a radar, but stuff isn't happening yet
	{
		TEXT_MFD_R_SCALE_STATIC(TEXT,-0.02,-0.02,0.8,"center","R")
	};
	class lockingThreat:rwr{
		TEXT_MFD_R_SCALE_STATIC(TEXT,-0.02,-0.02,0.8,"center","R")
	}; // locking, you're in for a bad time
	class markingThreat: rwr{
		TEXT_MFD_R_SCALE_STATIC(TEXT,-0.02,-0.02,0.8,"center","R")
	}; // radar is tracking you actively
	class rwrFriendly: rwr{
		TEXT_MFD_R_SCALE_STATIC(TEXT,-0.02,-0.02,0.8,"center","R")
	};
	class rwrEnemy: rwr{};
	class rwrGroup: rwr{};
	class rwrDestroyed{
		TEXT_MFD_R_SCALE_STATIC(TEXT,-0.02,-0.02,0.8,"center","R")
	};
	class markedTarget {};
	class assignedTarget: markedTarget{};
	class target:markedTarget{
		TEXT_MFD_R_SCALE_STATIC(TEXT,-0.02,-0.02,0.8,"center","R")
	};
	class targetFriendly {};
	class targetEnemy: markedTarget{};
	class targetGroup: target{};
	class targetDestroyed:MissileThreat{};
	class targetGround: target{};
	class targetGroundFriendly: targetGround{};
	class targetGroundEnemy: targetGround{};
	class targetGroundGroup: targetGround{};
	class targetGroundDestroyed:MissileThreat{};
	class targetGroundRemote:MissileThreat{};
	class targetGroundRemoteFriendly: targetGroundRemote{};
	class targetGroundRemoteEnemy: targetGroundRemote{};
	class targetGroundRemoteGroup: targetGroundRemote{};
	class targetGroundRemoteDestroyed:MissileThreat{};
	class targetLaser: target{};
	class targetLaserFriendly: targetLaser{};
	class targetLaserEnemy: targetLaser{};
	class targetLaserGroup: targetLaser{};
	class targetNVG: targetLaser{};
	class targetNVGFriendly: targetNVG{};
	class targetNVGEnemy: targetNVG{};
	class targetNVGGroup: targetNVG{};
	class targetMan: target{};
	class targetManFriendly: targetMan{};
	class targetManEnemy: targetMan{};
	class targetManGroup: targetMan  {};
	class targetManRemote: target  {};
	class targetManRemoteFriendly: targetManRemote {};
	class targetManRemoteEnemy: targetManRemote {};
	class targetManRemoteGroup: targetManRemote {};
	class targetAir {};
	class targetAirFriendly: targetAir {};
	class targetAirEnemy: targetAir {};
	class targetAirGroup: targetAir {};
	class targetAirDestroyed:MissileThreat{};
	class targetAirRemote: targetAir {};
	class targetAirRemoteFriendly: targetAirRemote {};
	class targetAirRemoteEnemy: targetAirRemote {};
	class targetAirRemoteGroup: targetAirRemote {};
	class targetAirRemoteDestroyed:MissileThreat{};
}; // Sensor

class sensor_border {
	type = "line";
    width = 4;
	points[] ={
		{"HSICenter", 1, {0, 0.35}, 1},{"HSICenter", 1, {0.03137375811620172, 0.34859100289833367}, 1},{"HSICenter", 1, {0.062494913179522826, 0.34437535600952035}, 1},{"HSICenter", 1, {0.0931128959483363, 0.3373870012435486}, 1},{"HSICenter", 1, {0.12298118842846993, 0.327682204723908}, 1},{"HSICenter", 1, {0.15185930869114533, 0.3153391037658467}, 1},{"HSICenter", 1, {0.17951474709206716, 0.3004570777606531}, 1},{"HSICenter", 1, {0.2057248383023656, 0.28315594803123156}, 1},{"HSICenter", 1, {0.23027855407889938, 0.2635750131012638}, 1},{"HSICenter", 1, {0.252978202339587, 0.24187192714540262}, 1},{"HSICenter", 1, {0.2736410188638104, 0.21822143065055674}, 1},{"HSICenter", 1, {0.2921006388024559, 0.19281394350823583}, 1},{"HSICenter", 1, {0.3082084361498583, 0.16585403186554948}, 1},{"HSICenter", 1, {0.3218347203930077, 0.13755876107887327}, 1},{"HSICenter", 1, {0.3328697807033037, 0.1081559480312316}, 1},{"HSICenter", 1, {0.34122476926363826, 0.07788232688470997}, 1},{"HSICenter", 1, {0.3468324166187771, 0.04698164303617944}, 1},{"HSICenter", 1, {0.3496475732894601, 0.015702690622680246}, 1},{"HSICenter", 1, {0.3496475732894601, -0.015702690622680277}, 1},{"HSICenter", 1, {0.3468324166187772, -0.04698164303617939}, 1},{"HSICenter", 1, {0.34122476926363826, -0.07788232688471002}, 1},{"HSICenter", 1, {0.3328697807033037, -0.10815594803123164}, 1},{"HSICenter", 1, {0.3218347203930077, -0.1375587610788733}, 1},{"HSICenter", 1, {0.30820843614985827, -0.1658540318655495}, 1},{"HSICenter", 1, {0.29210063880245585, -0.192813943508236}, 1},{"HSICenter", 1, {0.2736410188638103, -0.21822143065055682}, 1},{"HSICenter", 1, {0.252978202339587, -0.24187192714540257}, 1},{"HSICenter", 1, {0.23027855407889944, -0.2635750131012638}, 1},{"HSICenter", 1, {0.20572483830236563, -0.28315594803123156}, 1},{"HSICenter", 1, {0.17951474709206702, -0.30045707776065317}, 1},{"HSICenter", 1, {0.15185930869114522, -0.31533910376584673}, 1},{"HSICenter", 1, {0.12298118842846983, -0.327682204723908}, 1},{"HSICenter", 1, {0.09311289594833633, -0.3373870012435486}, 1},{"HSICenter", 1, {0.06249491317952271, -0.34437535600952035}, 1},{"HSICenter", 1, {0.031373758116201765, -0.34859100289833367}, 1},{"HSICenter", 1, {0, -0.35}, 1},{"HSICenter", 1, {-0.031373758116201834, -0.3485910028983336}, 1},{"HSICenter", 1, {-0.06249491317952293, -0.34437535600952035}, 1},{"HSICenter", 1, {-0.09311289594833623, -0.33738700124354865}, 1},{"HSICenter", 1, {-0.12298118842847004, -0.32768220472390797}, 1},{"HSICenter", 1, {-0.1518593086911453, -0.3153391037658467}, 1},{"HSICenter", 1, {-0.17951474709206725, -0.30045707776065306}, 1},{"HSICenter", 1, {-0.20572483830236565, -0.2831559480312315}, 1},{"HSICenter", 1, {-0.23027855407889958, -0.26357501310126363}, 1},{"HSICenter", 1, {-0.2529782023395871, -0.24187192714540257}, 1},{"HSICenter", 1, {-0.2736410188638106, -0.21822143065055652}, 1},{"HSICenter", 1, {-0.29210063880245585, -0.1928139435082359}, 1},{"HSICenter", 1, {-0.30820843614985827, -0.16585403186554956}, 1},{"HSICenter", 1, {-0.3218347203930078, -0.13755876107887302}, 1},{"HSICenter", 1, {-0.3328697807033037, -0.10815594803123164}, 1},{"HSICenter", 1, {-0.34122476926363826, -0.0778823268847098}, 1},{"HSICenter", 1, {-0.3468324166187771, -0.04698164303617948}, 1},{"HSICenter", 1, {-0.3496475732894601, -0.015702690622680284}, 1},{"HSICenter", 1, {-0.3496475732894601, 0.015702690622680468}, 1},{"HSICenter", 1, {-0.3468324166187772, 0.04698164303617935}, 1},{"HSICenter", 1, {-0.34122476926363826, 0.07788232688470997}, 1},{"HSICenter", 1, {-0.33286978070330375, 0.10815594803123152}, 1},{"HSICenter", 1, {-0.3218347203930077, 0.1375587610788732}, 1},{"HSICenter", 1, {-0.30820843614985816, 0.16585403186554976}, 1},{"HSICenter", 1, {-0.29210063880245596, 0.1928139435082358}, 1},{"HSICenter", 1, {-0.27364101886381026, 0.2182214306505569}, 1},{"HSICenter", 1, {-0.25297820233958707, 0.24187192714540257}, 1},{"HSICenter", 1, {-0.23027855407889924, 0.26357501310126397}, 1},{"HSICenter", 1, {-0.20572483830236565, 0.28315594803123156}, 1},{"HSICenter", 1, {-0.17951474709206722, 0.30045707776065306}, 1},{"HSICenter", 1, {-0.15185930869114542, 0.3153391037658466}, 1},{"HSICenter", 1, {-0.12298118842846972, 0.3276822047239081}, 1},{"HSICenter", 1, {-0.09311289594833605, 0.3373870012435487}, 1},{"HSICenter", 1, {-0.0624949131795229, 0.34437535600952035}, 1},{"HSICenter", 1, {-0.0313737581162015, 0.34859100289833367}, 1},{"HSICenter", 1, {0, 0.35}, 1}
	};
}; // sensor_border

class WP_Point_Square {
	type="line";
	width = 3;
	points[] ={
		{"HSI_WPDist", 1, "HSI_WPDir", 1, "HSI_PlaneDir", 1, { 0   , -0.001},1},
		{"HSI_WPDist", 1, "HSI_WPDir", 1, "HSI_PlaneDir", 1, { 0   ,  0.001},1},{},
		{"HSI_WPDist", 1, "HSI_WPDir", 1, "HSI_PlaneDir", 1, { 0   , -0.025},1},
		{"HSI_WPDist", 1, "HSI_WPDir", 1, "HSI_PlaneDir", 1, { 0.025, 0.0},1},
		{"HSI_WPDist", 1, "HSI_WPDir", 1, "HSI_PlaneDir", 1, { 0.015, 0.015},1},
		{"HSI_WPDist", 1, "HSI_WPDir", 1, "HSI_PlaneDir", 1, {-0.015, 0.015},1},
		{"HSI_WPDist", 1, "HSI_WPDir", 1, "HSI_PlaneDir", 1, {-0.025, 0.0},1},
		{"HSI_WPDist", 1, "HSI_WPDir", 1, "HSI_PlaneDir", 1, { 0   , -0.025},1}
	}; // points
}; // WP_Point_Square