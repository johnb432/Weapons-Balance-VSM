class H_HelmetB: ItemCore {
    class ItemInfo;
};
class VSM_base_fast_helmet: H_HelmetB {
    ace_hearing_protection = 0.75;
    mass = 20;
    class ItemInfo: ItemInfo {
        mass = 20;
    };
};


class VSM_base_highcutslick: {
    mass = 20;
    class ItemInfo: ItemInfo {
        mass = 20;
    };
};



#define HELMET(type)\
class type: ItemCore {\
    mass = 40;\
    class ItemInfo: HeadgearItem {\
        mass = 40;\
    };\
}

HELMET(VSM_Mich2000_AOR1);
HELMET(VSM_Mich2000_M81);
HELMET(VSM_Mich2000_MulticamTropic);
HELMET(VSM_Mich2000_Multicam);
HELMET(VSM_Mich2000_ocp);
HELMET(VSM_Mich2000_CamoSprayOD);
HELMET(VSM_Mich2000_OGA_OD);
HELMET(VSM_Mich2000_OGA);
HELMET(VSM_Mich2000_ProjectHonor);
HELMET(VSM_Mich2000_CamoSprayTAN);

HELMET(VSM_Mich2000_2_aor1);
HELMET(VSM_Mich2000_2_M81);
HELMET(VSM_Mich2000_2_MulticamTropic);
HELMET(VSM_Mich2000_2_Multicam);
HELMET(VSM_Mich2000_2_OCP);
HELMET(VSM_Mich2000_2_CamoSprayOD);
HELMET(VSM_Mich2000_2_OGA_OD);
HELMET(VSM_Mich2000_2_OGA);
HELMET(VSM_Mich2000_2_ProjectHonor);
HELMET(VSM_Mich2000_2_CamoSprayTAN);


//HELMET(Alpine_Helmet_IA);
//HELMET(VSM_Mich2000_AOR1);

/*
#define HELMET(type,armorValue)\
class type: ItemCore {\
    class ItemInfo: HeadgearItem {\
        mass = 40;\
        class HitpointsProtectionInfo {\
            class Head {\
                armor = armorValue;\
            };\
        };\
    };\
}

#define HELMET_COMS(type,armorValue)\
class type: ItemCore {\
    ace_hearing_lowerVolume = 0.5;\
    ace_hearing_protection = 0.75;\
    class ItemInfo: HeadgearItem {\
        mass = 40;\
        class HitpointsProtectionInfo {\
            class Head {\
                armor = armorValue;\
            };\
        };\
    };\
}

HELMET(BRM_M1H_SWDG_GREEN,2);
HELMET(BRM_M56_GREEN,2);
HELMET(BRM_VZ53_GREEN,2);
HELMET(BRM_LWH_MASK_COMS_GREEN,6);
HELMET(BRM_PASGT_NVSWDG_COMS_GREEN,6);

HELMET_COMS(BRM_ACH_MASK_COMS_GREEN,6);
HELMET_COMS(BRM_6B7_MASK_COMS_GREEN,6);

class BRM_CVCSF_GREEN: ItemCore {
    ace_hearing_lowerVolume = 0.5;
    ace_hearing_protection = 0.75;
    class ItemInfo: HeadgearItem {
        mass = 40;
        class HitpointsProtectionInfo {
            class Head {
                armor = 6;
            };
        };
    };
};
class BRM_CVCSFMASK_GREEN: BRM_CVCSF_GREEN {
    ACE_Protection = 1;
    class ItemInfo: HeadgearItem {
        mass = 40;
        class HitpointsProtectionInfo {
            class Head {
                armor = 6;
            };
        };
    };
};

class BRM_BeretPELTOR_Blue: ItemCore {
    ace_hearing_lowerVolume = 0.5;
    ace_hearing_protection = 0.75;
};

class BRM_capPELTOR_Black: ItemCore {
    ace_hearing_lowerVolume = 0.5;
    ace_hearing_protection = 0.75;
};
class BRM_PELTOR_Tglasses: BRM_capPELTOR_Black {
    ACE_Protection = 1;
    class ItemInfo: HeadgearItem {
        mass = 4;
    };
};
class BRM_PELTOR: BRM_PELTOR_Tglasses {
    ACE_Protection = 0;
};

class BRM_ShemPakolMASK: ItemCore {
    ACE_Protection = 1;
};
class BRM_ShemPakol: BRM_ShemPakolMASK {
    ACE_Protection = 0;
};

class BRM_SPH4_GREEN: ItemCore {
    ace_hearing_lowerVolume = 0.6;
    ace_hearing_protection = 0.85;
};
class BRM_SPH4V_GREEN: BRM_SPH4_GREEN {
    ACE_Protection = 1;
};
*/
