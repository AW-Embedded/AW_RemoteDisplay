#include <gui/settings_screen/SettingsView.hpp>

SettingsView::SettingsView()
{

}

void SettingsView::setupScreen()
{
    SettingsViewBase::setupScreen();

    wifiEnabled = presenter->getWifiState();
    toggleButtonWiFi.forceState(wifiEnabled);
    toggleButtonWiFi.invalidate();
}

void SettingsView::tearDownScreen()
{
    SettingsViewBase::tearDownScreen();
}

void SettingsView::wifi_toggle()
{
    wifiEnabled = toggleButtonWiFi.getState();
    presenter->saveWifiState(wifiEnabled);
}
