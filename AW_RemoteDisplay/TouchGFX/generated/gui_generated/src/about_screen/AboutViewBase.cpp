/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/about_screen/AboutViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

AboutViewBase::AboutViewBase() :
    buttonCallback(this, &AboutViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    aboutBG.setXY(0, 0);
    aboutBG.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_BACKGROUNDS_MAIN_BG_TEXTURE_480X272PX_ID));

    btnAboutHome.setXY(0, 212);
    btnAboutHome.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    btnAboutHome.setLabelText(touchgfx::TypedText(T___SINGLEUSE_EN8X));
    btnAboutHome.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnAboutHome.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnAboutHome.setAction(buttonCallback);

    aboutHeader.setXY(211, 0);
    aboutHeader.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    aboutHeader.setLinespacing(0);
    aboutHeader.setTypedText(touchgfx::TypedText(T___SINGLEUSE_8QF8));

    add(__background);
    add(aboutBG);
    add(btnAboutHome);
    add(aboutHeader);
}

void AboutViewBase::setupScreen()
{

}

void AboutViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &btnAboutHome)
    {
        //aboutToMain
        //When btnAboutHome clicked change screen to Main
        //Go to Main with no screen transition
        application().gotoMainScreenNoTransition();
    }
}