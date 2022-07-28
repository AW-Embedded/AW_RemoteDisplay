/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef KEYBOARDVIEWBASE_HPP
#define KEYBOARDVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/keyboard_screen/KeyboardPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class KeyboardViewBase : public touchgfx::View<KeyboardPresenter>
{
public:
    KeyboardViewBase();
    virtual ~KeyboardViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image keyboardBG;
    touchgfx::ButtonWithLabel btnKeyboardCancel;
    touchgfx::ButtonWithLabel btnKeyboardSave;
    touchgfx::TextArea keyboardHeader;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<KeyboardViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // KEYBOARDVIEWBASE_HPP
