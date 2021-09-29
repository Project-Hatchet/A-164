topLeft="HUD_top_left";
topRight="HUD_top_right";
bottomLeft="HUD_bottom_left";
borderLeft=0;
borderRight=0;
borderTop=0;
borderBottom=0.2;
color[] = {0.082,1,0.039,1};
alpha = 0.5;
enableParallax=1;
class material {
	ambient[] = {1, 1, 1, 1};
	diffuse[] = {0.5, 0.5, 0.5, 1};
	emissive[] = {100, 100, 100, 50};
};//material
class Bones {
	class PlaneOrientation
	{
		type="fixed";
		pos[]={0.498,0.38};
	};
	class CCRPReticle
	{
		type="fixed";
		pos[]={0.498,0.7};
	};
	class CCRPBankAngleWaypoint
	{
		type="rotational";
		source="horizonBank";
		sourceScale=1;
		center[]={0,0};
		min=-3.1415927;
		max=3.1415927;
		minAngle = 0;
		maxAngle = -360;
		aspectRatio=1.25;
	};
	class CCRPBankAngle
	{
		type="rotational";
		source="horizonBank";
		sourceScale=1;
		center[]={0.498,0.7};
		min=-3.1415927;
		max=3.1415927;
		minAngle=0;
		maxAngle=360;
		aspectRatio=1.25;
	};
	class CCRPimpactDist {
		type="linear";
		source = "impactDistance";
		sourceIndex = 0;
		min=0;
		max=5000;
		sourceScale=1;
		minPos[]={0,0.5};
		maxPos[]={0,0};
	};
	class CCRPwaypointDist {
		type="linear";
		source = "WPDist";
		sourceIndex = 0;
		min=0;
		max=5000;
		sourceScale=1;
		minPos[]={0,-0.5};
		maxPos[]={0,0};
	};
	class WeaponAim
	{
		type="vector";
		source="weapon";
		pos0[]={0.498,0.38};
		pos10[]={1.166,1.215};
	};
	class Target
	{
		type="vector";
		source="target";
		pos0[]={0.498,0.38};
		pos10[]={1.166,1.215};
	};
	class TargetingPodDir
	{
		source="pilotcamera";
		type="vector";
		pos0[]={0.498,0.38};
		pos10[]={1.166,1.215};
	};
	class TargetingPodTarget
	{
		source="pilotcameratarget";
		type="vector";
		pos0[]={0.498,0.405};
		pos10[]={1.166,1.215};
	};
	class ImpactPoint
	{
		type="vector";
		source="ImpactPoint";
		pos0[]={0.5,0.38};
		pos10[]={1.168,1.215};
	};
	class NormalizeBombCircle
	{
		type="normalizedorsmaller";
		limit=0.079999998;
		aspectRatio=1.25;
	};
	class Velocity
	{
		type="vector";
		source="velocity";
		pos0[]={0.498,0.38};
		pos10[]={1.166,1.215};
	};
	class Level0
	{
		type="horizon";
		pos0[]={0.5,0.38};
		pos10[]={1.168,1.215};
		angle=0;
	};
	class Limit0109
	{
		type="limit";
		limits[]={0.1,0.1,0.89999998,0.89999998};
	};
	class LimitWaypoint
	{
		type="limit";
		limits[]={0.2,0.97000003,0.80000001,0.97000003};
	};
	class WPPoint
	{
		type="vector";
		source="WPPoint";
		pos0[]={0.5,0.38};
		pos10[]={1.168,1.215};
	};
	class VerticalSpeed
	{
		type="linear";
		source="vspeed";
		sourceScale=1;
		min=-100;
		max=100;
		minPos[]={0,0.15000001};
		maxPos[]={0,-0.15000001};
	};
	class HorizonIndicatorBank
	{
		type="rotational";
		source="horizonBank";
		sourceScale=1;
		center[]={0.064999998,0.12};
		min=-3.1415927;
		max=3.1415927;
		minAngle=0;
		maxAngle=360;
		aspectRatio=1.25;
	};
	class HorizonIndicatorDive: HorizonIndicatorBank
	{
		source="horizonDive";
		min=-1.5707999;
		max=1.5707999;
		minAngle=90;
		maxAngle=-90;
	};
	class TerrainBone
	{
		type="linear";
		source="altitudeAGL";
		sourceScale=1;
		min=0;
		max=200;
		minPos[]={0,0.88};
		maxPos[]={0,0.38};
	};
	class MissileFlightTimeRot1
	{
		type="rotational";
		source="MissileFlightTime";
		sourceScale=1;
		center[]={0,0};
		min=0;
		max=0.5;
		minAngle=0;
		maxAngle=18;
		aspectRatio=1.25;
	};
	class MissileFlightTimeRot2: MissileFlightTimeRot1
	{
		maxAngle=36;
		max=1;
	};
	class MissileFlightTimeRot3: MissileFlightTimeRot1
	{
		maxAngle=54;
		max=1.5;
	};
	class MissileFlightTimeRot4: MissileFlightTimeRot1
	{
		maxAngle=72;
		max=2;
	};
	class MissileFlightTimeRot5: MissileFlightTimeRot1
	{
		maxAngle=90;
		max=2.5;
	};
	class MissileFlightTimeRot6: MissileFlightTimeRot1
	{
		maxAngle=108;
		max=3;
	};
	class MissileFlightTimeRot7: MissileFlightTimeRot1
	{
		maxAngle=126;
		max=3.5;
	};
	class MissileFlightTimeRot8: MissileFlightTimeRot1
	{
		maxAngle=144;
		max=4;
	};
	class MissileFlightTimeRot9: MissileFlightTimeRot1
	{
		maxAngle=162;
		max=4.5;
	};
	class MissileFlightTimeRot10: MissileFlightTimeRot1
	{
		maxAngle=180;
		max=5;
	};
	class MissileFlightTimeRot11: MissileFlightTimeRot1
	{
		maxAngle=198;
		max=5.5;
	};
	class MissileFlightTimeRot12: MissileFlightTimeRot1
	{
		maxAngle=216;
		max=6;
	};
	class MissileFlightTimeRot13: MissileFlightTimeRot1
	{
		maxAngle=234;
		max=6.5;
	};
	class MissileFlightTimeRot14: MissileFlightTimeRot1
	{
		maxAngle=252;
		max=7;
	};
	class MissileFlightTimeRot15: MissileFlightTimeRot1
	{
		maxAngle=270;
		max=7.5;
	};
	class MissileFlightTimeRot16: MissileFlightTimeRot1
	{
		maxAngle=288;
		max=8;
	};
	class MissileFlightTimeRot17: MissileFlightTimeRot1
	{
		maxAngle=306;
		max=8.5;
	};
	class MissileFlightTimeRot18: MissileFlightTimeRot1
	{
		maxAngle=324;
		max=9;
	};
	class MissileFlightTimeRot19: MissileFlightTimeRot1
	{
		maxAngle=342;
		max=9.5;
	};
	class MissileFlightTimeRot20: MissileFlightTimeRot1
	{
		maxAngle=360;
		max=10;
	};
	class Airport1
	{
		type="vector";
		source="airportCorner1";
		pos0[]={0.5,0.38};
		pos10[]={1.168,1.215};
	};
	class Airport2: Airport1
	{
		source="airportCorner2";
	};
	class Airport3: Airport1
	{
		source="airportCorner3";
	};
	class Airport4: Airport1
	{
		source="airportCorner4";
	};
	class ILS_H
	{
		type="ils";
		pos0[]={0.5,0.38};
		pos3[]={0.70039999,0.38};
	};
	class ILS_W: ILS_H
	{
		pos3[]={0.5,0.63050002};
	};
	class LarAmmoMax
	{
		type="linear";
		source="LarAmmoMax";
		sourceScale=1;
		min=0;
		max=1;
		minPos[]={0,1};
		maxPos[]={0,0};
	};
	class LarAmmoMin: LarAmmoMax
	{
		source="LarAmmoMin";
	};
	class LarTargetDist: LarAmmoMax
	{
		source="LarTargetDist";
	};
};//bones
class Draw {
	color[] = {0.082,0.4,0.039,1};
	alpha = 1;
	condition="on";
	class WP_Point_Square {
		type="line";
		width = 3;
		points[] ={
			{"WPPoint", { 0   , -0.001},1},
			{"WPPoint", { 0   ,  0.001},1},{},
			{"WPPoint", { 0   , -0.025},1},
			{"WPPoint", { 0.025, 0.0},1},
			{"WPPoint", { 0.015, 0.015},1},
			{"WPPoint", {-0.015, 0.015},1},
			{"WPPoint", {-0.025, 0.0},1},
			{"WPPoint", { 0   , -0.025},1}
		}; // points
	}; // WP_Point_Square
	class PlaneOrientationCrosshair
	{
		clipTL[]={0,1};
		clipBR[]={1,0};
		type="line";
		width=4;
		points[]=
		{
			
			{
				"PlaneOrientation",
				{-0.0099999998,0},
				1
			},
			
			{
				"PlaneOrientation",
				{0.0099999998,0},
				1
			},
			{},
			
			{
				"PlaneOrientation",
				{0,-0.0125},
				1
			},
			
			{
				"PlaneOrientation",
				{0,0.0125},
				1
			},
			{}
		};
	}; //PlaneOrientationCrosshair
	class PlaneMovementCrosshair
	{
		clipTL[]={0,1};
		clipBR[]={1,0};
		type="line";
		width=4;
		points[]=
		{
			
			{
				"Velocity",
				{0,-0.025},
				1
			},
			
			{
				"Velocity",
				{0.0099999998,-0.02165},
				1
			},
			
			{
				"Velocity",
				{0.01732,-0.0125},
				1
			},
			
			{
				"Velocity",
				{0.02,0},
				1
			},
			
			{
				"Velocity",
				{0.01732,0.0125},
				1
			},
			
			{
				"Velocity",
				{0.0099999998,0.02165},
				1
			},
			
			{
				"Velocity",
				{0,0.025},
				1
			},
			
			{
				"Velocity",
				{-0.0099999998,0.02165},
				1
			},
			
			{
				"Velocity",
				{-0.01732,0.0125},
				1
			},
			
			{
				"Velocity",
				{-0.02,0},
				1
			},
			
			{
				"Velocity",
				{-0.01732,-0.0125},
				1
			},
			
			{
				"Velocity",
				{-0.0099999998,-0.02165},
				1
			},
			
			{
				"Velocity",
				{0,-0.025},
				1
			},
			{},
			
			{
				"Velocity",
				{0.039999999,0},
				1
			},
			
			{
				"Velocity",
				{0.02,0},
				1
			},
			{},
			
			{
				"Velocity",
				{-0.039999999,0},
				1
			},
			
			{
				"Velocity",
				{-0.02,0},
				1
			},
			{},
			
			{
				"Velocity",
				{0,-0.050000001},
				1
			},
			
			{
				"Velocity",
				{0,-0.025},
				1
			},
			{}
		};
	}; //PlaneMovementCrosshair
	class MachineGunCrosshairGroup
	{
		type="group";
		condition="mgun";
		class MachineGunCrosshair
		{
			type="line";
			width=3;
			points[]=
			{
				
				{
					"ImpactPoint",
					{0,-0.1125},
					1
				},
				
				{
					"ImpactPoint",
					{0,-0.1},
					1
				},
				{},
				
				{
					"ImpactPoint",
					{0,0.1125},
					1
				},
				
				{
					"ImpactPoint",
					{0,0.1},
					1
				},
				{},
				
				{
					"ImpactPoint",
					{-0.090000004,0},
					1
				},
				
				{
					"ImpactPoint",
					{-0.079999998,0},
					1
				},
				{},
				
				{
					"ImpactPoint",
					{0.090000004,0},
					1
				},
				
				{
					"ImpactPoint",
					{0.079999998,0},
					1
				},
				{},
				
				{
					"ImpactPoint",
					{0,-0.0024999999},
					1
				},
				
				{
					"ImpactPoint",
					{0,0.0024999999},
					1
				},
				{},
				
				{
					"ImpactPoint",
					{-0.0020000001,0},
					1
				},
				
				{
					"ImpactPoint",
					{0.0020000001,0},
					1
				},
				{}
			};
		};
		class Circle
		{
			type="line";
			width=6;
			points[]=
			{
				
				{
					"ImpactPoint",
					{0,-0.079999998},
					1
				},
				
				{
					"ImpactPoint",
					{0,-0.1},
					1
				},
				
				{
					"MissileFlightTimeRot1",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot2",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot3",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot4",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot5",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot6",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot7",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot8",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot9",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot10",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot11",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot12",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot13",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot14",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot15",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot16",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot17",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot18",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot19",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot20",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot20",
					{0,0.064000003},
					1,
					"ImpactPoint",
					1
				}
			};
		};
		class Circle_Min_Range
		{
			type="line";
			width=3;
			points[]=
			{
				
				{
					"ImpactPoint",
					{0,-0.1},
					1
				},
				
				{
					"ImpactPoint",
					{0.013888,-0.098480001},
					1
				},
				
				{
					"ImpactPoint",
					{0.02736,-0.093970001},
					1
				},
				
				{
					"ImpactPoint",
					{0.039999999,-0.086599998},
					1
				},
				
				{
					"ImpactPoint",
					{0.051424,-0.0766},
					1
				},
				
				{
					"ImpactPoint",
					{0.061280001,-0.064280003},
					1
				},
				
				{
					"ImpactPoint",
					{0.069279999,-0.050000001},
					1
				},
				
				{
					"ImpactPoint",
					{0.075176001,-0.034200002},
					1
				},
				
				{
					"ImpactPoint",
					{0.078783996,-0.01736},
					1
				},
				
				{
					"ImpactPoint",
					{0.079999998,0},
					1
				},
				
				{
					"ImpactPoint",
					{0.078783996,0.01736},
					1
				},
				
				{
					"ImpactPoint",
					{0.075176001,0.034200002},
					1
				},
				
				{
					"ImpactPoint",
					{0.069279999,0.050000001},
					1
				},
				
				{
					"ImpactPoint",
					{0.061280001,0.064280003},
					1
				},
				
				{
					"ImpactPoint",
					{0.051424,0.0766},
					1
				},
				
				{
					"ImpactPoint",
					{0.039999999,0.086599998},
					1
				},
				
				{
					"ImpactPoint",
					{0.02736,0.093970001},
					1
				},
				
				{
					"ImpactPoint",
					{0.013888,0.098480001},
					1
				},
				
				{
					"ImpactPoint",
					{0,0.1},
					1
				},
				
				{
					"ImpactPoint",
					{-0.013888,0.098480001},
					1
				},
				
				{
					"ImpactPoint",
					{-0.02736,0.093970001},
					1
				},
				
				{
					"ImpactPoint",
					{-0.039999999,0.086599998},
					1
				},
				
				{
					"ImpactPoint",
					{-0.051424,0.0766},
					1
				},
				
				{
					"ImpactPoint",
					{-0.061280001,0.064280003},
					1
				},
				
				{
					"ImpactPoint",
					{-0.069279999,0.050000001},
					1
				},
				
				{
					"ImpactPoint",
					{-0.075176001,0.034200002},
					1
				},
				
				{
					"ImpactPoint",
					{-0.078783996,0.01736},
					1
				},
				
				{
					"ImpactPoint",
					{-0.079999998,0},
					1
				},
				
				{
					"ImpactPoint",
					{-0.078783996,-0.01736},
					1
				},
				
				{
					"ImpactPoint",
					{-0.075176001,-0.034200002},
					1
				},
				
				{
					"ImpactPoint",
					{-0.069279999,-0.050000001},
					1
				},
				
				{
					"ImpactPoint",
					{-0.061280001,-0.064280003},
					1
				},
				
				{
					"ImpactPoint",
					{-0.051424,-0.0766},
					1
				},
				
				{
					"ImpactPoint",
					{-0.039999999,-0.086599998},
					1
				},
				
				{
					"ImpactPoint",
					{-0.02736,-0.093970001},
					1
				},
				
				{
					"ImpactPoint",
					{-0.013888,-0.098480001},
					1
				},
				
				{
					"ImpactPoint",
					{0,-0.1},
					1
				}
			};
		};
		class Distance
		{
			type="text";
			source="ImpactDistance";
			sourceScale=0.001;
			sourcePrecision=1;
			max=15;
			align="center";
			scale=1;
			pos[]=
			{
				"ImpactPoint",
				{-0.0020000001,0.11},
				1
			};
			right[]=
			{
				"ImpactPoint",
				{0.045000002,0.11},
				1
			};
			down[]=
			{
				"ImpactPoint",
				{-0.0020000001,0.15000001},
				1
			};
		};
	}; //MachineGunCrosshairGroup
	class AAMissileCrosshairGroup
	{
		type="group";
		condition="AAmissile";
		class AAMissileCrosshair
		{
			type="line";
			width=4;
			points[]=
			{
				
				{
					"WeaponAim",
					{0,-0.3125},
					1
				},
				
				{
					"WeaponAim",
					{0.043400001,-0.30774999},
					1
				},
				
				{
					"WeaponAim",
					{0.085500002,-0.29365599},
					1
				},
				
				{
					"WeaponAim",
					{0.125,-0.270625},
					1
				},
				
				{
					"WeaponAim",
					{0.16069999,-0.239375},
					1
				},
				
				{
					"WeaponAim",
					{0.19149999,-0.200875},
					1
				},
				
				{
					"WeaponAim",
					{0.2165,-0.15625},
					1
				},
				
				{
					"WeaponAim",
					{0.234925,-0.106875},
					1
				},
				
				{
					"WeaponAim",
					{0.2462,-0.054249998},
					1
				},
				
				{
					"WeaponAim",
					{0.25,0},
					1
				},
				
				{
					"WeaponAim",
					{0.2462,0.054249998},
					1
				},
				
				{
					"WeaponAim",
					{0.234925,0.106875},
					1
				},
				
				{
					"WeaponAim",
					{0.2165,0.15625},
					1
				},
				
				{
					"WeaponAim",
					{0.19149999,0.200875},
					1
				},
				
				{
					"WeaponAim",
					{0.16069999,0.239375},
					1
				},
				
				{
					"WeaponAim",
					{0.125,0.270625},
					1
				},
				
				{
					"WeaponAim",
					{0.085500002,0.29365599},
					1
				},
				
				{
					"WeaponAim",
					{0.043400001,0.30774999},
					1
				},
				
				{
					"WeaponAim",
					{0,0.3125},
					1
				},
				
				{
					"WeaponAim",
					{-0.043400001,0.30774999},
					1
				},
				
				{
					"WeaponAim",
					{-0.085500002,0.29365599},
					1
				},
				
				{
					"WeaponAim",
					{-0.125,0.270625},
					1
				},
				
				{
					"WeaponAim",
					{-0.16069999,0.239375},
					1
				},
				
				{
					"WeaponAim",
					{-0.19149999,0.200875},
					1
				},
				
				{
					"WeaponAim",
					{-0.2165,0.15625},
					1
				},
				
				{
					"WeaponAim",
					{-0.234925,0.106875},
					1
				},
				
				{
					"WeaponAim",
					{-0.2462,0.054249998},
					1
				},
				
				{
					"WeaponAim",
					{-0.25,0},
					1
				},
				
				{
					"WeaponAim",
					{-0.2462,-0.054249998},
					1
				},
				
				{
					"WeaponAim",
					{-0.234925,-0.106875},
					1
				},
				
				{
					"WeaponAim",
					{-0.2165,-0.15625},
					1
				},
				
				{
					"WeaponAim",
					{-0.19149999,-0.200875},
					1
				},
				
				{
					"WeaponAim",
					{-0.16069999,-0.239375},
					1
				},
				
				{
					"WeaponAim",
					{-0.125,-0.270625},
					1
				},
				
				{
					"WeaponAim",
					{-0.085500002,-0.29365599},
					1
				},
				
				{
					"WeaponAim",
					{-0.043400001,-0.30774999},
					1
				},
				
				{
					"WeaponAim",
					{0,-0.3125},
					1
				}
			};
		};
	}; //AAMissileCrosshairGroup
	class ATMissileCrosshairGroup
	{
		condition="ATmissile";
		type="group";
		class ATMissileCrosshair
		{
			type="line";
			width=4;
			points[]=
			{
				
				{
					"WeaponAim",
					{-0.15000001,-0.15000001},
					1
				},
				
				{
					"WeaponAim",
					{-0.15000001,-0.13},
					1
				},
				{},
				
				{
					"WeaponAim",
					{-0.15000001,0.15000001},
					1
				},
				
				{
					"WeaponAim",
					{-0.15000001,0.13},
					1
				},
				{},
				
				{
					"WeaponAim",
					{0.15000001,-0.15000001},
					1
				},
				
				{
					"WeaponAim",
					{0.15000001,-0.13},
					1
				},
				{},
				
				{
					"WeaponAim",
					{0.15000001,0.15000001},
					1
				},
				
				{
					"WeaponAim",
					{0.15000001,0.13},
					1
				},
				{},
				
				{
					"WeaponAim",
					{-0.15000001,-0.15000001},
					1
				},
				
				{
					"WeaponAim",
					{-0.13,-0.15000001},
					1
				},
				{},
				
				{
					"WeaponAim",
					{-0.15000001,0.15000001},
					1
				},
				
				{
					"WeaponAim",
					{-0.13,0.15000001},
					1
				},
				{},
				
				{
					"WeaponAim",
					{0.15000001,-0.15000001},
					1
				},
				
				{
					"WeaponAim",
					{0.13,-0.15000001},
					1
				},
				{},
				
				{
					"WeaponAim",
					{0.15000001,0.15000001},
					1
				},
				
				{
					"WeaponAim",
					{0.13,0.15000001},
					1
				}
			};
		};
	}; //ATMissileCrosshairGroup
	class RocketCrosshairGroup
	{
		type="group";
		condition="Rocket";
		class MachineGunCrosshair
		{
			type="line";
			width=3;
			points[]=
			{
				
				{
					"ImpactPoint",
					{0,-0.050000001},
					1
				},
				
				{
					"ImpactPoint",
					{0,-0.025},
					1
				},
				{},
				
				{
					"ImpactPoint",
					{0,0.050000001},
					1
				},
				
				{
					"ImpactPoint",
					{0,0.025},
					1
				},
				{},
				
				{
					"ImpactPoint",
					{-0.039999999,0},
					1
				},
				
				{
					"ImpactPoint",
					{-0.02,0},
					1
				},
				{},
				
				{
					"ImpactPoint",
					{0.039999999,0},
					1
				},
				
				{
					"ImpactPoint",
					{0.02,0},
					1
				},
				{},
				
				{
					"ImpactPoint",
					{0.0099999998,-0.050000001},
					1
				},
				
				{
					"ImpactPoint",
					{-0.0099999998,-0.050000001},
					1
				},
				{},
				
				{
					"ImpactPoint",
					{0,-0.0024999999},
					1
				},
				
				{
					"ImpactPoint",
					{0,0.0024999999},
					1
				},
				{},
				
				{
					"ImpactPoint",
					{-0.0020000001,0},
					1
				},
				
				{
					"ImpactPoint",
					{0.0020000001,0},
					1
				},
				{}
			};
		};
		class Distance
		{
			type="text";
			source="ImpactDistance";
			sourceScale=0.001;
			sourcePrecision=1;
			max=15;
			align="center";
			scale=1;
			pos[]=
			{
				"ImpactPoint",
				{-0.0020000001,0.07},
				1
			};
			right[]=
			{
				"ImpactPoint",
				{0.045000002,0.07},
				1
			};
			down[]=
			{
				"ImpactPoint",
				{-0.0020000001,0.11},
				1
			};
		};
	}; //RocketCrosshairGroup
	class BombCrosshairCCRPGroup {
		type="group";
		condition="bomb*(user10>0)";
		class WPLine {
			width = 4;
			type = "line";
			points[] = {
				{"WPPoint", 1, "LimitWaypoint", 1, {0, 0}, 1},
				{"WPPoint", 1, "LimitWaypoint", 1, {"CCRPBankAngleWaypoint", 0, -1}, 1}
			};
		};
		class ReleaseLine {
			width = 4;
			type = "line";
			points[] = {
				{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {0, 0.01}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {0.0020791169081775932, 0.009781476007338056}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {0.0040673664307580015, 0.009135454576426009}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {0.0058778525229247315, 0.008090169943749474}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {0.007431448254773943, 0.0066913060635885825}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {0.008660254037844387, 0.005000000000000001}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {0.009510565162951536, 0.0030901699437494747}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {0.009945218953682734, 0.0010452846326765347}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {0.009945218953682734, -0.0010452846326765334}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {0.009510565162951536, -0.0030901699437494734}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {0.008660254037844387, -0.0049999999999999975}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {0.007431448254773943, -0.0066913060635885825}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {0.005877852522924732, -0.008090169943749474}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {0.004067366430758004, -0.009135454576426007}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {0.0020791169081775932, -0.009781476007338056}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {0, -0.01}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {-0.0020791169081775906, -0.009781476007338056}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {-0.004067366430757998, -0.00913545457642601}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {-0.005877852522924731, -0.008090169943749474}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {-0.00743144825477394, -0.006691306063588585}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {-0.008660254037844385, -0.0050000000000000044}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {-0.009510565162951536, -0.0030901699437494755}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {-0.009945218953682734, -0.0010452846326765336}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {-0.009945218953682734, 0.00104528463267653}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {-0.009510565162951536, 0.0030901699437494725}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {-0.008660254037844387, 0.005000000000000001}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {-0.007431448254773946, 0.006691306063588578}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {-0.005877852522924734, 0.008090169943749474}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {-0.0040673664307580015, 0.00913545457642601}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {-0.002079116908177599, 0.009781476007338056}, 1},{"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1, {0, 0.01}, 1}
			};
		};
		class WPDistance
		{
			type="text";
			source="WPDist";
			sourceScale=0.001;
			sourcePrecision=1;
			max=15;
			align="center";
			scale=1;
			pos[]=
			{
				"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1,{-0.0020000001+0.03,-0.02},1
			};
			right[]=
			{
				"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1,{0.045000002+0.03,-0.02},1
			};
			down[]=
			{
				"CCRPReticle", 1, "CCRPwaypointDist", 1, "CCRPimpactDist", 1,{-0.0020000001+0.03,0.02},1
			};
		};
		class Distance
		{
			type="text";
			source="ImpactDistance";
			sourceScale=0.001;
			sourcePrecision=1;
			max=15;
			align="center";
			scale=1;
			pos[]=
			{
				"CCRPReticle",
				{-0.0020000001,0.11},
				1
			};
			right[]=
			{
				"CCRPReticle",
				{0.045000002,0.11},
				1
			};
			down[]=
			{
				"CCRPReticle",
				{-0.0020000001,0.15000001},
				1
			};
		};
		class BombCrosshair
		{
			width=4;
			type="line";
			points[]=
			{
				
				{
					"CCRPReticle",
					{0,0.1125},
					1
				},
				
				{
					"CCRPReticle",
					{0,0.1},
					1
				},
				{},
				
				{
					"CCRPReticle",
					{-0.090000004,0},
					1
				},
				
				{
					"CCRPReticle",
					{-0.079999998,0},
					1
				},
				{},
				
				{
					"CCRPReticle",
					{0.090000004,0},
					1
				},
				
				{
					"CCRPReticle",
					{0.079999998,0},
					1
				},
				{},
				
				{
					"CCRPReticle",
					{0,-0.0024999999},
					1
				},
				
				{
					"CCRPReticle",
					{0,0.0024999999},
					1
				},
				{},
				
				{
					"CCRPReticle",
					{-0.0020000001,0},
					1
				},
				
				{
					"CCRPReticle",
					{0.0020000001,0},
					1
				},
				{},
				
				{
					"CCRPReticle",
					{0,-0.1},
					1
				},
				
				{
					"CCRPReticle",
					{0.013888,-0.098480001},
					1
				},
				
				{
					"CCRPReticle",
					{0.02736,-0.093970001},
					1
				},
				
				{
					"CCRPReticle",
					{0.039999999,-0.086599998},
					1
				},
				
				{
					"CCRPReticle",
					{0.051424,-0.0766},
					1
				},
				
				{
					"CCRPReticle",
					{0.061280001,-0.064280003},
					1
				},
				
				{
					"CCRPReticle",
					{0.069279999,-0.050000001},
					1
				},
				
				{
					"CCRPReticle",
					{0.075176001,-0.034200002},
					1
				},
				
				{
					"CCRPReticle",
					{0.078783996,-0.01736},
					1
				},
				
				{
					"CCRPReticle",
					{0.079999998,0},
					1
				},
				
				{
					"CCRPReticle",
					{0.078783996,0.01736},
					1
				},
				
				{
					"CCRPReticle",
					{0.075176001,0.034200002},
					1
				},
				
				{
					"CCRPReticle",
					{0.069279999,0.050000001},
					1
				},
				
				{
					"CCRPReticle",
					{0.061280001,0.064280003},
					1
				},
				
				{
					"CCRPReticle",
					{0.051424,0.0766},
					1
				},
				
				{
					"CCRPReticle",
					{0.039999999,0.086599998},
					1
				},
				
				{
					"CCRPReticle",
					{0.02736,0.093970001},
					1
				},
				
				{
					"CCRPReticle",
					{0.013888,0.098480001},
					1
				},
				
				{
					"CCRPReticle",
					{0,0.1},
					1
				},
				
				{
					"CCRPReticle",
					{-0.013888,0.098480001},
					1
				},
				
				{
					"CCRPReticle",
					{-0.02736,0.093970001},
					1
				},
				
				{
					"CCRPReticle",
					{-0.039999999,0.086599998},
					1
				},
				
				{
					"CCRPReticle",
					{-0.051424,0.0766},
					1
				},
				
				{
					"CCRPReticle",
					{-0.061280001,0.064280003},
					1
				},
				
				{
					"CCRPReticle",
					{-0.069279999,0.050000001},
					1
				},
				
				{
					"CCRPReticle",
					{-0.075176001,0.034200002},
					1
				},
				
				{
					"CCRPReticle",
					{-0.078783996,0.01736},
					1
				},
				
				{
					"CCRPReticle",
					{-0.079999998,0},
					1
				},
				
				{
					"CCRPReticle",
					{-0.078783996,-0.01736},
					1
				},
				
				{
					"CCRPReticle",
					{-0.075176001,-0.034200002},
					1
				},
				
				{
					"CCRPReticle",
					{-0.069279999,-0.050000001},
					1
				},
				
				{
					"CCRPReticle",
					{-0.061280001,-0.064280003},
					1
				},
				
				{
					"CCRPReticle",
					{-0.051424,-0.0766},
					1
				},
				
				{
					"CCRPReticle",
					{-0.039999999,-0.086599998},
					1
				},
				
				{
					"CCRPReticle",
					{-0.02736,-0.093970001},
					1
				},
				
				{
					"CCRPReticle",
					{-0.013888,-0.098480001},
					1
				},
				
				{
					"CCRPReticle",
					{0,-0.1},
					1
				},
				{},
				
				{
					"CCRPReticle",
					{0,-0.1},
					1
				},
				{
					"CCRPReticle",
					{0,-1},
					1
				},
			};
		};
	}; //
	class BombCrosshairGroup
	{
		type="group";
		condition="bomb*(user10<1)";
		class BombCrosshair
		{
			width=4;
			type="line";
			points[]=
			{
				
				{
					"ImpactPoint",
					{0,0.1125},
					1
				},
				
				{
					"ImpactPoint",
					{0,0.1},
					1
				},
				{},
				
				{
					"ImpactPoint",
					{-0.090000004,0},
					1
				},
				
				{
					"ImpactPoint",
					{-0.079999998,0},
					1
				},
				{},
				
				{
					"ImpactPoint",
					{0.090000004,0},
					1
				},
				
				{
					"ImpactPoint",
					{0.079999998,0},
					1
				},
				{},
				
				{
					"ImpactPoint",
					{0,-0.0024999999},
					1
				},
				
				{
					"ImpactPoint",
					{0,0.0024999999},
					1
				},
				{},
				
				{
					"ImpactPoint",
					{-0.0020000001,0},
					1
				},
				
				{
					"ImpactPoint",
					{0.0020000001,0},
					1
				},
				{},
				
				{
					"ImpactPoint",
					{0,-0.1},
					1
				},
				
				{
					"ImpactPoint",
					{0.013888,-0.098480001},
					1
				},
				
				{
					"ImpactPoint",
					{0.02736,-0.093970001},
					1
				},
				
				{
					"ImpactPoint",
					{0.039999999,-0.086599998},
					1
				},
				
				{
					"ImpactPoint",
					{0.051424,-0.0766},
					1
				},
				
				{
					"ImpactPoint",
					{0.061280001,-0.064280003},
					1
				},
				
				{
					"ImpactPoint",
					{0.069279999,-0.050000001},
					1
				},
				
				{
					"ImpactPoint",
					{0.075176001,-0.034200002},
					1
				},
				
				{
					"ImpactPoint",
					{0.078783996,-0.01736},
					1
				},
				
				{
					"ImpactPoint",
					{0.079999998,0},
					1
				},
				
				{
					"ImpactPoint",
					{0.078783996,0.01736},
					1
				},
				
				{
					"ImpactPoint",
					{0.075176001,0.034200002},
					1
				},
				
				{
					"ImpactPoint",
					{0.069279999,0.050000001},
					1
				},
				
				{
					"ImpactPoint",
					{0.061280001,0.064280003},
					1
				},
				
				{
					"ImpactPoint",
					{0.051424,0.0766},
					1
				},
				
				{
					"ImpactPoint",
					{0.039999999,0.086599998},
					1
				},
				
				{
					"ImpactPoint",
					{0.02736,0.093970001},
					1
				},
				
				{
					"ImpactPoint",
					{0.013888,0.098480001},
					1
				},
				
				{
					"ImpactPoint",
					{0,0.1},
					1
				},
				
				{
					"ImpactPoint",
					{-0.013888,0.098480001},
					1
				},
				
				{
					"ImpactPoint",
					{-0.02736,0.093970001},
					1
				},
				
				{
					"ImpactPoint",
					{-0.039999999,0.086599998},
					1
				},
				
				{
					"ImpactPoint",
					{-0.051424,0.0766},
					1
				},
				
				{
					"ImpactPoint",
					{-0.061280001,0.064280003},
					1
				},
				
				{
					"ImpactPoint",
					{-0.069279999,0.050000001},
					1
				},
				
				{
					"ImpactPoint",
					{-0.075176001,0.034200002},
					1
				},
				
				{
					"ImpactPoint",
					{-0.078783996,0.01736},
					1
				},
				
				{
					"ImpactPoint",
					{-0.079999998,0},
					1
				},
				
				{
					"ImpactPoint",
					{-0.078783996,-0.01736},
					1
				},
				
				{
					"ImpactPoint",
					{-0.075176001,-0.034200002},
					1
				},
				
				{
					"ImpactPoint",
					{-0.069279999,-0.050000001},
					1
				},
				
				{
					"ImpactPoint",
					{-0.061280001,-0.064280003},
					1
				},
				
				{
					"ImpactPoint",
					{-0.051424,-0.0766},
					1
				},
				
				{
					"ImpactPoint",
					{-0.039999999,-0.086599998},
					1
				},
				
				{
					"ImpactPoint",
					{-0.02736,-0.093970001},
					1
				},
				
				{
					"ImpactPoint",
					{-0.013888,-0.098480001},
					1
				},
				
				{
					"ImpactPoint",
					{0,-0.1},
					1
				},
				{},
				{},
				
				{
					"ImpactPoint",
					-1,
					"Velocity",
					1,
					"NormalizeBombCircle",
					1,
					"ImpactPoint",
					1,
					{0,0},
					1
				},
				
				{
					"Velocity",
					1,
					"Limit0109",
					1,
					{0,0},
					1
				}
			};
		};
		class Circle
		{
			type="line";
			width=6;
			points[]=
			{
				
				{
					"ImpactPoint",
					{0,-0.079999998},
					1
				},
				
				{
					"ImpactPoint",
					{0,-0.1},
					1
				},
				
				{
					"MissileFlightTimeRot1",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot2",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot3",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot4",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot5",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot6",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot7",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot8",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot9",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot10",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot11",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot12",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot13",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot14",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot15",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot16",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot17",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot18",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot19",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot20",
					{0,0.079999998},
					1,
					"ImpactPoint",
					1
				},
				
				{
					"MissileFlightTimeRot20",
					{0,0.064000003},
					1,
					"ImpactPoint",
					1
				}
			};
		};
		class Distance
		{
			type="text";
			source="ImpactDistance";
			sourceScale=0.001;
			sourcePrecision=1;
			max=15;
			align="center";
			scale=1;
			pos[]=
			{
				"ImpactPoint",
				{-0.0020000001,0.11},
				1
			};
			right[]=
			{
				"ImpactPoint",
				{0.045000002,0.11},
				1
			};
			down[]=
			{
				"ImpactPoint",
				{-0.0020000001,0.15000001},
				1
			};
		};
	};
	class WeaponName
	{
		type="text";
		source="weapon";
		sourceScale=1;
		align="right";
		scale=1;
		pos[]=
		{
			{0.050000001,0.85000002},
			1
		};
		right[]=
		{
			{0.090000004,0.85000002},
			1
		};
		down[]=
		{
			{0.050000001,0.88999999},
			1
		};
	};
	class AmmoCount
	{
		type="text";
		source="ammo";
		sourceScale=1;
		align="left";
		scale=1;
		pos[]=
		{
			{0.94999999,0.85000002},
			1
		};
		right[]=
		{
			{0.99000001,0.85000002},
			1
		};
		down[]=
		{
			{0.94999999,0.88999999},
			1
		};
	};
	class StallGroup
	{
		type="group";
		condition="stall";
		color[]={1,0,0};
		blinkingPattern[]={0.2,0.2};
		blinkingStartsOn=1;
		class StallText
		{
			type="text";
			source="static";
			text="STALL";
			align="center";
			scale=1;
			pos[]=
			{
				{0.5,0.25},
				1
			};
			right[]=
			{
				{0.54000002,0.25},
				1
			};
			down[]=
			{
				{0.5,0.28999999},
				1
			};
		};
	};
	class PitchNumber
	{
		type="text";
		source="horizonDive";
		sourceScale=57.29578;
		align="right";
		scale=1;
		pos[]=
		{
			{0.13,0.22499999},
			1
		};
		right[]=
		{
			{0.17,0.22499999},
			1
		};
		down[]=
		{
			{0.13,0.26499999},
			1
		};
	};
	class PitchText
	{
		type="text";
		source="static";
		text="PITCH";
		align="left";
		scale=1;
		pos[]=
		{
			{0.11,0.22499999},
			1
		};
		right[]=
		{
			{0.15000001,0.22499999},
			1
		};
		down[]=
		{
			{0.11,0.26499999},
			1
		};
	};
	class RollNumber
	{
		type="text";
		source="horizonBank";
		sourceScale=57.29578;
		align="right";
		scale=1;
		pos[]=
		{
			{0.13,0.27000001},
			1
		};
		right[]=
		{
			{0.17,0.27000001},
			1
		};
		down[]=
		{
			{0.13,0.31},
			1
		};
	};
	class RollText
	{
		type="text";
		source="static";
		text="ROLL";
		align="left";
		scale=1;
		pos[]=
		{
			{0.11,0.27000001},
			1
		};
		right[]=
		{
			{0.15000001,0.27000001},
			1
		};
		down[]=
		{
			{0.11,0.31},
			1
		};
	};
	class SpeedNumber
	{
		type="text";
		source="speed";
		sourceScale=3.5999999;
		align="right";
		scale=1;
		pos[]=
		{
			{0.13,0.36000001},
			1
		};
		right[]=
		{
			{0.17,0.36000001},
			1
		};
		down[]=
		{
			{0.13,0.40000001},
			1
		};
	};
	class SpeedText
	{
		type="text";
		source="static";
		text="SPEED";
		align="left";
		scale=1;
		pos[]=
		{
			{0.11,0.36000001},
			1
		};
		right[]=
		{
			{0.15000001,0.36000001},
			1
		};
		down[]=
		{
			{0.11,0.40000001},
			1
		};
	};
	class SpeedSeparator
	{
		type="line";
		width=2;
		points[]=
		{
			
			{
				{0.12,0.22499999},
				1
			},
			
			{
				{0.12,0.63300002},
				1
			}
		};
	};
	class FlapsGroup
	{
		type="group";
		condition="flaps";
		class FlapsText
		{
			type="text";
			source="static";
			text="FLAPS";
			align="left";
			scale=1;
			pos[]=
			{
				{0.11,0.44999999},
				1
			};
			right[]=
			{
				{0.15000001,0.44999999},
				1
			};
			down[]=
			{
				{0.11,0.49000001},
				1
			};
		};
	};
	class GearGroup
	{
		type="group";
		condition="ils";
		class GearText
		{
			type="text";
			source="static";
			text="GEAR";
			align="left";
			scale=1;
			pos[]=
			{
				{0.11,0.495},
				1
			};
			right[]=
			{
				{0.15000001,0.495},
				1
			};
			down[]=
			{
				{0.11,0.53500003},
				1
			};
		};
	};
	class ILS
	{
		condition="ils";
		class Glideslope
		{
			clipTL[]={0,0};
			clipBR[]={1,1};
			class ILS
			{
				type="line";
				points[]=
				{
					
					{
						"ILS_W",
						{-0.23999999,0},
						1
					},
					
					{
						"ILS_W",
						{0.23999999,0},
						1
					},
					{},
					
					{
						"ILS_W",
						{-0.23999999,-0.029999999},
						1
					},
					
					{
						"ILS_W",
						{-0.23999999,0.029999999},
						1
					},
					{},
					
					{
						"ILS_W",
						{-0.12,-0.022500001},
						1
					},
					
					{
						"ILS_W",
						{-0.12,0.022500001},
						1
					},
					{},
					
					{
						"ILS_W",
						{0,-0.029999999},
						1
					},
					
					{
						"ILS_W",
						{0,0.029999999},
						1
					},
					{},
					
					{
						"ILS_W",
						{0.12,-0.022500001},
						1
					},
					
					{
						"ILS_W",
						{0.12,0.022500001},
						1
					},
					{},
					
					{
						"ILS_W",
						{0.23999999,-0.029999999},
						1
					},
					
					{
						"ILS_W",
						{0.23999999,0.029999999},
						1
					},
					{},
					
					{
						"ILS_H",
						{0,-0.30000001},
						1
					},
					
					{
						"ILS_H",
						{0,0.30000001},
						1
					},
					{},
					
					{
						"ILS_H",
						{-0.024,-0.30000001},
						1
					},
					
					{
						"ILS_H",
						{0.024,-0.30000001},
						1
					},
					{},
					
					{
						"ILS_H",
						{-0.017999999,-0.15000001},
						1
					},
					
					{
						"ILS_H",
						{0.017999999,-0.15000001},
						1
					},
					{},
					
					{
						"ILS_H",
						{-0.024,0},
						1
					},
					
					{
						"ILS_H",
						{0.024,0},
						1
					},
					{},
					
					{
						"ILS_H",
						{-0.017999999,0.15000001},
						1
					},
					
					{
						"ILS_H",
						{0.017999999,0.15000001},
						1
					},
					{},
					
					{
						"ILS_H",
						{-0.024,0.30000001},
						1
					},
					
					{
						"ILS_H",
						{0.024,0.30000001},
						1
					}
				};
			};
			class airport
			{
				type="line";
				points[]=
				{
					
					{
						"airport1",
						1
					},
					
					{
						"airport2",
						1
					},
					
					{
						"airport4",
						1
					},
					
					{
						"airport3",
						1
					},
					
					{
						"airport1",
						1
					}
				};
			};
		};
	};
	class LightsGroup
	{
		type="group";
		condition="lights";
		class LightsText
		{
			type="text";
			source="static";
			text="LLS";
			align="left";
			scale=1;
			pos[]=
			{
				{0.11,0.54000002},
				1
			};
			right[]=
			{
				{0.15000001,0.54000002},
				1
			};
			down[]=
			{
				{0.11,0.57999998},
				1
			};
		};
	};
	class CollisionLightsGroup
	{
		type="group";
		condition="collisionlights";
		class CollisionLightsText
		{
			type="text";
			source="static";
			text="COLL";
			align="left";
			scale=1;
			pos[]=
			{
				{0.11,0.58499998},
				1
			};
			right[]=
			{
				{0.15000001,0.58499998},
				1
			};
			down[]=
			{
				{0.11,0.625},
				1
			};
		};
	};
	class Climb
	{
		type="line";
		width=1;
		points[]=
		{
			
			{
				"VerticalSpeed",
				{0.875,0.22},
				1
			},
			
			{
				"VerticalSpeed",
				{0.875,0.54000002},
				1
			},
			{},
			
			{
				"VerticalSpeed",
				{0.86900002,0.23},
				1
			},
			
			{
				"VerticalSpeed",
				{0.87400001,0.23},
				1
			},
			{},
			
			{
				"VerticalSpeed",
				{0.86500001,0.25999999},
				1
			},
			
			{
				"VerticalSpeed",
				{0.87400001,0.25999999},
				1
			},
			{},
			
			{
				"VerticalSpeed",
				{0.86500001,0.28999999},
				1
			},
			
			{
				"VerticalSpeed",
				{0.87400001,0.28999999},
				1
			},
			{},
			
			{
				"VerticalSpeed",
				{0.86500001,0.31999999},
				1
			},
			
			{
				"VerticalSpeed",
				{0.87400001,0.31999999},
				1
			},
			{},
			
			{
				"VerticalSpeed",
				{0.86500001,0.34999999},
				1
			},
			
			{
				"VerticalSpeed",
				{0.87400001,0.34999999},
				1
			},
			{},
			
			{
				"VerticalSpeed",
				{0.85500002,0.38},
				1
			},
			
			{
				"VerticalSpeed",
				{0.87400001,0.38},
				1
			},
			{},
			
			{
				"VerticalSpeed",
				{0.87400001,0.41},
				1
			},
			
			{
				"VerticalSpeed",
				{0.86500001,0.41},
				1
			},
			{},
			
			{
				"VerticalSpeed",
				{0.87400001,0.44},
				1
			},
			
			{
				"VerticalSpeed",
				{0.86500001,0.44},
				1
			},
			{},
			
			{
				"VerticalSpeed",
				{0.87400001,0.47},
				1
			},
			
			{
				"VerticalSpeed",
				{0.86500001,0.47},
				1
			},
			{},
			
			{
				"VerticalSpeed",
				{0.87400001,0.5},
				1
			},
			
			{
				"VerticalSpeed",
				{0.86500001,0.5},
				1
			},
			{},
			
			{
				"VerticalSpeed",
				{0.87400001,0.52999997},
				1
			},
			
			{
				"VerticalSpeed",
				{0.86900002,0.52999997},
				1
			}
		};
	};
	class ClimbMinGroup
	{
		type="group";
		clipTL[]={0,0.40000001};
		clipBR[]={1,0.75999999};
		class ClimbMin
		{
			type="text";
			source="static";
			text="-100";
			align="left";
			scale=1;
			pos[]=
			{
				"VerticalSpeed",
				{0.866,0.51749998},
				1
			};
			right[]=
			{
				"VerticalSpeed",
				{0.89099997,0.51749998},
				1
			};
			down[]=
			{
				"VerticalSpeed",
				{0.866,0.54250002},
				1
			};
		};
	};
	class ClimbMaxGroup
	{
		type="group";
		clipTL[]={0,0};
		clipBR[]={1,0.36000001};
		class ClimbMax
		{
			type="text";
			source="static";
			text="100";
			align="left";
			scale=1;
			pos[]=
			{
				"VerticalSpeed",
				{0.866,0.2175},
				1
			};
			right[]=
			{
				"VerticalSpeed",
				{0.89099997,0.2175},
				1
			};
			down[]=
			{
				"VerticalSpeed",
				{0.866,0.24250001},
				1
			};
		};
	};
	class ClimbText
	{
		type="text";
		source="static";
		text="CLIMB";
		align="left";
		scale=1;
		pos[]=
		{
			{0.87,0.72100002},
			1
		};
		right[]=
		{
			{0.89499998,0.72100002},
			1
		};
		down[]=
		{
			{0.87,0.74599999},
			1
		};
	};
	class TerrainGroup
	{
		type="group";
		clipTL[]={0,0};
		clipBR[]={1,0.69999999};
		class TerrainLine
		{
			type="line";
			width=1;
			points[]=
			{
				
				{
					"TerrainBone",
					{0.74000001,0},
					1
				},
				
				{
					"TerrainBone",
					{0.90899998,0},
					1
				}
			};
		};
		class TerrainText
		{
			type="text";
			source="static";
			text="TERRAIN";
			align="right";
			scale=1;
			pos[]=
			{
				"TerrainBone",
				{0.74000001,0.003},
				1
			};
			right[]=
			{
				"TerrainBone",
				{0.76499999,0.003},
				1
			};
			down[]=
			{
				"TerrainBone",
				{0.74000001,0.028000001},
				1
			};
		};
		class TerrainNumber
		{
			type="text";
			source="altitudeAGL";
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=
			{
				"TerrainBone",
				{0.74000001,-0.043000001},
				1
			};
			right[]=
			{
				"TerrainBone",
				{0.77999997,-0.043000001},
				1
			};
			down[]=
			{
				"TerrainBone",
				{0.74000001,-0.003},
				1
			};
		};
	};
	class AltitudeNumber
	{
		type="text";
		source="altitudeASL";
		sourceScale=1;
		align="left";
		scale=1;
		pos[]=
		{
			{0.84500003,0.36000001},
			1
		};
		right[]=
		{
			{0.88499999,0.36000001},
			1
		};
		down[]=
		{
			{0.84500003,0.40000001},
			1
		};
	};
	class AltitudeText
	{
		type="text";
		source="static";
		text="ASL";
		align="right";
		scale=1;
		pos[]=
		{
			{0.88,0.72000003},
			1
		};
		right[]=
		{
			{0.92000002,0.72000003},
			1
		};
		down[]=
		{
			{0.88,0.75999999},
			1
		};
	};
	class AltitudeArrow
	{
		type="line";
		width=3;
		points[]=
		{
			
			{
				{0.85699999,0.36399999},
				1
			},
			
			{
				{0.875,0.38},
				1
			},
			
			{
				{0.85699999,0.396},
				1
			},
			{},
			
			{
				{0.898,0.36399999},
				1
			},
			
			{
				{0.88,0.38},
				1
			},
			
			{
				{0.898,0.396},
				1
			}
		};
	};
	class AltitudeScale
	{
		type="scale";
		horizontal=0;
		source="altitudeASL";
		sourceScale=1;
		min=0;
		width=4;
		top=0.70999998;
		center=0.38;
		bottom=0.050000001;
		lineXleft=0.88;
		lineYright=0.88999999;
		lineXleftMajor=0.88;
		lineYrightMajor=0.89999998;
		majorLineEach=5;
		numberEach=10;
		step=10;
		stepSize=0.025;
		align="right";
		scale=1;
		pos[]={0.91000003,0.69};
		right[]={0.94999999,0.69};
		down[]={0.91000003,0.73000002};
	};
	class HeadingArrows
	{
		type="line";
		width=3;
		points[]=
		{
			
			{
				{0.484,0.89700001},
				1
			},
			
			{
				{0.5,0.91500002},
				1
			},
			
			{
				{0.51599997,0.89700001},
				1
			},
			{},
			
			{
				"WPPoint",
				1,
				"LimitWaypoint",
				1,
				{-0.016000001,0.017999999},
				1
			},
			
			{
				"WPPoint",
				1,
				"LimitWaypoint",
				1,
				{0,0},
				1
			},
			
			{
				"WPPoint",
				1,
				"LimitWaypoint",
				1,
				{0.016000001,0.017999999},
				1
			}
		};
	};
	class HeadingScale
	{
		type="scale";
		horizontal=1;
		source="heading";
		sourceScale=1;
		width=4;
		top=0.050000001;
		center=0.5;
		bottom=0.94999999;
		lineXleft=0.93000001;
		lineYright=0.92000002;
		lineXleftMajor=0.94;
		lineYrightMajor=0.92000002;
		majorLineEach=3;
		numberEach=9;
		step=5;
		stepSize=0.02;
		align="center";
		scale=1;
		pos[]={0.050000001,0.94};
		right[]={0.090000004,0.94};
		down[]={0.050000001,0.98000002};
	};
	class WP
	{
		condition="wpvalid";
		class WPdist
		{
			type="text";
			source="wpdist";
			sourceScale=0.001;
			sourcePrecision=1;
			align="right";
			scale=1;
			pos[]=
			{
				{0.054000001,0.74062502},
				1
			};
			down[]=
			{
				{0.054000001,0.78812498},
				1
			};
			right[]=
			{
				{0.093999997,0.74062502},
				1
			};
		};
		class WPIndex
		{
			type="text";
			source="wpIndex";
			sourceScale=1;
			sourceLength=2;
			align="right";
			scale=1;
			pos[]=
			{
				{0.107,0.708125},
				1
			};
			right[]=
			{
				{0.147,0.708125},
				1
			};
			down[]=
			{
				{0.107,0.75562501},
				1
			};
		};
		class WPstatic
		{
			type="text";
			source="static";
			text="WP";
			scale=1;
			sourceScale=1;
			align="right";
			pos[]=
			{
				
				{
					"0.045+0.01",
					0.71350002
				},
				1
			};
			right[]=
			{
				{0.094999999,0.71350002},
				1
			};
			down[]=
			{
				
				{
					"0.045+0.01",
					0.75349998
				},
				1
			};
		};
		class WPKM
		{
			type="text";
			source="static";
			text="KM";
			scale=1;
			sourceScale=1;
			align="right";
			pos[]=
			{
				
				{
					"0.045+0.05",
					0.75050002
				},
				1
			};
			right[]=
			{
				{0.13500001,0.75050002},
				1
			};
			down[]=
			{
				
				{
					"0.045+0.05",
					0.78549999
				},
				1
			};
		};
	};
	class HorizontalLine
	{
		clipTL[]={0.2,0};
		clipBR[]={0.80000001,0.75999999};
		class HorizontalLineDraw
		{
			type="line";
			source="Level0";
			points[]=
			{
				
				{
					"Level0",
					{-0.22499999,0},
					1
				},
				
				{
					"Level0",
					{-0.1875,0},
					1
				},
				{},
				
				{
					"Level0",
					{-0.15000001,0},
					1
				},
				
				{
					"Level0",
					{-0.1125,0},
					1
				},
				{},
				
				{
					"Level0",
					{-0.075000003,0},
					1
				},
				
				{
					"Level0",
					{-0.037500001,0},
					1
				},
				{},
				
				{
					"Level0",
					{0.037500001,0},
					1
				},
				
				{
					"Level0",
					{0.075000003,0},
					1
				},
				{},
				
				{
					"Level0",
					{0.1125,0},
					1
				},
				
				{
					"Level0",
					{0.15000001,0},
					1
				},
				{},
				
				{
					"Level0",
					{0.1875,0},
					1
				},
				
				{
					"Level0",
					{0.22499999,0},
					1
				}
			};
		};
	};
	class HorizonIndicatorBackground
	{
		type="line";
		width=1;
		points[]=
		{
			
			{
				{0.00059999502,0.12},
				1
			},
			
			{
				{0.1294,0.12},
				1
			}
		};
	};
	class HorizonIndicator
	{
		type="line";
		width=4;
		points[]=
		{
			
			{
				"HorizonIndicatorBank",
				{-0.055199999,0},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{-0.046,0},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{-0.045434199,0.0079856003},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{-0.043226201,0.015732},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{-0.039836001,0.023},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{-0.035236001,0.029568801},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{-0.029568801,0.035236001},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{-0.023,0.039836001},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{-0.015732,0.043226201},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{-0.0079856003,0.045434199},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{0,0.046},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{0.0079856003,0.045434199},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{0.015732,0.043226201},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{0.023,0.039836001},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{0.029568801,0.035236001},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{0.035236001,0.029568801},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{0.039836001,0.023},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{0.043226201,0.015732},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{0.045434199,0.0079856003},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{0.046,0},
				1
			},
			
			{
				"HorizonIndicatorBank",
				{0.055199999,0},
				1
			}
		};
	};
	class RadarBoxes
	{
		type="radar";
		pos0[]={0.498,0.38};
		pos10[]={1.166,1.215};
		width=4;
		points[]=
		{
			
			{
				{-0.0020000001,-0.0024999999},
				1
			},
			
			{
				{0.0020000001,-0.0024999999},
				1
			},
			
			{
				{0.0020000001,0.0024999999},
				1
			},
			
			{
				{-0.0020000001,0.0024999999},
				1
			},
			
			{
				{-0.0020000001,-0.0024999999},
				1
			}
		};
	};
	class TargetDiamond
	{
		class shape
		{
			type="line";
			width=4;
			points[]=
			{
				
				{
					"Target",
					1,
					"Limit0109",
					1,
					{0.02,0.025},
					1
				},
				
				{
					"Target",
					1,
					"Limit0109",
					1,
					{-0.02,0.025},
					1
				},
				
				{
					"Target",
					1,
					"Limit0109",
					1,
					{-0.02,-0.025},
					1
				},
				
				{
					"Target",
					1,
					"Limit0109",
					1,
					{0.02,-0.025},
					1
				},
				
				{
					"Target",
					1,
					"Limit0109",
					1,
					{0.02,0.025},
					1
				}
			};
		};
	};
	class TargetLocked
	{
		condition="missilelocked";
		class shape
		{
			type="line";
			width=4;
			points[]=
			{
				
				{
					"Target",
					1,
					"Limit0109",
					1,
					{0,-0.037500001},
					1
				},
				
				{
					"Target",
					1,
					"Limit0109",
					1,
					{0.029999999,0},
					1
				},
				
				{
					"Target",
					1,
					"Limit0109",
					1,
					{0,0.037500001},
					1
				},
				
				{
					"Target",
					1,
					"Limit0109",
					1,
					{-0.029999999,0},
					1
				},
				
				{
					"Target",
					1,
					"Limit0109",
					1,
					{0,-0.037500001},
					1
				}
			};
		};
	};
	class TargetingPodGroup
	{
		condition="1-pilotcameralock";
		class TargetingPodDir
		{
			type="line";
			width=3;
			points[]=
			{
				
				{
					"TargetingPodDir",
					1,
					{0.020805599,0.0051731099},
					1
				},
				
				{
					"TargetingPodDir",
					1,
					{0.020805599,-0.0051731099},
					1
				},
				{},
				
				{
					"TargetingPodDir",
					1,
					{0.0176381,-0.0147318},
					1
				},
				
				{
					"TargetingPodDir",
					1,
					{0.0117854,-0.0220477},
					1
				},
				{},
				
				{
					"TargetingPodDir",
					1,
					{0.0041384902,-0.026007},
					1
				},
				
				{
					"TargetingPodDir",
					1,
					{-0.0041384902,-0.026007},
					1
				},
				{},
				
				{
					"TargetingPodDir",
					1,
					{-0.0117854,-0.0220477},
					1
				},
				
				{
					"TargetingPodDir",
					1,
					{-0.0176381,-0.0147318},
					1
				},
				{},
				
				{
					"TargetingPodDir",
					1,
					{-0.020805599,-0.0051731099},
					1
				},
				
				{
					"TargetingPodDir",
					1,
					{-0.020805599,0.0051731202},
					1
				},
				{},
				
				{
					"TargetingPodDir",
					1,
					{-0.0176381,0.0147318},
					1
				},
				
				{
					"TargetingPodDir",
					1,
					{-0.0117854,0.0220477},
					1
				},
				{},
				
				{
					"TargetingPodDir",
					1,
					{-0.0041384902,0.026007},
					1
				},
				
				{
					"TargetingPodDir",
					1,
					{0.0041384902,0.026007},
					1
				},
				{},
				
				{
					"TargetingPodDir",
					1,
					{0.0117854,0.0220477},
					1
				},
				
				{
					"TargetingPodDir",
					1,
					{0.0176381,0.0147318},
					1
				},
				{},
				
				{
					"TargetingPodDir",
					1,
					{0.020805599,0.0051731002},
					1
				},
				
				{
					"TargetingPodDir",
					1,
					{0.020805599,-0.0051731202},
					1
				},
				{},
				
				{
					"TargetingPodDir",
					1,
					{0.0176381,-0.0147318},
					1
				},
				
				{
					"TargetingPodDir",
					1,
					{0.0117854,-0.0220477},
					1
				},
				{},
				
				{
					"TargetingPodDir",
					1,
					{0.0041384902,-0.026007},
					1
				},
				
				{
					"TargetingPodDir",
					1,
					{-0.0041385,-0.026007},
					1
				},
				{},
				
				{
					"TargetingPodDir",
					1,
					{-0.0117854,-0.0220477},
					1
				},
				
				{
					"TargetingPodDir",
					1,
					{-0.0176381,-0.0147318},
					1
				},
				{},
				{}
			};
		};
	};
	class TargetingPodGroupOn
	{
		condition="pilotcameralock";
		class TargetingPodDir
		{
			type="line";
			width=3;
			points[]=
			{
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{0.020805599,0.0051731099},
					1
				},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{0.020805599,-0.0051731099},
					1
				},
				{},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{0.0176381,-0.0147318},
					1
				},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{0.0117854,-0.0220477},
					1
				},
				{},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{0.0041384902,-0.026007},
					1
				},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{-0.0041384902,-0.026007},
					1
				},
				{},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{-0.0117854,-0.0220477},
					1
				},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{-0.0176381,-0.0147318},
					1
				},
				{},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{-0.020805599,-0.0051731099},
					1
				},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{-0.020805599,0.0051731202},
					1
				},
				{},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{-0.0176381,0.0147318},
					1
				},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{-0.0117854,0.0220477},
					1
				},
				{},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{-0.0041384902,0.026007},
					1
				},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{0.0041384902,0.026007},
					1
				},
				{},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{0.0117854,0.0220477},
					1
				},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{0.0176381,0.0147318},
					1
				},
				{},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{0.020805599,0.0051731002},
					1
				},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{0.020805599,-0.0051731202},
					1
				},
				{},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{0.0176381,-0.0147318},
					1
				},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{0.0117854,-0.0220477},
					1
				},
				{},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{0.0041384902,-0.026007},
					1
				},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{-0.0041385,-0.026007},
					1
				},
				{},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{-0.0117854,-0.0220477},
					1
				},
				
				{
					"TargetingPodTarget",
					1,
					"Limit0109",
					1,
					{-0.0176381,-0.0147318},
					1
				},
				{},
				{}
			};
		};
	};
	class LAR
	{
		type="group";
		condition="(AAmissile + missilelocked)/2";
		class Lines
		{
			type="line";
			width=4;
			points[]=
			{
				
				{
					{0.20999999,0.55000001},
					1
				},
				
				{
					{0.19,0.55000001},
					1
				},
				
				{
					{0.19,0.76999998},
					1
				},
				
				{
					{0.20999999,0.76999998},
					1
				},
				{},
				
				{
					{0.20999999,0.71499997},
					1
				},
				
				{
					{0.19,0.71499997},
					1
				},
				{},
				
				{
					{0.20999999,0.66000003},
					1
				},
				
				{
					{0.19,0.66000003},
					1
				},
				{},
				
				{
					{0.20999999,0.60500002},
					1
				},
				
				{
					{0.19,0.60500002},
					1
				},
				{},
				
				{
					"LarTargetDist",
					-0.22,
					{0.17,0.79000002},
					1
				},
				
				{
					"LarTargetDist",
					-0.22,
					{0.19,0.76999998},
					1
				},
				
				{
					"LarTargetDist",
					-0.22,
					{0.17,0.75},
					1
				},
				{}
			};
		};
		class Poly
		{
			type="polygon";
			points[]=
			{
				
				{
					
					{
						"LarAmmoMin",
						-0.22,
						{0.191,0.76999998},
						1
					},
					
					{
						"LarAmmoMax",
						-0.22,
						{0.191,0.76999998},
						1
					},
					
					{
						"LarAmmoMax",
						-0.22,
						{0.208,0.76999998},
						1
					},
					
					{
						"LarAmmoMin",
						-0.22,
						{0.208,0.76999998},
						1
					}
				}
			};
		};
		class TopText
		{
			type="text";
			source="LarTop";
			sourceScale=0.001;
			scale=1;
			pos[]=
			{
				{0.22,0.52999997},
				1
			};
			right[]=
			{
				{0.25999999,0.52999997},
				1
			};
			down[]=
			{
				{0.22,0.56999999},
				1
			};
			align="right";
		};
		class MiddleText: TopText
		{
			source="LarTop";
			sourcePrecision=-1;
			sourceScale=0.00050000002;
			pos[]=
			{
				{0.22,0.63999999},
				1
			};
			right[]=
			{
				{0.25999999,0.63999999},
				1
			};
			down[]=
			{
				{0.22,0.68000001},
				1
			};
		};
		class SpeedText: TopText
		{
			source="LarTargetSpeed";
			align="left";
			sourceScale=3.5999999;
			pos[]=
			{
				"LarTargetDist",
				-0.22,
				{0.16,0.75},
				1
			};
			right[]=
			{
				"LarTargetDist",
				-0.22,
				{0.2,0.75},
				1
			};
			down[]=
			{
				"LarTargetDist",
				-0.22,
				{0.16,0.79000002},
				1
			};
		};
	};
};