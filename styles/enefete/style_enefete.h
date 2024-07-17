//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// StyleAsCode exporter v2.0 - Style data exported as a values array            //
//                                                                              //
// USAGE: On init call: GuiLoadStyleEnefete();                                   //
//                                                                              //
// more info and bugs-report:  github.com/raysan5/raygui                        //
// feedback and support:       ray[at]raylibtech.com                            //
//                                                                              //
// Copyright (c) 2020-2024 raylib technologies (@raylibtech)                    //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

#define ENEFETE_STYLE_PROPS_COUNT  17

// Custom style name: Enefete
static const GuiStyleProp enefeteStyleProps[ENEFETE_STYLE_PROPS_COUNT] = {
    { 0, 0, 0x1980d5ff },    // DEFAULT_BORDER_COLOR_NORMAL 
    { 0, 1, 0x4df3ebff },    // DEFAULT_BASE_COLOR_NORMAL 
    { 0, 2, 0x103e60ff },    // DEFAULT_TEXT_COLOR_NORMAL 
    { 0, 3, 0xe7e2f7ff },    // DEFAULT_BORDER_COLOR_FOCUSED 
    { 0, 4, 0x23d4ddff },    // DEFAULT_BASE_COLOR_FOCUSED 
    { 0, 5, 0xf1f1f1ff },    // DEFAULT_TEXT_COLOR_FOCUSED 
    { 0, 6, 0x6413a6ff },    // DEFAULT_BORDER_COLOR_PRESSED 
    { 0, 7, 0xea66d9ff },    // DEFAULT_BASE_COLOR_PRESSED 
    { 0, 8, 0x9f00bbff },    // DEFAULT_TEXT_COLOR_PRESSED 
    { 0, 9, 0x4b909eff },    // DEFAULT_BORDER_COLOR_DISABLED 
    { 0, 10, 0x73c7d0ff },    // DEFAULT_BASE_COLOR_DISABLED 
    { 0, 11, 0x448894ff },    // DEFAULT_TEXT_COLOR_DISABLED 
    { 0, 16, 0x00000010 },    // DEFAULT_TEXT_SIZE 
    { 0, 17, 0x00000000 },    // DEFAULT_TEXT_SPACING 
    { 0, 18, 0x1d3f6cff },    // DEFAULT_LINE_COLOR 
    { 0, 19, 0x29c9e5ff },    // DEFAULT_BACKGROUND_COLOR 
    { 0, 20, 0x00000018 },    // DEFAULT_TEXT_LINE_SPACING 
};

// WARNING: This style uses a custom font: "GenericMobileSystemNuevo.ttf" (size: 16, spacing: 0)

#define ENEFETE_STYLE_FONT_ATLAS_COMP_SIZE 2462

