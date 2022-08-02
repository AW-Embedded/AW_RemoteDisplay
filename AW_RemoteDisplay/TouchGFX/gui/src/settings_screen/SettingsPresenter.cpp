#include <gui/settings_screen/SettingsView.hpp>
#include <gui/settings_screen/SettingsPresenter.hpp>

SettingsPresenter::SettingsPresenter(SettingsView& v)
    : view(v)
{

}

void SettingsPresenter::activate()
{

}

void SettingsPresenter::deactivate()
{

}

void SettingsPresenter::prWifiEnable(bool enableState)
{
    model->wifiEnable(enableState);
}

bool SettingsPresenter::prWifiConnect(char* ssid, char* pw)
{
    return model->wifiConnect(ssid, pw);
}
