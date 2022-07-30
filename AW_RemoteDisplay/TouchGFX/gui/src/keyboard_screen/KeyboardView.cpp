#include <gui/keyboard_screen/KeyboardView.hpp>

KeyboardView::KeyboardView()
{
    keyboard.setPosition(80, 16, 320, 240);
    add(keyboard);
}

void KeyboardView::setupScreen()
{
    KeyboardViewBase::setupScreen();
}

void KeyboardView::tearDownScreen()
{
    KeyboardViewBase::tearDownScreen();
}
