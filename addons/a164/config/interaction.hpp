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

class PAGE_DSMS {
  condition= USERVAL(MFD_PAGE_INDEX,MFD_PAGE_DSMS);
  MFD_BTN(LEFT_5,LEFT_5_POS,"Pylon 1") 
    buttonDown = "[_this # 0, 9] call hct_164_a164_fnc_dsmsWpnSwitch;";//MFD page works in reverse order
    //buttonDown = "hint str(_this);";
  };
  MFD_BTN(LEFT_4,LEFT_4_POS,"Pylon 2") 
    buttonDown = "[_this # 0, 8] call hct_164_a164_fnc_dsmsWpnSwitch;";
  };
  MFD_BTN(LEFT_3,LEFT_3_POS,"Pylon 3") 
    buttonDown = "[_this # 0, 7] call hct_164_a164_fnc_dsmsWpnSwitch;";
  };
  MFD_BTN(LEFT_2,LEFT_2_POS,"Pylon 4") 
    buttonDown = "[_this # 0, 6] call hct_164_a164_fnc_dsmsWpnSwitch;";
  };
  MFD_BTN(LEFT_1,LEFT_1_POS,"Pylon 5") 
    buttonDown = "[_this # 0, 5] call hct_164_a164_fnc_dsmsWpnSwitch;";
  };
  MFD_BTN(RIGHT_1,RIGHT_1_POS,"Pylon 6") 
    buttonDown = "[_this # 0, 4] call hct_164_a164_fnc_dsmsWpnSwitch;";
  };
  MFD_BTN(RIGHT_2,RIGHT_2_POS,"Pylon 7") 
    buttonDown = "[_this # 0, 3] call hct_164_a164_fnc_dsmsWpnSwitch;";
  };
  MFD_BTN(RIGHT_3,RIGHT_3_POS,"Pylon 8") 
    buttonDown = "[_this # 0, 2] call hct_164_a164_fnc_dsmsWpnSwitch;";
  };
  MFD_BTN(RIGHT_4,RIGHT_4_POS,"Pylon 9") 
    buttonDown = "[_this # 0, 1] call hct_164_a164_fnc_dsmsWpnSwitch;";
  };
  MFD_BTN(RIGHT_5,RIGHT_5_POS,"Pylon 10") 
    buttonDown = "[_this # 0, 0] call hct_164_a164_fnc_dsmsWpnSwitch;";
  };//Pylons go in reverso order now, because they're being read in the opposite direction (-> to <-)
};