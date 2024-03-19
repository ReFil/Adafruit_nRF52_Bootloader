#include "boards.h"

#if defined(DISPLAY_PIN_SCK)

#include <stdint.h>

// all https://makecode.com/_VrfEKzV4xfvq

// https://makecode.com/_7VxXm3JMPXfM - file
// https://makecode.com/_LuEUCsPEKUbs - download
const uint8_t fileLogo[] = {
32, 32, 71, 140, 201, 151, 1, 2, 146, 1, 2, 146, 63, 2, 151, 9, 153, 9, 153, 9, 146, 1, 9, 146, 3, 9, 146, 7, 9, 137, 205, 72, 140, 206, 36, 139, 207, 18, 138, 206, 36, 139, 205, 72, 149, 7, 9, 146, 3, 9, 146, 1, 9, 153, 9, 153, 9, 153, 9, 148, 63, 2, 146, 1, 2, 146, 1, 2, 146, 201, 191, 191, 191, 174
};

// https://makecode.com/_9b0RcK5yRa12
const uint8_t pendriveLogo[] = {
32, 32, 59, 137, 215, 137, 1, 143, 1, 8, 146, 203, 149, 3, 8, 146, 3, 8, 146, 115, 8, 146, 115, 8, 146, 3, 8, 146, 3, 8, 146, 115, 8, 146, 115, 8, 146, 3, 8, 146, 3, 8, 146, 203, 149, 1, 8, 146, 1, 8, 146, 1, 120, 211, 191, 191, 191, 191, 191, 191, 191, 135
};

// https://makecode.com/_TTqbj705L4mr
const uint8_t arrowLogo[] = {
32, 32, 54, 137, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 146, 211, 142, 209, 144, 207, 146, 205, 148, 203, 150, 201, 152, 199, 154, 31, 154, 7, 154, 1, 191, 191, 191, 175
};

