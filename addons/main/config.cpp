#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "Alpine_Vests_Config",
            "AOR2_Vests_Config",
            "VSM_Fast_config",
            "VSM_HELMETS"
        };
        author = "johnb43";
        authors[] = {"johnb43"};
        url = "https://github.com/johnb432/Weapons-Balance-VSM";
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class ItemCore;
    class HeadgearItem;
    class UniformItem;
    class Uniform_Base;
    /*
    class BRM_BattleUNI_Base: ItemCore {
        ACE_GForceCoef = 1;
        class ItemInfo: UniformItem {
            mass = 40;
        };
    };
    */

    #include "helmets\CfgHelmets.hpp"
    /*
    #include "helmets\CfgHelmets6B7.hpp"
    #include "helmets\CfgHelmetsACH.hpp"

    #include "uniforms\CfgUniBattle.hpp"
    #include "uniforms\CfgUniCombat.hpp"
    #include "uniforms\CfgUniDenim.hpp"
    #include "uniforms\CfgUniEBattle.hpp"
    #include "uniforms\CfgUniGorka.hpp"
    #include "uniforms\CfgUniHood.hpp"
    #include "uniforms\CfgUniParka.hpp"

    #include "vests\CfgVests.hpp"
    */
};
/*
class CfgVehicles {
    #include "backpacks\CfgBackpacks.hpp"
};
*/
