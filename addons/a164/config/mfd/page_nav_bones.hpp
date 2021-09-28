
class HSICenter
{
	type = "fixed";
	pos[] = {0.5, 0.4};
}; // HSICenter

class HSI_PlaneDir
{
	type="rotational";
	source = "heading";
	sourceScale = 1;
	center[] = {0.5,0.4};
	min = "0";
	max = "360";
	minAngle = 0;
	maxAngle = -360;
	aspectRatio = 1;
};

class HSI_WPDir
{
	type="rotational";
	source="user";
	sourceIndex = 0;
	sourceScale=1;
	center[]={0,0};
	min=0;
	max=360;
	minAngle = 0;
	maxAngle = -360;
	aspectRatio= 1;
};

class HSI_WPDist
{
	type="linear";
	source="user";
	sourceIndex = 1;
	sourceScale=1;
	min=0;
	max=8000;
	minPos[]={0,-0.35};
	maxPos[]={0,0};
};