// Font atlas image pixels data: DEFLATE compressed
static unsigned char enefeteFontData[ENEFETE_STYLE_FONT_ATLAS_COMP_SIZE] = { 0xed,
    0xdd, 0x59, 0xb2, 0xeb, 0x34, 0x10, 0x00, 0x50, 0x6d, 0x83, 0xfd, 0xef, 0x8d, 0x6d, 0x88, 0xa2, 0x28, 0x0a, 0xb8, 0x8f,
    0x58, 0x52, 0x77, 0xcb, 0x53, 0x0e, 0xa7, 0xf8, 0xb9, 0x7e, 0x49, 0x6c, 0xd9, 0x6d, 0x0d, 0xb6, 0x5a, 0xbd, 0x01, 0x00,
    0x00, 0x00, 0x5f, 0xef, 0xcf, 0xff, 0xfe, 0xff, 0x6f, 0xff, 0xb7, 0xe5, 0x78, 0xdb, 0xdf, 0xff, 0x62, 0xb4, 0xa5, 0x7f,
    0xdc, 0x93, 0x7e, 0xb0, 0x6d, 0xee, 0xb7, 0x62, 0xfb, 0xd5, 0x97, 0xca, 0xa6, 0x1f, 0x94, 0x5a, 0x4b, 0xff, 0xbd, 0x1d,
    0x96, 0x7d, 0x0f, 0x94, 0x5e, 0x3b, 0xdc, 0xe7, 0xcf, 0x9f, 0x1c, 0x6f, 0xa9, 0xdc, 0xcf, 0x95, 0x32, 0xad, 0x3c, 0x3f,
    0x2b, 0x25, 0xd8, 0x96, 0xb7, 0x1e, 0x97, 0x54, 0x9b, 0x2a, 0xc7, 0xf1, 0x37, 0xf7, 0x9b, 0xc4, 0xff, 0xf1, 0xd1, 0xfc,
    0x1d, 0x83, 0x47, 0x67, 0x7f, 0xfe, 0xda, 0x68, 0xd3, 0xf7, 0x84, 0x7f, 0x7e, 0xbb, 0x2e, 0x42, 0xb3, 0xdf, 0xd2, 0x87,
    0x77, 0xc2, 0x95, 0x12, 0x3a, 0x2e, 0xbd, 0x16, 0x8a, 0x89, 0xd1, 0x77, 0x46, 0xf6, 0x65, 0x66, 0xdb, 0xdc, 0xfe, 0xc5,
    0xae, 0xf9, 0xf1, 0xf7, 0x1d, 0x5f, 0x69, 0x47, 0x67, 0x78, 0x74, 0xe5, 0x1e, 0x1f, 0xdf, 0xfa, 0x59, 0xcd, 0x44, 0xfd,
    0x9e, 0xf8, 0xef, 0xff, 0x8a, 0xb3, 0x1e, 0x8c, 0xc1, 0x7c, 0xdd, 0xb0, 0x5e, 0x2b, 0x1c, 0xdf, 0xb3, 0xf6, 0x95, 0xf0,
    0x51, 0x39, 0xf5, 0xc0, 0x35, 0xbc, 0x7e, 0xce, 0xa2, 0xbf, 0xb3, 0x23, 0xfe, 0x2b, 0xa2, 0xb8, 0x4d, 0xd4, 0x88, 0x91,
    0x36, 0xc5, 0x71, 0x8b, 0x33, 0x1f, 0xe1, 0xa3, 0x7d, 0x89, 0xb4, 0x67, 0xf2, 0x65, 0xb9, 0xda, 0xe6, 0xd8, 0x17, 0xff,
    0x15, 0xf5, 0xed, 0x7a, 0x5d, 0xb2, 0xaf, 0x7c, 0x67, 0xea, 0xeb, 0xfb, 0xc7, 0xff, 0xfa, 0xb1, 0x55, 0xc4, 0x7f, 0xcd,
    0x59, 0x59, 0x8f, 0xff, 0x2e, 0xfe, 0xa7, 0xeb, 0xff, 0xcf, 0xa5, 0xde, 0x83, 0xfd, 0xaf, 0x7c, 0xaf, 0xbd, 0xaa, 0x9d,
    0x7f, 0x6d, 0xfc, 0x8f, 0xfa, 0x83, 0x6d, 0x39, 0xfe, 0x63, 0xbd, 0xcf, 0x48, 0x6f, 0xa3, 0xaa, 0xfd, 0xbf, 0xb7, 0xf5,
    0x70, 0xdc, 0x7b, 0x8c, 0x44, 0xf8, 0xda, 0x98, 0x47, 0xcd, 0x37, 0x5f, 0x11, 0xff, 0x6d, 0x62, 0x6f, 0xfa, 0xb0, 0xff,
    0x3f, 0x7b, 0x87, 0x5f, 0x8b, 0xff, 0xba, 0xba, 0xe3, 0xca, 0xf8, 0xef, 0xc1, 0x11, 0xb1, 0xea, 0x7e, 0x7c, 0xfc, 0xd8,
    0xd6, 0xc6, 0xe7, 0xce, 0xeb, 0xff, 0x8f, 0xda, 0x81, 0x99, 0xf8, 0xff, 0x96, 0xf6, 0xff, 0x4c, 0x4b, 0x7b, 0x54, 0x8a,
    0xf3, 0xf7, 0xb3, 0x2b, 0x6a, 0xf3, 0x6b, 0xe3, 0xbf, 0x4f, 0x8d, 0x61, 0xdf, 0x3b, 0xfe, 0xdb, 0x72, 0x2f, 0xaf, 0xf2,
    0xda, 0x8d, 0x5e, 0x51, 0xa3, 0x2b, 0x77, 0xe6, 0xae, 0x76, 0xcf, 0xf8, 0x8f, 0x5d, 0xcf, 0x7d, 0xd8, 0xca, 0xef, 0x89,
    0xf8, 0x6f, 0xaf, 0x89, 0xff, 0x1e, 0x1c, 0xed, 0xf8, 0xdc, 0xde, 0x8b, 0x8d, 0xc7, 0x45, 0x5a, 0xf2, 0x99, 0x36, 0x4a,
    0x55, 0xfc, 0xdf, 0xe3, 0x4c, 0xaa, 0xff, 0x2b, 0xc6, 0xff, 0xdb, 0x61, 0x0b, 0xff, 0xbb, 0xe2, 0xff, 0xf8, 0xf9, 0x5f,
    0xbb, 0xfd, 0xb3, 0xba, 0x68, 0xfc, 0xd7, 0x8c, 0xff, 0x9f, 0x7f, 0xb7, 0x9e, 0xe9, 0xb9, 0xe6, 0xe2, 0xff, 0x4e, 0xcf,
    0xff, 0xf6, 0xc6, 0xff, 0xe8, 0xa9, 0xf7, 0x9b, 0xda, 0xff, 0x95, 0xe3, 0xf8, 0xf1, 0x77, 0x6e, 0xf6, 0xbd, 0x53, 0xd4,
    0x42, 0x6f, 0x72, 0xdd, 0x33, 0xfa, 0xa3, 0xcf, 0x81, 0x72, 0xa3, 0x74, 0x57, 0xbf, 0xff, 0x53, 0x5f, 0x82, 0xe7, 0xed,
    0x4f, 0xbf, 0x71, 0x9b, 0x91, 0x77, 0xbd, 0x25, 0xeb, 0xea, 0x3a, 0xf3, 0xf9, 0x6c, 0xfc, 0xb7, 0x9c, 0x1f, 0x76, 0xd6,
    0x6c, 0x4a, 0xe2, 0x19, 0x63, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xe4, 0xf9,
    0x0b, 0x91, 0xb9, 0x86, 0xd1, 0x3c, 0x04, 0xb5, 0xf9, 0x10, 0xfa, 0x8f, 0x3c, 0xac, 0xab, 0xdf, 0x3d, 0x3b, 0xd7, 0x32,
    0x33, 0x4f, 0xb3, 0xf6, 0xb3, 0x55, 0x99, 0x25, 0x6a, 0x67, 0x9e, 0x8f, 0xf3, 0xdd, 0xac, 0x66, 0x6b, 0x8e, 0x65, 0x41,
    0x5b, 0xcf, 0x69, 0x9e, 0xc9, 0xc3, 0x57, 0x3d, 0xb7, 0xba, 0x26, 0x3f, 0xda, 0xfc, 0x9c, 0xf7, 0x9a, 0x4c, 0x23, 0x75,
    0xf1, 0xbf, 0x7e, 0x1e, 0xfa, 0x8f, 0xfd, 0xe8, 0x17, 0x64, 0x62, 0xa8, 0xdf, 0x3a, 0xf7, 0xf7, 0x3b, 0xc5, 0xff, 0xec,
    0x3d, 0x38, 0x7b, 0xf5, 0xc6, 0x67, 0xdc, 0x8d, 0xb2, 0x4f, 0x5c, 0x9f, 0x5b, 0xa5, 0x15, 0xe5, 0x47, 0xad, 0x8f, 0xff,
    0x76, 0x52, 0xfd, 0x1f, 0x8d, 0xff, 0x3e, 0x5c, 0xcd, 0xe6, 0xbe, 0xf1, 0xbf, 0x9e, 0x77, 0x22, 0xfb, 0xab, 0xb9, 0x95,
    0x1c, 0xe2, 0xb9, 0xc6, 0xf3, 0xf1, 0x9f, 0xcb, 0x14, 0x74, 0x6e, 0xdd, 0x7a, 0x7d, 0xfc, 0x47, 0x4b, 0xe4, 0xaa, 0xf8,
    0x8f, 0x5f, 0x25, 0x7d, 0x98, 0xcd, 0xfa, 0x8e, 0xf1, 0xdf, 0xbf, 0x3e, 0xfe, 0xeb, 0x73, 0xf9, 0x46, 0x23, 0x20, 0x92,
    0x07, 0x7d, 0xa6, 0x5f, 0xbd, 0xda, 0xb3, 0x8b, 0xf7, 0xbb, 0xa2, 0xf5, 0xff, 0xe8, 0xf3, 0x33, 0x47, 0x72, 0x75, 0xfc,
    0xb7, 0x61, 0x84, 0xf7, 0x44, 0x94, 0xc6, 0x47, 0x40, 0x32, 0x39, 0xaf, 0xae, 0x89, 0xff, 0x16, 0x5a, 0x31, 0x30, 0x5e,
    0xcf, 0xdf, 0x3d, 0xfe, 0xab, 0xfb, 0x06, 0xd1, 0x11, 0x83, 0xea, 0x7d, 0xbc, 0x5f, 0xff, 0xbf, 0x17, 0xb4, 0x12, 0x77,
    0xc4, 0x7f, 0xb6, 0x7c, 0xa2, 0xd1, 0x14, 0x8b, 0xff, 0xf9, 0xda, 0x3d, 0xb6, 0x9a, 0x40, 0x6c, 0xdb, 0x7b, 0xe3, 0xbf,
    0x36, 0x7f, 0xea, 0xfa, 0x58, 0xf1, 0x9b, 0xe2, 0x3f, 0xda, 0xff, 0x9f, 0xef, 0x71, 0xdd, 0x2b, 0xfe, 0xdb, 0xc4, 0xfa,
    0x3c, 0x67, 0xc7, 0xff, 0x28, 0xdb, 0xea, 0xdb, 0xe2, 0x3f, 0x1a, 0x5b, 0xd1, 0xf5, 0x8c, 0x5a, 0xb8, 0xa6, 0x7b, 0x7b,
    0xfd, 0xdf, 0x5e, 0x1a, 0xff, 0xf1, 0xf5, 0x65, 0x9e, 0x15, 0xff, 0xd5, 0xad, 0x86, 0xeb, 0xf3, 0xea, 0x45, 0x47, 0x1b,
    0xe3, 0xa3, 0x94, 0xef, 0x6e, 0xff, 0xf7, 0x0d, 0xad, 0xf0, 0xec, 0xf3, 0xff, 0xab, 0xe2, 0x7f, 0xd7, 0xf3, 0xbf, 0x36,
    0xbd, 0xe6, 0xdf, 0xae, 0xbd, 0x12, 0xff, 0xd5, 0xf1, 0x5f, 0xb9, 0x76, 0xe2, 0xda, 0xbf, 0xa8, 0x7e, 0xff, 0xa7, 0x7e,
    0x24, 0x6d, 0xff, 0xfb, 0x3f, 0x7b, 0xca, 0xa7, 0x4d, 0xad, 0x98, 0xb6, 0xfe, 0xab, 0x6d, 0x72, 0x55, 0xe3, 0xd8, 0x3e,
    0xd7, 0xbf, 0x7d, 0x73, 0xf7, 0xf8, 0x8f, 0xbd, 0x6d, 0x10, 0xfd, 0x64, 0xfc, 0x13, 0xf7, 0x59, 0x0b, 0xec, 0x3b, 0xdf,
    0xa2, 0x54, 0x0a, 0xd5, 0x25, 0xa4, 0x54, 0x71, 0x07, 0x78, 0xd7, 0x7b, 0xe6, 0xbb, 0xfe, 0x3d, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf7, 0xcd, 0x5e, 0x99, 0xcd, 0xb9, 0xfd, 0xeb, 0x5f, 0x7b, 0x68, 0xbe,
    0x6b, 0x4f, 0x7e, 0xae, 0x2f, 0xe7, 0xc1, 0x58, 0x9b, 0x77, 0x5a, 0x91, 0x83, 0xa1, 0x3a, 0x8f, 0xd4, 0xb8, 0x5c, 0x66,
    0xcf, 0xf4, 0x78, 0x26, 0xf1, 0xea, 0x15, 0x12, 0x99, 0xd7, 0x93, 0xc9, 0xa8, 0x93, 0x59, 0x4b, 0x20, 0x9e, 0x09, 0xb1,
    0x2d, 0x7e, 0x6b, 0xec, 0xac, 0xfd, 0x3a, 0xbf, 0x3a, 0x9a, 0xef, 0xb3, 0x26, 0xfe, 0x63, 0xb9, 0x25, 0xaf, 0xc8, 0xb4,
    0x16, 0xbf, 0x9a, 0x6a, 0xf7, 0xb0, 0xbe, 0x54, 0xe6, 0xf6, 0x36, 0xf7, 0xf7, 0xcc, 0x9c, 0xfe, 0x5c, 0xee, 0x81, 0xd5,
    0x92, 0xe8, 0x53, 0xd9, 0x52, 0x56, 0x3f, 0xf9, 0xf9, 0x73, 0xc7, 0xdb, 0xfa, 0x54, 0xe6, 0x88, 0xd5, 0x6f, 0xfd, 0x6d,
    0xf0, 0xf9, 0x7e, 0x78, 0xe7, 0xad, 0x9d, 0xd1, 0xfa, 0x94, 0xf8, 0x5f, 0xbf, 0x77, 0x9f, 0x1d, 0xff, 0xf1, 0xfb, 0x54,
    0x2b, 0xcc, 0xd2, 0xb3, 0xbe, 0x36, 0x46, 0x64, 0xe6, 0x6e, 0x3e, 0x47, 0xd0, 0x19, 0x19, 0x35, 0x7e, 0x8d, 0xa6, 0x95,
    0xb3, 0x36, 0x17, 0xfd, 0x9f, 0xe2, 0xf7, 0xa8, 0xb5, 0xb5, 0x2f, 0xfe, 0x6b, 0x32, 0xf2, 0x3d, 0x27, 0xfe, 0x67, 0x7a,
    0x1b, 0xe7, 0xc5, 0xff, 0xf8, 0xef, 0x75, 0x59, 0xb5, 0x2b, 0x73, 0xed, 0x8c, 0x72, 0x2d, 0xb7, 0xd0, 0x19, 0xe9, 0xc1,
    0xfb, 0x4a, 0x2f, 0xce, 0x67, 0xde, 0x7f, 0xfc, 0x3f, 0x5b, 0x53, 0xcf, 0xc6, 0xff, 0xfa, 0x2f, 0xfe, 0x36, 0xd1, 0x7e,
    0xa8, 0x6e, 0xff, 0xaf, 0x5c, 0x2f, 0x4f, 0x8a, 0xff, 0x36, 0x95, 0x8b, 0xec, 0xde, 0xf5, 0x7f, 0x65, 0x4e, 0xad, 0xfa,
    0xf8, 0x8f, 0x45, 0x78, 0xa4, 0x26, 0x9f, 0x5f, 0xf1, 0x60, 0xed, 0xbc, 0x8d, 0x5b, 0xf9, 0x3d, 0xd1, 0xfe, 0xdf, 0x11,
    0xff, 0xd5, 0xe3, 0x7f, 0xf1, 0x35, 0x3c, 0xf6, 0x8c, 0x74, 0x45, 0xc6, 0xff, 0xda, 0x09, 0xfd, 0xff, 0x51, 0x3b, 0x31,
    0x5a, 0x2a, 0xf5, 0x6b, 0x53, 0x55, 0x66, 0xdb, 0x5e, 0x8d, 0xff, 0x4c, 0xfd, 0x1f, 0x1d, 0x87, 0xc8, 0xb4, 0x10, 0xdb,
    0x60, 0xe4, 0x60, 0xf4, 0x9b, 0xeb, 0x59, 0x43, 0x73, 0xed, 0xff, 0x1d, 0xf1, 0x7f, 0x56, 0xff, 0xbf, 0x25, 0x47, 0x35,
    0xeb, 0xda, 0xff, 0x2d, 0xd1, 0xca, 0xcc, 0xdc, 0x6d, 0x22, 0xa5, 0xbd, 0x5e, 0x66, 0x57, 0xd6, 0xff, 0xb9, 0xd5, 0xe6,
    0xda, 0xb6, 0x7c, 0xa7, 0x91, 0xf6, 0xff, 0x9e, 0xa7, 0x70, 0xcf, 0xae, 0xff, 0xcf, 0x7c, 0x3a, 0xb9, 0x73, 0x7f, 0xee,
    0x93, 0x77, 0x6e, 0x4f, 0x1e, 0xe9, 0x3b, 0xf4, 0xff, 0x23, 0xe3, 0xff, 0xd1, 0x9c, 0xc7, 0xe3, 0xda, 0xb8, 0x0f, 0x46,
    0xd3, 0xbe, 0x35, 0xfe, 0xef, 0x91, 0x9b, 0xf9, 0x7b, 0xe3, 0xbf, 0xa5, 0xf2, 0x4f, 0x5f, 0x11, 0xff, 0x73, 0x2d, 0xab,
    0xd8, 0x8a, 0x88, 0xb9, 0x15, 0x93, 0xa3, 0x7d, 0xba, 0x76, 0xea, 0x95, 0x9e, 0x79, 0xfe, 0xb7, 0xe7, 0xfd, 0x9f, 0xda,
    0x37, 0x0d, 0x9e, 0xfb, 0x3e, 0xd4, 0x3b, 0x8e, 0xe0, 0x8c, 0xfb, 0xf9, 0x78, 0xd5, 0x82, 0xbe, 0xe9, 0x98, 0x62, 0x4f,
    0x75, 0xa3, 0xcf, 0x89, 0xf7, 0xdd, 0xef, 0xa3, 0xef, 0xff, 0x44, 0xcb, 0x54, 0xa6, 0xe5, 0x6f, 0xb9, 0x83, 0x5d, 0x19,
    0xff, 0xfb, 0x5b, 0x49, 0x55, 0xef, 0x30, 0x7c, 0xdb, 0x95, 0xa2, 0x64, 0xbe, 0xe5, 0xbc, 0xae, 0x8f, 0xf4, 0xbe, 0xa5,
    0x24, 0x5c, 0xe3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3b, 0xe7, 0x8a, 0xf5, 0xb2,
    0x4c, 0x0b, 0xb3, 0x79, 0xae, 0xfa, 0xc2, 0xcc, 0xcd, 0x36, 0xcc, 0xdd, 0x9c, 0xfd, 0x9e, 0x9f, 0xab, 0x1a, 0xf4, 0xc1,
    0xbf, 0x68, 0x81, 0x3d, 0xed, 0xe1, 0x79, 0xc8, 0xeb, 0x6b, 0x34, 0xfc, 0xdc, 0xe3, 0x96, 0x28, 0x91, 0x36, 0x31, 0x4f,
    0x75, 0x6d, 0xae, 0xde, 0xee, 0x63, 0xae, 0xc9, 0x96, 0x1e, 0xc9, 0xfb, 0x37, 0x9b, 0xbd, 0x64, 0x47, 0xa9, 0xe4, 0x66,
    0xbb, 0xf7, 0xa5, 0xbf, 0xc7, 0x72, 0x3f, 0xf4, 0xc3, 0x18, 0xaa, 0xb9, 0x3f, 0xcd, 0x65, 0xe8, 0x5b, 0x9f, 0xb3, 0x3e,
    0x97, 0xdf, 0xb3, 0x6d, 0xcc, 0x89, 0xbd, 0x7e, 0xb5, 0xc7, 0x23, 0x25, 0xb7, 0x75, 0x6e, 0xae, 0xfe, 0x8e, 0x63, 0x8e,
    0xe7, 0xb3, 0x9d, 0xff, 0x9e, 0x4c, 0xed, 0x37, 0x9e, 0x85, 0x99, 0xa9, 0x27, 0xda, 0xd4, 0xdd, 0x7a, 0x2d, 0xca, 0xa3,
    0x77, 0x99, 0xf5, 0xf8, 0xaf, 0x99, 0x83, 0xde, 0x87, 0xc7, 0x13, 0x5b, 0x81, 0x63, 0x26, 0xbf, 0xf7, 0xfb, 0x5a, 0x8b,
    0xf9, 0xf8, 0xff, 0xd6, 0x36, 0xf6, 0xfd, 0x4a, 0xa0, 0x2f, 0xd6, 0xf1, 0x9f, 0x23, 0x6c, 0xa6, 0x15, 0x5f, 0x13, 0xff,
    0xeb, 0xf7, 0xad, 0xfd, 0xf1, 0xdf, 0x43, 0xdf, 0x10, 0x6d, 0xcf, 0xde, 0x73, 0x6b, 0x2e, 0xfe, 0xc7, 0x57, 0xd0, 0x9e,
    0xad, 0x55, 0xab, 0x28, 0xe5, 0x72, 0x94, 0xb7, 0x60, 0xef, 0x21, 0x9b, 0x11, 0x68, 0x35, 0x1b, 0x5b, 0x0f, 0xf5, 0x46,
    0xf6, 0xd4, 0xff, 0xf9, 0xfe, 0xff, 0x7c, 0xbb, 0x2d, 0x3e, 0x7e, 0x90, 0xb9, 0x96, 0x76, 0xb4, 0xc3, 0xcf, 0xd8, 0x1a,
    0xc9, 0x1b, 0x77, 0xd5, 0xd6, 0xdd, 0xf1, 0xdf, 0xff, 0xb3, 0x8e, 0xe2, 0x51, 0x44, 0xad, 0xdf, 0x1d, 0xee, 0xd7, 0xb2,
    0x88, 0x8f, 0xff, 0xad, 0x1e, 0x43, 0xc5, 0x11, 0xcf, 0xf5, 0x0b, 0x67, 0xa3, 0xb4, 0xae, 0xfe, 0xcf, 0x9c, 0xf5, 0x2b,
    0xb7, 0x66, 0x46, 0xf7, 0xde, 0x1a, 0xff, 0x73, 0xe5, 0x76, 0x45, 0xfc, 0x57, 0xe7, 0x13, 0x9c, 0x69, 0x4d, 0x44, 0xb3,
    0x34, 0x5f, 0xd1, 0x97, 0x9c, 0xcd, 0xce, 0x9f, 0x5b, 0x7f, 0xf6, 0x4d, 0xf1, 0xdf, 0x8a, 0xda, 0xff, 0x67, 0x6e, 0xbd,
    0x47, 0xfb, 0xbf, 0xbf, 0xa0, 0xfe, 0xcf, 0x3e, 0xd7, 0x99, 0x3f, 0x86, 0x73, 0x8e, 0x36, 0x9e, 0x81, 0x3f, 0xf3, 0x04,
    0xe3, 0xca, 0xbe, 0x70, 0x76, 0x6b, 0x36, 0xfe, 0xbf, 0xb5, 0xfe, 0x7f, 0x43, 0xfc, 0xe7, 0x9f, 0x65, 0xaf, 0x8c, 0xff,
    0x9d, 0x75, 0x44, 0xf9, 0xf6, 0x51, 0xee, 0xd9, 0xff, 0x3b, 0xeb, 0xff, 0x9a, 0x35, 0xe7, 0x9f, 0x16, 0xff, 0x33, 0xa3,
    0x4c, 0x4f, 0x8d, 0xff, 0x8a, 0x18, 0xa9, 0x1a, 0xff, 0xaf, 0xbe, 0x03, 0xb4, 0xad, 0x99, 0xeb, 0x9f, 0x17, 0xe1, 0xe3,
    0xf8, 0x8f, 0xbc, 0xff, 0xf3, 0xee, 0xf8, 0x9f, 0x7b, 0x37, 0xe6, 0xd9, 0xf1, 0xdf, 0x93, 0x2b, 0xd6, 0xbc, 0xf3, 0xf9,
    0x70, 0x6c, 0xfd, 0xe9, 0xe7, 0xc5, 0x7f, 0xfc, 0xed, 0x8c, 0xb7, 0x3f, 0xff, 0xcb, 0xbd, 0x1d, 0xb0, 0xf7, 0xf9, 0xdf,
    0x13, 0xde, 0x2b, 0xe1, 0x4d, 0xf7, 0x42, 0xe7, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xa0, 0x6a, 0x46, 0x46, 0x3c, 0x67, 0xcf, 0xdc, 0x4c, 0xb1, 0x6b, 0x72, 0xdf, 0x47, 0x32, 0x15, 0xcc, 0xec, 0x4f, 0x3c,
    0xff, 0x41, 0x24, 0xdb, 0xfe, 0xd1, 0xb9, 0x89, 0xe6, 0x1c, 0xcf, 0xe4, 0x32, 0xda, 0x75, 0x8c, 0xeb, 0x59, 0xe1, 0xe7,
    0x7f, 0x61, 0x2e, 0xf7, 0x63, 0x2c, 0x2e, 0xee, 0x71, 0xae, 0x33, 0xf3, 0xee, 0x76, 0x67, 0x8a, 0xef, 0xc9, 0x5c, 0xef,
    0xf5, 0x7b, 0x95, 0xcd, 0xd3, 0x1f, 0xdb, 0xe7, 0x48, 0x09, 0xf7, 0xc4, 0x4a, 0x2c, 0x6d, 0xe2, 0x4a, 0xaa, 0xce, 0xef,
    0x93, 0x59, 0x99, 0x63, 0xfe, 0x8e, 0x5c, 0x99, 0xb3, 0xbf, 0x25, 0xf2, 0xf5, 0xdf, 0xe5, 0x5c, 0xdf, 0xb5, 0x65, 0x71,
    0x9c, 0xf1, 0xe8, 0xbe, 0xad, 0xa4, 0x1e, 0xca, 0x6e, 0xfa, 0x9c, 0x7c, 0x04, 0xb1, 0x3a, 0xf7, 0xbd, 0xed, 0xe2, 0xf7,
    0x1f, 0x73, 0x26, 0xb7, 0xc0, 0x4c, 0x1d, 0xde, 0x02, 0xf1, 0x7f, 0xc7, 0xfc, 0x55, 0xb9, 0xcc, 0x57, 0x33, 0xa5, 0x78,
    0xd6, 0xb6, 0x23, 0xbf, 0x07, 0x56, 0x62, 0xbb, 0xf2, 0x18, 0xf7, 0xe7, 0xec, 0x38, 0xce, 0x26, 0xf2, 0xe4, 0x73, 0xdd,
    0xb6, 0xe7, 0x82, 0x89, 0xd6, 0xff, 0x4f, 0x8d, 0xff, 0xd1, 0x6a, 0x04, 0x9f, 0xd7, 0x25, 0x3b, 0x6f, 0x5b, 0xc5, 0x5a,
    0x06, 0xab, 0x3d, 0xa0, 0x1d, 0xdb, 0xae, 0xcc, 0xd9, 0x75, 0xf6, 0xb1, 0xc6, 0xcb, 0xe8, 0xca, 0xf8, 0x9f, 0xe9, 0xd7,
    0x7d, 0x5b, 0xfd, 0xdf, 0x2f, 0xdf, 0x36, 0x7f, 0x17, 0xbb, 0xfb, 0xb5, 0xbd, 0x7f, 0xcd, 0x8e, 0x27, 0xc4, 0xf8, 0x5d,
    0xe3, 0xff, 0xaa, 0x8c, 0xc7, 0x35, 0x2b, 0x2d, 0x45, 0xfb, 0xff, 0x4f, 0xb8, 0x26, 0x7a, 0x72, 0x2d, 0xe3, 0xd8, 0x0a,
    0xce, 0xd5, 0xdb, 0xc4, 0xff, 0xdd, 0xeb, 0xff, 0x99, 0xb1, 0x95, 0xfb, 0xe5, 0xaf, 0xcc, 0xae, 0xd3, 0xfb, 0xee, 0xeb,
    0xa5, 0x85, 0x9e, 0x79, 0xed, 0xd8, 0x26, 0xfe, 0xc5, 0xbf, 0xf8, 0xbf, 0xe2, 0x7a, 0xe9, 0x5f, 0xd1, 0xff, 0x17, 0xff,
    0xe2, 0x3f, 0xf2, 0xcc, 0xec, 0xfe, 0xfd, 0xff, 0x5d, 0x4f, 0x2a, 0xdf, 0x36, 0xfe, 0x1f, 0x7d, 0xda, 0xfb, 0xa4, 0xf1,
    0xff, 0xdd, 0xcf, 0xff, 0xae, 0xf8, 0xdd, 0xdc, 0x3e, 0xbf, 0xff, 0x19, 0xf7, 0x3b, 0xf2, 0xc5, 0xf3, 0xfc, 0xeb, 0x50,
    0x19, 0x80, 0xf8, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe6, 0xe7, 0x00, 0xaf, 0xbe,
    0xa7, 0x7f, 0x66, 0xbe, 0xf7, 0xc8, 0x9c, 0xcf, 0xb9, 0xef, 0x04, 0xf1, 0x1f, 0x9b, 0xa7, 0x73, 0x66, 0xbe, 0xf7, 0xfc,
    0xdc, 0x7c, 0xe7, 0x1a, 0xde, 0x37, 0x53, 0x5c, 0x6c, 0x43, 0x2e, 0xc2, 0xa3, 0x39, 0x3a, 0xef, 0xb2, 0xed, 0x1d, 0x2b,
    0x73, 0xc0, 0xbd, 0x6a, 0xd5, 0xa7, 0xc4, 0x7f, 0xdb, 0x96, 0xef, 0x12, 0xbe, 0xb1, 0xff, 0x2f, 0xfe, 0x41, 0xfc, 0x8b,
    0x7f, 0xd0, 0xfe, 0x17, 0xff, 0x60, 0xfc, 0xff, 0xaa, 0x58, 0x9d, 0x59, 0x27, 0xe6, 0xc9, 0x4f, 0x31, 0xe0, 0x7e, 0x77,
    0x80, 0xf8, 0xdd, 0xa1, 0x7a, 0x5b, 0x1b, 0xde, 0x37, 0x3c, 0x23, 0x84, 0xb3, 0xe2, 0xff, 0x9a, 0x51, 0x8a, 0xd5, 0xf8,
    0xd7, 0xfe, 0x87, 0x37, 0xf5, 0x46, 0x22, 0xef, 0xff, 0x89, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd8, 0xe9, 0xaf, 0xff, 0x94, 0x03, 0x88, 0x7f, 0xe0, 0xeb, 0xe2, 0xff,
    0x0f };

