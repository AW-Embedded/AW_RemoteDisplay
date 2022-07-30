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

    btnSettingsCancel.setXY(0, 212);
    btnSettingsCancel.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    btnSettingsCancel.setLabelText(touchgfx::TypedText(T___SINGLEUSE_DUMA));
    btnSettingsCancel.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnSettingsCancel.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnSettingsCancel.setAction(buttonCallback);

    btnSettingsSave.setXY(420, 212);
    btnSettingsSave.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    btnSettingsSave.setLabelText(touchgfx::TypedText(T___SINGLEUSE_1FA7));
    btnSettingsSave.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnSettingsSave.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

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

    textAreaSSID.setXY(123, 76);
    textAreaSSID.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textAreaSSID.setLinespacing(0);
    Unicode::snprintf(textAreaSSIDBuffer, TEXTAREASSID_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_BAJ3).getText());
    textAreaSSID.setWildcard(textAreaSSIDBuffer);
    textAreaSSID.resizeToCurrentText();
    textAreaSSID.setTypedText(touchgfx::TypedText(T___SINGLEUSE_P5QY));

    textAreaPass.setXY(123, 136);
    textAreaPass.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textAreaPass.setLinespacing(0);
    textAreaPass.setWildcard(touchgfx::TypedText(T___SINGLEUSE_DLZJ).getText());
    textAreaPass.resizeToCurrentText();
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

    textArea1_1_1.setXY(219, 199);
    textArea1_1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_1_1.setLinespacing(0);
    textArea1_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_X6LV));

    textAreaWifiState.setPosition(117, 33, 246, 24);
    textAreaWifiState.setColor(touchgfx::Color::getColorFromRGB(0, 255, 0));
    textAreaWifiState.setLinespacing(0);
    Unicode::snprintf(textAreaWifiStateBuffer, TEXTAREAWIFISTATE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_TO40).getText());
    textAreaWifiState.setWildcard(textAreaWifiStateBuffer);
    textAreaWifiState.setTypedText(touchgfx::TypedText(T___SINGLEUSE_PIEH));

    btnSettingsSave_1.setXY(420, 212);
    btnSettingsSave_1.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    btnSettingsSave_1.setLabelText(touchgfx::TypedText(T___SINGLEUSE_LQ19));
    btnSettingsSave_1.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnSettingsSave_1.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btnSettingsConnect.setXY(390, 88);
    btnSettingsConnect.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    btnSettingsConnect.setLabelText(touchgfx::TypedText(T___SINGLEUSE_EFNW));
    btnSettingsConnect.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnSettingsConnect.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    add(__background);
    add(settingsBG);
    add(btnSettingsCancel);
    add(btnSettingsSave);
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
    add(btnSettingsSave_1);
    add(btnSettingsConnect);
}

void SettingsViewBase::setupScreen()
{

}

void SettingsViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &btnSettingsCancel)
    {
        //settingsToMain
        //When btnSettingsCancel clicked change screen to Main
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
}

void SettingsViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButtonSSID)
    {
        //SSIDtoKeys
        //When flexButtonSSID clicked change screen to Keyboard
        //Go to Keyboard with no screen transition
        application().gotoKeyboardScreenNoTransition();
    }
}
