color[] = {1,1,1,1};
TEXT_MFD_R_SCALE(GRID_TEXT,0.5,0.85,0.8,"center")
	source="userText";
	sourceScale=1;
	sourceIndex=2;
	text="";
}; // WP_COUNT

TEXT_MFD_R_SCALE(WAYPT_NAME,0.4,0.80,0.8,"left")
	source="userText";
	sourceScale=1;
	sourceIndex=1;
	text="";
}; // WP_COUNT

TEXT_MFD_R_SCALE(WAYPT_TOF,0.6,0.80,0.8,"right")
	source="userText";
	sourceScale=1;
	sourceIndex=0;
	text="";
}; // WP_COUNT

class divider_bottom {
	type = "line";
    width = 2;
	lineType = 1;
	points[] ={
		{{0.1, 0.775},1},
		{{0.9, 0.775},1},{},
		{{0.1, 0.89},1},
		{{0.9, 0.89},1}
	};
}; // poly_arrow_wp_next

TEXT_MFD_R_SCALE(WAYPT_TOTALCOUNT,MFD_MARGIN_L,LINE3 + 0.06,0.8,"right")
	source="userText";
	sourceScale=1;
	sourceIndex=3;
	text="";
}; // WP_COUNT

TEXT_MFD_R_SCALE(WP_IMPORT_1,MFD_MARGIN_L,LINE5-0.025,0.7,"right")
	source="static";
	sourceScale=2;
	sourceIndex=3;
	text="IMPORT";
}; // WP_COUNT
TEXT_MFD_R_SCALE(WP_IMPORT_2,MFD_MARGIN_L,LINE5+0.025,0.7,"right")
	source="static";
	sourceScale=2;
	sourceIndex=3;
	text="MICRO-DAGR";
}; // WP_COUNT

class poly_arrow_wp_next {
	type = "polygon";
	points[] ={
		{
			{{0.12,       LINE3-0.02},1},
			{{0.12-0.019, LINE3+0.02},1},
			{{0.12+0.019, LINE3+0.02},1}
		}
	};
}; // poly_arrow_wp_next
class poly_arrow_wp_prev {
	type = "polygon";
	points[] ={
		{
			{{0.12,       LINE4+0.02},1},
			{{0.12-0.019, LINE4-0.02},1},
			{{0.12+0.019, LINE4-0.02},1}
		}
	};
}; // poly_arrow_wp_prev

#include "page_nav_sensor.hpp"


class planeLines
{
	type = "line";
	width = 6;
	lineType = 0;
	points[] = {
		{"HSICenter", 1, {0,-0.02}, 1},
		{"HSICenter", 1, {0, 0.04}, 1},{},
		{"HSICenter", 1, {-0.03,0}, 1},
		{"HSICenter", 1,  {0.03,0}, 1},{},
		{"HSICenter", 1, {-0.01,0.028}, 1},
		{"HSICenter", 1, { 0.01,0.028}, 1},
	};
};