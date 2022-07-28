/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

MainViewBase::MainViewBase() :
    buttonCallback(this, &MainViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    mainBG.setXY(0, 0);
    mainBG.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_BACKGROUNDS_MAIN_BG_TEXTURE_480X272PX_ID));

    mainLOGO.setXY(90, -14);
    mainLOGO.setBitmap(touchgfx::Bitmap(BITMAP_AW_EMBEDDED_LOGOS_TRANSPARENT_25PC_ID));

    digitalClock1.setPosition(178, 0, 125, 43);
    digitalClock1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    digitalClock1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_IDW8));
    digitalClock1.displayLeadingZeroForHourIndicator(true);
    digitalClock1.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR_NO_SECONDS);
    digitalClock1.setTime24Hour(12, 0, 0);

    btnMainSettings.setXY(0, 0);
    btnMainSettings.setBitmaps(touchgfx::Bitmap(BITMAP_CONFIGURATION_ID), touchgfx::Bitmap(BITMAP_CONFIGURATION_ID));
    btnMainSettings.setAction(buttonCallback);

    btnMainAbout.setXY(0, 212);
    btnMainAbout.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    btnMainAbout.setLabelText(touchgfx::TypedText(T___SINGLEUSE_MCCQ));
    btnMainAbout.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnMainAbout.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnMainAbout.setAction(buttonCallback);

    btnMainStatus.setXY(420, 212);
    btnMainStatus.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    btnMainStatus.setLabelText(touchgfx::TypedText(T___SINGLEUSE_T7OG));
    btnMainStatus.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnMainStatus.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnMainStatus.setAction(buttonCallback);

    mainStateGreen.setXY(450, 10);
    mainStateGreen.setBitmap(touchgfx::Bitmap(BITMAP_GREENLED_ID));

    mainStateOrange.setXY(450, 10);
    mainStateOrange.setVisible(false);
    mainStateOrange.setBitmap(touchgfx::Bitmap(BITMAP_ORANGELED_ID));

    mainStateRed.setXY(450, 10);
    mainStateRed.setVisible(false);
    mainStateRed.setBitmap(touchgfx::Bitmap(BITMAP_REDLED_ID));

    add(__background);
    add(mainBG);
    add(mainLOGO);
    add(digitalClock1);
    add(btnMainSettings);
    add(btnMainAbout);
    add(btnMainStatus);
    add(mainStateGreen);
    add(mainStateOrange);
    add(mainStateRed);
}

void MainViewBase::setupScreen()
{

}

void MainViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &btnMainSettings)
    {
        //mainToSettings
        //When btnMainSettings clicked change screen to Settings
        //Go to Settings with no screen transition
        application().gotoSettingsScreenNoTransition();
    }
    else if (&src == &btnMainAbout)
    {
        //mainToAbout
        //When btnMainAbout clicked change screen to About
        //Go to About with no screen transition
        application().gotoAboutScreenNoTransition();
    }
    else if (&src == &btnMainStatus)
    {
        //mainToStatus
        //When btnMainStatus clicked change screen to Status
        //Go to Status with no screen transition
        application().gotoStatusScreenNoTransition();
    }
}