const uint8_t font8[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x5e, 0x00, 0x00, 0x00,
0x00, 0x0e, 0x00, 0x0e, 0x00, 0x00,
0x28, 0xfe, 0x28, 0xfe, 0x28, 0x00,
0x4c, 0x92, 0xff, 0x92, 0x64, 0x00,
0x02, 0x65, 0x12, 0x48, 0xa6, 0x40,
0x6c, 0x92, 0x92, 0x6c, 0xa0, 0x00,
0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
0x00, 0x00, 0x7c, 0x82, 0x00, 0x00,
0x00, 0x00, 0x82, 0x7c, 0x00, 0x00,
0x54, 0x38, 0x10, 0x38, 0x54, 0x00,
0x10, 0x10, 0x7c, 0x10, 0x10, 0x00,
0x00, 0x00, 0x90, 0x70, 0x00, 0x00,
0x10, 0x10, 0x10, 0x10, 0x10, 0x00,
0x00, 0x00, 0x60, 0x60, 0x00, 0x00,
0x00, 0x60, 0x10, 0x08, 0x06, 0x00,
0x00, 0x3c, 0x42, 0x42, 0x3c, 0x00,
0x00, 0x44, 0x7e, 0x40, 0x00, 0x00,
0x00, 0x44, 0x62, 0x52, 0x4c, 0x00,
0x00, 0x42, 0x4a, 0x4e, 0x32, 0x00,
0x30, 0x28, 0x24, 0x7e, 0x20, 0x00,
0x00, 0x4e, 0x4a, 0x4a, 0x32, 0x00,
0x00, 0x3c, 0x4a, 0x4a, 0x30, 0x00,
0x00, 0x02, 0x62, 0x12, 0x0e, 0x00,
0x00, 0x34, 0x4a, 0x4a, 0x34, 0x00,
0x00, 0x0c, 0x52, 0x52, 0x3c, 0x00,
0x00, 0x00, 0x6c, 0x6c, 0x00, 0x00,
0x00, 0x00, 0x96, 0x76, 0x00, 0x00,
0x10, 0x28, 0x28, 0x44, 0x44, 0x00,
0x28, 0x28, 0x28, 0x28, 0x28, 0x00,
0x44, 0x44, 0x28, 0x28, 0x10, 0x00,
0x00, 0x02, 0x59, 0x09, 0x06, 0x00,
0x3c, 0x42, 0x5a, 0x56, 0x08, 0x00,
0x78, 0x14, 0x12, 0x14, 0x78, 0x00,
0x7e, 0x4a, 0x4a, 0x4a, 0x34, 0x00,
0x00, 0x3c, 0x42, 0x42, 0x24, 0x00,
0x00, 0x7e, 0x42, 0x42, 0x3c, 0x00,
0x00, 0x7e, 0x4a, 0x4a, 0x42, 0x00,
0x00, 0x7e, 0x0a, 0x0a, 0x02, 0x00,
0x00, 0x3c, 0x42, 0x52, 0x34, 0x00,
0x00, 0x7e, 0x08, 0x08, 0x7e, 0x00,
0x00, 0x42, 0x7e, 0x42, 0x00, 0x00,
0x20, 0x40, 0x42, 0x3e, 0x02, 0x00,
0x00, 0x7e, 0x08, 0x14, 0x62, 0x00,
0x00, 0x7e, 0x40, 0x40, 0x40, 0x00,
0x7e, 0x04, 0x18, 0x04, 0x7e, 0x00,
0x00, 0x7e, 0x04, 0x08, 0x7e, 0x00,
0x3c, 0x42, 0x42, 0x42, 0x3c, 0x00,
0x00, 0x7e, 0x12, 0x12, 0x0c, 0x00,
0x00, 0x3c, 0x52, 0x62, 0xbc, 0x00,
0x00, 0x7e, 0x12, 0x12, 0x6c, 0x00,
0x00, 0x24, 0x4a, 0x52, 0x24, 0x00,
0x02, 0x02, 0x7e, 0x02, 0x02, 0x00,
0x00, 0x3e, 0x40, 0x40, 0x3e, 0x00,
0x00, 0x1e, 0x70, 0x70, 0x1e, 0x00,
0x7e, 0x20, 0x18, 0x20, 0x7e, 0x00,
0x42, 0x24, 0x18, 0x24, 0x42, 0x00,
0x06, 0x08, 0x70, 0x08, 0x06, 0x00,
0x00, 0x62, 0x52, 0x4a, 0x46, 0x00,
0x00, 0x7e, 0x42, 0x42, 0x00, 0x00,
0x00, 0x06, 0x08, 0x10, 0x60, 0x00,
0x00, 0x42, 0x42, 0x7e, 0x00, 0x00,
0x08, 0x04, 0x02, 0x04, 0x08, 0x00,
0x80, 0x80, 0x80, 0x80, 0x80, 0x00,
0x00, 0x00, 0x02, 0x04, 0x00, 0x00,
0x00, 0x30, 0x48, 0x48, 0x78, 0x00,
0x00, 0x7e, 0x48, 0x48, 0x30, 0x00,
0x00, 0x30, 0x48, 0x48, 0x48, 0x00,
0x00, 0x30, 0x48, 0x48, 0x7e, 0x00,
0x00, 0x30, 0x68, 0x58, 0x50, 0x00,
0x00, 0x10, 0x7c, 0x12, 0x04, 0x00,
0x00, 0x18, 0xa4, 0xa4, 0x78, 0x00,
0x00, 0x7e, 0x08, 0x08, 0x70, 0x00,
0x00, 0x48, 0x7a, 0x40, 0x00, 0x00,
0x00, 0x40, 0x84, 0x7d, 0x00, 0x00,
0x00, 0x7e, 0x10, 0x28, 0x40, 0x00,
0x00, 0x42, 0x7e, 0x40, 0x00, 0x00,
0x78, 0x08, 0x30, 0x08, 0x70, 0x00,
0x00, 0x78, 0x08, 0x08, 0x70, 0x00,
0x00, 0x30, 0x48, 0x48, 0x30, 0x00,
0x00, 0xfc, 0x24, 0x24, 0x18, 0x00,
0x00, 0x18, 0x24, 0x24, 0xfc, 0x00,
0x00, 0x78, 0x10, 0x08, 0x10, 0x00,
0x00, 0x50, 0x58, 0x68, 0x28, 0x00,
0x00, 0x08, 0x3e, 0x48, 0x20, 0x00,
0x00, 0x38, 0x40, 0x40, 0x78, 0x00,
0x00, 0x18, 0x60, 0x60, 0x18, 0x00,
0x38, 0x40, 0x30, 0x40, 0x38, 0x00,
0x00, 0x48, 0x30, 0x30, 0x48, 0x00,
0x00, 0x5c, 0xa0, 0xa0, 0x7c, 0x00,
0x00, 0x48, 0x68, 0x58, 0x48, 0x00,
0x00, 0x08, 0x36, 0x41, 0x00, 0x00,
0x00, 0x00, 0xfe, 0x00, 0x00, 0x00,
0x00, 0x41, 0x36, 0x08, 0x00, 0x00,
0x00, 0x08, 0x04, 0x08, 0x04, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

#endif

#ifdef EPD_PIN_SCK
#include <stdint.h>

const uint8_t font8[] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xE7, 0xC3, 0xC3, 0xE7, 0xE7, 0xFF, 0xE7, 0xFF, 
    0x93, 0x93, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0x93, 0x93, 0x01, 0x93, 0x01, 0x93, 0x93, 0xFF, 
    0xCF, 0x83, 0x3F, 0x87, 0xF3, 0x07, 0xCF, 0xFF, 
    0xFF, 0x39, 0x33, 0xE7, 0xCF, 0x99, 0x39, 0xFF, 
    0xC7, 0x93, 0xC7, 0x89, 0x23, 0x33, 0x89, 0xFF, 
    0x9F, 0x9F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xE7, 0xCF, 0x9F, 0x9F, 0x9F, 0xCF, 0xE7, 0xFF, 
    0x9F, 0xCF, 0xE7, 0xE7, 0xE7, 0xCF, 0x9F, 0xFF, 
    0xFF, 0x99, 0xC3, 0x00, 0xC3, 0x99, 0xFF, 0xFF, 
    0xFF, 0xCF, 0xCF, 0x03, 0xCF, 0xCF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xCF, 0x9F, 
    0xFF, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xCF, 0xFF, 
    0xF9, 0xF3, 0xE7, 0xCF, 0x9F, 0x3F, 0x7F, 0xFF, 
    0x83, 0x39, 0x31, 0x21, 0x09, 0x19, 0x83, 0xFF, 
    0xCF, 0x8F, 0xCF, 0xCF, 0xCF, 0xCF, 0x03, 0xFF, 
    0x87, 0x33, 0xF3, 0xC7, 0x9F, 0x33, 0x03, 0xFF, 
    0x87, 0x33, 0xF3, 0xC7, 0xF3, 0x33, 0x87, 0xFF, 
    0xE3, 0xC3, 0x93, 0x33, 0x01, 0xF3, 0xE1, 0xFF, 
    0x03, 0x3F, 0x07, 0xF3, 0xF3, 0x33, 0x87, 0xFF, 
    0xC7, 0x9F, 0x3F, 0x07, 0x33, 0x33, 0x87, 0xFF, 
    0x03, 0x33, 0xF3, 0xE7, 0xCF, 0xCF, 0xCF, 0xFF, 
    0x87, 0x33, 0x33, 0x87, 0x33, 0x33, 0x87, 0xFF, 
    0x87, 0x33, 0x33, 0x83, 0xF3, 0xE7, 0x8F, 0xFF, 
    0xFF, 0xCF, 0xCF, 0xFF, 0xFF, 0xCF, 0xCF, 0xFF, 
    0xFF, 0xCF, 0xCF, 0xFF, 0xFF, 0xCF, 0xCF, 0x9F, 
    0xE7, 0xCF, 0x9F, 0x3F, 0x9F, 0xCF, 0xE7, 0xFF, 
    0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 
    0x9F, 0xCF, 0xE7, 0xF3, 0xE7, 0xCF, 0x9F, 0xFF, 
    0x87, 0x33, 0xF3, 0xE7, 0xCF, 0xFF, 0xCF, 0xFF, 
    0x83, 0x39, 0x21, 0x21, 0x21, 0x3F, 0x87, 0xFF, 
    0xCF, 0x87, 0x33, 0x33, 0x03, 0x33, 0x33, 0xFF, 
    0x03, 0x99, 0x99, 0x83, 0x99, 0x99, 0x03, 0xFF, 
    0xC3, 0x99, 0x3F, 0x3F, 0x3F, 0x99, 0xC3, 0xFF, 
    0x07, 0x93, 0x99, 0x99, 0x99, 0x93, 0x07, 0xFF, 
    0x01, 0x9D, 0x97, 0x87, 0x97, 0x9D, 0x01, 0xFF, 
    0x01, 0x9D, 0x97, 0x87, 0x97, 0x9F, 0x0F, 0xFF, 
    0xC3, 0x99, 0x3F, 0x3F, 0x31, 0x99, 0xC1, 0xFF, 
    0x33, 0x33, 0x33, 0x03, 0x33, 0x33, 0x33, 0xFF, 
    0x87, 0xCF, 0xCF, 0xCF, 0xCF, 0xCF, 0x87, 0xFF, 
    0xE1, 0xF3, 0xF3, 0xF3, 0x33, 0x33, 0x87, 0xFF, 
    0x19, 0x99, 0x93, 0x87, 0x93, 0x99, 0x19, 0xFF, 
    0x0F, 0x9F, 0x9F, 0x9F, 0x9D, 0x99, 0x01, 0xFF, 
    0x39, 0x11, 0x01, 0x01, 0x29, 0x39, 0x39, 0xFF, 
    0x39, 0x19, 0x09, 0x21, 0x31, 0x39, 0x39, 0xFF, 
    0xC7, 0x93, 0x39, 0x39, 0x39, 0x93, 0xC7, 0xFF, 
    0x03, 0x99, 0x99, 0x83, 0x9F, 0x9F, 0x0F, 0xFF, 
    0x87, 0x33, 0x33, 0x33, 0x23, 0x87, 0xE3, 0xFF, 
    0x03, 0x99, 0x99, 0x83, 0x93, 0x99, 0x19, 0xFF, 
    0x87, 0x33, 0x1F, 0x8F, 0xE3, 0x33, 0x87, 0xFF, 
    0x03, 0x4B, 0xCF, 0xCF, 0xCF, 0xCF, 0x87, 0xFF, 
    0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x03, 0xFF, 
    0x33, 0x33, 0x33, 0x33, 0x33, 0x87, 0xCF, 0xFF, 
    0x39, 0x39, 0x39, 0x29, 0x01, 0x11, 0x39, 0xFF, 
    0x39, 0x39, 0x93, 0xC7, 0xC7, 0x93, 0x39, 0xFF, 
    0x33, 0x33, 0x33, 0x87, 0xCF, 0xCF, 0x87, 0xFF, 
    0x01, 0x39, 0x73, 0xE7, 0xCD, 0x99, 0x01, 0xFF, 
    0x87, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x87, 0xFF, 
    0x3F, 0x9F, 0xCF, 0xE7, 0xF3, 0xF9, 0xFD, 0xFF, 
    0x87, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0x87, 0xFF, 
    0xEF, 0xC7, 0x93, 0x39, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xCF, 0xCF, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0x87, 0xF3, 0x83, 0x33, 0x89, 0xFF, 
    0x1F, 0x9F, 0x9F, 0x83, 0x99, 0x99, 0x23, 0xFF, 
    0xFF, 0xFF, 0x87, 0x33, 0x3F, 0x33, 0x87, 0xFF, 
    0xE3, 0xF3, 0xF3, 0x83, 0x33, 0x33, 0x89, 0xFF, 
    0xFF, 0xFF, 0x87, 0x33, 0x03, 0x3F, 0x87, 0xFF, 
    0xC7, 0x93, 0x9F, 0x0F, 0x9F, 0x9F, 0x0F, 0xFF, 
    0xFF, 0xFF, 0x89, 0x33, 0x33, 0x83, 0xF3, 0x07, 
    0x1F, 0x9F, 0x93, 0x89, 0x99, 0x99, 0x19, 0xFF, 
    0xCF, 0xFF, 0x8F, 0xCF, 0xCF, 0xCF, 0x87, 0xFF, 
    0xF3, 0xFF, 0xF3, 0xF3, 0xF3, 0x33, 0x33, 0x87, 
    0x1F, 0x9F, 0x99, 0x93, 0x87, 0x93, 0x19, 0xFF, 
    0x8F, 0xCF, 0xCF, 0xCF, 0xCF, 0xCF, 0x87, 0xFF, 
    0xFF, 0xFF, 0x33, 0x01, 0x01, 0x29, 0x39, 0xFF, 
    0xFF, 0xFF, 0x07, 0x33, 0x33, 0x33, 0x33, 0xFF, 
    0xFF, 0xFF, 0x87, 0x33, 0x33, 0x33, 0x87, 0xFF, 
    0xFF, 0xFF, 0x23, 0x99, 0x99, 0x83, 0x9F, 0x0F, 
    0xFF, 0xFF, 0x89, 0x33, 0x33, 0x83, 0xF3, 0xE1, 
    0xFF, 0xFF, 0x23, 0x89, 0x99, 0x9F, 0x0F, 0xFF, 
    0xFF, 0xFF, 0x83, 0x3F, 0x87, 0xF3, 0x07, 0xFF, 
    0xEF, 0xCF, 0x83, 0xCF, 0xCF, 0xCB, 0xE7, 0xFF, 
    0xFF, 0xFF, 0x33, 0x33, 0x33, 0x33, 0x89, 0xFF, 
    0xFF, 0xFF, 0x33, 0x33, 0x33, 0x87, 0xCF, 0xFF, 
    0xFF, 0xFF, 0x39, 0x29, 0x01, 0x01, 0x93, 0xFF, 
    0xFF, 0xFF, 0x39, 0x93, 0xC7, 0x93, 0x39, 0xFF, 
    0xFF, 0xFF, 0x33, 0x33, 0x33, 0x83, 0xF3, 0x07, 
    0xFF, 0xFF, 0x03, 0x67, 0xCF, 0x9B, 0x03, 0xFF, 
    0xE3, 0xCF, 0xCF, 0x1F, 0xCF, 0xCF, 0xE3, 0xFF, 
    0xE7, 0xE7, 0xE7, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 
    0x1F, 0xCF, 0xCF, 0xE3, 0xCF, 0xCF, 0x1F, 0xFF, 
    0x89, 0x23, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    };



