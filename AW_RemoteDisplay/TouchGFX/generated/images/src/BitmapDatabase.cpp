// 4.20.0 0x6278331c
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_aw_embedded_logos_transparent_25pc[]; // BITMAP_AW_EMBEDDED_LOGOS_TRANSPARENT_25PC_ID = 0, Size: 300x300 pixels
extern const unsigned char image_blue_backgrounds_main_bg_texture_480x272px[]; // BITMAP_BLUE_BACKGROUNDS_MAIN_BG_TEXTURE_480X272PX_ID = 1, Size: 480x272 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_aw_embedded_logos_transparent_25pc, 0, 300, 300, 158, 89, 96, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 97, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_backgrounds_main_bg_texture_480x272px, 0, 480, 272, 0, 0, 480, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 272, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 }
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
