
#pragma once

#include <Geode/loader/Dispatch.hpp>

#undef MY_MOD_ID
#define MY_MOD_ID "notameganox.notamegalibrary"

namespace NML {
    namespace UI {
        inline void showPopup(
            std::string const& title,
            std::string const& message
        ) GEODE_EVENT_EXPORT_NORES(
            &showPopup,
            (title, message)
        );
    }
}