const uint8_t pwlogo[] = {0xff, 0xf8, 0x1f, 0xff, 0xff, 0x80, 0x01, 0xff, 0xfe, 0x1f, 0xf8, 0x7f, 0xfc, 0x7f, 0xfe, 0x3f, 
0xf9, 0xf1, 0xff, 0x9f, 0xf3, 0xf1, 0xff, 0xcf, 0xe7, 0xc0, 0xff, 0xe7, 0xcf, 0xc0, 0x7f, 0xf3, 
0xcf, 0xc0, 0x7f, 0xf3, 0x9f, 0xf1, 0xff, 0xf9, 0x9f, 0xf1, 0xff, 0xf9, 0xbf, 0xff, 0xff, 0xfd, 
0xbe, 0x0f, 0x3b, 0xfd, 0x3e, 0x4f, 0x3b, 0xfc, 0x3e, 0x6f, 0x3b, 0xfc, 0x3e, 0x6f, 0xab, 0xfc, 
0x3e, 0x4f, 0x8b, 0xfc, 0x3e, 0x1f, 0x87, 0xfc, 0x3e, 0x7f, 0x87, 0xfc, 0xbe, 0x73, 0x86, 0x7d, 
0xbe, 0x73, 0x96, 0x7d, 0x9e, 0x7b, 0x96, 0xf9, 0x9f, 0xff, 0xff, 0xf9, 0xcf, 0xff, 0xff, 0xf3, 
0xcf, 0xff, 0x03, 0xf3, 0xe7, 0xff, 0x03, 0xe7, 0xf3, 0xff, 0xff, 0xcf, 0xf9, 0xff, 0xff, 0x9f, 
0xfc, 0x7f, 0xfe, 0x3f, 0xfe, 0x1f, 0xf8, 0x7f, 0xff, 0x80, 0x01, 0xff, 0xff, 0xf8, 0x1f, 0xff};

