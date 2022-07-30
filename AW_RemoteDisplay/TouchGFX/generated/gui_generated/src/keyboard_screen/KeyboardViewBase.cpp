/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/keyboard_screen/KeyboardViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

KeyboardViewBase::KeyboardViewBase() :
    buttonCallback(this, &KeyboardViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    keyboardBG.setXY(0, 0);
    keyboardBG.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_ID));

    btnKeyboardCancel.setXY(0, 212);
    btnKeyboardCancel.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    btnKeyboardCancel.setLabelText(touchgfx::TypedText(T___SINGLEUSE_AUSN));
    btnKeyboardCancel.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnKeyboardCancel.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnKeyboardCancel.setAction(buttonCallback);

    btnKeyboardSave.setXY(420, 212);
    btnKeyboardSave.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    btnKeyboardSave.setLabelText(touchgfx::TypedText(T___SINGLEUSE_022I));
    btnKeyboardSave.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnKeyboardSave.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnKeyboardSave.setAction(buttonCallback);

    add(__background);
    add(keyboardBG);
    add(btnKeyboardCancel);
    add(btnKeyboardSave);
}

void KeyboardViewBase::setupScreen()
{

}

void KeyboardViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &btnKeyboardCancel)
    {
        //keyboardToSettings
        //When btnKeyboardCancel clicked change screen to Settings
        //Go to Settings with no screen transition
        application().gotoSettingsScreenNoTransition();
    }
    else if (&src == &btnKeyboardSave)
    {
        //KeyboardOK
        //When btnKeyboardSave clicked call virtual function
        //Call getBuffer
        getBuffer();

        //saveToSettings
        //When KeyboardOK completed change screen to Settings
        //Go to Settings with no screen transition
        application().gotoSettingsScreenNoTransition();
    }
}