// Font glyphs rectangles data (on atlas)
static const RayRectangle enefeteFontRecs[189] = {
    { 4, 4, 4 , 16 },
    { 16, 4, 2 , 10 },
    { 26, 4, 5 , 3 },
    { 39, 4, 7 , 10 },
    { 54, 4, 7 , 13 },
    { 69, 4, 7 , 10 },
    { 84, 4, 7 , 10 },
    { 99, 4, 2 , 3 },
    { 109, 4, 3 , 12 },
    { 120, 4, 3 , 12 },
    { 131, 4, 5 , 6 },
    { 144, 4, 6 , 5 },
    { 158, 4, 2 , 4 },
    { 168, 4, 5 , 1 },
    { 181, 4, 2 , 2 },
    { 191, 4, 4 , 10 },
    { 203, 4, 6 , 10 },
    { 217, 4, 4 , 10 },
    { 229, 4, 6 , 10 },
    { 243, 4, 6 , 10 },
    { 257, 4, 6 , 10 },
    { 271, 4, 6 , 10 },
    { 285, 4, 6 , 10 },
    { 299, 4, 6 , 10 },
    { 313, 4, 6 , 10 },
    { 327, 4, 6 , 10 },
    { 341, 4, 2 , 6 },
    { 351, 4, 2 , 8 },
    { 361, 4, 7 , 7 },
    { 376, 4, 5 , 3 },
    { 389, 4, 7 , 7 },
    { 404, 4, 6 , 10 },
    { 418, 4, 7 , 12 },
    { 433, 4, 7 , 10 },
    { 448, 4, 7 , 10 },
    { 463, 4, 7 , 10 },
    { 478, 4, 7 , 10 },
    { 493, 4, 7 , 10 },
    { 4, 28, 7 , 10 },
    { 19, 28, 7 , 10 },
    { 34, 28, 7 , 10 },
    { 49, 28, 2 , 10 },
    { 59, 28, 5 , 10 },
    { 72, 28, 7 , 10 },
    { 87, 28, 6 , 10 },
    { 101, 28, 9 , 10 },
    { 118, 28, 7 , 10 },
    { 133, 28, 7 , 10 },
    { 148, 28, 7 , 10 },
    { 163, 28, 7 , 12 },
    { 178, 28, 7 , 10 },
    { 193, 28, 7 , 10 },
    { 208, 28, 6 , 10 },
    { 222, 28, 7 , 10 },
    { 237, 28, 7 , 10 },
    { 252, 28, 8 , 10 },
    { 268, 28, 7 , 10 },
    { 283, 28, 6 , 10 },
    { 297, 28, 7 , 10 },
    { 312, 28, 4 , 12 },
    { 324, 28, 4 , 10 },
    { 336, 28, 4 , 12 },
    { 348, 28, 6 , 3 },
    { 362, 28, 7 , 1 },
    { 377, 28, 4 , 3 },
    { 389, 28, 6 , 7 },
    { 403, 28, 6 , 10 },
    { 417, 28, 6 , 7 },
    { 431, 28, 6 , 10 },
    { 445, 28, 6 , 7 },
    { 459, 28, 4 , 10 },
    { 471, 28, 6 , 9 },
    { 485, 28, 6 , 10 },
    { 499, 28, 2 , 10 },
    { 4, 52, 5 , 12 },
    { 17, 52, 6 , 10 },
    { 31, 52, 3 , 10 },
    { 42, 52, 8 , 7 },
    { 58, 52, 6 , 7 },
    { 72, 52, 6 , 7 },
    { 86, 52, 6 , 9 },
    { 100, 52, 6 , 9 },
    { 114, 52, 5 , 7 },
    { 127, 52, 6 , 7 },
    { 141, 52, 4 , 10 },
    { 153, 52, 6 , 7 },
    { 167, 52, 6 , 7 },
    { 181, 52, 8 , 7 },
    { 197, 52, 6 , 7 },
    { 211, 52, 6 , 9 },
    { 225, 52, 6 , 7 },
    { 239, 52, 5 , 12 },
    { 252, 52, 2 , 12 },
    { 262, 52, 5 , 12 },
    { 275, 52, 7 , 3 },
    { 290, 52, 2 , 9 },
    { 300, 52, 6 , 11 },
    { 314, 52, 7 , 10 },
    { 329, 52, 7 , 9 },
    { 344, 52, 6 , 10 },
    { 358, 52, 7 , 11 },
    { 373, 52, 6 , 12 },
    { 387, 52, 6 , 10 },
    { 401, 52, 7 , 10 },
    { 416, 52, 5 , 5 },
    { 429, 52, 7 , 6 },
    { 444, 52, 6 , 3 },
    { 458, 52, 7 , 10 },
    { 473, 52, 9 , 10 },
    { 490, 52, 4 , 4 },
    { 4, 76, 6 , 7 },
    { 18, 76, 4 , 5 },
    { 30, 76, 4 , 5 },
    { 42, 76, 7 , 11 },
    { 57, 76, 6 , 9 },
    { 71, 76, 7 , 12 },
    { 86, 76, 2 , 2 },
    { 96, 76, 6 , 10 },
    { 110, 76, 3 , 5 },
    { 121, 76, 4 , 5 },
    { 133, 76, 7 , 6 },
    { 148, 76, 9 , 10 },
    { 165, 76, 8 , 7 },
    { 181, 76, 6 , 11 },
    { 195, 76, 6 , 11 },
    { 209, 76, 7 , 11 },
    { 224, 76, 7 , 11 },
    { 239, 76, 7 , 11 },
    { 254, 76, 7 , 11 },
    { 269, 76, 7 , 11 },
    { 284, 76, 7 , 11 },
    { 299, 76, 9 , 10 },
    { 316, 76, 7 , 12 },
    { 331, 76, 7 , 11 },
    { 346, 76, 7 , 11 },
    { 361, 76, 7 , 11 },
    { 376, 76, 7 , 11 },
    { 391, 76, 3 , 11 },
    { 402, 76, 3 , 11 },
    { 413, 76, 5 , 11 },
    { 426, 76, 5 , 11 },
    { 439, 76, 8 , 10 },
    { 455, 76, 7 , 11 },
    { 470, 76, 7 , 11 },
    { 485, 76, 7 , 11 },
    { 4, 100, 7 , 11 },
    { 19, 100, 7 , 11 },
    { 34, 100, 7 , 11 },
    { 49, 100, 7 , 7 },
    { 64, 100, 7 , 13 },
    { 79, 100, 7 , 11 },
    { 94, 100, 7 , 11 },
    { 109, 100, 7 , 11 },
    { 124, 100, 7 , 11 },
    { 139, 100, 6 , 11 },
    { 153, 100, 7 , 10 },
    { 168, 100, 7 , 10 },
    { 183, 100, 6 , 10 },
    { 197, 100, 6 , 10 },
    { 211, 100, 6 , 10 },
    { 225, 100, 6 , 10 },
    { 239, 100, 6 , 10 },
    { 253, 100, 6 , 11 },
    { 267, 100, 8 , 7 },
    { 283, 100, 6 , 9 },
    { 297, 100, 6 , 10 },
    { 311, 100, 6 , 10 },
    { 325, 100, 6 , 10 },
    { 339, 100, 6 , 10 },
    { 353, 100, 3 , 10 },
    { 364, 100, 3 , 10 },
    { 375, 100, 5 , 10 },
    { 388, 100, 5 , 10 },
    { 401, 100, 6 , 10 },
    { 415, 100, 6 , 10 },
    { 429, 100, 6 , 10 },
    { 443, 100, 6 , 10 },
    { 457, 100, 6 , 10 },
    { 471, 100, 6 , 10 },
    { 485, 100, 6 , 10 },
    { 4, 124, 6 , 7 },
    { 18, 124, 7 , 11 },
    { 33, 124, 6 , 10 },
    { 47, 124, 6 , 10 },
    { 61, 124, 6 , 10 },
    { 75, 124, 6 , 10 },
    { 89, 124, 6 , 12 },
    { 103, 124, 6 , 12 },
    { 117, 124, 6 , 12 },
};

