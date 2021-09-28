borderBottom = 0.2;
borderLeft = 0.2;
borderRight = 0.2;
borderTop = 0.2;
color[] = {0.082,0.608,0.039,1};
enableParallax = 0;
helmetDown[] = {0,-0.065,0};
helmetMountedDisplay = 1;
helmetPosition[] = {-0.0325,0.0325,0.1};
helmetRight[] = {0.065,0,0};
topLeft = ""; // not used because HMD, but still needed
topRight = ""; // not used because HMD, but still needed
bottomLeft = ""; // not used because HMD, but still needed
turret[] = {-1};
font="RobotoCondensedLight";
class material {
	ambient[] = {1, 1, 1, 1};
	diffuse[] = {0.5, 0.5, 0.5, 1};
	emissive[] = {100, 100, 100, 50};
};
class Bones {
	#define POS10X 0.765
	#define POS10Y 0.76
	class WPPoint
	{
		type = "vector";
		source = "wppointtoview";
		pos0[] = {0.5, 0.5};
		pos10[] = {POS10X, POS10Y};
	}; // WPPoint
	class WP_DIR_BONE
	{
		type="vector";
		source="wppoint";
		pos0[] = 	{0.500,0.128};
		pos10[] = 	{0.63 ,0.128};
	};
	class WP_DIR_LIMITS
	{
		type = "limit";
		limits[] = {0.2,0,0.8,1};
	};
	class VelocityVector
	{
		type = "vector";
		source = "velocitytoview";
		pos0[] = {0.5, 0.5};
		pos10[] = {POS10X, POS10Y};
	}; // VelocityVector
	class HUDCenter
	{
		type = "fixed";
		pos[] = {0.5, 0.5};
	}; // HUDCenter
	class ForwardVector
	{
		type = "vector";
		source = "forward";
		pos0[] = {0, 0};
		pos10[] = {POS10X, POS10Y};
	}; // ForwardVector
	class PlaneOrientation
	{
		type="fixed";
		pos[]={0.5,0.5};
	};
	class Limit0109
	{
		type = "limit";
		limits[] = {0.1,0.1,0.9,0.9};
	};
	class ImpactPoint
	{
		type = "vector";
		source = "impactpointtoview";
		pos0[] = {0.5, 0.5};
		pos10[] = {POS10X, POS10Y};
	}; // ImpactPoint
	class PilotCameraToView
	{
		type = "vector";
		source = "pilotcameratoview";
		pos0[] = {0.5, 0.5};
		pos10[] = {POS10X, POS10Y};
	}; // WPPoint
	class Level0
	{
		pos0[] = {0.5, 0.5};
		pos10[] = {POS10X, POS10Y};
		type = "horizon";
		angle = 0;
	};
}; // Bones
class Draw {
	condition="(cameraHeadingDiff > 5)";
	clipTL[] = {0.2,0.2};
	clipBR[] = {0.8,0.8};
	#define WP_BOX_SIZE 0.03
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
	class Center_Cross {
		type="line";
		width = 3;
		points[] ={
			{"HUDCenter", {-0.01, 0}, 1},
			{"HUDCenter", {0.01, 0}, 1},{},
			{"HUDCenter", {0,  0.01}, 1},
			{"HUDCenter", {0, -0.01}, 1}
		}; // points
	}; // Center_Cross
	class TGP_Square {
		type="line";
		width = 3;
		lineType = 2;
		points[] ={
			{"PilotCameraToView", {-0.01, -0.01}, 1},
			{"PilotCameraToView", {0.01, -0.01}, 1},
			{"PilotCameraToView", {0.01,  0.01}, 1},
			{"PilotCameraToView", {-0.01, 0.01}, 1},
			{"PilotCameraToView", {-0.01, -0.01}, 1}, {},
			{"HUDCenter", 1, {0,0}, 1},
			{"PilotCameraToView", 1, {0,0}, 1}
		}; // points
	}; // TGP_Square
	class Level0
	{
		type = "line";
		width = 3;
		lineType = 2;
		points[] = {
			{"Level0", {-0.2, 0}, 1}, {"Level0", {0.2, 0}, 1}
		};
	}; // Level0
	class Outline
	{
		type = "line";
		width = 3;
		lineType = 0;
		points[] = {
			{"HUDCenter", 1, {0, 0.3}, 1},{"HUDCenter", 1, {0.02689179267103005, 0.29879228819857173}, 1},{"HUDCenter", 1, {0.05356706843959099, 0.2951788765795889}, 1},{"HUDCenter", 1, {0.07981105367000255, 0.28918885820875595}, 1},{"HUDCenter", 1, {0.10541244722440281, 0.28087046119192116}, 1},{"HUDCenter", 1, {0.13016512173526743, 0.27029066037072574}, 1},{"HUDCenter", 1, {0.15386978322177186, 0.2575346380805598}, 1},{"HUDCenter", 1, {0.17633557568774194, 0.2427050983124842}, 1},{"HUDCenter", 1, {0.19738161778191377, 0.22592143980108328}, 1},{"HUDCenter", 1, {0.21683845914821745, 0.20731879469605938}, 1},{"HUDCenter", 1, {0.23454944474040892, 0.18704694055762008}, 1},{"HUDCenter", 1, {0.2503719761163908, 0.16526909443563073}, 1},{"HUDCenter", 1, {0.2641786595570214, 0.14216059874189954}, 1},{"HUDCenter", 1, {0.27585833176543517, 0.1179075094961771}, 1},{"HUDCenter", 1, {0.285316954888546, 0.09270509831248423}, 1},{"HUDCenter", 1, {0.2924783736545471, 0.06675628018689427}, 1},{"HUDCenter", 1, {0.2972849285303804, 0.04026997974529666}, 1},{"HUDCenter", 1, {0.29969791996239437, 0.013459449105154496}, 1},{"HUDCenter", 1, {0.29969791996239437, -0.013459449105154524}, 1},{"HUDCenter", 1, {0.2972849285303804, -0.04026997974529662}, 1},{"HUDCenter", 1, {0.2924783736545471, -0.06675628018689429}, 1},{"HUDCenter", 1, {0.285316954888546, -0.09270509831248426}, 1},{"HUDCenter", 1, {0.27585833176543517, -0.11790750949617712}, 1},{"HUDCenter", 1, {0.2641786595570214, -0.14216059874189957}, 1},{"HUDCenter", 1, {0.2503719761163907, -0.16526909443563084}, 1},{"HUDCenter", 1, {0.23454944474040887, -0.18704694055762014}, 1},{"HUDCenter", 1, {0.21683845914821745, -0.20731879469605935}, 1},{"HUDCenter", 1, {0.1973816177819138, -0.22592143980108326}, 1},{"HUDCenter", 1, {0.17633557568774197, -0.24270509831248419}, 1},{"HUDCenter", 1, {0.15386978322177172, -0.2575346380805599}, 1},{"HUDCenter", 1, {0.13016512173526734, -0.27029066037072574}, 1},{"HUDCenter", 1, {0.10541244722440272, -0.28087046119192116}, 1},{"HUDCenter", 1, {0.07981105367000256, -0.28918885820875595}, 1},{"HUDCenter", 1, {0.053567068439590894, -0.2951788765795889}, 1},{"HUDCenter", 1, {0.026891792671030087, -0.29879228819857173}, 1},{"HUDCenter", 1, {0, -0.3}, 1},{"HUDCenter", 1, {-0.026891792671030142, -0.2987922881985717}, 1},{"HUDCenter", 1, {-0.05356706843959109, -0.29517887657958886}, 1},{"HUDCenter", 1, {-0.07981105367000248, -0.289188858208756}, 1},{"HUDCenter", 1, {-0.1054124472244029, -0.2808704611919211}, 1},{"HUDCenter", 1, {-0.1301651217352674, -0.27029066037072574}, 1},{"HUDCenter", 1, {-0.15386978322177194, -0.25753463808055976}, 1},{"HUDCenter", 1, {-0.176335575687742, -0.24270509831248416}, 1},{"HUDCenter", 1, {-0.19738161778191393, -0.22592143980108312}, 1},{"HUDCenter", 1, {-0.21683845914821753, -0.20731879469605935}, 1},{"HUDCenter", 1, {-0.23454944474040906, -0.18704694055761986}, 1},{"HUDCenter", 1, {-0.2503719761163907, -0.1652690944356308}, 1},{"HUDCenter", 1, {-0.26417865955702136, -0.14216059874189962}, 1},{"HUDCenter", 1, {-0.2758583317654353, -0.11790750949617687}, 1},{"HUDCenter", 1, {-0.285316954888546, -0.09270509831248426}, 1},{"HUDCenter", 1, {-0.2924783736545471, -0.06675628018689411}, 1},{"HUDCenter", 1, {-0.2972849285303804, -0.0402699797452967}, 1},{"HUDCenter", 1, {-0.29969791996239437, -0.013459449105154531}, 1},{"HUDCenter", 1, {-0.29969791996239437, 0.013459449105154687}, 1},{"HUDCenter", 1, {-0.2972849285303804, 0.040269979745296586}, 1},{"HUDCenter", 1, {-0.2924783736545471, 0.06675628018689427}, 1},{"HUDCenter", 1, {-0.2853169548885461, 0.09270509831248416}, 1},{"HUDCenter", 1, {-0.27585833176543517, 0.11790750949617702}, 1},{"HUDCenter", 1, {-0.2641786595570213, 0.1421605987418998}, 1},{"HUDCenter", 1, {-0.25037197611639084, 0.16526909443563068}, 1},{"HUDCenter", 1, {-0.23454944474040879, 0.1870469405576202}, 1},{"HUDCenter", 1, {-0.2168384591482175, 0.20731879469605935}, 1},{"HUDCenter", 1, {-0.19738161778191363, 0.22592143980108342}, 1},{"HUDCenter", 1, {-0.176335575687742, 0.24270509831248419}, 1},{"HUDCenter", 1, {-0.1538697832217719, 0.25753463808055976}, 1},{"HUDCenter", 1, {-0.1301651217352675, 0.2702906603707257}, 1},{"HUDCenter", 1, {-0.10541244722440261, 0.2808704611919212}, 1},{"HUDCenter", 1, {-0.07981105367000234, 0.289188858208756}, 1},{"HUDCenter", 1, {-0.05356706843959106, 0.2951788765795889}, 1},{"HUDCenter", 1, {-0.026891792671029858, 0.29879228819857173}, 1},{"HUDCenter", 1, {0, 0.3}, 1}
		};
	};
}; // Draw
