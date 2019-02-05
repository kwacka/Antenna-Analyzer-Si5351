// Font size 7
//
// This font has been 8 bit Run Length Encoded to save FLASH space
//
// This is a 7 segment font intended to display numbers and time
// This font only contains characters [space] 0 1 2 3 4 5 6 7 8 9 : .
// All other characters print as a space

#include <avr/pgmspace.h>


PROGMEM const unsigned char widtbl_f7s[96] =          // character width table
{
        12, 12, 12, 12, 12, 12, 12, 12,     // char 32 - 39
        12, 12, 12, 12, 12, 12, 12, 12,     // char 40 - 47
        32, 32, 32, 32, 32, 32, 32, 32,     // char 48 - 55
        32, 32, 12, 12, 12, 12, 12, 12,     // char 56 - 63
        12, 12, 12, 12, 12, 12, 12, 12,     // char 64 - 71
        12, 12, 12, 12, 12, 12, 12, 12,     // char 72 - 79
        12, 12, 12, 12, 12, 12, 12, 12,     // char 80 - 87
        12, 12, 12, 12, 12, 12, 12, 12,     // char 88 - 95
        12, 12, 12, 12, 12, 12, 12, 12,     // char 96 - 103
        12, 12, 12, 12, 12, 12, 12, 12,     // char 104 - 111
        12, 12, 12, 12, 12, 12, 12, 12,     // char 112 - 119
        12, 12, 12, 12, 12, 12, 12, 12      // char 120 - 127
};

// Row format, MSB left

PROGMEM const unsigned char chr_f7s_20[] = 
{
0x7F, 0x7F, 0x7F, 0x7F, 0x3F
};

PROGMEM const unsigned char chr_f7s_2E[] = 
{
0x7F, 0x7F, 0x7F, 0x7B, 0x82, 0x07, 0x84, 0x06, 
0x84, 0x06, 0x84, 0x07, 0x82, 0x10
};

PROGMEM const unsigned char chr_f7s_30[] = 
{
0x27, 0x8E, 0x0F, 0x90, 0x0D, 0x92, 0x0D, 0x90, 
0x01, 0x80, 0x08, 0x81, 0x01, 0x8E, 0x01, 0x82, 
0x06, 0x83, 0x10, 0x84, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x84, 0x10, 0x84, 0x04, 0x82, 0x14, 0x82, 
0x04, 0x80, 0x18, 0x80, 0x24, 0x80, 0x1E, 0x82, 
0x15, 0x81, 0x04, 0x84, 0x11, 0x83, 0x04, 0x85, 
0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 
0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 
0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 
0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 
0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 
0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 
0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x05, 0x83, 
0x10, 0x83, 0x07, 0x81, 0x01, 0x8E, 0x01, 0x81, 
0x0B, 0x90, 0x0D, 0x92, 0x0D, 0x90, 0x0F, 0x8E, 
0x28
};

PROGMEM const unsigned char chr_f7s_31[] = 
{
0x7F, 0x19, 0x80, 0x1D, 0x82, 0x1B, 0x84, 0x19, 
0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 
0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 
0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 
0x85, 0x1B, 0x83, 0x1D, 0x81, 0x1E, 0x80, 0x5D, 
0x81, 0x1B, 0x83, 0x19, 0x85, 0x19, 0x85, 0x19, 
0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 
0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 
0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x1A, 
0x83, 0x1C, 0x81, 0x7F, 0x24
};

PROGMEM const unsigned char chr_f7s_32[] = 
{
0x27, 0x8E, 0x0F, 0x90, 0x0D, 0x92, 0x0D, 0x90, 
0x01, 0x80, 0x0C, 0x8E, 0x01, 0x82, 0x1B, 0x84, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x1A, 0x84, 0x0A, 0x8E, 0x02, 0x82, 
0x08, 0x92, 0x02, 0x80, 0x06, 0x96, 0x06, 0x80, 
0x01, 0x94, 0x07, 0x82, 0x01, 0x90, 0x09, 0x84, 
0x1A, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x1A, 0x83, 0x1C, 0x81, 
0x01, 0x8E, 0x0F, 0x90, 0x0D, 0x92, 0x0D, 0x90, 
0x0F, 0x8E, 0x28
};

PROGMEM const unsigned char chr_f7s_33[] = 
{
0x27, 0x8E, 0x0F, 0x90, 0x0D, 0x92, 0x0D, 0x90, 
0x01, 0x80, 0x0C, 0x8E, 0x01, 0x82, 0x1B, 0x84, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x1A, 0x84, 0x0A, 0x8E, 0x02, 0x82, 
0x08, 0x92, 0x02, 0x80, 0x06, 0x96, 0x09, 0x94, 
0x0C, 0x90, 0x02, 0x81, 0x1B, 0x83, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x1A, 0x83, 0x0B, 0x8E, 0x01, 0x81, 
0x0B, 0x90, 0x0D, 0x92, 0x0D, 0x90, 0x0F, 0x8E, 
0x28
};

PROGMEM const unsigned char chr_f7s_34[] = 
{
0x7F, 0x19, 0x80, 0x08, 0x81, 0x12, 0x82, 0x06, 
0x83, 0x10, 0x84, 0x04, 0x85, 0x0E, 0x85, 0x04, 
0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 
0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 
0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 
0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 
0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 
0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 
0x84, 0x10, 0x84, 0x04, 0x82, 0x02, 0x8E, 0x02, 
0x82, 0x04, 0x80, 0x02, 0x92, 0x02, 0x80, 0x06, 
0x96, 0x09, 0x94, 0x0C, 0x90, 0x02, 0x81, 0x1B, 
0x83, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 
0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 
0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 
0x85, 0x19, 0x85, 0x19, 0x85, 0x1A, 0x83, 0x1C, 
0x81, 0x7F, 0x24
};

