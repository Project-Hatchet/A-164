class cfgVehicles {
	class Plane_CAS_01_dynamicLoadout_base_F;
	class B_Plane_CAS_01_dynamicLoadout_F: Plane_CAS_01_dynamicLoadout_base_F {
		class MFD {
			class HMD {
				#include "hmd\HMD.hpp"
			};
			class HUD {
				#include "hud.hpp"
			};
			class MFD_LEFT {
				#define MFD_PAGE_INDEX MFD_L_PAGE_INDEX
				borderBottom = 0; // this allows me to make a margin, so the MFD can be smaller than the area between mempoints
				borderLeft = 0; // this allows me to make a margin, so the MFD can be smaller than the area between mempoints
				borderRight = 0; // this allows me to make a margin, so the MFD can be smaller than the area between mempoints
				borderTop = 0; // this allows me to make a margin, so the MFD can be smaller than the area between mempoints
				#include "mfd_main.hpp"
			};
			class MFD_RIGHT {
				#undef MFD_PAGE_INDEX
				#define MFD_PAGE_INDEX MFD_R_PAGE_INDEX
                borderBottom = 0;
                borderLeft = 2.25;
                borderRight = -2.25;
                borderTop = 0;
				#include "mfd_main.hpp"
			};
		};
		class vxf_driver {
			projectPrefix = "hct_164";
			class modules {
				class waypoints {
					startOnEnter = 1;
				};
			};
			class interaction {
				crossHair = 0;
				class MFD_LEFT {
					#undef MFD_PAGE_INDEX
					#define MFD_PAGE_INDEX MFD_L_PAGE_INDEX
					#define BOTTOM_1_POS {-0.241065,5.47158,0.535086}
					#define BOTTOM_2_POS {-0.219065,5.47158,0.535086}
					#define LEFT_3_POS {-0.287065,5.50158,0.63786}
					#define LEFT_4_POS {-0.287065,5.49558,0.61586}
					#define LEFT_5_POS {-0.287065,5.4908, 0.59586}
					#include "interaction.hpp"
				};
				class MFD_RIGHT {
					#undef MFD_PAGE_INDEX
					#define MFD_PAGE_INDEX MFD_R_PAGE_INDEX
					#undef BOTTOM_1_POS
					#undef BOTTOM_2_POS
					#undef LEFT_3_POS
					#undef LEFT_4_POS
					#undef LEFT_5_POS
					#define BOTTOM_1_POS {0.159065,5.47158,0.535086}
					#define BOTTOM_2_POS {0.179065,5.47158,0.535086}
					#define LEFT_3_POS {0.108065,5.50158,0.63786}
					#define LEFT_4_POS {0.108065,5.49558,0.61586}
					#define LEFT_5_POS {0.108065,5.4908,0.59586}
					#include "interaction.hpp"
				};
			};
		};
	};
};