const uint8_t unmount[] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x88, 0x9f, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0x18, 0x4f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x18, 0x27, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xfc, 0xcc, 0x13, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xe6, 0x09, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xf1, 0xf3, 0x04, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xf9, 0x82, 0x7f, 
0xff, 0xff, 0xff, 0xfc, 0x07, 0xfc, 0xc1, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xfe, 0x60, 0x9f, 
0xff, 0xff, 0xff, 0xe0, 0x1f, 0xff, 0x30, 0x4f, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0x98, 0x27, 
0xff, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xcc, 0x13, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xe6, 0x09, 
0xff, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xf3, 0x04, 0xff, 0xff, 0xfc, 0xc1, 0xff, 0xff, 0xf9, 0x84, 
0xff, 0xff, 0xf8, 0xc0, 0xff, 0xff, 0xfc, 0xc4, 0xff, 0xff, 0xf1, 0xe0, 0xff, 0xff, 0xfe, 0x7c, 
0xff, 0xff, 0xe3, 0xf0, 0x7f, 0xff, 0xff, 0x31, 0xff, 0xff, 0xcf, 0xf0, 0x3f, 0xff, 0xff, 0x83, 
0xff, 0xff, 0x8f, 0xf8, 0x1f, 0xff, 0xff, 0xc7, 0xff, 0xff, 0x1f, 0xfe, 0x0f, 0xff, 0xff, 0xcf, 
0xff, 0xfe, 0x3f, 0xff, 0x07, 0xff, 0xff, 0x9f, 0xff, 0xfc, 0x7f, 0xff, 0x03, 0xff, 0xff, 0x3f, 
0xff, 0xf8, 0xff, 0xff, 0x81, 0xff, 0xfe, 0x7f, 0xff, 0xf1, 0xff, 0xff, 0xc0, 0xff, 0xfc, 0xff, 
0xff, 0xe3, 0xff, 0xff, 0xe0, 0x7f, 0xf9, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xf0, 0x3f, 0xf3, 0xff, 
0xff, 0x8f, 0xff, 0xff, 0xf8, 0x1f, 0xe3, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xfc, 0x0f, 0xc3, 0xff, 
0xfe, 0x3f, 0xff, 0xff, 0xfe, 0x07, 0x03, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0x00, 0x03, 0xff, 
0xf8, 0xff, 0xff, 0xff, 0xff, 0x80, 0x07, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 
0xf3, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 
0xf7, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 
0xf3, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 
0xf9, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xff, 
0xfc, 0x7f, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 
0xff, 0x1f, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 
0xff, 0x07, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xfe, 0x63, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xff, 
0xfc, 0xf1, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xf9, 0xf8, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 
0xf3, 0xfc, 0x7f, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xe7, 0xfe, 0x3f, 0xff, 0x1f, 0xff, 0xff, 0xff, 
0xcf, 0xfe, 0x1f, 0xff, 0x3f, 0xff, 0xff, 0xff, 0x9f, 0xfc, 0x8f, 0xfc, 0x7f, 0xff, 0xff, 0xff, 
0x3f, 0xf9, 0xc7, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xf3, 0xe3, 0xf1, 0xff, 0xff, 0xff, 0xff, 
0x3f, 0xe7, 0xf0, 0xc3, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xcf, 0xfc, 0x0f, 0xff, 0xff, 0xff, 0xff, 
0xbf, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xc0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

