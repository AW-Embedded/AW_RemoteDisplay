/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/settings_screen/SettingsViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

SettingsViewBase::SettingsViewBase() :
    buttonCallback(this, &SettingsViewBase::buttonCallbackHandler),
    flexButtonCallback(this, &SettingsViewBase::flexButtonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    settingsBG.setXY(0, 0);
    settingsBG.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_ID));

    btnSettingsHome.setXY(420, 211);
    btnSettingsHome.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    btnSettingsHome.setLabelText(touchgfx::TypedText(T___SINGLEUSE_DUMA));
    btnSettingsHome.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnSettingsHome.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnSettingsHome.setAction(buttonCallback);

    settingsHeader.setXY(199, 0);
    settingsHeader.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    settingsHeader.setLinespacing(0);
    settingsHeader.setTypedText(touchgfx::TypedText(T___SINGLEUSE_IMOE));

    boxWithBorderSSID.setPosition(117, 63, 246, 50);
    boxWithBorderSSID.setColor(touchgfx::Color::getColorFromRGB(158, 158, 158));
    boxWithBorderSSID.setBorderColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    boxWithBorderSSID.setBorderSize(2);

    flexButtonSSID.setBoxWithBorderPosition(0, 0, 246, 50);
    flexButtonSSID.setBorderSize(5);
    flexButtonSSID.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButtonSSID.setPosition(117, 63, 246, 50);
    flexButtonSSID.setAlpha(0);
    flexButtonSSID.setAction(flexButtonCallback);

    boxWithBorderPass.setPosition(117, 123, 246, 50);
    boxWithBorderPass.setColor(touchgfx::Color::getColorFromRGB(158, 158, 158));
    boxWithBorderPass.setBorderColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    boxWithBorderPass.setBorderSize(2);

    flexButtonPass.setBoxWithBorderPosition(0, 0, 246, 50);
    flexButtonPass.setBorderSize(5);
    flexButtonPass.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButtonPass.setPosition(117, 123, 246, 50);
    flexButtonPass.setAlpha(0);
    flexButtonPass.setAction(flexButtonCallback);

    textAreaSSID.setPosition(123, 76, 234, 26);
    textAreaSSID.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textAreaSSID.setLinespacing(0);
    Unicode::snprintf(textAreaSSIDBuffer, TEXTAREASSID_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_BAJ3).getText());
    textAreaSSID.setWildcard(textAreaSSIDBuffer);
    textAreaSSID.setTypedText(touchgfx::TypedText(T___SINGLEUSE_P5QY));

    textAreaPass.setPosition(123, 136, 234, 26);
    textAreaPass.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textAreaPass.setLinespacing(0);
    Unicode::snprintf(textAreaPassBuffer, TEXTAREAPASS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_DLZJ).getText());
    textAreaPass.setWildcard(textAreaPassBuffer);
    textAreaPass.setTypedText(touchgfx::TypedText(T___SINGLEUSE_7167));

    textArea1.setXY(60, 76);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_AVRV));

    textArea1_1.setXY(67, 136);
    textArea1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CHWV));

    toggleButtonWiFi.setXY(176, 223);
    toggleButtonWiFi.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_LARGE_BUTTON_OFF_ID), touchgfx::Bitmap(BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_LARGE_BUTTON_ON_ID));
    toggleButtonWiFi.setAction(buttonCallback);

    textArea1_1_1.setXY(215, 199);
    textArea1_1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_1_1.setLinespacing(0);
    textArea1_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_X6LV));

    textAreaWifiState.setPosition(117, 33, 246, 24);
    textAreaWifiState.setColor(touchgfx::Color::getColorFromRGB(0, 255, 0));
    textAreaWifiState.setLinespacing(0);
    Unicode::snprintf(textAreaWifiStateBuffer, TEXTAREAWIFISTATE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_TO40).getText());
    textAreaWifiState.setWildcard(textAreaWifiStateBuffer);
    textAreaWifiState.setTypedText(touchgfx::TypedText(T___SINGLEUSE_PIEH));

    btnSettingsConnect.setXY(390, 88);
    btnSettingsConnect.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    btnSettingsConnect.setLabelText(touchgfx::TypedText(T___SINGLEUSE_EFNW));
    btnSettingsConnect.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnSettingsConnect.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnSettingsConnect.setAction(buttonCallback);

    add(__background);
    add(settingsBG);
    add(btnSettingsHome);
    add(settingsHeader);
    add(boxWithBorderSSID);
    add(flexButtonSSID);
    add(boxWithBorderPass);
    add(flexButtonPass);
    add(textAreaSSID);
    add(textAreaPass);
    add(textArea1);
    add(textArea1_1);
    add(toggleButtonWiFi);
    add(textArea1_1_1);
    add(textAreaWifiState);
    add(btnSettingsConnect);
}

void SettingsViewBase::setupScreen()
{

}

//Called when the screen transition ends
void SettingsViewBase::afterTransition()
{
    //updateScreen
    //When screen transition ends call virtual function
    //Call updateScreen
    updateScreen();
}

void SettingsViewBase::keyboardSelectedVar(uint8_t value)
{
    //keyboardSelected
    //When keyboardSelectedVar is called call virtual function
    //Call keyboardSelected
    keyboardSelected(value);

    //gotoKeyboard
    //When keyboardSelected completed change screen to Keyboard
    //Go to Keyboard with no screen transition
    application().gotoKeyboardScreenNoTransition();
}

void SettingsViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &btnSettingsHome)
    {
        //settingsToMain
        //When btnSettingsHome clicked change screen to Main
        //Go to Main with no screen transition
        application().gotoMainScreenNoTransition();
    }
    else if (&src == &toggleButtonWiFi)
    {
        //wifi_toggled
        //When toggleButtonWiFi clicked call virtual function
        //Call wifi_toggle
        wifi_toggle();
    }
    else if (&src == &btnSettingsConnect)
    {
        //wifiConnect
        //When btnSettingsConnect clicked call virtual function
        //Call wifi_connect
        wifi_connect();
    }
}

void SettingsViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButtonSSID)
    {
        //ButtonSSID
        //When flexButtonSSID clicked call keyboardSelectedVar on Settings
        //Call keyboardSelectedVar
        keyboardSelectedVar(0);
    }
    else if (&src == &flexButtonPass)
    {
        //ButtonPass
        //When flexButtonPass clicked call keyboardSelectedVar on Settings
        //Call keyboardSelectedVar
        keyboardSelectedVar(1);
    }
}
