
#define GEODE_DEFINE_EVENT_EXPORTS
#include <NML/UI.hpp>

void NML::UI::showPopup(
    std::string const& title,
    std::string const& message
) {
    FLAlertLayer::create(
        title.c_str(),
        message,
        "OK"
    )->show();
}