const uint8_t mounted[] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 
0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 
0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 
0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x03, 
0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 
0xfc, 0x7f, 0xc0, 0x0f, 0xff, 0xff, 0xfc, 0x7f, 0x80, 0x0f, 0xff, 0xff, 0xfc, 0x7f, 0x80, 0x0f, 
0xff, 0xff, 0xfc, 0x7f, 0x80, 0x0f, 0xff, 0xff, 0xfc, 0x7f, 0x80, 0x0f, 0xff, 0xff, 0xfc, 0x7f, 
0x80, 0x0f, 0xff, 0xff, 0xfc, 0x7f, 0x80, 0x0f, 0xff, 0xff, 0xfc, 0x7f, 0x80, 0x0f, 0xfc, 0x1f, 
0xfc, 0x7f, 0x80, 0x0f, 0xf0, 0x0f, 0xfc, 0x7f, 0x80, 0x0f, 0xf0, 0x07, 0xfc, 0x7f, 0x80, 0x0f, 
0xe0, 0x03, 0xfc, 0x7f, 0xf0, 0x7f, 0xe0, 0x03, 0xfc, 0x7f, 0xf8, 0xff, 0xe0, 0x03, 0xfc, 0x7f, 
0xf8, 0xff, 0xe0, 0x03, 0xfc, 0x7f, 0xf0, 0xff, 0xe0, 0x07, 0xfc, 0x7f, 0xf0, 0xff, 0xf0, 0x07, 
0xfc, 0x7f, 0xe0, 0xff, 0xf8, 0x0f, 0xfc, 0x7f, 0xc1, 0xff, 0xfe, 0x1f, 0xfc, 0x7f, 0x01, 0xff, 
0xfe, 0x1f, 0xfc, 0x7c, 0x03, 0xff, 0xfe, 0x1f, 0xfc, 0x70, 0x0f, 0xff, 0xfe, 0x1f, 0xfc, 0x00, 
0x3f, 0xff, 0xfe, 0x1f, 0xfc, 0x00, 0xff, 0xff, 0xfe, 0x0f, 0xfc, 0x03, 0xff, 0xff, 0xff, 0x07, 
0xfc, 0x0f, 0xff, 0xff, 0xff, 0x01, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0x80, 0x7c, 0x3f, 0xff, 0xff, 
0xff, 0xe0, 0x1c, 0x7f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x7f, 
0xff, 0xff, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0xff, 
0xf0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 
0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f, 
0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xff, 
0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0x00, 0x01, 0xff, 0xff, 
0xff, 0xff, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 
0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 
0xc0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff};

