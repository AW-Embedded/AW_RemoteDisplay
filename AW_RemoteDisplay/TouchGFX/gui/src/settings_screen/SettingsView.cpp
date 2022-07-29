#include <gui/settings_screen/SettingsView.hpp>
#include <touchgfx/Color.hpp>

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

    if(wifiEnabled)
    {
        Unicode::strncpy(textAreaWifiStateBuffer, "WiFi: Enabled", TEXTAREAWIFISTATE_SIZE);
        textAreaWifiState.setColor(touchgfx::Color::getColorFromRGB(0, 255, 0));
    }
    else
    {
        Unicode::strncpy(textAreaWifiStateBuffer, "WiFi: Disabled", TEXTAREAWIFISTATE_SIZE);
        textAreaWifiState.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    }

    textAreaWifiState.invalidate();
}
