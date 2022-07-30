/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>


MainViewBase::MainViewBase() :
    buttonCallback(this, &MainViewBase::buttonCallbackHandler)
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    mainBG.setXY(0, 0);
    mainBG.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_BACKGROUNDS_MAIN_BG_TEXTURE_480X272PX_ID));

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

    mainStateGreen.setXY(430, 2);
    mainStateGreen.setBitmap(touchgfx::Bitmap(BITMAP_GREENLED_ID));

    mainStateOrange.setXY(410, 2);
    mainStateOrange.setBitmap(touchgfx::Bitmap(BITMAP_ORANGELED_ID));
    mainStateOrange.setAlpha(50);

    mainStateRed.setXY(390, 2);
    mainStateRed.setBitmap(touchgfx::Bitmap(BITMAP_REDLED_ID));
    mainStateRed.setAlpha(50);

    mainWifiLogo.setXY(456, 0);
    mainWifiLogo.setBitmap(touchgfx::Bitmap(BITMAP_WIFI_ID));
    mainWifiLogo.setAlpha(50);

    bwb_graphBG.setPosition(60, 48, 360, 194);
    bwb_graphBG.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    bwb_graphBG.setBorderColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    bwb_graphBG.setBorderSize(1);

    dynamicGraph1.setScale(1);
    dynamicGraph1.setPosition(60, 48, 360, 194);
    dynamicGraph1.setGraphAreaMargin(10, 34, 0, 22);
    dynamicGraph1.setGraphAreaPadding(0, 10, 0, 10);
    dynamicGraph1.setGraphRangeY(0, 100);

    dynamicGraph1MajorYAxisGrid.setScale(1);
    dynamicGraph1MajorYAxisGrid.setColor(touchgfx::Color::getColorFromRGB(173, 173, 173));
    dynamicGraph1MajorYAxisGrid.setInterval(20);
    dynamicGraph1MajorYAxisGrid.setLineWidth(1);
    dynamicGraph1.addGraphElement(dynamicGraph1MajorYAxisGrid);

    dynamicGraph1MajorXAxisLabel.setScale(1);
    dynamicGraph1MajorXAxisLabel.setInterval(10);
    dynamicGraph1MajorXAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_PNXV));
    dynamicGraph1MajorXAxisLabel.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1.addBottomElement(dynamicGraph1MajorXAxisLabel);

    dynamicGraph1MajorYAxisLabel.setScale(1);
    dynamicGraph1MajorYAxisLabel.setInterval(10);
    dynamicGraph1MajorYAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_PS6Q));
    dynamicGraph1MajorYAxisLabel.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1.addLeftElement(dynamicGraph1MajorYAxisLabel);

    dynamicGraph1Line1Painter.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1Line1.setPainter(dynamicGraph1Line1Painter);
    dynamicGraph1Line1.setLineWidth(2);
    dynamicGraph1.addGraphElement(dynamicGraph1Line1);

    add(__background);
    add(mainBG);
    add(digitalClock1);
    add(btnMainSettings);
    add(btnMainAbout);
    add(btnMainStatus);
    add(mainStateGreen);
    add(mainStateOrange);
    add(mainStateRed);
    add(mainWifiLogo);
    add(bwb_graphBG);
    add(dynamicGraph1);
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
