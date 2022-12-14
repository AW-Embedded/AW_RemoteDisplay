/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <stdarg.h>
#include <touchgfx/TextProvider.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/TypedText.hpp>
#include <touchgfx/Unicode.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <texts/TypedTextDatabase.hpp>

uint16_t touchgfx::Font::getStringWidth(const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(TEXT_DIRECTION_LTR, text, pArg);
    va_end(pArg);
    return width;
}

uint16_t touchgfx::Font::getStringWidth(touchgfx::TextDirection textDirection, const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(textDirection, text, pArg);
    va_end(pArg);
    return width;
}

touchgfx::Unicode::UnicodeChar touchgfx::TextProvider::getNextLigature(TextDirection direction)
{
    if (fontGsubTable && nextCharacters.peekChar())
    {
        substituteGlyphs();
        if (nextCharacters.peekChar(1) == 0x093F) // Hindi I-matra
        {
            nextCharacters.replaceAt1(nextCharacters.peekChar());
            nextCharacters.replaceAt0(0x093F);
        }
    }
    return getNextChar();
}

void touchgfx::TextProvider::initializeInternal()
{
    fillInputBuffer();
}

void touchgfx::LCD::drawString(touchgfx::Rect widgetArea, const touchgfx::Rect& invalidatedArea, const touchgfx::LCD::StringVisuals& stringVisuals, const touchgfx::Unicode::UnicodeChar* format, ...)
{
    va_list pArg;
    va_start(pArg, format);
    drawStringLTR(widgetArea, invalidatedArea, stringVisuals, format, pArg);
    va_end(pArg);
}

// Default TypedTextDatabase
extern const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[];

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const touchgfx::Unicode::UnicodeChar texts_all_languages[] TEXT_LOCATION_FLASH_ATTRIBUTE = {
    0x52, 0x65, 0x6d, 0x6f, 0x74, 0x65, 0x20, 0x44, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0x20, 0x4d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x0, // @0 "Remote Display Module"
    0x2, 0x0, // @22 "<>"
    0x4c, 0x69, 0x76, 0x65, 0x20, 0x44, 0x61, 0x74, 0x61, 0x0, // @24 "Live Data"
    0x53, 0x65, 0x74, 0x74, 0x69, 0x6e, 0x67, 0x73, 0x0, // @34 "Settings"
    0x43, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x0, // @43 "Connect"
    0x43, 0x61, 0x6e, 0x63, 0x65, 0x6c, 0x0, // @51 "Cancel"
    0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x0, // @58 "Status"
    0x5a, 0x6f, 0x6e, 0x65, 0x20, 0x31, 0x0, // @65 "Zone 1"
    0x5a, 0x6f, 0x6e, 0x65, 0x20, 0x32, 0x0, // @72 "Zone 2"
    0x5a, 0x6f, 0x6e, 0x65, 0x20, 0x33, 0x0, // @79 "Zone 3"
    0x5a, 0x6f, 0x6e, 0x65, 0x20, 0x34, 0x0, // @86 "Zone 4"
    0x5a, 0x6f, 0x6e, 0x65, 0x20, 0x35, 0x0, // @93 "Zone 5"
    0x5a, 0x6f, 0x6e, 0x65, 0x20, 0x36, 0x0, // @100 "Zone 6"
    0x5a, 0x6f, 0x6e, 0x65, 0x20, 0x37, 0x0, // @107 "Zone 7"
    0x5a, 0x6f, 0x6e, 0x65, 0x20, 0x38, 0x0, // @114 "Zone 8"
    0x41, 0x62, 0x6f, 0x75, 0x74, 0x0, // @121 "About"
    0x57, 0x69, 0x2d, 0x46, 0x69, 0x0, // @127 "Wi-Fi"
    0x48, 0x6f, 0x6d, 0x65, 0x0, // @133 "Home"
    0x50, 0x61, 0x73, 0x73, 0x0, // @138 "Pass"
    0x53, 0x53, 0x49, 0x44, 0x0, // @143 "SSID"
    0x53, 0x61, 0x76, 0x65, 0x0, // @148 "Save"
    0x31, 0x32, 0x33, 0x0, // @153 "123"
    0x41, 0x42, 0x43, 0x0 // @157 "ABC"
};

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern uint32_t const indicesGb[] TEXT_LOCATION_FLASH_ATTRIBUTE;

// Array holding dynamically installed languages
struct TranslationHeader
{
    uint32_t offset_to_texts;
    uint32_t offset_to_indices;
    uint32_t offset_to_typedtext;
};
static const TranslationHeader* languagesArray[1] = { 0 };

// Compiled and linked in languages
static const uint32_t* const staticLanguageIndices[] = {
    indicesGb
};

touchgfx::LanguageId touchgfx::Texts::currentLanguage = static_cast<touchgfx::LanguageId>(0);
static const touchgfx::Unicode::UnicodeChar* currentLanguagePtr = 0;
static const uint32_t* currentLanguageIndices = 0;

void touchgfx::Texts::setLanguage(touchgfx::LanguageId id)
{
    const touchgfx::TypedText::TypedTextData* currentLanguageTypedText = 0;
    if (id < 1)
    {
        if (languagesArray[id] != 0)
        {
            // Dynamic translation is added
            const TranslationHeader* translation = languagesArray[id];
            currentLanguagePtr = (const touchgfx::Unicode::UnicodeChar*)(((const uint8_t*)translation) + translation->offset_to_texts);
            currentLanguageIndices = (const uint32_t*)(((const uint8_t*)translation) + translation->offset_to_indices);
            currentLanguageTypedText = (const touchgfx::TypedText::TypedTextData*)(((const uint8_t*)translation) + translation->offset_to_typedtext);
        }
        else
        {
            // Compiled and linked in languages
            currentLanguagePtr = texts_all_languages;
            currentLanguageIndices = staticLanguageIndices[id];
            currentLanguageTypedText = typedTextDatabaseArray[id];
        }
    }

    if (currentLanguageTypedText)
    {
        currentLanguage = id;
        touchgfx::TypedText::registerTypedTextDatabase(currentLanguageTypedText,
                                                       TypedTextDatabase::getFonts(), TypedTextDatabase::getInstanceSize());
    }
}

void touchgfx::Texts::setTranslation(touchgfx::LanguageId id, const void* translation)
{
    languagesArray[id] = (const TranslationHeader*)translation;
}

const touchgfx::Unicode::UnicodeChar* touchgfx::Texts::getText(TypedTextId id) const
{
    return &currentLanguagePtr[currentLanguageIndices[id]];
}
