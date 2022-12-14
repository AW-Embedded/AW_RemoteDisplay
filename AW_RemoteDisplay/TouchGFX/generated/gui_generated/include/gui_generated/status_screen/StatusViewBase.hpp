/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef STATUSVIEWBASE_HPP
#define STATUSVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/status_screen/StatusPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/canvas/Line.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>

class StatusViewBase : public touchgfx::View<StatusPresenter>
{
public:
    StatusViewBase();
    virtual ~StatusViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image statusBG;
    touchgfx::ButtonWithLabel btnStatusHome;
    touchgfx::TextArea statusHeader;
    touchgfx::Image statusWifiLogo;
    touchgfx::BoxWithBorder boxWithBorder1;
    touchgfx::Line statusWifiCross;
    touchgfx::PainterRGB565 statusWifiCrossPainter;
    touchgfx::Image statusStateGreen;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea1_1;
    touchgfx::TextArea textArea1_2;
    touchgfx::TextArea textArea1_3;
    touchgfx::Image statusStateGreen_4;
    touchgfx::TextArea textArea1_4;
    touchgfx::TextArea textArea1_1_1;
    touchgfx::TextArea textArea1_2_1;
    touchgfx::TextArea textArea1_3_1;
    touchgfx::Image statusStateGreen_1;
    touchgfx::Image statusStateGreen_2;
    touchgfx::Image statusStateGreen_3;
    touchgfx::Image statusStateGreen_5;
    touchgfx::Image statusStateGreen_6;
    touchgfx::Image statusStateGreen_7;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<StatusViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // STATUSVIEWBASE_HPP
