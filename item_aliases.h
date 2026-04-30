#pragma once
#include <unordered_map>
#include <string>

namespace Game {
    struct ItemInfo {
        std::string category;     // ESP filter category ("Weapon", "Clothing/Head", "Misc", etc.)
        std::string displayName;  // Friendly name shown in the ESP overlay.
    };

    extern std::unordered_map<std::string, ItemInfo> itemTable;
}
