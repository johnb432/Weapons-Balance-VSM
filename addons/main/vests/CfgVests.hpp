class VestItem;
class Vest_Camo_Base: ItemCore {
    class ItemInfo;
};

#define VEST(type1,type2)\
class type1: type2 {\
    class ItemInfo: VestItem {\
        mass = 100;\
        containerClass = "Supply200";\
    };\
}

class VSM_MBSS_Green: Vest_Camo_Base {
    class ItemInfo: VestItem {
        mass = 80;
        containerClass = "Supply150";
    };
};

VEST(VSM_LBT1961_Black,Vest_Camo_Base);

VEST(VSM_MBSS_PACA,Vest_Camo_Base);

VEST(VSM_FAPC_Breacher_AOR1,ItemCore);
VEST(VSM_FAPC_MG_AOR1,ItemCore);
VEST(VSM_FAPC_Operator_AOR1,ItemCore);
VEST(VSM_CarrierRig_Breacher_AOR1,Vest_Camo_Base);
VEST(VSM_CarrierRig_Gunner_AOR1,Vest_Camo_Base);
VEST(VSM_CarrierRig_Operator_AOR1,Vest_Camo_Base);
VEST(VSM_LBT6094_breacher_AOR1,Vest_Camo_Base);
VEST(VSM_LBT6094_MG_AOR1,Vest_Camo_Base);
VEST(VSM_LBT6094_operator_AOR1,Vest_Camo_Base);
VEST(VSM_RAV_Breacher_AOR1,Vest_Camo_Base);
VEST(VSM_RAV_MG_AOR1,Vest_Camo_Base);
VEST(VSM_RAV_operator_AOR1,Vest_Camo_Base);

VEST(VSM_FAPC_Breacher_M81,ItemCore);
VEST(VSM_FAPC_MG_M81,ItemCore);
VEST(VSM_FAPC_Operator_M81,ItemCore);
VEST(VSM_CarrierRig_Breacher_M81,Vest_Camo_Base);
VEST(VSM_CarrierRig_Gunner_M81,Vest_Camo_Base);
VEST(VSM_CarrierRig_Operator_M81,Vest_Camo_Base);
VEST(VSM_LBT6094_breacher_M81,Vest_Camo_Base);
VEST(VSM_LBT6094_MG_M81,Vest_Camo_Base);
VEST(VSM_LBT6094_operator_M81,Vest_Camo_Base);
VEST(VSM_RAV_Breacher_M81,Vest_Camo_Base);
VEST(VSM_RAV_MG_M81,Vest_Camo_Base);
VEST(VSM_RAV_operator_M81,Vest_Camo_Base);


VEST(VSM_FAPC_Breacher_Multicam,ItemCore);
VEST(VSM_FAPC_MG_Multicam,ItemCore);
VEST(VSM_FAPC_Operator_Multicam,ItemCore);
VEST(VSM_CarrierRig_Breacher_Multicam,Vest_Camo_Base);
VEST(VSM_CarrierRig_Gunner_Multicam,Vest_Camo_Base);
VEST(VSM_CarrierRig_Operator_Multicam,Vest_Camo_Base);
VEST(VSM_LBT6094_breacher_Multicam,Vest_Camo_Base);
VEST(VSM_LBT6094_MG_Multicam,Vest_Camo_Base);
VEST(VSM_LBT6094_operator_Multicam,Vest_Camo_Base);
VEST(VSM_RAV_Breacher_Multicam,Vest_Camo_Base);
VEST(VSM_RAV_MG_Multicam,Vest_Camo_Base);
VEST(VSM_RAV_operator_Multicam,Vest_Camo_Base);

VEST(VSM_FAPC_Breacher_MulticamTropic,ItemCore);
VEST(VSM_FAPC_MG_MulticamTropic,ItemCore);
VEST(VSM_FAPC_Operator_MulticamTropic,ItemCore);
VEST(VSM_CarrierRig_Breacher_multicamTropic,Vest_Camo_Base);
VEST(VSM_CarrierRig_Gunner_multicamTropic,Vest_Camo_Base);
VEST(VSM_CarrierRig_Operator_multicamTropic,Vest_Camo_Base);
VEST(VSM_LBT6094_breacher_multicamTropic,Vest_Camo_Base);
VEST(VSM_LBT6094_MG_multicamTropic,Vest_Camo_Base);
VEST(VSM_LBT6094_operator_multicamTropic,Vest_Camo_Base);
VEST(VSM_RAV_Breacher_MulticamTropic,Vest_Camo_Base);
VEST(VSM_RAV_MG_MulticamTropic,Vest_Camo_Base);
VEST(VSM_RAV_operator_MulticamTropic,Vest_Camo_Base);

