#define BDU(type)\
class type: Uniform_Base {\
    class ItemInfo: UniformItem {\
        containerClass = "Supply40";\
        mass = 40;\
        uniformModel = "-";\
    };\
}

BDU(VSM_AOR1_BDU_od_pants_Camo);
BDU(VSM_AOR1_BDU_tan_pants_Camo);
BDU(VSM_AOR1_BDU_Camo);
BDU(DTS_BDU_Camo);
BDU(VSM_M81_BDU_od_pants_Camo);
BDU(VSM_M81_BDU_tan_pants_Camo);
BDU(VSM_M81_BDU_Camo);
BDU(VSM_Multicam_BDU_od_pants_Camo);
BDU(VSM_Multicam_BDU_tan_pants_Camo);
BDU(VSM_Multicam_BDU_Camo);
BDU(VSM_MulticamTropic_BDU_od_pants_Camo);
BDU(VSM_MulticamTropic_BDU_tan_pants_Camo);
BDU(VSM_MulticamTropic_BDU_Camo);
BDU(VSM_OCP_BDU_od_pants_Camo);
BDU(VSM_OCP_BDU_tan_pants_Camo);
BDU(VSM_OCP_BDU_Camo);
BDU(VSM_ProjectHonor_BDU_od_pants_Camo);
BDU(VSM_ProjectHonor_BDU_tan_pants_Camo);
BDU(VSM_ProjectHonor_BDU_Camo);


#define CSAT(type)\
class type: Uniform_Base {\
    class ItemInfo: UniformItem {\
        containerClass = "Supply40";\
        mass = 80;\
        uniformModel = "-";\
    };\
}

CSAT(VSM_CSAT_AOR2_Camo);
CSAT(VSM_CSAT_MulticamTropic_Camo);
