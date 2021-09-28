#include "mfdDefines.hpp"
alpha = 0.5; // opacity
bottomLeft = "mfd_1_bottom_left"; // these are the mempoints the MFD is rendered between
topLeft = "mfd_1_top_left"; // these are the mempoints the MFD is rendered between
topRight = "mfd_1_top_right"; // these are the mempoints the MFD is rendered between
color[] = {0,0,0}; // default colour for MFD elements
enableParallax = 0; // this means whether the MFD moves based on your head position, so this is used in a HUD
font = "EtelkaMonospaceProBold"; // default font
turret[] = {-1}; // if you use any weapon related information in the MFD, it will use this turret's weapons
class Bones {
	class MFDCenter
	{
		type = "fixed";
		pos[] = {0.5, 0.5};
	}; // MFDCenter
	#include "mfd\page_nav_bones.hpp"
	#include "mfd\page_dsms_bones.hpp"
};
class Draw {
	class background { // I'm drawing a background polygon here that just covers the whole MFD in a white square
		type = "polygon";
		points[] ={
			{
				{{0+0.05, 0+0.05},1},
				{{1-0.02, 0+0.05},1},
				{{1-0.02, 1-0.05},1},
				{{0+0.05, 1-0.05},1}
			}
		};
	}; // background
	class bottom_page_list {
		#include "mfd\page_links_draw.hpp"
	};
	class page_dsms {
		condition = COND_ISNUMBER(MFD_PAGE_INDEX,MFD_PAGE_DSMS);
		#include "mfd\page_dsms_draw.hpp"
	};
	class page_nav {
		//TODO: Radar Sensor Setup
		condition = COND_ISNUMBER(MFD_PAGE_INDEX,MFD_PAGE_NAV);
		//#include "mfd\page_nav_draw.hpp"
	};
};