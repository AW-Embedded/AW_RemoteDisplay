// 4.20.0 0x6dd8224f
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_aw_embedded_logos_transparent_25pc[]; // BITMAP_AW_EMBEDDED_LOGOS_TRANSPARENT_25PC_ID = 0, Size: 300x300 pixels
extern const unsigned char image_background[]; // BITMAP_BACKGROUND_ID = 1, Size: 480x272 pixels
extern const unsigned char image_blue_backgrounds_main_bg_texture_480x272px[]; // BITMAP_BLUE_BACKGROUNDS_MAIN_BG_TEXTURE_480X272PX_ID = 2, Size: 480x272 pixels
extern const unsigned char image_blue_togglebars_toggle_round_large_button_off[]; // BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_LARGE_BUTTON_OFF_ID = 3, Size: 128x38 pixels
extern const unsigned char image_blue_togglebars_toggle_round_large_button_on[]; // BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_LARGE_BUTTON_ON_ID = 4, Size: 128x38 pixels
extern const unsigned char image_blueled[]; // BITMAP_BLUELED_ID = 5, Size: 20x20 pixels
extern const unsigned char image_configuration[]; // BITMAP_CONFIGURATION_ID = 6, Size: 48x48 pixels
extern const unsigned char image_dark_buttons_round_icon_button[]; // BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_ID = 7, Size: 60x60 pixels
extern const unsigned char image_dark_buttons_round_icon_button_pressed[]; // BITMAP_DARK_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID = 8, Size: 60x60 pixels
extern const unsigned char image_greenled[]; // BITMAP_GREENLED_ID = 9, Size: 20x20 pixels
extern const unsigned char image_orangeled[]; // BITMAP_ORANGELED_ID = 10, Size: 20x20 pixels
extern const unsigned char image_redled[]; // BITMAP_REDLED_ID = 11, Size: 20x20 pixels
extern const unsigned char image_wifi[]; // BITMAP_WIFI_ID = 12, Size: 24x24 pixels
extern const unsigned char image_wifi_white[]; // BITMAP_WIFI_WHITE_ID = 13, Size: 24x24 pixels
extern const unsigned char image_yellowled[]; // BITMAP_YELLOWLED_ID = 14, Size: 20x20 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_aw_embedded_logos_transparent_25pc, 0, 300, 300, 158, 89, 96, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 97, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_background, 0, 480, 272, 0, 0, 480, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 272, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_blue_backgrounds_main_bg_texture_480x272px, 0, 480, 272, 0, 0, 480, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 272, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_blue_togglebars_toggle_round_large_button_off, 0, 128, 38, 13, 1, 102, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_togglebars_toggle_round_large_button_on, 0, 128, 38, 13, 1, 102, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blueled, 0, 20, 20, 0, 0, 20, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 20, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_configuration, 0, 48, 48, 44, 19, 2, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 8, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_dark_buttons_round_icon_button, 0, 60, 60, 13, 11, 34, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_dark_buttons_round_icon_button_pressed, 0, 60, 60, 13, 11, 34, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_greenled, 0, 20, 20, 0, 0, 20, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 20, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_orangeled, 0, 20, 20, 0, 0, 20, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 20, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_redled, 0, 20, 20, 0, 0, 20, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 20, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_wifi, 0, 24, 24, 8, 8, 8, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 1, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_wifi_white, 0, 24, 24, 8, 3, 8, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 2, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_yellowled, 0, 20, 20, 0, 0, 20, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 20, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
