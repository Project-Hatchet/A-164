#define RGBA256(R,G,B,A) {R/256,G/256,B/256,A}
#define BACKGROUND_BLUE RGBA256(0,0,0,0.1)
#define BORDER_BLUE RGBA256(24,243,244,1.0)

#define SIDE_BTN_SPACING 0.12
#define LINE1 (0.25+(SIDE_BTN_SPACING*0))
#define LINE2 (0.25+(SIDE_BTN_SPACING*1))
#define LINE3 (0.25+(SIDE_BTN_SPACING*2))
#define LINE4 (0.25+(SIDE_BTN_SPACING*3))
#define LINE5 (0.25+(SIDE_BTN_SPACING*4))
#define LINE6 (0.25+(SIDE_BTN_SPACING*5))
#define LINE7 (0.25+(SIDE_BTN_SPACING*6))

#define QUOTE(var1) #var1
#define ARR_2(ARG1,ARG2) ARG1, ARG2

#define TEXT_MFD_R_SCALE(CLASS,X,Y,SIZE,ALIGN) \
    class CLASS { \
        type = "text"; \
        align = ALIGN; \
        scale = 1; \
        pos[] = {{X-0.002*SIZE, Y-0.035*SIZE}, 1}; \
        right[] = {{X + 0.06*SIZE, Y-0.035*SIZE}, 1}; \
        down[] = {{X-0.002*SIZE, Y + 0.035*SIZE}, 1};

#define TEXT_MFD_R_SCALE_STATIC(CLASS,X,Y,SIZE,ALIGN,TEXT) \
    class CLASS { \
        type = "text"; \
        align = ALIGN; \
        scale = 1; \
        pos[] = {{X-0.002*SIZE, Y-0.035*SIZE}, 1}; \
        right[] = {{X + 0.06*SIZE, Y-0.035*SIZE}, 1}; \
        down[] = {{X-0.002*SIZE, Y + 0.035*SIZE}, 1}; \
		source = "static"; \
		text = TEXT; \
	};

#define SIDE_POLYGON(CLASS,X,Y) \
	class CLASS { \
		type = "polygon"; \
		points[] ={ \
			{ \
				{{X-0.006,Y-0.008},1}, \
				{{X+0.006,Y-0.008},1}, \
				{{X+0.006,Y+0.008},1}, \
				{{X-0.006,Y+0.008},1} \
			} \
		}; \
	};


#define COND_ISNUMBER(INDEX,VALUE) (user##INDEX>(VALUE-1))*(user##INDEX<(VALUE+1))
#define MFD_L_PAGE_INDEX 5
#define MFD_R_PAGE_INDEX 6

#define MFD_PAGE_DSMS 0
#define MFD_PAGE_NAV 1

#define MFD_MARGIN_L 0.1