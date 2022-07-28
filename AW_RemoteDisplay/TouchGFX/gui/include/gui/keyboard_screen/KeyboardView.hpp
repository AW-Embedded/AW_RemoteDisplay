#ifndef KEYBOARDVIEW_HPP
#define KEYBOARDVIEW_HPP

#include <gui_generated/keyboard_screen/KeyboardViewBase.hpp>
#include <gui/keyboard_screen/KeyboardPresenter.hpp>

class KeyboardView : public KeyboardViewBase
{
public:
    KeyboardView();
    virtual ~KeyboardView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // KEYBOARDVIEW_HPP