// Font glyphs info data
// NOTE: No glyphs.image data provided
static const GlyphInfo enefeteFontGlyphs[189] = {
    { 32, 0, 12, 4, { 0 }},
    { 33, 0, 2, 3, { 0 }},
    { 34, 0, 2, 6, { 0 }},
    { 35, 0, 2, 8, { 0 }},
    { 36, 0, 1, 8, { 0 }},
    { 37, 0, 2, 8, { 0 }},
    { 38, 0, 2, 8, { 0 }},
    { 39, 0, 2, 3, { 0 }},
    { 40, 0, 2, 4, { 0 }},
    { 41, 0, 2, 4, { 0 }},
    { 42, 0, 4, 6, { 0 }},
    { 43, 0, 6, 7, { 0 }},
    { 44, 0, 10, 3, { 0 }},
    { 45, 0, 8, 6, { 0 }},
    { 46, 0, 10, 3, { 0 }},
    { 47, 0, 2, 5, { 0 }},
    { 48, 0, 2, 7, { 0 }},
    { 49, 0, 2, 7, { 0 }},
    { 50, 0, 2, 7, { 0 }},
    { 51, 0, 2, 7, { 0 }},
    { 52, 0, 2, 7, { 0 }},
    { 53, 0, 2, 7, { 0 }},
    { 54, 0, 2, 7, { 0 }},
    { 55, 0, 2, 7, { 0 }},
    { 56, 0, 2, 7, { 0 }},
    { 57, 0, 2, 7, { 0 }},
    { 58, 0, 4, 3, { 0 }},
    { 59, 0, 4, 3, { 0 }},
    { 60, 0, 4, 8, { 0 }},
    { 61, 0, 6, 6, { 0 }},
    { 62, 0, 4, 8, { 0 }},
    { 63, 0, 2, 7, { 0 }},
    { 64, 0, 2, 8, { 0 }},
    { 65, 0, 2, 8, { 0 }},
    { 66, 0, 2, 8, { 0 }},
    { 67, 0, 2, 8, { 0 }},
    { 68, 0, 2, 8, { 0 }},
    { 69, 0, 2, 8, { 0 }},
    { 70, 0, 2, 8, { 0 }},
    { 71, 0, 2, 8, { 0 }},
    { 72, 0, 2, 8, { 0 }},
    { 73, 0, 2, 3, { 0 }},
    { 74, 0, 2, 6, { 0 }},
    { 75, 0, 2, 8, { 0 }},
    { 76, 0, 2, 7, { 0 }},
    { 77, 0, 2, 10, { 0 }},
    { 78, 0, 2, 8, { 0 }},
    { 79, 0, 2, 8, { 0 }},
    { 80, 0, 2, 8, { 0 }},
    { 81, 0, 2, 8, { 0 }},
    { 82, 0, 2, 8, { 0 }},
    { 83, 0, 2, 8, { 0 }},
    { 84, 0, 2, 7, { 0 }},
    { 85, 0, 2, 8, { 0 }},
    { 86, 0, 2, 8, { 0 }},
    { 87, 0, 2, 9, { 0 }},
    { 88, 0, 2, 8, { 0 }},
    { 89, 0, 2, 7, { 0 }},
    { 90, 0, 2, 8, { 0 }},
    { 91, 0, 2, 5, { 0 }},
    { 92, 0, 2, 5, { 0 }},
    { 93, 0, 2, 5, { 0 }},
    { 94, 0, 2, 7, { 0 }},
    { 95, 0, 14, 8, { 0 }},
    { 96, 0, 2, 5, { 0 }},
    { 97, 0, 5, 7, { 0 }},
    { 98, 0, 2, 7, { 0 }},
    { 99, 0, 5, 7, { 0 }},
    { 100, 0, 2, 7, { 0 }},
    { 101, 0, 5, 7, { 0 }},
    { 102, 0, 2, 5, { 0 }},
    { 103, 0, 5, 7, { 0 }},
    { 104, 0, 2, 7, { 0 }},
    { 105, 0, 2, 3, { 0 }},
    { 106, 0, 2, 6, { 0 }},
    { 107, 0, 2, 7, { 0 }},
    { 108, 0, 2, 4, { 0 }},
    { 109, 0, 5, 9, { 0 }},
    { 110, 0, 5, 7, { 0 }},
    { 111, 0, 5, 7, { 0 }},
    { 112, 0, 5, 7, { 0 }},
    { 113, 0, 5, 7, { 0 }},
    { 114, 0, 5, 6, { 0 }},
    { 115, 0, 5, 7, { 0 }},
    { 116, 0, 2, 5, { 0 }},
    { 117, 0, 5, 7, { 0 }},
    { 118, 0, 5, 7, { 0 }},
    { 119, 0, 5, 9, { 0 }},
    { 120, 0, 5, 7, { 0 }},
    { 121, 0, 5, 7, { 0 }},
    { 122, 0, 5, 7, { 0 }},
    { 123, 0, 2, 6, { 0 }},
    { 124, 0, 2, 3, { 0 }},
    { 125, 0, 2, 6, { 0 }},
    { 126, 0, 6, 8, { 0 }},
    { 161, 0, 5, 3, { 0 }},
    { 162, 0, 3, 7, { 0 }},
    { 163, 0, 2, 8, { 0 }},
    { 8364, 0, 3, 8, { 0 }},
    { 165, 0, 2, 7, { 0 }},
    { 352, 0, 1, 8, { 0 }},
    { 167, 0, 2, 7, { 0 }},
    { 353, 0, 2, 7, { 0 }},
    { 169, 0, 2, 8, { 0 }},
    { 170, 0, 2, 6, { 0 }},
    { 171, 0, 6, 8, { 0 }},
    { 172, 0, 7, 7, { 0 }},
    { 174, 0, 2, 8, { 0 }},
    { 175, 1, 3, 14, { 0 }},
    { 176, 0, 2, 5, { 0 }},
    { 177, 0, 4, 7, { 0 }},
    { 178, 0, 2, 5, { 0 }},
    { 179, 0, 2, 5, { 0 }},
    { 381, 0, 1, 8, { 0 }},
    { 181, 0, 5, 7, { 0 }},
    { 182, 0, 2, 8, { 0 }},
    { 183, 0, 6, 3, { 0 }},
    { 382, 0, 2, 7, { 0 }},
    { 185, 0, 2, 4, { 0 }},
    { 186, 0, 2, 5, { 0 }},
    { 187, 0, 6, 8, { 0 }},
    { 338, 0, 2, 10, { 0 }},
    { 339, 0, 5, 9, { 0 }},
    { 376, 0, 1, 7, { 0 }},
    { 191, 0, 3, 7, { 0 }},
    { 192, 0, 1, 8, { 0 }},
    { 193, 0, 1, 8, { 0 }},
    { 194, 0, 1, 8, { 0 }},
    { 195, 0, 1, 8, { 0 }},
    { 196, 0, 1, 8, { 0 }},
    { 197, 0, 1, 8, { 0 }},
    { 198, 0, 2, 10, { 0 }},
    { 199, 0, 2, 8, { 0 }},
    { 200, 0, 1, 8, { 0 }},
    { 201, 0, 1, 8, { 0 }},
    { 202, 0, 1, 8, { 0 }},
    { 203, 0, 1, 8, { 0 }},
    { 204, 0, 1, 4, { 0 }},
    { 205, 0, 1, 4, { 0 }},
    { 206, 0, 1, 6, { 0 }},
    { 207, 0, 1, 6, { 0 }},
    { 208, 0, 2, 9, { 0 }},
    { 209, 0, 1, 8, { 0 }},
    { 210, 0, 1, 8, { 0 }},
    { 211, 0, 1, 8, { 0 }},
    { 212, 0, 1, 8, { 0 }},
    { 213, 0, 1, 8, { 0 }},
    { 214, 0, 1, 8, { 0 }},
    { 215, 0, 5, 8, { 0 }},
    { 216, 0, 1, 8, { 0 }},
    { 217, 0, 1, 8, { 0 }},
    { 218, 0, 1, 8, { 0 }},
    { 219, 0, 1, 8, { 0 }},
    { 220, 0, 1, 8, { 0 }},
    { 221, 0, 1, 7, { 0 }},
    { 222, 0, 2, 8, { 0 }},
    { 223, 0, 2, 8, { 0 }},
    { 224, 0, 2, 7, { 0 }},
    { 225, 0, 2, 7, { 0 }},
    { 226, 0, 2, 7, { 0 }},
    { 227, 0, 2, 7, { 0 }},
    { 228, 0, 2, 7, { 0 }},
    { 229, 0, 1, 7, { 0 }},
    { 230, 0, 5, 9, { 0 }},
    { 231, 0, 5, 7, { 0 }},
    { 232, 0, 2, 7, { 0 }},
    { 233, 0, 2, 7, { 0 }},
    { 234, 0, 2, 7, { 0 }},
    { 235, 0, 2, 7, { 0 }},
    { 236, 0, 2, 4, { 0 }},
    { 237, 0, 2, 4, { 0 }},
    { 238, 0, 2, 6, { 0 }},
    { 239, 0, 2, 6, { 0 }},
    { 240, 0, 2, 7, { 0 }},
    { 241, 0, 2, 7, { 0 }},
    { 242, 0, 2, 7, { 0 }},
    { 243, 0, 2, 7, { 0 }},
    { 244, 0, 2, 7, { 0 }},
    { 245, 0, 2, 7, { 0 }},
    { 246, 0, 2, 7, { 0 }},
    { 247, 0, 4, 7, { 0 }},
    { 248, 0, 3, 8, { 0 }},
    { 249, 0, 2, 7, { 0 }},
    { 250, 0, 2, 7, { 0 }},
    { 251, 0, 2, 7, { 0 }},
    { 252, 0, 2, 7, { 0 }},
    { 253, 0, 2, 7, { 0 }},
    { 254, 0, 2, 7, { 0 }},
    { 255, 0, 2, 7, { 0 }},
};