PROGMEM const unsigned char chr_f7s_35[] = 
{
0x27, 0x8E, 0x0F, 0x90, 0x0D, 0x92, 0x0D, 0x90, 
0x0B, 0x81, 0x01, 0x8E, 0x0B, 0x83, 0x1A, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x84, 0x1A, 0x82, 0x02, 0x8E, 0x0A, 0x80, 
0x02, 0x92, 0x0A, 0x96, 0x09, 0x94, 0x0C, 0x90, 
0x02, 0x81, 0x1B, 0x83, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x1A, 0x83, 0x0B, 0x8E, 0x01, 0x81, 0x0B, 0x90, 
0x0D, 0x92, 0x0D, 0x90, 0x0F, 0x8E, 0x28
};

PROGMEM const unsigned char chr_f7s_36[] = 
{
0x27, 0x8E, 0x0F, 0x90, 0x0D, 0x92, 0x0D, 0x90, 
0x0B, 0x81, 0x01, 0x8E, 0x0B, 0x83, 0x1A, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x84, 0x1A, 0x82, 0x02, 0x8E, 0x0A, 0x80, 
0x02, 0x92, 0x0A, 0x96, 0x06, 0x80, 0x01, 0x94, 
0x07, 0x82, 0x01, 0x90, 0x02, 0x81, 0x04, 0x84, 
0x11, 0x83, 0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 
0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 
0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 
0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 
0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 
0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 
0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 
0x0E, 0x85, 0x05, 0x83, 0x10, 0x83, 0x07, 0x81, 
0x01, 0x8E, 0x01, 0x81, 0x0B, 0x90, 0x0D, 0x92, 
0x0D, 0x90, 0x0F, 0x8E, 0x28
};

PROGMEM const unsigned char chr_f7s_37[] = 
{
0x27, 0x8E, 0x0F, 0x90, 0x0D, 0x92, 0x0D, 0x90, 
0x01, 0x80, 0x0C, 0x8E, 0x01, 0x82, 0x1B, 0x84, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x1A, 0x84, 0x1C, 0x82, 0x1E, 0x80, 
0x5D, 0x81, 0x1B, 0x83, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x1A, 0x83, 0x1C, 0x81, 0x7F, 0x24
};

PROGMEM const unsigned char chr_f7s_38[] = 
{
0x27, 0x8E, 0x0F, 0x90, 0x0D, 0x92, 0x0D, 0x90, 
0x01, 0x80, 0x08, 0x81, 0x01, 0x8E, 0x01, 0x82, 
0x06, 0x83, 0x10, 0x84, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x84, 0x10, 0x84, 0x04, 0x82, 0x02, 0x8E, 
0x02, 0x82, 0x04, 0x80, 0x02, 0x92, 0x02, 0x80, 
0x06, 0x96, 0x06, 0x80, 0x01, 0x94, 0x07, 0x82, 
0x01, 0x90, 0x02, 0x81, 0x04, 0x84, 0x11, 0x83, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x05, 0x83, 0x10, 0x83, 0x07, 0x81, 0x01, 0x8E, 
0x01, 0x81, 0x0B, 0x90, 0x0D, 0x92, 0x0D, 0x90, 
0x0F, 0x8E, 0x28
};

PROGMEM const unsigned char chr_f7s_39[] = 
{
0x27, 0x8E, 0x0F, 0x90, 0x0D, 0x92, 0x0D, 0x90, 
0x01, 0x80, 0x08, 0x81, 0x01, 0x8E, 0x01, 0x82, 
0x06, 0x83, 0x10, 0x84, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x85, 0x0E, 0x85, 0x04, 0x85, 0x0E, 0x85, 
0x04, 0x84, 0x10, 0x84, 0x04, 0x82, 0x02, 0x8E, 
0x02, 0x82, 0x04, 0x80, 0x02, 0x92, 0x02, 0x80, 
0x06, 0x96, 0x09, 0x94, 0x0C, 0x90, 0x02, 0x81, 
0x1B, 0x83, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 
0x19, 0x85, 0x19, 0x85, 0x19, 0x85, 0x1A, 0x83, 
0x0B, 0x8E, 0x01, 0x81, 0x0B, 0x90, 0x0D, 0x92, 
0x0D, 0x90, 0x0F, 0x8E, 0x28
};

PROGMEM const unsigned char chr_f7s_3A[] = 
{
0x7F, 0x1F, 0x82, 0x07, 0x84, 0x06, 0x84, 0x06, 
0x84, 0x07, 0x82, 0x7F, 0x18, 0x82, 0x07, 0x84, 
0x06, 0x84, 0x06, 0x84, 0x07, 0x82, 0x7F, 0x20
};
PROGMEM const unsigned char* const chrtbl_f7s[96] =        // character pointer table
{
        chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, 
        chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_2E, chr_f7s_20, 
        chr_f7s_30, chr_f7s_31, chr_f7s_32, chr_f7s_33, chr_f7s_34, chr_f7s_35, chr_f7s_36, chr_f7s_37, 
        chr_f7s_38, chr_f7s_39, chr_f7s_3A, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20,
        chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20,
        chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20,
        chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20,
        chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20,
        chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, 
        chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, 
        chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20,
        chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20, chr_f7s_20
};
