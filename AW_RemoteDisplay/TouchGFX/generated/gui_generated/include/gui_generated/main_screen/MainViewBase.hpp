/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MAINVIEWBASE_HPP
#define MAINVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/main_screen/MainPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/graph/GraphWrapAndClear.hpp>
#include <touchgfx/widgets/graph/GraphElements.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/graph/GraphLabels.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/canvas/Line.hpp>

class MainViewBase : public touchgfx::View<MainPresenter>
{
public:
    MainViewBase();
    virtual ~MainViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image mainBG;
    touchgfx::DigitalClock digitalClock1;
    touchgfx::Button btnMainSettings;
    touchgfx::ButtonWithLabel btnMainAbout;
    touchgfx::ButtonWithLabel btnMainStatus;
    touchgfx::Image mainStateGreen;
    touchgfx::Image mainStateOrange;
    touchgfx::Image mainStateRed;
    touchgfx::Image mainWifiLogo;
    touchgfx::BoxWithBorder bwb_graphBG;
    touchgfx::GraphWrapAndClear<100> dynamicGraph1;
    touchgfx::GraphElementLine dynamicGraph1Line1;
    touchgfx::PainterRGB565 dynamicGraph1Line1Painter;
    touchgfx::GraphElementGridY dynamicGraph1MajorYAxisGrid;
    touchgfx::GraphLabelsX dynamicGraph1MajorXAxisLabel;
    touchgfx::GraphLabelsY dynamicGraph1MajorYAxisLabel;
    touchgfx::BoxWithBorder bwb_graphBG_1;
    touchgfx::BoxWithBorder bwb_graphBG_2;
    touchgfx::BoxWithBorder bwb_graphBG_3;
    touchgfx::GraphWrapAndClear<100> dynamicGraph2;
    touchgfx::GraphElementLine dynamicGraph2Line1;
    touchgfx::PainterRGB565 dynamicGraph2Line1Painter;
    touchgfx::GraphElementGridY dynamicGraph2MajorYAxisGrid;
    touchgfx::GraphLabelsX dynamicGraph2MajorXAxisLabel;
    touchgfx::GraphLabelsY dynamicGraph2MajorYAxisLabel;
    touchgfx::GraphWrapAndClear<100> dynamicGraph3;
    touchgfx::GraphElementLine dynamicGraph3Line1;
    touchgfx::PainterRGB565 dynamicGraph3Line1Painter;
    touchgfx::GraphElementGridY dynamicGraph3MajorYAxisGrid;
    touchgfx::GraphLabelsX dynamicGraph3MajorXAxisLabel;
    touchgfx::GraphLabelsY dynamicGraph3MajorYAxisLabel;
    touchgfx::GraphWrapAndClear<100> dynamicGraph4;
    touchgfx::GraphElementLine dynamicGraph4Line1;
    touchgfx::PainterRGB565 dynamicGraph4Line1Painter;
    touchgfx::GraphElementGridY dynamicGraph4MajorYAxisGrid;
    touchgfx::GraphLabelsX dynamicGraph4MajorXAxisLabel;
    touchgfx::GraphLabelsY dynamicGraph4MajorYAxisLabel;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea1_1;
    touchgfx::TextArea textArea1_1_1;
    touchgfx::TextArea textArea1_1_2;
    touchgfx::Line mainWifiCross;
    touchgfx::PainterRGB565 mainWifiCrossPainter;
    touchgfx::TextArea textArea2;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<MainViewBase, const touchgfx::AbstractButton&> buttonCallback;

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

#endif // MAINVIEWBASE_HPP