// Style loading function: Enefete
static void GuiLoadStyleEnefete(void)
{
    // Load style properties provided
    // NOTE: Default properties are propagated
    for (int i = 0; i < ENEFETE_STYLE_PROPS_COUNT; i++)
    {
        GuiSetStyle(enefeteStyleProps[i].controlId, enefeteStyleProps[i].propertyId, enefeteStyleProps[i].propertyValue);
    }

    // Custom font loading
    // NOTE: Compressed font image data (DEFLATE), it requires DecompressData() function
    int enefeteFontDataSize = 0;
    unsigned char *data = DecompressData(enefeteFontData, ENEFETE_STYLE_FONT_ATLAS_COMP_SIZE, &enefeteFontDataSize);
    Image imFont = { data, 512, 256, 1, 2 };

    Font font = { 0 };
    font.baseSize = 16;
    font.glyphCount = 189;

    // Load texture from image
    font.texture = LoadTextureFromImage(imFont);
    UnloadImage(imFont);  // Uncompressed image data can be unloaded from memory

    // Copy char recs data from global fontRecs
    // NOTE: Required to avoid issues if trying to free font
    font.recs = (RayRectangle *)RAYGUI_MALLOC(font.glyphCount*sizeof(RayRectangle));
    memcpy(font.recs, enefeteFontRecs, font.glyphCount*sizeof(RayRectangle));

    // Copy font char info data from global fontChars
    // NOTE: Required to avoid issues if trying to free font
    font.glyphs = (GlyphInfo *)RAYGUI_MALLOC(font.glyphCount*sizeof(GlyphInfo));
    memcpy(font.glyphs, enefeteFontGlyphs, font.glyphCount*sizeof(GlyphInfo));

    GuiSetFont(font);

    // Setup a white rectangle on the font to be used on shapes drawing,
    // it makes possible to draw shapes and text (full UI) in a single draw call
    RayRectangle fontWhiteRec = { 510, 254, 1, 1 };
    SetShapesTexture(font.texture, fontWhiteRec);

    //-----------------------------------------------------------------

    // TODO: Custom user style setup: Set specific properties here (if required)
    // i.e. Controls specific BORDER_WIDTH, TEXT_PADDING, TEXT_ALIGNMENT
}