VEST(VSM_FAPC_Breacher_OCP,ItemCore);
VEST(VSM_FAPC_MG_OCP,ItemCore);
VEST(VSM_FAPC_Operator_OCP,ItemCore);
VEST(VSM_CarrierRig_Breacher_OCP,Vest_Camo_Base);
VEST(VSM_CarrierRig_Gunner_OCP,Vest_Camo_Base);
VEST(VSM_CarrierRig_Operator_OCP,Vest_Camo_Base);
VEST(VSM_LBT6094_breacher_OCP,Vest_Camo_Base);
VEST(VSM_LBT6094_MG_OCP,Vest_Camo_Base);
VEST(VSM_LBT6094_operator_OCP,Vest_Camo_Base);
VEST(VSM_RAV_Breacher_OCP,Vest_Camo_Base);
VEST(VSM_RAV_MG_OCP,Vest_Camo_Base);
VEST(VSM_RAV_operator_OCP,Vest_Camo_Base);

VEST(VSM_FAPC_Breacher_OGA,ItemCore);
VEST(VSM_FAPC_MG_OGA,ItemCore);
VEST(VSM_FAPC_Operator_OGA,ItemCore);
VEST(VSM_CarrierRig_Breacher_OGA,Vest_Camo_Base);
VEST(VSM_CarrierRig_Gunner_OGA,Vest_Camo_Base);
VEST(VSM_CarrierRig_Operator_OGA,Vest_Camo_Base);
VEST(VSM_LBT6094_breacher_OGA,Vest_Camo_Base);
VEST(VSM_LBT6094_MG_OGA,Vest_Camo_Base);
VEST(VSM_LBT6094_operator_OGA,Vest_Camo_Base);
VEST(VSM_RAV_Breacher_OGA,Vest_Camo_Base);
VEST(VSM_RAV_MG_OGA,Vest_Camo_Base);
VEST(VSM_RAV_operator_OGA,Vest_Camo_Base);

VEST(VSM_FAPC_Breacher_OGA_OD,ItemCore);
VEST(VSM_FAPC_MG_OGA_OD,ItemCore);
VEST(VSM_FAPC_Operator_OGA_OD,ItemCore);
VEST(VSM_CarrierRig_Breacher_OGA_OD,Vest_Camo_Base);
VEST(VSM_CarrierRig_Gunner_OGA_OD,Vest_Camo_Base);
VEST(VSM_CarrierRig_Operator_OGA_OD,Vest_Camo_Base);
VEST(VSM_LBT6094_breacher_OGA_OD,Vest_Camo_Base);
VEST(VSM_LBT6094_MG_OGA_OD,Vest_Camo_Base);
VEST(VSM_LBT6094_operator_OGA_OD,Vest_Camo_Base);
VEST(VSM_RAV_Breacher_OGA_OD,Vest_Camo_Base);
VEST(VSM_RAV_MG_OGA_OD,Vest_Camo_Base);
VEST(VSM_RAV_operator_OGA_OD,Vest_Camo_Base);

VEST(VSM_FAPC_Breacher_ProjectHonor,ItemCore);
VEST(VSM_FAPC_MG_ProjectHonor,ItemCore);
VEST(VSM_FAPC_Operator_ProjectHonor,ItemCore);
VEST(VSM_CarrierRig_Breacher_ProjectHonor,Vest_Camo_Base);
VEST(VSM_CarrierRig_Gunner_ProjectHonor,Vest_Camo_Base);
VEST(VSM_CarrierRig_Operator_ProjectHonor,Vest_Camo_Base);
VEST(VSM_LBT6094_breacher_ProjectHonor,Vest_Camo_Base);
VEST(VSM_LBT6094_MG_ProjectHonor,Vest_Camo_Base);
VEST(VSM_LBT6094_operator_ProjectHonor,Vest_Camo_Base);
VEST(VSM_RAV_Breacher_ProjectHonor,Vest_Camo_Base);
VEST(VSM_RAV_MG_ProjectHonor,Vest_Camo_Base);
VEST(VSM_RAV_operator_ProjectHonor,Vest_Camo_Base);
