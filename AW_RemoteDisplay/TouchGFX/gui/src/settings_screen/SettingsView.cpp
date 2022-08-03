#include <gui/settings_screen/SettingsView.hpp>
#include <touchgfx/Color.hpp>
#include <touchgfx/Utils.hpp>

Unicode::UnicodeChar keyboardBuffer[2][18];
uint8_t keyboardSelection;

SettingsView::SettingsView()
{

}

void SettingsView::setupScreen()
{
    SettingsViewBase::setupScreen();

    // Maybe check WiFi hardware pin here

    // Init screen for current WiFi state
    wifiEnabled = presenter->getWifiState();
    wifiConnected = presenter->getWifiConnected(); // TODO Add to

    toggleButtonWiFi.forceState(wifiEnabled);

    wifi_status_handler(wifiEnabled);

    toggleButtonWiFi.invalidate();
}

void SettingsView::tearDownScreen()
{
    SettingsViewBase::tearDownScreen();
}

void SettingsView::keyboardSelected(uint8_t value)
{
    keyboardSelection = value;
}

void SettingsView::updateScreen() // TODO Copy to char arrays to pass to application
{
    if(Unicode::strlen(keyboardBuffer[0]) > 0)
    {
        touchgfx::memset(&textAreaSSIDBuffer, 0, TEXTAREASSID_SIZE);
        Unicode::strncpy(textAreaSSIDBuffer, keyboardBuffer[0], TEXTAREASSID_SIZE - 1);
        textAreaSSIDBuffer[TEXTAREASSID_SIZE-1] = '\0'; // make sure last index is null
        textAreaSSID.invalidate();
    }
    if(Unicode::strlen(keyboardBuffer[1]) > 0)
    {
        char temp[18] = {0};
        uint8_t n = Unicode::strlen(keyboardBuffer[1]);
        Unicode::UnicodeChar unicodeBuf[18] = {0};

        touchgfx::memset(&temp, '*', n);

        Unicode::fromUTF8((uint8_t*)temp, unicodeBuf, Unicode::strlen(keyboardBuffer[1]));

        touchgfx::memset(&textAreaPassBuffer, 0, TEXTAREAPASS_SIZE);
        Unicode::strncpy(textAreaPassBuffer, unicodeBuf, TEXTAREAPASS_SIZE - 1);
        textAreaPassBuffer[TEXTAREAPASS_SIZE-1] = '\0'; // make sure last index is null
        textAreaPass.invalidate();
    }
}

// Toggle button click handler for WiFi Enable / Disable
void SettingsView::wifi_toggle()
{
    // Get & save user selected state
    wifiEnabled = toggleButtonWiFi.getState();
    presenter->saveWifiState(wifiEnabled);

    // Set hardware
    vWifiEnable(wifiEnabled);
    // Handle UI
    wifi_status_handler(wifiEnabled);
}

// Enable / Disable the Wifi Hardware
void SettingsView::vWifiEnable(bool enableState)
{
    presenter->prWifiEnable(enableState);
}

// Connect button click handler for WiFi connect
void SettingsView::wifi_connect()
{
    Unicode::strncpy(textAreaWifiStateBuffer, "WiFi: Connecting", TEXTAREAWIFISTATE_SIZE);
    textAreaWifiState.setColor(touchgfx::Color::getColorFromRGB(255, 140, 0));
    textAreaWifiState.invalidate();

    presenter->prWifiConnect(NULL, NULL); //TODO Use actual data
}

void SettingsView::wifi_status_handler(bool state)
{
    if(state)
    {
        // Enable the connect button & show message
        btnSettingsConnect.setAlpha(255);
        btnSettingsConnect.setTouchable(true);
        Unicode::strncpy(textAreaWifiStateBuffer, "WiFi: Enabled", TEXTAREAWIFISTATE_SIZE);
        textAreaWifiState.setColor(touchgfx::Color::getColorFromRGB(0, 255, 0));
    }
    else
    {
        // Disable the connect button & show message
        btnSettingsConnect.setAlpha(75);
        btnSettingsConnect.setTouchable(false);
        Unicode::strncpy(textAreaWifiStateBuffer, "WiFi: Disabled", TEXTAREAWIFISTATE_SIZE);
        textAreaWifiState.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    }

    textAreaWifiState.invalidate();
    btnSettingsConnect.invalidate();
}
