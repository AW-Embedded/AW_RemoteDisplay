/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/status_screen/StatusViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>


StatusViewBase::StatusViewBase() :
    buttonCallback(this, &StatusViewBase::buttonCallbackHandler)
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    statusBG.setXY(0, 0);
    statusBG.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_ID));

    btnStatusHome.setXY(420, 212);
    btnStatusHome.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    btnStatusHome.setLabelText(touchgfx::TypedText(T___SINGLEUSE_D3BV));
    btnStatusHome.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnStatusHome.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnStatusHome.setAction(buttonCallback);

    statusHeader.setXY(208, 0);
    statusHeader.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    statusHeader.setLinespacing(0);
    statusHeader.setTypedText(touchgfx::TypedText(T___SINGLEUSE_JWZO));

    statusWifiLogo.setXY(456, 0);
    statusWifiLogo.setBitmap(touchgfx::Bitmap(BITMAP_WIFI_WHITE_ID));
    statusWifiLogo.setAlpha(50);

    statusWifiCross.setPosition(456, 0, 24, 24);
    statusWifiCrossPainter.setColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    statusWifiCross.setPainter(statusWifiCrossPainter);
    statusWifiCross.setStart(5, 5);
    statusWifiCross.setEnd(19, 19);
    statusWifiCross.setLineWidth(2);
    statusWifiCross.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);

    add(__background);
    add(statusBG);
    add(btnStatusHome);
    add(statusHeader);
    add(statusWifiLogo);
    add(statusWifiCross);
}

void StatusViewBase::setupScreen()
{

}

void StatusViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &btnStatusHome)
    {
        //StatusToMain
        //When btnStatusHome clicked change screen to Main
        //Go to Main with no screen transition
        application().gotoMainScreenNoTransition();
    }
}