const uint8_t flashing[] = {0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0x83, 0xe0, 
0x07, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0x83, 0xe0, 0x07, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0x83, 0xe0, 
0x07, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0x83, 0xe0, 0x07, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0x83, 0xe0, 
0x07, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0x83, 0xe0, 0x07, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0x83, 0xe0, 
0x07, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0x83, 0xe0, 0x07, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0x83, 0xe0, 
0x07, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0x83, 0xe0, 0x07, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0x83, 0xe0, 
0x07, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0x83, 0xe0, 0x07, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0x83, 0xe0, 
0x07, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0x83, 0xe0, 0x07, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0x03, 0xe0, 
0x07, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x07, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x07, 0xe0, 
0x07, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x07, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x0f, 0xe0, 
0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
0x07, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x07, 0xff, 0x80, 0x00, 0x00, 0x00, 0x07, 0xe0, 
0x07, 0xff, 0x80, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x07, 0xff, 0x80, 0x00, 0x00, 0x00, 0x03, 0xe0, 
0x07, 0xff, 0x83, 0xff, 0xff, 0xff, 0xc3, 0xe0, 0x07, 0xff, 0x83, 0xff, 0xff, 0xff, 0xc3, 0xe0, 
0x07, 0xff, 0x83, 0xff, 0xff, 0xff, 0xc3, 0xe0, 0x07, 0xff, 0x83, 0xff, 0xff, 0xff, 0xc3, 0xe0, 
0x07, 0xff, 0x83, 0xff, 0xff, 0xff, 0xc3, 0xe0, 0x07, 0xff, 0x83, 0xe0, 0x00, 0x07, 0xc3, 0xe0, 
0x07, 0xff, 0x83, 0xe0, 0x00, 0x03, 0xc3, 0xe0, 0x07, 0xff, 0x83, 0xe0, 0x00, 0x03, 0xc3, 0xe0, 
0x07, 0xff, 0x83, 0xff, 0xff, 0xff, 0xc3, 0xe0, 0x07, 0xff, 0x83, 0xff, 0xff, 0xff, 0xc3, 0xe0, 
0x07, 0xff, 0x83, 0xff, 0xff, 0xff, 0xc3, 0xe0, 0x07, 0xff, 0x83, 0xff, 0xff, 0xff, 0xc3, 0xe0, 
0x07, 0xff, 0x83, 0xff, 0xff, 0xff, 0xc3, 0xe0, 0x07, 0xff, 0x83, 0xe0, 0x00, 0x07, 0xc3, 0xe0, 
0x07, 0xff, 0x83, 0xe0, 0x00, 0x03, 0xc3, 0xe0, 0x03, 0xff, 0x83, 0xe0, 0x00, 0x03, 0xc3, 0xe0, 
0x01, 0xff, 0x83, 0xff, 0xff, 0xff, 0xc3, 0xe0, 0x80, 0xff, 0x83, 0xff, 0xff, 0xff, 0xc3, 0xe0, 
0xc0, 0x7f, 0x83, 0xff, 0xff, 0xff, 0xc3, 0xe0, 0xe0, 0x3f, 0x83, 0xff, 0xff, 0xff, 0xc3, 0xe0, 
0xf0, 0x1f, 0x83, 0xff, 0xff, 0xff, 0xc3, 0xe0, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07};

const uint8_t complete[] = {0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0x01, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xfc, 0x07, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xc0, 0x7f, 0xff, 0xf0, 0x0f, 0xff, 0xcf, 0xff, 0x80, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0x83, 0xff, 0x01, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0x81, 0xfe, 0x03, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0x80, 0xfc, 0x07, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0x80, 0x78, 0x07, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xc0, 0x30, 0x0f, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xe0, 0x00, 0x1f, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xf0, 0x00, 0x3f, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xf8, 0x00, 0x7f, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xfe, 0x00, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0x83, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01};

#endif