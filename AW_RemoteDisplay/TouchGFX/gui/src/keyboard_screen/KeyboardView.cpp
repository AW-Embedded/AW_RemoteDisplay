#include <gui/keyboard_screen/KeyboardView.hpp>

extern Unicode::UnicodeChar keyboardBuffer[2][18];
extern uint8_t keyboardSelection;

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

void KeyboardView::getBuffer() // Added
{
    Unicode::UnicodeChar* buff = keyboard.getBuffer();
    Unicode::strncpy(keyboardBuffer[keyboardSelection], buff, Unicode::strlen(buff) + 1);
}
