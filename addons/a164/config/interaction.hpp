#define MFD_BTN(CLASS,BTN_POS,LABEL) \
  class CLASS { \
    positionType="coordinates"; \
    position[] = BTN_POS; \
    label=LABEL; \
    radius=0.025; \
    clickSound="vxf_Switch_Sound_2";

#define USERVAL(INDEX,VAL) QUOTE(((getUserMFDValue _this) select INDEX) == VAL)

MFD_BTN(BOTTOM_1,BOTTOM_1_POS,"DSMS")
  buttonUp = QUOTE(vehicle player setUserMFDValue [ARR_2(MFD_PAGE_INDEX, 0)]);
};

MFD_BTN(BOTTOM_2,BOTTOM_2_POS,"NAV")
  buttonUp = QUOTE(vehicle player setUserMFDValue [ARR_2(MFD_PAGE_INDEX, 1)]);
};

class PAGE_NAV {
  condition= USERVAL(MFD_PAGE_INDEX,MFD_PAGE_NAV);
  MFD_BTN(LEFT_3,LEFT_3_POS,"WP Next")
    buttonDown = "[_this # 0, ""cycle"", 1] call hct_164_waypoints_fnc_interaction;";
  };
  MFD_BTN(LEFT_4,LEFT_4_POS,"WP Prev")
    buttonDown = "[_this # 0, ""cycle"", -1] call hct_164_waypoints_fnc_interaction;";
  };
  MFD_BTN(LEFT_5,LEFT_5_POS,"Import microdagr waypoints")
    buttonDown = "[_this # 0, ""import""] call hct_164_waypoints_fnc_interaction;";
  };
};