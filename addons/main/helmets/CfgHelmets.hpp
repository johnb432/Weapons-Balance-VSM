class H_HelmetB: ItemCore {
    class ItemInfo;
};
class VSM_base_fast_helmet: H_HelmetB {
    ace_hearing_protection = 0.75;
    mass = 30;
    class ItemInfo: ItemInfo {
        mass = 30;
    };
};
class VSM_base_highcutslick: H_HelmetB {
    mass = 30;
    class ItemInfo: ItemInfo {
        mass = 30;
    };
};

#define HELMET(type,weight)\
class type: ItemCore {\
    ace_hearing_protection = 0.75;\
    mass = weight;\
    class ItemInfo: HeadgearItem {\
        mass = weight;\
    };\
}

HELMET(VSM_Mich2000_AOR1,40);
HELMET(VSM_Mich2000_M81,40);
HELMET(VSM_Mich2000_MulticamTropic,40);
HELMET(VSM_Mich2000_Multicam,40);
HELMET(VSM_Mich2000_ocp,40);
HELMET(VSM_Mich2000_CamoSprayOD,40);
HELMET(VSM_Mich2000_OGA_OD,40);
HELMET(VSM_Mich2000_OGA,40);
HELMET(VSM_Mich2000_ProjectHonor,40);
HELMET(VSM_Mich2000_CamoSprayTAN,40);

HELMET(VSM_Mich2000_2_aor1,40);
HELMET(VSM_Mich2000_2_M81,40);
HELMET(VSM_Mich2000_2_MulticamTropic,40);
HELMET(VSM_Mich2000_2_Multicam,40);
HELMET(VSM_Mich2000_2_OCP,40);
HELMET(VSM_Mich2000_2_CamoSprayOD,40);
HELMET(VSM_Mich2000_2_OGA_OD,40);
HELMET(VSM_Mich2000_2_OGA,40);
HELMET(VSM_Mich2000_2_ProjectHonor,40);
HELMET(VSM_Mich2000_2_CamoSprayTAN,40);


HELMET(VSM_OPS,30);
HELMET(VSM_OPS_aor1,30);
HELMET(VSM_Black_OPS,30);
HELMET(VSM_M81_OPS,30);
HELMET(VSM_OPS_multicam,30);
HELMET(VSM_MulticamTropic_OPS,30);
HELMET(VSM_OPS_ocp,30);
HELMET(VSM_OD_spray_OPS,30);
HELMET(VSM_OGA_OD_OPS,30);
HELMET(VSM_oga_OPS,30);
HELMET(VSM_ProjectHonor_OPS,30);
HELMET(VSM_Tan_spray_OPS,30);

HELMET(VSM_OPS_2,30);
HELMET(VSM_OPS_2_AOR1,30);
HELMET(VSM_Black_OPS_2,30);
HELMET(VSM_M81_OPS_2,30);
HELMET(VSM_OPS_2_multicam,30);
HELMET(VSM_MulticamTropic_OPS_2,30);
HELMET(VSM_OPS_2_ocp,30);
HELMET(VSM_OD_Spray_OPS_2,30);
HELMET(VSM_OGA_OD_OPS_2,30);
HELMET(VSM_oga_OPS_2,30);
HELMET(VSM_ProjectHonor_OPS_2,30);
HELMET(VSM_Tan_spray_OPS_2,30);


#define HELMET_PARENT(type1,type2,weight)\
class type1: type2 {\
    ace_hearing_protection = 0.75;\
    mass = weight;\
    class ItemInfo: HeadgearItem {\
        mass = weight;\
    };\
}

HELMET_PARENT(Alpine_opscore,VSM_M81_OPS,30);
HELMET_PARENT(AOR2_opscore,VSM_M81_OPS,30);
HELMET_PARENT(ARD_opscore,VSM_M81_OPS,30);
HELMET_PARENT(BLK2_opscore,VSM_M81_OPS,30);
HELMET_PARENT(White_opscore,VSM_M81_OPS,30);

HELMET_PARENT(Alpine_opscore_2,VSM_M81_OPS_2,30);
HELMET_PARENT(AOR2_opscore_2,VSM_M81_OPS_2,30);
HELMET_PARENT(ARD_opscore_2,VSM_M81_OPS_2,30);
HELMET_PARENT(BLK_opscore_2,VSM_M81_OPS_2,30);
HELMET_PARENT(White_opscore_2,VSM_M81_OPS_2,30);

#define HELMET_HP(type,armorValue)\
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

HELMET_HP(Alpine_Helmet_IA,6);
HELMET_HP(AOR2_Helmet_IA,6);
HELMET_HP(Arid_Helmet_IA,6);
HELMET_HP(DTS_Helmet_IA,6);

class VSM_OGA_Helmet1: H_HelmetB {
    ace_hearing_protection = 0.75;
};
class VSM_OGA_OD_Helmet1: H_HelmetB {
    ace_hearing_protection = 0.75;
};
class VSM_OGA_Helmet2: H_HelmetB {
    ace_hearing_protection = 0.75;
};
class VSM_OGA_OD_Helmet2: H_HelmetB {
    ace_hearing_protection = 0.75;
};

HELMET(VSM_Peltor_AOR1,15);
HELMET(VSM_Peltor_coyote,15);
HELMET(VSM_Peltor_M81,15);
HELMET(VSM_Peltor_OCP,15);
HELMET(VSM_Peltor_OD,15);
