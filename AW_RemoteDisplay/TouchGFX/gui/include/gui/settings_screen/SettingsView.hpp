#ifndef SETTINGSVIEW_HPP
#define SETTINGSVIEW_HPP

#include <gui_generated/settings_screen/SettingsViewBase.hpp>
#include <gui/settings_screen/SettingsPresenter.hpp>

class SettingsView : public SettingsViewBase
{
public:
    SettingsView();
    virtual ~SettingsView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void wifi_toggle();
    virtual void keyboardSelected(uint8_t value);
    virtual void updateScreen();
protected:
    bool wifiEnabled;
    bool wifiConnected;
    void wifi_status_handler(bool state);
    void vWifiEnable(bool enableState);
    bool vWifiConnect(char* ssid, char* pw);
};

#endif // SETTINGSVIEW_HPP
