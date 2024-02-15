#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "Alpine_Config",
            "Alpine_Vests_Config",
            "AOR2_Config",
            "AOR2_Vests_Config",
            "Arid_Config",
            "Arid_Vests_Config",
            "Black_Config",
            "Black_Vests_Config",
            "DTS_Config",
            "DTS_vests_Config",
            "VSM_AOR1_Config",
            "VSM_CSAT_OD_Config",
            "VSM_Fast_config",
            "VSM_HELMETS",
            "VSM_M81_Config",
            "VSM_Multicam_Config",
            "VSM_MulticamTropic_Config",
            "VSM_OGA_Config",
            "VSM_OGA_Fix",
            "VSM_OCP_Config",
            "VSM_ProjectHonor_Config",
            "VSM_Shemagh_config",
            "VSM_Vests_Config"
        };
        author = "johnb43";
        authors[] = {
            "johnb43"
        };
        url = "https://github.com/johnb432/Weapons-Balance-VSM";
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class ItemCore;
    class HeadgearItem;
    class UniformItem;
    class Uniform_Base: ItemCore {
        class ItemInfo;
    };

    #include "helmets\CfgHelmets.hpp"

    #include "uniforms\CfgUniBDU.hpp"
    #include "uniforms\CfgUniCrye.hpp"
    #include "uniforms\CfgUniMassif.hpp"

    #include "vests\CfgVests.hpp"
};
