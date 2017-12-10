const char MODE_VIDEO = 0;
const char MODE_PHOTO = 1;
const char MODE_MULTI_SHOT = 2;
const char MODE_PLAYBACK = 4;
const char MODE_SETUP = 5;
const char MODE_AUDIO = 6;

const char GPCAMERA_GROUP_VIDEO[] PROGMEM = { 5, 6, 7, 2, 3, 4, 8, 9, 10, 11, 12, 73, 74, 13, 14, 15, 0 };
const char GPCAMERA_GROUP_PHOTO[] PROGMEM = { 18, 19, 17, 20, 21, 22, 23, 75, 24, 25, 26, 0 };
const char GPCAMERA_GROUP_MULTI_SHOT[] PROGMEM = { 31, 29, 30, 32, 28, 33, 34, 35, 36, 76, 37, 38, 39, 0 };
#ifdef HERO_4_SILVER
const char GPCAMERA_GROUP_SETUP[] PROGMEM = { 51, 50, 49, 72, 52, 53, 1, 16, 27, 54, 55, 56, 57, 58, 59, 0 };
#else
const char GPCAMERA_GROUP_SETUP[] PROGMEM = { 52, 53, 1, 16, 27, 54, 55, 56, 57, 58, 59, 0 };
#endif
const char GPCAMERA_GROUP_DELETE_ID[] PROGMEM = { 0 };
const char GPCAMERA_GROUP_CAMERA_INFO[] PROGMEM = { 0 };
const char GPCAMERA_GROUP_WIRELESS_CONTROLS[] PROGMEM = { 0 };
const char GPCAMERA_GROUP_CAMERA_STATUS[] PROGMEM = { 0 };

//
#ifdef USE_LCD
#define MENU_TEXT(a, b) a b
#else
#define MENU_TEXT(a, b) a
#endif

const char title_txt_0_0[] PROGMEM = MENU_TEXT("\x01", "Default Sub Mode");
const char option_txt_0_0_0[] PROGMEM = MENU_TEXT("\x00", "Video");
const char option_txt_0_0_1[] PROGMEM = MENU_TEXT("\x01", "Time Lapse Video");
const char option_txt_0_0_2[] PROGMEM = MENU_TEXT("\x02", "Video + Photo");
const char option_txt_0_0_3[] PROGMEM = MENU_TEXT("\x03", "Looping");
const char* const option_txt_0_0[] PROGMEM = {
option_txt_0_0_0, option_txt_0_0_1, option_txt_0_0_2, option_txt_0_0_3, NULL
};

const char title_txt_0_1[] PROGMEM = MENU_TEXT("\x44", "Video Sub Mode");
const char option_txt_0_1_0[] PROGMEM = MENU_TEXT("\x00", "Video");
const char option_txt_0_1_1[] PROGMEM = MENU_TEXT("\x01", "Time Lapse Video");
const char option_txt_0_1_2[] PROGMEM = MENU_TEXT("\x02", "Video + Photo");
const char option_txt_0_1_3[] PROGMEM = MENU_TEXT("\x03", "Looping");
const char* const option_txt_0_1[] PROGMEM = {
option_txt_0_1_0, option_txt_0_1_1, option_txt_0_1_2, option_txt_0_1_3, NULL
};

const char title_txt_0_2[] PROGMEM = MENU_TEXT("\x02", "Resolution");
const char option_txt_0_2_0[] PROGMEM = MENU_TEXT("\x02", "4K SuperView");
const char option_txt_0_2_1[] PROGMEM = MENU_TEXT("\x01", "4K");
const char option_txt_0_2_2[] PROGMEM = MENU_TEXT("\x05", "2.7K SuperView");
const char option_txt_0_2_3[] PROGMEM = MENU_TEXT("\x04", "2.7K");
const char option_txt_0_2_4[] PROGMEM = MENU_TEXT("\x06", "2.7K 4:3");
const char option_txt_0_2_5[] PROGMEM = MENU_TEXT("\x07", "1440");
const char option_txt_0_2_6[] PROGMEM = MENU_TEXT("\x08", "1080 SuperView");
const char option_txt_0_2_7[] PROGMEM = MENU_TEXT("\x09", "1080");
const char option_txt_0_2_8[] PROGMEM = MENU_TEXT("\x0a", "960");
const char option_txt_0_2_9[] PROGMEM = MENU_TEXT("\x0b", "720 SuperView");
const char option_txt_0_2_10[] PROGMEM = MENU_TEXT("\x0c", "720");
const char option_txt_0_2_11[] PROGMEM = MENU_TEXT("\x0d", "WVGA");
const char* const option_txt_0_2[] PROGMEM = {
option_txt_0_2_0, option_txt_0_2_1, option_txt_0_2_2, option_txt_0_2_3, option_txt_0_2_4, option_txt_0_2_5, option_txt_0_2_6, option_txt_0_2_7, option_txt_0_2_8, option_txt_0_2_9, option_txt_0_2_10, option_txt_0_2_11, NULL
};

const char title_txt_0_3[] PROGMEM = MENU_TEXT("\x03", "FPS");
const char option_txt_0_3_0[] PROGMEM = MENU_TEXT("\x00", "240");
const char option_txt_0_3_1[] PROGMEM = MENU_TEXT("\x01", "120");
const char option_txt_0_3_2[] PROGMEM = MENU_TEXT("\x02", "100");
const char option_txt_0_3_3[] PROGMEM = MENU_TEXT("\x03", "90");
const char option_txt_0_3_4[] PROGMEM = MENU_TEXT("\x04", "80");
const char option_txt_0_3_5[] PROGMEM = MENU_TEXT("\x05", "60");
const char option_txt_0_3_6[] PROGMEM = MENU_TEXT("\x06", "50");
const char option_txt_0_3_7[] PROGMEM = MENU_TEXT("\x07", "48");
const char option_txt_0_3_8[] PROGMEM = MENU_TEXT("\x08", "30");
const char option_txt_0_3_9[] PROGMEM = MENU_TEXT("\x09", "25");
const char option_txt_0_3_10[] PROGMEM = MENU_TEXT("\x0a", "24");
const char option_txt_0_3_11[] PROGMEM = MENU_TEXT("\x0b", "15");
const char option_txt_0_3_12[] PROGMEM = MENU_TEXT("\x0c", "12.5");
const char* const option_txt_0_3[] PROGMEM = {
option_txt_0_3_0, option_txt_0_3_1, option_txt_0_3_2, option_txt_0_3_3, option_txt_0_3_4, option_txt_0_3_5, option_txt_0_3_6, option_txt_0_3_7, option_txt_0_3_8, option_txt_0_3_9, option_txt_0_3_10, option_txt_0_3_11, option_txt_0_3_12, NULL
};

const char title_txt_0_4[] PROGMEM = MENU_TEXT("\x04", "Field of View");
const char option_txt_0_4_0[] PROGMEM = MENU_TEXT("\x00", "Wide");
const char option_txt_0_4_1[] PROGMEM = MENU_TEXT("\x01", "Medium");
const char option_txt_0_4_2[] PROGMEM = MENU_TEXT("\x04", "Linear");
const char option_txt_0_4_3[] PROGMEM = MENU_TEXT("\x02", "Narrow");
const char* const option_txt_0_4[] PROGMEM = {
option_txt_0_4_0, option_txt_0_4_1, option_txt_0_4_2, option_txt_0_4_3, NULL
};

const char title_txt_0_5[] PROGMEM = MENU_TEXT("\x05", "Interval");
const char option_txt_0_5_0[] PROGMEM = MENU_TEXT("\x00", "0.5 Seconds");
const char option_txt_0_5_1[] PROGMEM = MENU_TEXT("\x01", "1 Second");
const char option_txt_0_5_2[] PROGMEM = MENU_TEXT("\x02", "2 Seconds");
const char option_txt_0_5_3[] PROGMEM = MENU_TEXT("\x03", "5 Seconds");
const char option_txt_0_5_4[] PROGMEM = MENU_TEXT("\x04", "10 Seconds");
const char option_txt_0_5_5[] PROGMEM = MENU_TEXT("\x05", "30 Seconds");
const char option_txt_0_5_6[] PROGMEM = MENU_TEXT("\x06", "60 Seconds");
const char* const option_txt_0_5[] PROGMEM = {
option_txt_0_5_0, option_txt_0_5_1, option_txt_0_5_2, option_txt_0_5_3, option_txt_0_5_4, option_txt_0_5_5, option_txt_0_5_6, NULL
};

const char title_txt_0_6[] PROGMEM = MENU_TEXT("\x06", "Interval");
const char option_txt_0_6_0[] PROGMEM = MENU_TEXT("\x00", "Max");
const char option_txt_0_6_1[] PROGMEM = MENU_TEXT("\x01", "5 Minutes");
const char option_txt_0_6_2[] PROGMEM = MENU_TEXT("\x02", "20 Minutes");
const char option_txt_0_6_3[] PROGMEM = MENU_TEXT("\x03", "60 Minutes");
const char option_txt_0_6_4[] PROGMEM = MENU_TEXT("\x04", "120 Minutes");
const char* const option_txt_0_6[] PROGMEM = {
option_txt_0_6_0, option_txt_0_6_1, option_txt_0_6_2, option_txt_0_6_3, option_txt_0_6_4, NULL
};

const char title_txt_0_7[] PROGMEM = MENU_TEXT("\x07", "Interval");
const char option_txt_0_7_0[] PROGMEM = MENU_TEXT("\x01", "1 P / 5 Sec");
const char option_txt_0_7_1[] PROGMEM = MENU_TEXT("\x02", "1 P / 10 Sec");
const char option_txt_0_7_2[] PROGMEM = MENU_TEXT("\x03", "1 P / 30 Sec");
const char option_txt_0_7_3[] PROGMEM = MENU_TEXT("\x04", "1 P / 60 Sec");
const char* const option_txt_0_7[] PROGMEM = {
option_txt_0_7_0, option_txt_0_7_1, option_txt_0_7_2, option_txt_0_7_3, NULL
};

const char title_txt_0_8[] PROGMEM = MENU_TEXT("\x08", "Low Light");
const char option_txt_0_8_0[] PROGMEM = MENU_TEXT("\x01", "ON");
const char option_txt_0_8_1[] PROGMEM = MENU_TEXT("\x00", "OFF");
const char* const option_txt_0_8[] PROGMEM = {
option_txt_0_8_0, option_txt_0_8_1, NULL
};

const char title_txt_0_9[] PROGMEM = MENU_TEXT("\x09", "Spot Meter");
const char option_txt_0_9_0[] PROGMEM = MENU_TEXT("\x01", "ON");
const char option_txt_0_9_1[] PROGMEM = MENU_TEXT("\x00", "OFF");
const char* const option_txt_0_9[] PROGMEM = {
option_txt_0_9_0, option_txt_0_9_1, NULL
};

const char title_txt_0_10[] PROGMEM = MENU_TEXT("\x0a", "Protune");
const char option_txt_0_10_0[] PROGMEM = MENU_TEXT("\x01", "ON");
const char option_txt_0_10_1[] PROGMEM = MENU_TEXT("\x00", "OFF");
const char* const option_txt_0_10[] PROGMEM = {
option_txt_0_10_0, option_txt_0_10_1, NULL
};

const char title_txt_0_11[] PROGMEM = MENU_TEXT("\x0b", "White Balance");
const char option_txt_0_11_0[] PROGMEM = MENU_TEXT("\x00", "Auto");
const char option_txt_0_11_1[] PROGMEM = MENU_TEXT("\x01", "3000K");
const char option_txt_0_11_2[] PROGMEM = MENU_TEXT("\x02", "5500K");
const char option_txt_0_11_3[] PROGMEM = MENU_TEXT("\x03", "6500K");
const char option_txt_0_11_4[] PROGMEM = MENU_TEXT("\x04", "Native");
const char* const option_txt_0_11[] PROGMEM = {
option_txt_0_11_0, option_txt_0_11_1, option_txt_0_11_2, option_txt_0_11_3, option_txt_0_11_4, NULL
};

const char title_txt_0_12[] PROGMEM = MENU_TEXT("\x0c", "Color");
const char option_txt_0_12_0[] PROGMEM = MENU_TEXT("\x00", "GoPro Color");
const char option_txt_0_12_1[] PROGMEM = MENU_TEXT("\x01", "Flat");
const char* const option_txt_0_12[] PROGMEM = {
option_txt_0_12_0, option_txt_0_12_1, NULL
};

const char title_txt_0_13[] PROGMEM = MENU_TEXT("\x0e", "Sharpness");
const char option_txt_0_13_0[] PROGMEM = MENU_TEXT("\x00", "High");
const char option_txt_0_13_1[] PROGMEM = MENU_TEXT("\x01", "Medium");
const char option_txt_0_13_2[] PROGMEM = MENU_TEXT("\x02", "Low");
const char* const option_txt_0_13[] PROGMEM = {
option_txt_0_13_0, option_txt_0_13_1, option_txt_0_13_2, NULL
};

const char title_txt_0_14[] PROGMEM = MENU_TEXT("\x0f", "EV Comp");
const char option_txt_0_14_0[] PROGMEM = MENU_TEXT("\x08", "-2.0");
const char option_txt_0_14_1[] PROGMEM = MENU_TEXT("\x07", "-1.5");
const char option_txt_0_14_2[] PROGMEM = MENU_TEXT("\x06", "-1.0");
const char option_txt_0_14_3[] PROGMEM = MENU_TEXT("\x05", "-0.5");
const char option_txt_0_14_4[] PROGMEM = MENU_TEXT("\x04", "0.0");
const char option_txt_0_14_5[] PROGMEM = MENU_TEXT("\x03", "0.5");
const char option_txt_0_14_6[] PROGMEM = MENU_TEXT("\x02", "1.0");
const char option_txt_0_14_7[] PROGMEM = MENU_TEXT("\x01", "1.5");
const char option_txt_0_14_8[] PROGMEM = MENU_TEXT("\x00", "2.0");
const char* const option_txt_0_14[] PROGMEM = {
option_txt_0_14_0, option_txt_0_14_1, option_txt_0_14_2, option_txt_0_14_3, option_txt_0_14_4, option_txt_0_14_5, option_txt_0_14_6, option_txt_0_14_7, option_txt_0_14_8, NULL
};

const char title_txt_0_15[] PROGMEM = MENU_TEXT("\x0d", "ISO Limit");
const char option_txt_0_15_0[] PROGMEM = MENU_TEXT("\x00", "6400");
const char option_txt_0_15_1[] PROGMEM = MENU_TEXT("\x01", "1600");
const char option_txt_0_15_2[] PROGMEM = MENU_TEXT("\x02", "400");
const char option_txt_0_15_3[] PROGMEM = MENU_TEXT("\x03", "3200");
const char option_txt_0_15_4[] PROGMEM = MENU_TEXT("\x04", "800");
const char* const option_txt_0_15[] PROGMEM = {
option_txt_0_15_0, option_txt_0_15_1, option_txt_0_15_2, option_txt_0_15_3, option_txt_0_15_4, NULL
};


//
const char title_txt_1_0[] PROGMEM = MENU_TEXT("\x10", "Default Sub Mode");
const char option_txt_1_0_0[] PROGMEM = MENU_TEXT("\x00", "Single");
const char option_txt_1_0_1[] PROGMEM = MENU_TEXT("\x01", "Continuous");
const char option_txt_1_0_2[] PROGMEM = MENU_TEXT("\x02", "Night");
const char* const option_txt_1_0[] PROGMEM = {
option_txt_1_0_0, option_txt_1_0_1, option_txt_1_0_2, NULL
};

const char title_txt_1_1[] PROGMEM = MENU_TEXT("\x45", "Photo Sub Mode");
const char option_txt_1_1_0[] PROGMEM = MENU_TEXT("\x00", "Single");
const char option_txt_1_1_1[] PROGMEM = MENU_TEXT("\x01", "Continuous");
const char option_txt_1_1_2[] PROGMEM = MENU_TEXT("\x02", "Night");
const char* const option_txt_1_1[] PROGMEM = {
option_txt_1_1_0, option_txt_1_1_1, option_txt_1_1_2, NULL
};

const char title_txt_1_2[] PROGMEM = MENU_TEXT("\x12", "Continuous Rate");
const char option_txt_1_2_0[] PROGMEM = MENU_TEXT("\x00", "3 FPS");
const char option_txt_1_2_1[] PROGMEM = MENU_TEXT("\x01", "5 FPS");
const char option_txt_1_2_2[] PROGMEM = MENU_TEXT("\x02", "10 FPS");
const char* const option_txt_1_2[] PROGMEM = {
option_txt_1_2_0, option_txt_1_2_1, option_txt_1_2_2, NULL
};

const char title_txt_1_3[] PROGMEM = MENU_TEXT("\x11", "Megapixels");
const char option_txt_1_3_0[] PROGMEM = MENU_TEXT("\x00", "12MP Wide");
const char option_txt_1_3_1[] PROGMEM = MENU_TEXT("\x01", "7MP Wide");
const char option_txt_1_3_2[] PROGMEM = MENU_TEXT("\x02", "7MP Med");
const char option_txt_1_3_3[] PROGMEM = MENU_TEXT("\x03", "5MP Med");
const char* const option_txt_1_3[] PROGMEM = {
option_txt_1_3_0, option_txt_1_3_1, option_txt_1_3_2, option_txt_1_3_3, NULL
};

const char title_txt_1_4[] PROGMEM = MENU_TEXT("\x13", "Shutter");
const char option_txt_1_4_0[] PROGMEM = MENU_TEXT("\x00", "Auto");
const char option_txt_1_4_1[] PROGMEM = MENU_TEXT("\x01", "2 Seconds");
const char option_txt_1_4_2[] PROGMEM = MENU_TEXT("\x02", "5 Seconds");
const char option_txt_1_4_3[] PROGMEM = MENU_TEXT("\x03", "10 Seconds");
const char option_txt_1_4_4[] PROGMEM = MENU_TEXT("\x04", "15 Seconds");
const char option_txt_1_4_5[] PROGMEM = MENU_TEXT("\x05", "20 Seconds");
const char option_txt_1_4_6[] PROGMEM = MENU_TEXT("\x06", "30 Seconds");
const char* const option_txt_1_4[] PROGMEM = {
option_txt_1_4_0, option_txt_1_4_1, option_txt_1_4_2, option_txt_1_4_3, option_txt_1_4_4, option_txt_1_4_5, option_txt_1_4_6, NULL
};

const char title_txt_1_5[] PROGMEM = MENU_TEXT("\x14", "Spot Meter");
const char option_txt_1_5_0[] PROGMEM = MENU_TEXT("\x01", "ON");
const char option_txt_1_5_1[] PROGMEM = MENU_TEXT("\x00", "OFF");
const char* const option_txt_1_5[] PROGMEM = {
option_txt_1_5_0, option_txt_1_5_1, NULL
};

const char title_txt_1_6[] PROGMEM = MENU_TEXT("\x15", "Protune");
const char option_txt_1_6_0[] PROGMEM = MENU_TEXT("\x01", "ON");
const char option_txt_1_6_1[] PROGMEM = MENU_TEXT("\x00", "OFF");
const char* const option_txt_1_6[] PROGMEM = {
option_txt_1_6_0, option_txt_1_6_1, NULL
};

const char title_txt_1_7[] PROGMEM = MENU_TEXT("\x16", "White Balance");
const char option_txt_1_7_0[] PROGMEM = MENU_TEXT("\x00", "Auto");
const char option_txt_1_7_1[] PROGMEM = MENU_TEXT("\x01", "3000K");
const char option_txt_1_7_2[] PROGMEM = MENU_TEXT("\x02", "5500K");
const char option_txt_1_7_3[] PROGMEM = MENU_TEXT("\x03", "6500K");
const char option_txt_1_7_4[] PROGMEM = MENU_TEXT("\x04", "Native");
const char* const option_txt_1_7[] PROGMEM = {
option_txt_1_7_0, option_txt_1_7_1, option_txt_1_7_2, option_txt_1_7_3, option_txt_1_7_4, NULL
};

const char title_txt_1_8[] PROGMEM = MENU_TEXT("\x17", "Color");
const char option_txt_1_8_0[] PROGMEM = MENU_TEXT("\x00", "GoPro Color");
const char option_txt_1_8_1[] PROGMEM = MENU_TEXT("\x01", "Flat");
const char* const option_txt_1_8[] PROGMEM = {
option_txt_1_8_0, option_txt_1_8_1, NULL
};

const char title_txt_1_9[] PROGMEM = MENU_TEXT("\x19", "Sharpness");
const char option_txt_1_9_0[] PROGMEM = MENU_TEXT("\x00", "High");
const char option_txt_1_9_1[] PROGMEM = MENU_TEXT("\x01", "Medium");
const char option_txt_1_9_2[] PROGMEM = MENU_TEXT("\x02", "Low");
const char* const option_txt_1_9[] PROGMEM = {
option_txt_1_9_0, option_txt_1_9_1, option_txt_1_9_2, NULL
};

const char title_txt_1_10[] PROGMEM = MENU_TEXT("\x1a", "EV Comp");
const char option_txt_1_10_0[] PROGMEM = MENU_TEXT("\x08", "-2.0");
const char option_txt_1_10_1[] PROGMEM = MENU_TEXT("\x07", "-1.5");
const char option_txt_1_10_2[] PROGMEM = MENU_TEXT("\x06", "-1.0");
const char option_txt_1_10_3[] PROGMEM = MENU_TEXT("\x05", "-0.5");
const char option_txt_1_10_4[] PROGMEM = MENU_TEXT("\x04", "0.0");
const char option_txt_1_10_5[] PROGMEM = MENU_TEXT("\x03", "0.5");
const char option_txt_1_10_6[] PROGMEM = MENU_TEXT("\x02", "1.0");
const char option_txt_1_10_7[] PROGMEM = MENU_TEXT("\x01", "1.5");
const char option_txt_1_10_8[] PROGMEM = MENU_TEXT("\x00", "2.0");
const char* const option_txt_1_10[] PROGMEM = {
option_txt_1_10_0, option_txt_1_10_1, option_txt_1_10_2, option_txt_1_10_3, option_txt_1_10_4, option_txt_1_10_5, option_txt_1_10_6, option_txt_1_10_7, option_txt_1_10_8, NULL
};

const char title_txt_1_11[] PROGMEM = MENU_TEXT("\x18", "ISO Limit");
const char option_txt_1_11_0[] PROGMEM = MENU_TEXT("\x00", "800");
const char option_txt_1_11_1[] PROGMEM = MENU_TEXT("\x01", "400");
const char option_txt_1_11_2[] PROGMEM = MENU_TEXT("\x02", "200");
const char option_txt_1_11_3[] PROGMEM = MENU_TEXT("\x03", "100");
const char* const option_txt_1_11[] PROGMEM = {
option_txt_1_11_0, option_txt_1_11_1, option_txt_1_11_2, option_txt_1_11_3, NULL
};


//
const char title_txt_2_0[] PROGMEM = MENU_TEXT("\x1b", "Default Sub Mode");
const char option_txt_2_0_0[] PROGMEM = MENU_TEXT("\x00", "Burst");
const char option_txt_2_0_1[] PROGMEM = MENU_TEXT("\x01", "Time Lapse");
const char option_txt_2_0_2[] PROGMEM = MENU_TEXT("\x02", "Night Lapse");
const char* const option_txt_2_0[] PROGMEM = {
option_txt_2_0_0, option_txt_2_0_1, option_txt_2_0_2, NULL
};

const char title_txt_2_1[] PROGMEM = MENU_TEXT("\x46", "Sub Mode");
const char option_txt_2_1_0[] PROGMEM = MENU_TEXT("\x00", "Burst");
const char option_txt_2_1_1[] PROGMEM = MENU_TEXT("\x01", "Time Lapse");
const char option_txt_2_1_2[] PROGMEM = MENU_TEXT("\x02", "Night Lapse");
const char* const option_txt_2_1[] PROGMEM = {
option_txt_2_1_0, option_txt_2_1_1, option_txt_2_1_2, NULL
};

const char title_txt_2_2[] PROGMEM = MENU_TEXT("\x1f", "Shutter");
//const char option_txt_2_2_0[] PROGMEM = MENU_TEXT("\x00", "Auto"); // auto exposure is not supported
const char option_txt_2_2_1[] PROGMEM = MENU_TEXT("\x01", "2 Seconds");
const char option_txt_2_2_2[] PROGMEM = MENU_TEXT("\x02", "5 Seconds");
const char option_txt_2_2_3[] PROGMEM = MENU_TEXT("\x03", "10 Seconds");
const char option_txt_2_2_4[] PROGMEM = MENU_TEXT("\x04", "15 Seconds");
const char option_txt_2_2_5[] PROGMEM = MENU_TEXT("\x05", "20 Seconds");
const char option_txt_2_2_6[] PROGMEM = MENU_TEXT("\x06", "30 Seconds");
const char* const option_txt_2_2[] PROGMEM = {
/* option_txt_2_2_0, */ option_txt_2_2_1, option_txt_2_2_2, option_txt_2_2_3, option_txt_2_2_4, option_txt_2_2_5, option_txt_2_2_6, NULL
};

const char title_txt_2_3[] PROGMEM = MENU_TEXT("\x1d", "Burst Rate");
const char option_txt_2_3_0[] PROGMEM = MENU_TEXT("\x00", "3 P / 1 Sec");
const char option_txt_2_3_1[] PROGMEM = MENU_TEXT("\x01", "5 P / 1 Sec");
const char option_txt_2_3_2[] PROGMEM = MENU_TEXT("\x02", "10 P / 1 Sec");
const char option_txt_2_3_3[] PROGMEM = MENU_TEXT("\x03", "10 P / 2 Sec");
const char option_txt_2_3_4[] PROGMEM = MENU_TEXT("\x04", "10 P / 3 Sec");
const char option_txt_2_3_5[] PROGMEM = MENU_TEXT("\x05", "30 P / 1 Sec");
const char option_txt_2_3_6[] PROGMEM = MENU_TEXT("\x06", "30 P / 2 Sec");
const char option_txt_2_3_7[] PROGMEM = MENU_TEXT("\x07", "30 P / 3 Sec");
const char option_txt_2_3_8[] PROGMEM = MENU_TEXT("\x08", "30 P / 6 Sec");
const char* const option_txt_2_3[] PROGMEM = {
option_txt_2_3_0, option_txt_2_3_1, option_txt_2_3_2, option_txt_2_3_3, option_txt_2_3_4, option_txt_2_3_5, option_txt_2_3_6, option_txt_2_3_7, option_txt_2_3_8, NULL
};

const char title_txt_2_4[] PROGMEM = MENU_TEXT("\x1e", "Interval");
const char option_txt_2_4_0[] PROGMEM = MENU_TEXT("\x00", "1 P / 0.5 Sec");
const char option_txt_2_4_1[] PROGMEM = MENU_TEXT("\x01", "1 P / 1 Sec");
const char option_txt_2_4_2[] PROGMEM = MENU_TEXT("\x02", "1 P / 2 Sec");
const char option_txt_2_4_3[] PROGMEM = MENU_TEXT("\x03", "1 P / 5 Sec");
const char option_txt_2_4_4[] PROGMEM = MENU_TEXT("\x04", "1 P / 10 Sec");
const char option_txt_2_4_5[] PROGMEM = MENU_TEXT("\x05", "1 P / 30 Sec");
const char option_txt_2_4_6[] PROGMEM = MENU_TEXT("\x06", "1 P / 60 Sec");
const char* const option_txt_2_4[] PROGMEM = {
option_txt_2_4_0, option_txt_2_4_1, option_txt_2_4_2, option_txt_2_4_3, option_txt_2_4_4, option_txt_2_4_5, option_txt_2_4_6, NULL
};

const char title_txt_2_5[] PROGMEM = MENU_TEXT("\x20", "Interval");
//const char option_txt_2_5_0[] PROGMEM = MENU_TEXT("\x09", "Continuous"); // continuous mode is not supported
const char option_txt_2_5_1[] PROGMEM = MENU_TEXT("\x0a", "4 Seconds");
const char option_txt_2_5_2[] PROGMEM = MENU_TEXT("\x0b", "5 Seconds");
const char option_txt_2_5_3[] PROGMEM = MENU_TEXT("\x00", "10 Seconds");
const char option_txt_2_5_4[] PROGMEM = MENU_TEXT("\x01", "15 Seconds");
const char option_txt_2_5_5[] PROGMEM = MENU_TEXT("\x02", "20 Seconds");
const char option_txt_2_5_6[] PROGMEM = MENU_TEXT("\x03", "30 Seconds");
const char option_txt_2_5_7[] PROGMEM = MENU_TEXT("\x04", "1 Minute");
const char option_txt_2_5_8[] PROGMEM = MENU_TEXT("\x05", "2 Minutes");
const char option_txt_2_5_9[] PROGMEM = MENU_TEXT("\x06", "5 Minutes");
const char option_txt_2_5_10[] PROGMEM = MENU_TEXT("\x07", "30 Minutes");
const char option_txt_2_5_11[] PROGMEM = MENU_TEXT("\x08", "60 Minutes");
const char* const option_txt_2_5[] PROGMEM = {
/* option_txt_2_5_0, */ option_txt_2_5_1, option_txt_2_5_2, option_txt_2_5_3, option_txt_2_5_4, option_txt_2_5_5, option_txt_2_5_6, option_txt_2_5_7, option_txt_2_5_8, option_txt_2_5_9, option_txt_2_5_10, option_txt_2_5_11, NULL
};

const char title_txt_2_6[] PROGMEM = MENU_TEXT("\x1c", "Megapixels");
const char option_txt_2_6_0[] PROGMEM = MENU_TEXT("\x00", "12MP Wide");
const char option_txt_2_6_1[] PROGMEM = MENU_TEXT("\x01", "7MP Wide");
const char option_txt_2_6_2[] PROGMEM = MENU_TEXT("\x02", "7MP Med");
const char option_txt_2_6_3[] PROGMEM = MENU_TEXT("\x03", "5MP Med");
const char* const option_txt_2_6[] PROGMEM = {
option_txt_2_6_0, option_txt_2_6_1, option_txt_2_6_2, option_txt_2_6_3, NULL
};

const char title_txt_2_7[] PROGMEM = MENU_TEXT("\x21", "Spot Meter");
const char option_txt_2_7_0[] PROGMEM = MENU_TEXT("\x01", "ON");
const char option_txt_2_7_1[] PROGMEM = MENU_TEXT("\x00", "OFF");
const char* const option_txt_2_7[] PROGMEM = {
option_txt_2_7_0, option_txt_2_7_1, NULL
};

const char title_txt_2_8[] PROGMEM = MENU_TEXT("\x22", "Protune");
const char option_txt_2_8_0[] PROGMEM = MENU_TEXT("\x01", "ON");
const char option_txt_2_8_1[] PROGMEM = MENU_TEXT("\x00", "OFF");
const char* const option_txt_2_8[] PROGMEM = {
option_txt_2_8_0, option_txt_2_8_1, NULL
};

const char title_txt_2_9[] PROGMEM = MENU_TEXT("\x23", "White Balance");
const char option_txt_2_9_0[] PROGMEM = MENU_TEXT("\x00", "Auto");
const char option_txt_2_9_1[] PROGMEM = MENU_TEXT("\x01", "3000K");
const char option_txt_2_9_2[] PROGMEM = MENU_TEXT("\x02", "5500K");
const char option_txt_2_9_3[] PROGMEM = MENU_TEXT("\x03", "6500K");
const char option_txt_2_9_4[] PROGMEM = MENU_TEXT("\x04", "Native");
const char* const option_txt_2_9[] PROGMEM = {
option_txt_2_9_0, option_txt_2_9_1, option_txt_2_9_2, option_txt_2_9_3, option_txt_2_9_4, NULL
};

const char title_txt_2_10[] PROGMEM = MENU_TEXT("\x24", "Color");
const char option_txt_2_10_0[] PROGMEM = MENU_TEXT("\x00", "GoPro Color");
const char option_txt_2_10_1[] PROGMEM = MENU_TEXT("\x01", "Flat");
const char* const option_txt_2_10[] PROGMEM = {
option_txt_2_10_0, option_txt_2_10_1, NULL
};

const char title_txt_2_11[] PROGMEM = MENU_TEXT("\x26", "Sharpness");
const char option_txt_2_11_0[] PROGMEM = MENU_TEXT("\x00", "High");
const char option_txt_2_11_1[] PROGMEM = MENU_TEXT("\x01", "Medium");
const char option_txt_2_11_2[] PROGMEM = MENU_TEXT("\x02", "Low");
const char* const option_txt_2_11[] PROGMEM = {
option_txt_2_11_0, option_txt_2_11_1, option_txt_2_11_2, NULL
};

const char title_txt_2_12[] PROGMEM = MENU_TEXT("\x27", "EV Comp");
const char option_txt_2_12_0[] PROGMEM = MENU_TEXT("\x08", "-2.0");
const char option_txt_2_12_1[] PROGMEM = MENU_TEXT("\x07", "-1.5");
const char option_txt_2_12_2[] PROGMEM = MENU_TEXT("\x06", "-1.0");
const char option_txt_2_12_3[] PROGMEM = MENU_TEXT("\x05", "-0.5");
const char option_txt_2_12_4[] PROGMEM = MENU_TEXT("\x04", "0.0");
const char option_txt_2_12_5[] PROGMEM = MENU_TEXT("\x03", "0.5");
const char option_txt_2_12_6[] PROGMEM = MENU_TEXT("\x02", "1.0");
const char option_txt_2_12_7[] PROGMEM = MENU_TEXT("\x01", "1.5");
const char option_txt_2_12_8[] PROGMEM = MENU_TEXT("\x00", "2.0");
const char* const option_txt_2_12[] PROGMEM = {
option_txt_2_12_0, option_txt_2_12_1, option_txt_2_12_2, option_txt_2_12_3, option_txt_2_12_4, option_txt_2_12_5, option_txt_2_12_6, option_txt_2_12_7, option_txt_2_12_8, NULL
};

const char title_txt_2_13[] PROGMEM = MENU_TEXT("\x25", "ISO Limit");
const char option_txt_2_13_0[] PROGMEM = MENU_TEXT("\x00", "800");
const char option_txt_2_13_1[] PROGMEM = MENU_TEXT("\x01", "400");
const char option_txt_2_13_2[] PROGMEM = MENU_TEXT("\x02", "200");
const char option_txt_2_13_3[] PROGMEM = MENU_TEXT("\x03", "100");
const char* const option_txt_2_13[] PROGMEM = {
option_txt_2_13_0, option_txt_2_13_1, option_txt_2_13_2, option_txt_2_13_3, NULL
};


//
const char title_txt_3_0[] PROGMEM = MENU_TEXT("\x48", "LCD Display");
const char option_txt_3_0_0[] PROGMEM = MENU_TEXT("\x01", "ON");
const char option_txt_3_0_1[] PROGMEM = MENU_TEXT("\x00", "OFF");
const char* const option_txt_3_0[] PROGMEM = {
option_txt_3_0_0, option_txt_3_0_1, NULL
};

const char title_txt_3_1[] PROGMEM = MENU_TEXT("\x31", "LCD Brightness");
const char option_txt_3_1_0[] PROGMEM = MENU_TEXT("\x00", "High");
const char option_txt_3_1_1[] PROGMEM = MENU_TEXT("\x01", "Medium");
const char option_txt_3_1_2[] PROGMEM = MENU_TEXT("\x02", "Low");
const char* const option_txt_3_1[] PROGMEM = {
option_txt_3_1_0, option_txt_3_1_1, option_txt_3_1_2, NULL
};

const char title_txt_3_2[] PROGMEM = MENU_TEXT("\x32", "LCD Lock");
const char option_txt_3_2_0[] PROGMEM = MENU_TEXT("\x01", "ON");
const char option_txt_3_2_1[] PROGMEM = MENU_TEXT("\x00", "OFF");
const char* const option_txt_3_2[] PROGMEM = {
option_txt_3_2_0, option_txt_3_2_1, NULL
};

const char title_txt_3_3[] PROGMEM = MENU_TEXT("\x33", "LCD Sleep");
const char option_txt_3_3_0[] PROGMEM = MENU_TEXT("\x00", "Never");
const char option_txt_3_3_1[] PROGMEM = MENU_TEXT("\x01", "1 MIN");
const char option_txt_3_3_2[] PROGMEM = MENU_TEXT("\x02", "2 MIN");
const char option_txt_3_3_3[] PROGMEM = MENU_TEXT("\x03", "3 MIN");
const char* const option_txt_3_3[] PROGMEM = {
option_txt_3_3_0, option_txt_3_3_1, option_txt_3_3_2, option_txt_3_3_3, NULL
};

const char title_txt_3_4[] PROGMEM = MENU_TEXT("\x34", "Orientation");
const char option_txt_3_4_0[] PROGMEM = MENU_TEXT("\x01", "Up");
const char option_txt_3_4_1[] PROGMEM = MENU_TEXT("\x02", "Down");
const char option_txt_3_4_2[] PROGMEM = MENU_TEXT("\x00", "Auto");
const char* const option_txt_3_4[] PROGMEM = {
option_txt_3_4_0, option_txt_3_4_1, option_txt_3_4_2, NULL
};

const char title_txt_3_5[] PROGMEM = MENU_TEXT("\x35", "Default Mode");
const char option_txt_3_5_0[] PROGMEM = MENU_TEXT("\x00", "Video");
const char option_txt_3_5_1[] PROGMEM = MENU_TEXT("\x01", "Photo");
const char option_txt_3_5_2[] PROGMEM = MENU_TEXT("\x02", "Multi-shot");
const char* const option_txt_3_5[] PROGMEM = {
option_txt_3_5_0, option_txt_3_5_1, option_txt_3_5_2, NULL
};

const char title_txt_3_6[] PROGMEM = MENU_TEXT("\x36", "Quick Capture");
const char option_txt_3_6_0[] PROGMEM = MENU_TEXT("\x01", "ON");
const char option_txt_3_6_1[] PROGMEM = MENU_TEXT("\x00", "OFF");
const char* const option_txt_3_6[] PROGMEM = {
option_txt_3_6_0, option_txt_3_6_1, NULL
};

const char title_txt_3_7[] PROGMEM = MENU_TEXT("\x37", "LED Blink");
const char option_txt_3_7_0[] PROGMEM = MENU_TEXT("\x00", "OFF");
const char option_txt_3_7_1[] PROGMEM = MENU_TEXT("\x01", "2");
const char option_txt_3_7_2[] PROGMEM = MENU_TEXT("\x02", "4");
const char* const option_txt_3_7[] PROGMEM = {
option_txt_3_7_0, option_txt_3_7_1, option_txt_3_7_2, NULL
};

const char title_txt_3_8[] PROGMEM = MENU_TEXT("\x38", "Beeps");
const char option_txt_3_8_0[] PROGMEM = MENU_TEXT("\x00", "100%");
const char option_txt_3_8_1[] PROGMEM = MENU_TEXT("\x01", "70%");
const char option_txt_3_8_2[] PROGMEM = MENU_TEXT("\x02", "OFF");
const char* const option_txt_3_8[] PROGMEM = {
option_txt_3_8_0, option_txt_3_8_1, option_txt_3_8_2, NULL
};

const char title_txt_3_9[] PROGMEM = MENU_TEXT("\x39", "Video Format");
const char option_txt_3_9_0[] PROGMEM = MENU_TEXT("\x00", "NTSC");
const char option_txt_3_9_1[] PROGMEM = MENU_TEXT("\x01", "PAL");
const char* const option_txt_3_9[] PROGMEM = {
option_txt_3_9_0, option_txt_3_9_1, NULL
};

const char title_txt_3_10[] PROGMEM = MENU_TEXT("\x3a", "OSD");
const char option_txt_3_10_0[] PROGMEM = MENU_TEXT("\x01", "ON");
const char option_txt_3_10_1[] PROGMEM = MENU_TEXT("\x00", "OFF");
const char* const option_txt_3_10[] PROGMEM = {
option_txt_3_10_0, option_txt_3_10_1, NULL
};

const char title_txt_3_11[] PROGMEM = MENU_TEXT("\x3b", "Auto Off");
const char option_txt_3_11_0[] PROGMEM = MENU_TEXT("\x00", "NEVER");
const char option_txt_3_11_1[] PROGMEM = MENU_TEXT("\x01", "1 MIN");
const char option_txt_3_11_2[] PROGMEM = MENU_TEXT("\x02", "2 MIN");
const char option_txt_3_11_3[] PROGMEM = MENU_TEXT("\x03", "3 MIN");
const char option_txt_3_11_4[] PROGMEM = MENU_TEXT("\x04", "5 MIN");
const char* const option_txt_3_11[] PROGMEM = {
option_txt_3_11_0, option_txt_3_11_1, option_txt_3_11_2, option_txt_3_11_3, option_txt_3_11_4, NULL
};

const char title_txt_3_12[] PROGMEM = MENU_TEXT("\x3f", "Wireless Mode");
const char option_txt_3_12_0[] PROGMEM = MENU_TEXT("\x00", "OFF");
const char option_txt_3_12_1[] PROGMEM = MENU_TEXT("\x01", "App");
const char option_txt_3_12_2[] PROGMEM = MENU_TEXT("\x02", "RC");
const char option_txt_3_12_3[] PROGMEM = MENU_TEXT("\x04", "Smart");
const char* const option_txt_3_12[] PROGMEM = {
option_txt_3_12_0, option_txt_3_12_1, option_txt_3_12_2, option_txt_3_12_3, NULL
};

const char title_txt_4_0[] PROGMEM = MENU_TEXT("\x49", "Exposure Time");
const char option_txt_4_0_0[] PROGMEM = MENU_TEXT("\x00", "Auto");
const char option_txt_4_0_1[] PROGMEM = MENU_TEXT("\x01", "1/12.5");
const char option_txt_4_0_2[] PROGMEM = MENU_TEXT("\x02", "1/15");
const char option_txt_4_0_3[] PROGMEM = MENU_TEXT("\x03", "1/24");
const char option_txt_4_0_4[] PROGMEM = MENU_TEXT("\x04", "1/25");
const char option_txt_4_0_5[] PROGMEM = MENU_TEXT("\x05", "1/30");
const char option_txt_4_0_6[] PROGMEM = MENU_TEXT("\x06", "1/48");
const char option_txt_4_0_7[] PROGMEM = MENU_TEXT("\x07", "1/50");
const char option_txt_4_0_8[] PROGMEM = MENU_TEXT("\x08", "1/60");
const char option_txt_4_0_9[] PROGMEM = MENU_TEXT("\x09", "1/80");
const char option_txt_4_0_10[] PROGMEM = MENU_TEXT("\x0a", "1/90");
const char option_txt_4_0_11[] PROGMEM = MENU_TEXT("\x0b", "1/96");
const char option_txt_4_0_12[] PROGMEM = MENU_TEXT("\x0c", "1/100");
const char option_txt_4_0_13[] PROGMEM = MENU_TEXT("\x0d", "1/120");
const char option_txt_4_0_14[] PROGMEM = MENU_TEXT("\x0e", "1/160");
const char option_txt_4_0_15[] PROGMEM = MENU_TEXT("\x0f", "1/180");
const char option_txt_4_0_16[] PROGMEM = MENU_TEXT("\x10", "1/192");
const char option_txt_4_0_17[] PROGMEM = MENU_TEXT("\x11", "1/200");
const char option_txt_4_0_18[] PROGMEM = MENU_TEXT("\x12", "1/240");
const char option_txt_4_0_19[] PROGMEM = MENU_TEXT("\x13", "1/320");
const char option_txt_4_0_20[] PROGMEM = MENU_TEXT("\x14", "1/360");
const char option_txt_4_0_21[] PROGMEM = MENU_TEXT("\x15", "1/400");
const char option_txt_4_0_22[] PROGMEM = MENU_TEXT("\x16", "1/480");
const char option_txt_4_0_23[] PROGMEM = MENU_TEXT("\x17", "1/960");
const char* const option_txt_4_0[] PROGMEM = {
option_txt_4_0_0, option_txt_4_0_1, option_txt_4_0_2, option_txt_4_0_3,
option_txt_4_0_4, option_txt_4_0_5, option_txt_4_0_6, option_txt_4_0_7,
option_txt_4_0_8, option_txt_4_0_9, option_txt_4_0_10, option_txt_4_0_11,
option_txt_4_0_12, option_txt_4_0_13, option_txt_4_0_14, option_txt_4_0_15,
option_txt_4_0_16, option_txt_4_0_17, option_txt_4_0_18, option_txt_4_0_19,
option_txt_4_0_20, option_txt_4_0_21, option_txt_4_0_22, option_txt_4_0_23, NULL
};

const char title_txt_4_1[] PROGMEM = MENU_TEXT("\x4a", "ISO Mode");
const char option_txt_4_1_0[] PROGMEM = MENU_TEXT("\x00", "Maximum");
const char option_txt_4_1_1[] PROGMEM = MENU_TEXT("\x01", "Lock");
const char* const option_txt_4_1[] PROGMEM = {
option_txt_4_1_0, option_txt_4_1_1, NULL
};

const char title_txt_4_2[] PROGMEM = MENU_TEXT("\x4b", "ISO Minimum");
const char option_txt_4_2_0[] PROGMEM = MENU_TEXT("\x00", "800");
const char option_txt_4_2_1[] PROGMEM = MENU_TEXT("\x01", "400");
const char option_txt_4_2_2[] PROGMEM = MENU_TEXT("\x02", "200");
const char option_txt_4_2_3[] PROGMEM = MENU_TEXT("\x03", "100");
const char* const option_txt_4_2[] PROGMEM = {
option_txt_4_2_0, option_txt_4_2_1, option_txt_4_2_2, option_txt_4_2_3, NULL
};

const char title_txt_4_3[] PROGMEM = MENU_TEXT("\x4c", "ISO Minimum");
const char option_txt_4_3_0[] PROGMEM = MENU_TEXT("\x00", "800");
const char option_txt_4_3_1[] PROGMEM = MENU_TEXT("\x01", "400");
const char option_txt_4_3_2[] PROGMEM = MENU_TEXT("\x02", "200");
const char option_txt_4_3_3[] PROGMEM = MENU_TEXT("\x03", "100");
const char* const option_txt_4_3[] PROGMEM = {
option_txt_4_3_0, option_txt_4_3_1, option_txt_4_3_2, option_txt_4_3_3, NULL
};

struct Widget {
const char * title_txt;
const char * const *option_txt;
} Widget;

const struct Widget widgets[] PROGMEM = {
{ NULL, NULL },
{ title_txt_0_0, option_txt_0_0 },
{ title_txt_0_2, option_txt_0_2 },
{ title_txt_0_3, option_txt_0_3 },
{ title_txt_0_4, option_txt_0_4 },
{ title_txt_0_5, option_txt_0_5 },
{ title_txt_0_6, option_txt_0_6 },
{ title_txt_0_7, option_txt_0_7 },
{ title_txt_0_8, option_txt_0_8 },
{ title_txt_0_9, option_txt_0_9 },
{ title_txt_0_10, option_txt_0_10 },
{ title_txt_0_11, option_txt_0_11 },
{ title_txt_0_12, option_txt_0_12 },
{ title_txt_0_15, option_txt_0_15 },
{ title_txt_0_13, option_txt_0_13 },
{ title_txt_0_14, option_txt_0_14 },
{ title_txt_1_0, option_txt_1_0 },
{ title_txt_1_3, option_txt_1_3 },
{ title_txt_1_2, option_txt_1_2 },
{ title_txt_1_4, option_txt_1_4 },
{ title_txt_1_5, option_txt_1_5 },
{ title_txt_1_6, option_txt_1_6 },
{ title_txt_1_7, option_txt_1_7 },
{ title_txt_1_8, option_txt_1_8 },
{ title_txt_1_11, option_txt_1_11 },
{ title_txt_1_9, option_txt_1_9 },
{ title_txt_1_10, option_txt_1_10 },
{ title_txt_2_0, option_txt_2_0 },
{ title_txt_2_6, option_txt_2_6 },
{ title_txt_2_3, option_txt_2_3 },
{ title_txt_2_4, option_txt_2_4 },
{ title_txt_2_2, option_txt_2_2 },
{ title_txt_2_5, option_txt_2_5 },
{ title_txt_2_7, option_txt_2_7 },
{ title_txt_2_8, option_txt_2_8 },
{ title_txt_2_9, option_txt_2_9 },
{ title_txt_2_10, option_txt_2_10 },
{ title_txt_2_13, option_txt_2_13 },
{ title_txt_2_11, option_txt_2_11 },
{ title_txt_2_12, option_txt_2_12 },
{ NULL, NULL },
{ NULL, NULL },
{ NULL, NULL },
{ NULL, NULL },
{ NULL, NULL },
{ NULL, NULL },
{ NULL, NULL },
{ NULL, NULL },
{ NULL, NULL },
{ title_txt_3_1, option_txt_3_1 },
{ title_txt_3_2, option_txt_3_2 },
{ title_txt_3_3, option_txt_3_3 },
{ title_txt_3_4, option_txt_3_4 },
{ title_txt_3_5, option_txt_3_5 },
{ title_txt_3_6, option_txt_3_6 },
{ title_txt_3_7, option_txt_3_7 },
{ title_txt_3_8, option_txt_3_8 },
{ title_txt_3_9, option_txt_3_9 },
{ title_txt_3_10, option_txt_3_10 },
{ title_txt_3_11, option_txt_3_11 },
{ NULL, NULL },
{ NULL, NULL },
{ NULL, NULL },
{ title_txt_3_12, option_txt_3_12 },
{ NULL, NULL },
{ NULL, NULL },
{ NULL, NULL },
{ NULL, NULL },
{ title_txt_0_1, option_txt_0_1 },
{ title_txt_1_1, option_txt_1_1 },
{ title_txt_2_1, option_txt_2_1 },
{ NULL, NULL },
{ title_txt_3_0, option_txt_3_0 },
{ title_txt_4_0, option_txt_4_0 },
{ title_txt_4_1, option_txt_4_1 },
{ title_txt_4_2, option_txt_4_2 },
{ title_txt_4_3, option_txt_4_3 },
};

#define SETUP_LEN 77
typedef union Setting {
  byte b[SETUP_LEN];
  struct {
    byte mode;
    struct {
      byte default_sub_mode;
      byte resolution;
      byte fps;
      byte fov;
      byte timelapse_rate;
      byte looping;
      byte piv;
      byte low_light;
      byte spot_meter;
      byte protune;
      byte protune_white_balance;
      byte protune_color;
      byte protune_iso;
      byte protune_sharpness;
      byte protune_ev;  
    } video;
    struct {
      byte default_sub_mode;
      byte resolution;
      byte continuous_rate;
      byte exposure_time;
      byte spot_meter;
      byte protune;
      byte protune_white_balance;
      byte protune_color;
      byte protune_iso;
      byte protune_sharpness;
      byte protune_ev; 
    } photo;
    struct {
      byte default_sub_mode;
      byte resolution;
      byte burst_rate;
      byte timelapse_rate;
      byte exposure_time;
      byte nightlapse_rate;
      byte spot_meter;
      byte protune;
      byte protune_white_balance;
      byte protune_color;
      byte protune_iso;
      byte protune_sharpness;
      byte protune_ev;
    } multi_shot;
    byte reserved0[9];
    struct {
      byte lcd_brightness;
      byte lcd_lock;
      byte lcd_sleep;
      byte orientation;
      byte default_app_mode;
      byte quick_capture;
      byte led;
      byte beep_volume;
      byte video_format;
      byte osd;
      byte auto_power_down;
      byte stream_gop_size;
      byte stream_idr_interval;
      byte stream_bit_rate;
      byte wireless_mode;
      byte stream_window_size;
    } setup;
    byte reserved1[3];
    byte current_submode[3];
    byte reserved2;
    byte lcd;
    struct {
      byte videoExposure_time;
      byte videoProtune_iso_mode;
      byte photoProtune_iso_min;
      byte multi_shotProtune_iso_min;
      // the following are not supported yet in firmware v4.0.0
      /*
      byte photoSingle_wdr;
      byte videoEis;
      byte audioProtune;
      byte audioOption;
      byte audioProtune_option;
      byte photoSingle_raw;
      */
    } v4;
  } p;
} Setting;

Setting setting =
{
         // id path
  0,     //  0 
  0,     //  1 video/default_sub_mode
  9,     //  2 video/resolution
  5,     //  3 video/fps
  0,     //  4 video/fov
  0,     //  5 video/timelapse_rate
  1,     //  6 video/looping
  1,     //  7 video/piv
  0,     //  8 video/low_light
  0,     //  9 video/spot_meter
  0,     // 10 video/protune
  0,     // 11 video/protune_white_balance
  0,     // 12 video/protune_color
  1,     // 13 video/protune_iso
  0,     // 14 video/protune_sharpness
  4,     // 15 video/protune_ev
  0,     // 16 photo/default_sub_mode
  0,     // 17 photo/resolution
  0,     // 18 photo/continuous_rate
  0,     // 19 photo/exposure_time
  0,     // 20 photo/spot_meter
  0,     // 21 photo/protune
  0,     // 22 photo/protune_white_balance
  0,     // 23 photo/protune_color
  0,     // 24 photo/protune_iso
  0,     // 25 photo/protune_sharpness
  4,     // 26 photo/protune_ev
  0,     // 27 multi_shot/default_sub_mode
  0,     // 28 multi_shot/resolution
  5,     // 29 multi_shot/burst_rate
  0,     // 30 multi_shot/timelapse_rate
  1,     // 31 multi_shot/exposure_time
  0,     // 32 multi_shot/nightlapse_rate
  0,     // 33 multi_shot/spot_meter
  0,     // 34 multi_shot/protune
  0,     // 35 multi_shot/protune_white_balance
  0,     // 36 multi_shot/protune_color
  0,     // 37 multi_shot/protune_iso
  0,     // 38 multi_shot/protune_sharpness
  4,     // 39 multi_shot/protune_ev
  0,     // 40
  0,     // 41
  0,     // 42
  0,     // 43
  0,     // 44
  0,     // 45
  0,     // 46
  0,     // 47
  0,     // 48
  0,     // 49 setup/lcd_brightness
  0,     // 50 setup/lcd_lock
  0,     // 51 setup/lcd_sleep
  1,     // 52 setup/orientation
  0,     // 53 setup/default_app_mode
  0,     // 54 setup/quick_capture
  2,     // 55 setup/led
  0,     // 56 setup/beep_volume
  0,     // 57 setup/video_format
  1,     // 58 setup/osd
  0,     // 59 setup/auto_power_down
  0,     // 60 setup/stream_gop_size
  0,     // 61 setup/stream_idr_interval
  0,     // 62 setup/stream_bit_rate
  0,     // 63 setup/wireless_mode
  0,     // 64 setup/stream_window_size
  0,     // 65
  0,     // 66
  0,     // 67
  0,     // 68 setup/current_sub_mode (video)
  0,     // 69 setup/current_sub_mode (photo)
  0,     // 70 setup/current_sub_mode (multi shot)
  0,     // 71
  0,     // 72 setup/lcd
// firmware v.4.00 only
  0,     // 73 v4/video/exposure_time
  0,     // 74 v4/video/protune_iso_mode
  3,     // 75 v4/photo/protune_iso_min
  3,     // 76 v4/multi_shot/protune_iso_min
/*
// v4.0.0 firmware doesn't support the following, yet
  0,     // 77 v4/photo/single_wdr (wide dynamic range)
  0,     // 78 v4/video/eis (electronic image stabilization)
  1,     // 79 v4/audio/protune
  1,     // 80 v4/audio/option (0: stereo only, 1: wind only, 2: auto)
  1,     // 81 v4/audio/protune_option (0: Low, 1: Mid, 2: High)
  0,     // 82 v4/photo/single_raw (capture in raw)
 */
};

const char MAX_SUBMODE_SIZE = 4;

Setting storage[MAX_SUBMODE_SIZE] = {
{ // setting #0
         // id path
  0,     //  0 
  0,     //  1 video/default_sub_mode
  9,     //  2 video/resolution
  5,     //  3 video/fps
  0,     //  4 video/fov
  0,     //  5 video/timelapse_rate
  1,     //  6 video/looping
  1,     //  7 video/piv
  0,     //  8 video/low_light
  0,     //  9 video/spot_meter
  0,     // 10 video/protune
  0,     // 11 video/protune_white_balance
  0,     // 12 video/protune_color
  1,     // 13 video/protune_iso
  0,     // 14 video/protune_sharpness
  4,     // 15 video/protune_ev
  0,     // 16 photo/default_sub_mode
  0,     // 17 photo/resolution
  0,     // 18 photo/continuous_rate
  0,     // 19 photo/exposure_time
  0,     // 20 photo/spot_meter
  0,     // 21 photo/protune
  0,     // 22 photo/protune_white_balance
  0,     // 23 photo/protune_color
  0,     // 24 photo/protune_iso
  0,     // 25 photo/protune_sharpness
  4,     // 26 photo/protune_ev
  0,     // 27 multi_shot/default_sub_mode
  0,     // 28 multi_shot/resolution
  5,     // 29 multi_shot/burst_rate
  0,     // 30 multi_shot/timelapse_rate
  1,     // 31 multi_shot/exposure_time
  0,     // 32 multi_shot/nightlapse_rate
  0,     // 33 multi_shot/spot_meter
  0,     // 34 multi_shot/protune
  0,     // 35 multi_shot/protune_white_balance
  0,     // 36 multi_shot/protune_color
  0,     // 37 multi_shot/protune_iso
  0,     // 38 multi_shot/protune_sharpness
  4,     // 39 multi_shot/protune_ev
  0,     // 40
  0,     // 41
  0,     // 42
  0,     // 43
  0,     // 44
  0,     // 45
  0,     // 46
  0,     // 47
  0,     // 48
  0,     // 49 setup/lcd_brightness
  0,     // 50 setup/lcd_lock
  0,     // 51 setup/lcd_sleep
  0,     // 52 setup/orientation
  0,     // 53 setup/default_app_mode
  0,     // 54 setup/quick_capture
  2,     // 55 setup/led
  0,     // 56 setup/beep_volume
  0,     // 57 setup/video_format
  1,     // 58 setup/osd
  0,     // 59 setup/auto_power_down
  0,     // 60 setup/stream_gop_size
  0,     // 61 setup/stream_idr_interval
  0,     // 62 setup/stream_bit_rate
  0,     // 63 setup/wireless_mode
  0,     // 64 setup/stream_window_size
  0,     // 65
  0,     // 66
  0,     // 67
  0,     // 68 setup/current_sub_mode (video)
  0,     // 69 setup/current_sub_mode (photo)
  0,     // 70 setup/current_sub_mode (multi shot)
  0,     // 71
  0,     // 72 setup/lcd
// firmware v.4.00 only
  0,     // 73 v4/video/exposure_time
  0,     // 74 v4/video/protune_iso_mode
  3,     // 75 v4/photo/protune_iso_min
  3,     // 76 v4/multi_shot/protune_iso_min
/*
// v4.0.0 firmware doesn't support the following, yet
  0,     // 77 v4/photo/single_wdr (wide dynamic range)
  0,     // 78 v4/video/eis (electronic image stabilization)
  1,     // 79 v4/audio/protune
  1,     // 80 v4/audio/option (0: stereo only, 1: wind only, 2: auto)
  1,     // 81 v4/audio/protune_option (0: Low, 1: Mid, 2: High)
  0,     // 82 v4/photo/single_raw (capture in raw)
 */
},
{ // setting #1
         // id path
  0,     //  0 
  0,     //  1 video/default_sub_mode
  1,     //  2 video/resolution
  8,     //  3 video/fps
  0,     //  4 video/fov
  0,     //  5 video/timelapse_rate
  1,     //  6 video/looping
  1,     //  7 video/piv
  0,     //  8 video/low_light
  0,     //  9 video/spot_meter
  0,     // 10 video/protune
  0,     // 11 video/protune_white_balance
  0,     // 12 video/protune_color
  1,     // 13 video/protune_iso
  0,     // 14 video/protune_sharpness
  4,     // 15 video/protune_ev
  0,     // 16 photo/default_sub_mode
  0,     // 17 photo/resolution
  0,     // 18 photo/continuous_rate
  0,     // 19 photo/exposure_time
  0,     // 20 photo/spot_meter
  0,     // 21 photo/protune
  0,     // 22 photo/protune_white_balance
  0,     // 23 photo/protune_color
  0,     // 24 photo/protune_iso
  0,     // 25 photo/protune_sharpness
  4,     // 26 photo/protune_ev
  0,     // 27 multi_shot/default_sub_mode
  0,     // 28 multi_shot/resolution
  5,     // 29 multi_shot/burst_rate
  0,     // 30 multi_shot/timelapse_rate
  1,     // 31 multi_shot/exposure_time
  0,     // 32 multi_shot/nightlapse_rate
  0,     // 33 multi_shot/spot_meter
  0,     // 34 multi_shot/protune
  0,     // 35 multi_shot/protune_white_balance
  0,     // 36 multi_shot/protune_color
  0,     // 37 multi_shot/protune_iso
  0,     // 38 multi_shot/protune_sharpness
  4,     // 39 multi_shot/protune_ev
  0,     // 40
  0,     // 41
  0,     // 42
  0,     // 43
  0,     // 44
  0,     // 45
  0,     // 46
  0,     // 47
  0,     // 48
  0,     // 49 setup/lcd_brightness
  0,     // 50 setup/lcd_lock
  0,     // 51 setup/lcd_sleep
  0,     // 52 setup/orientation
  0,     // 53 setup/default_app_mode
  0,     // 54 setup/quick_capture
  2,     // 55 setup/led
  0,     // 56 setup/beep_volume
  0,     // 57 setup/video_format
  1,     // 58 setup/osd
  0,     // 59 setup/auto_power_down
  0,     // 60 setup/stream_gop_size
  0,     // 61 setup/stream_idr_interval
  0,     // 62 setup/stream_bit_rate
  0,     // 63 setup/wireless_mode
  0,     // 64 setup/stream_window_size
  0,     // 65
  0,     // 66
  0,     // 67
  0,     // 68 setup/current_sub_mode (video)
  0,     // 69 setup/current_sub_mode (photo)
  0,     // 70 setup/current_sub_mode (multi shot)
  0,     // 71
  0,     // 72 setup/lcd
// firmware v.4.00 only
  0,     // 73 v4/video/exposure_time
  0,     // 74 v4/video/protune_iso_mode
  3,     // 75 v4/photo/protune_iso_min
  3,     // 76 v4/multi_shot/protune_iso_min
/*
// v4.0.0 firmware doesn't support the following, yet
  0,     // 77 v4/photo/single_wdr (wide dynamic range)
  0,     // 78 v4/video/eis (electronic image stabilization)
  1,     // 79 v4/audio/protune
  1,     // 80 v4/audio/option (0: stereo only, 1: wind only, 2: auto)
  1,     // 81 v4/audio/protune_option (0: Low, 1: Mid, 2: High)
  0,     // 82 v4/photo/single_raw (capture in raw)
 */
},
{ // setting #2
         // id path
  0,     //  0 
  0,     //  1 video/default_sub_mode
  9,     //  2 video/resolution
  8,     //  3 video/fps
  0,     //  4 video/fov
  0,     //  5 video/timelapse_rate
  1,     //  6 video/looping
  1,     //  7 video/piv
  0,     //  8 video/low_light
  0,     //  9 video/spot_meter
  0,     // 10 video/protune
  0,     // 11 video/protune_white_balance
  0,     // 12 video/protune_color
  1,     // 13 video/protune_iso
  0,     // 14 video/protune_sharpness
  4,     // 15 video/protune_ev
  0,     // 16 photo/default_sub_mode
  0,     // 17 photo/resolution
  0,     // 18 photo/continuous_rate
  0,     // 19 photo/exposure_time
  0,     // 20 photo/spot_meter
  0,     // 21 photo/protune
  0,     // 22 photo/protune_white_balance
  0,     // 23 photo/protune_color
  0,     // 24 photo/protune_iso
  0,     // 25 photo/protune_sharpness
  4,     // 26 photo/protune_ev
  0,     // 27 multi_shot/default_sub_mode
  0,     // 28 multi_shot/resolution
  5,     // 29 multi_shot/burst_rate
  0,     // 30 multi_shot/timelapse_rate
  1,     // 31 multi_shot/exposure_time
  0,     // 32 multi_shot/nightlapse_rate
  0,     // 33 multi_shot/spot_meter
  0,     // 34 multi_shot/protune
  0,     // 35 multi_shot/protune_white_balance
  0,     // 36 multi_shot/protune_color
  0,     // 37 multi_shot/protune_iso
  0,     // 38 multi_shot/protune_sharpness
  4,     // 39 multi_shot/protune_ev
  0,     // 40
  0,     // 41
  0,     // 42
  0,     // 43
  0,     // 44
  0,     // 45
  0,     // 46
  0,     // 47
  0,     // 48
  0,     // 49 setup/lcd_brightness
  0,     // 50 setup/lcd_lock
  0,     // 51 setup/lcd_sleep
  0,     // 52 setup/orientation
  0,     // 53 setup/default_app_mode
  0,     // 54 setup/quick_capture
  2,     // 55 setup/led
  0,     // 56 setup/beep_volume
  0,     // 57 setup/video_format
  1,     // 58 setup/osd
  0,     // 59 setup/auto_power_down
  0,     // 60 setup/stream_gop_size
  0,     // 61 setup/stream_idr_interval
  0,     // 62 setup/stream_bit_rate
  0,     // 63 setup/wireless_mode
  0,     // 64 setup/stream_window_size
  0,     // 65
  0,     // 66
  0,     // 67
  0,     // 68 setup/current_sub_mode (video)
  0,     // 69 setup/current_sub_mode (photo)
  0,     // 70 setup/current_sub_mode (multi shot)
  0,     // 71
  0,     // 72 setup/lcd
// firmware v.4.00 only
  0,     // 73 v4/video/exposure_time
  0,     // 74 v4/video/protune_iso_mode
  3,     // 75 v4/photo/protune_iso_min
  3,     // 76 v4/multi_shot/protune_iso_min
/*
// v4.0.0 firmware doesn't support the following, yet
  0,     // 77 v4/photo/single_wdr (wide dynamic range)
  0,     // 78 v4/video/eis (electronic image stabilization)
  1,     // 79 v4/audio/protune
  1,     // 80 v4/audio/option (0: stereo only, 1: wind only, 2: auto)
  1,     // 81 v4/audio/protune_option (0: Low, 1: Mid, 2: High)
  0,     // 82 v4/photo/single_raw (capture in raw)
 */
},
{ // setting #3
         // id path
  0,     //  0 
  0,     //  1 video/default_sub_mode
  9,     //  2 video/resolution
  5,     //  3 video/fps
  0,     //  4 video/fov
  0,     //  5 video/timelapse_rate
  1,     //  6 video/looping
  1,     //  7 video/piv
  0,     //  8 video/low_light
  0,     //  9 video/spot_meter
  0,     // 10 video/protune
  0,     // 11 video/protune_white_balance
  0,     // 12 video/protune_color
  1,     // 13 video/protune_iso
  0,     // 14 video/protune_sharpness
  4,     // 15 video/protune_ev
  0,     // 16 photo/default_sub_mode
  0,     // 17 photo/resolution
  0,     // 18 photo/continuous_rate
  0,     // 19 photo/exposure_time
  0,     // 20 photo/spot_meter
  0,     // 21 photo/protune
  0,     // 22 photo/protune_white_balance
  0,     // 23 photo/protune_color
  0,     // 24 photo/protune_iso
  0,     // 25 photo/protune_sharpness
  4,     // 26 photo/protune_ev
  0,     // 27 multi_shot/default_sub_mode
  0,     // 28 multi_shot/resolution
  5,     // 29 multi_shot/burst_rate
  0,     // 30 multi_shot/timelapse_rate
  1,     // 31 multi_shot/exposure_time
  0,     // 32 multi_shot/nightlapse_rate
  0,     // 33 multi_shot/spot_meter
  0,     // 34 multi_shot/protune
  0,     // 35 multi_shot/protune_white_balance
  0,     // 36 multi_shot/protune_color
  0,     // 37 multi_shot/protune_iso
  0,     // 38 multi_shot/protune_sharpness
  4,     // 39 multi_shot/protune_ev
  0,     // 40
  0,     // 41
  0,     // 42
  0,     // 43
  0,     // 44
  0,     // 45
  0,     // 46
  0,     // 47
  0,     // 48
  0,     // 49 setup/lcd_brightness
  0,     // 50 setup/lcd_lock
  0,     // 51 setup/lcd_sleep
  0,     // 52 setup/orientation
  0,     // 53 setup/default_app_mode
  0,     // 54 setup/quick_capture
  2,     // 55 setup/led
  0,     // 56 setup/beep_volume
  0,     // 57 setup/video_format
  1,     // 58 setup/osd
  0,     // 59 setup/auto_power_down
  0,     // 60 setup/stream_gop_size
  0,     // 61 setup/stream_idr_interval
  0,     // 62 setup/stream_bit_rate
  0,     // 63 setup/wireless_mode
  0,     // 64 setup/stream_window_size
  0,     // 65
  0,     // 66
  0,     // 67
  0,     // 68 setup/current_sub_mode (video)
  0,     // 69 setup/current_sub_mode (photo)
  0,     // 70 setup/current_sub_mode (multi shot)
  0,     // 71
  0,     // 72 setup/lcd
// firmware v.4.00 only
  0,     // 73 v4/video/exposure_time
  0,     // 74 v4/video/protune_iso_mode
  3,     // 75 v4/photo/protune_iso_min
  3,     // 76 v4/multi_shot/protune_iso_min
/*
// v4.0.0 firmware doesn't support the following, yet
  0,     // 77 v4/photo/single_wdr (wide dynamic range)
  0,     // 78 v4/video/eis (electronic image stabilization)
  1,     // 79 v4/audio/protune
  1,     // 80 v4/audio/option (0: stereo only, 1: wind only, 2: auto)
  1,     // 81 v4/audio/protune_option (0: Low, 1: Mid, 2: High)
  0,     // 82 v4/photo/single_raw (capture in raw)
 */
},  
};

boolean blacklist_4_black(byte id, byte v)
{
if(id==8)switch(v){case 1:return true;}
if(id==3&&setting.b[2]==13&&setting.b[57]==0)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==11&&setting.b[57]==0)switch(v){case 0:case 2:case 3:case 4:case 6:case 7:case 8:case 9:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==12&&setting.b[57]==0)switch(v){case 2:case 3:case 4:case 6:case 7:case 9:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==10&&setting.b[57]==0)switch(v){case 0:case 2:case 3:case 4:case 6:case 7:case 8:case 9:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==8&&setting.b[57]==0)switch(v){case 0:case 1:case 2:case 3:case 6:case 9:case 11:case 12:return true;}
if(id==3&&setting.b[2]==9&&setting.b[57]==0)switch(v){case 0:case 2:case 4:case 6:case 9:case 11:case 12:return true;}
if(id==3&&setting.b[2]==7&&setting.b[57]==0)switch(v){case 0:case 1:case 2:case 3:case 6:case 9:case 11:case 12:return true;}
if(id==3&&setting.b[2]==6&&setting.b[57]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 9:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==5&&setting.b[57]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 9:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==4&&setting.b[57]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 6:case 9:case 11:case 12:return true;}
if(id==3&&setting.b[2]==2&&setting.b[57]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 11:case 12:return true;}
if(id==3&&setting.b[2]==1&&setting.b[57]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 9:case 11:case 12:return true;}
if(id==3&&setting.b[2]==13&&setting.b[57]==1)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==11&&setting.b[57]==1)switch(v){case 0:case 2:case 3:case 4:case 5:case 7:case 8:case 9:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==12&&setting.b[57]==1)switch(v){case 2:case 3:case 4:case 5:case 7:case 8:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==10&&setting.b[57]==1)switch(v){case 0:case 2:case 3:case 4:case 5:case 7:case 8:case 9:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==8&&setting.b[57]==1)switch(v){case 0:case 1:case 2:case 3:case 5:case 8:case 11:case 12:return true;}
if(id==3&&setting.b[2]==9&&setting.b[57]==1)switch(v){case 0:case 2:case 4:case 5:case 8:case 11:case 12:return true;}
if(id==3&&setting.b[2]==7&&setting.b[57]==1)switch(v){case 0:case 1:case 2:case 3:case 5:case 8:case 11:case 12:return true;}
if(id==3&&setting.b[2]==6&&setting.b[57]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==5&&setting.b[57]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==4&&setting.b[57]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 8:case 11:case 12:return true;}
if(id==3&&setting.b[2]==2&&setting.b[57]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 11:case 12:return true;}
if(id==3&&setting.b[2]==1&&setting.b[57]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 11:case 12:return true;}
if(id==4&&setting.b[2]==1)switch(v){case 1:case 2:case 4:return true;}
if(id==4&&setting.b[2]==2)switch(v){case 1:case 2:case 4:return true;}
if(id==4&&setting.b[2]==4)switch(v){case 2:return true;}
if(id==4&&setting.b[2]==4&&setting.b[3]==5)switch(v){case 4:return true;}
if(id==4&&setting.b[2]==4&&setting.b[3]==6)switch(v){case 4:return true;}
if(id==4&&setting.b[2]==4&&setting.b[3]==7)switch(v){case 4:return true;}
if(id==4&&setting.b[2]==5)switch(v){case 1:case 2:case 4:return true;}
if(id==4&&setting.b[2]==6)switch(v){case 1:case 2:case 4:return true;}
if(id==4&&setting.b[2]==7)switch(v){case 1:case 2:case 4:return true;}
if(id==4&&setting.b[2]==9&&setting.b[3]==1)switch(v){case 1:case 4:return true;}
if(id==4&&setting.b[2]==9&&setting.b[3]==3)switch(v){case 1:case 4:return true;}
if(id==4&&setting.b[2]==8)switch(v){case 1:case 2:case 4:return true;}
if(id==4&&setting.b[2]==10)switch(v){case 1:case 2:case 4:return true;}
if(id==4&&setting.b[2]==12&&setting.b[3]==0)switch(v){case 0:case 1:case 4:return true;}
if(id==4&&setting.b[2]==11)switch(v){case 1:case 2:case 4:return true;}
if(id==4&&setting.b[2]==12)switch(v){case 4:return true;}
if(id==4&&setting.b[2]==13)switch(v){case 1:case 2:case 4:return true;}
if(id==2&&setting.b[68]==2)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 8:case 10:case 11:case 13:return true;}
if(id==3&&setting.b[68]==2&&setting.b[2]==4)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 11:case 12:return true;}
if(id==3&&setting.b[68]==2&&setting.b[2]==5)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[68]==2&&setting.b[2]==7)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 11:case 12:return true;}
if(id==3&&setting.b[68]==2&&setting.b[2]==9)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 11:case 12:return true;}
if(id==3&&setting.b[68]==2&&setting.b[2]==8)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 11:case 12:return true;}
if(id==3&&setting.b[68]==2&&setting.b[2]==10)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[68]==2&&setting.b[2]==11)switch(v){case 0:case 1:case 2:case 3:case 4:case 7:case 8:case 9:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[68]==2&&setting.b[2]==12)switch(v){case 0:case 1:case 2:case 3:case 4:case 7:case 10:case 11:case 12:return true;}
if(id==4&&setting.b[68]==2&&setting.b[2]==12&&setting.b[3]==5)switch(v){case 0:return true;}
if(id==8&&setting.b[68]==1)switch(v){case 0:case 1:return true;}
if(id==8&&setting.b[3]==0)switch(v){case 0:case 1:return true;}
if(id==8&&setting.b[3]==8)switch(v){case 0:case 1:return true;}
if(id==8&&setting.b[3]==9)switch(v){case 0:case 1:return true;}
if(id==8&&setting.b[3]==10)switch(v){case 0:case 1:return true;}
if(id==8&&setting.b[3]==11)switch(v){case 0:case 1:return true;}
if(id==8&&setting.b[3]==12)switch(v){case 0:case 1:return true;}
if(id==11&&setting.b[10]==0)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==12&&setting.b[10]==0)switch(v){case 0:case 1:return true;}
if(id==14&&setting.b[10]==0)switch(v){case 0:case 1:case 2:return true;}
if(id==73&&setting.b[10]==0)return true;
if(id==73&&setting.b[3]==0)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:case 13:case 14:case 15:case 16:case 17:case 19:case 20:case 21:return true;}
if(id==73&&setting.b[3]==1)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:case 14:case 15:case 16:case 17:case 19:case 20:case 21:case 23:return true;}
if(id==73&&setting.b[3]==2)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 13:case 14:case 15:case 16:case 18:case 19:case 20:case 22:case 23:return true;}
if(id==73&&setting.b[3]==3)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 11:case 12:case 13:case 14:case 16:case 17:case 18:case 19:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==4)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 10:case 11:case 12:case 13:case 15:case 16:case 17:case 18:case 20:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==5)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 9:case 10:case 11:case 12:case 14:case 15:case 16:case 17:case 19:case 20:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==6)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 8:case 9:case 10:case 11:case 13:case 14:case 15:case 16:case 18:case 19:case 20:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==7)switch(v){case 1:case 2:case 3:case 4:case 5:case 7:case 8:case 9:case 10:case 12:case 13:case 14:case 15:case 17:case 18:case 19:case 20:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==8)switch(v){case 1:case 2:case 3:case 4:case 6:case 7:case 9:case 10:case 11:case 12:case 14:case 15:case 16:case 17:case 18:case 19:case 20:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==9)switch(v){case 1:case 2:case 3:case 5:case 6:case 8:case 9:case 10:case 11:case 13:case 14:case 15:case 16:case 17:case 18:case 19:case 20:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==10)switch(v){case 1:case 2:case 4:case 5:case 7:case 8:case 9:case 10:case 12:case 13:case 14:case 15:case 16:case 17:case 18:case 19:case 20:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==11)switch(v){case 1:case 3:case 4:case 6:case 7:case 9:case 10:case 11:case 12:case 13:case 14:case 15:case 16:case 17:case 18:case 19:case 20:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==12)switch(v){case 2:case 3:case 5:case 6:case 8:case 9:case 10:case 11:case 12:case 13:case 14:case 15:case 16:case 17:case 18:case 19:case 20:case 21:case 22:case 23:return true;}
if(id==74&&setting.b[10]==1&&setting.b[73]==0)return true;
if(id==74&&setting.b[10]==0)return true;
if(id==13&&setting.b[10]==0)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==15&&setting.b[10]==1&&setting.b[73]!=0)return true;
if(id==15&&setting.b[10]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==5&&setting.b[68]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==6&&setting.b[68]==0)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==7&&setting.b[68]==0)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==6&&setting.b[68]==1)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==7&&setting.b[68]==1)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==6&&setting.b[68]==2)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==5&&setting.b[68]==2)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==7&&setting.b[68]==3)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==5&&setting.b[68]==3)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==4&&setting.b[68]==1)switch(v){case 0:case 1:case 2:case 4:return true;}
if(id==9&&setting.b[68]==1)switch(v){case 0:case 1:return true;}
if(id==2&&setting.b[68]==1)switch(v){case 2:case 3:case 4:case 5:case 7:case 8:case 9:case 10:case 11:case 12:case 13:return true;}
if(id==3&&setting.b[68]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:return true;}
if(id==18&&setting.b[69]==0)switch(v){case 0:case 1:case 2:return true;}
if(id==19&&setting.b[69]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==19&&setting.b[69]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==18&&setting.b[69]==2)switch(v){case 0:case 1:case 2:return true;}
if(id==22&&setting.b[21]==0)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==23&&setting.b[21]==0)switch(v){case 0:case 1:return true;}
if(id==75&&setting.b[21]==0)return true;
if(id==25&&setting.b[21]==0)switch(v){case 0:case 1:case 2:return true;}
if(id==24&&setting.b[21]==0)switch(v){case 0:case 1:case 2:case 3:return true;}
if(id==26&&setting.b[21]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==22&&setting.b[69]==2&&setting.b[19]==1)switch(v){case 0:return true;}
if(id==22&&setting.b[69]==2&&setting.b[19]==2)switch(v){case 0:return true;}
if(id==22&&setting.b[69]==2&&setting.b[19]==3)switch(v){case 0:return true;}
if(id==22&&setting.b[69]==2&&setting.b[19]==4)switch(v){case 0:return true;}
if(id==22&&setting.b[69]==2&&setting.b[19]==5)switch(v){case 0:return true;}
if(id==22&&setting.b[69]==2&&setting.b[19]==6)switch(v){case 0:return true;}
if(id==26&&setting.b[69]==2&&setting.b[19]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==26&&setting.b[69]==2&&setting.b[19]==2)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==26&&setting.b[69]==2&&setting.b[19]==3)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==26&&setting.b[69]==2&&setting.b[19]==4)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==26&&setting.b[69]==2&&setting.b[19]==5)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==26&&setting.b[69]==2&&setting.b[19]==6)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==31&&setting.b[70]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==30&&setting.b[70]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==32&&setting.b[70]==0)switch(v){case 9:case 10:case 11:case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==31&&setting.b[70]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==29&&setting.b[70]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==32&&setting.b[70]==1)switch(v){case 9:case 10:case 11:case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==29&&setting.b[70]==2)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==30&&setting.b[70]==2)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==35&&setting.b[70]==2&&setting.b[31]==1)switch(v){case 0:return true;}
if(id==35&&setting.b[70]==2&&setting.b[31]==2)switch(v){case 0:return true;}
if(id==35&&setting.b[70]==2&&setting.b[31]==3)switch(v){case 0:return true;}
if(id==35&&setting.b[70]==2&&setting.b[31]==4)switch(v){case 0:return true;}
if(id==35&&setting.b[70]==2&&setting.b[31]==5)switch(v){case 0:return true;}
if(id==35&&setting.b[70]==2&&setting.b[31]==6)switch(v){case 0:return true;}
if(id==32&&setting.b[70]==2&&setting.b[31]==2)switch(v){case 10:case 11:return true;}
if(id==32&&setting.b[70]==2&&setting.b[31]==3)switch(v){case 10:case 11:case 0:return true;}
if(id==32&&setting.b[70]==2&&setting.b[31]==4)switch(v){case 10:case 11:case 0:case 1:return true;}
if(id==32&&setting.b[70]==2&&setting.b[31]==5)switch(v){case 10:case 11:case 0:case 1:case 2:return true;}
if(id==32&&setting.b[70]==2&&setting.b[31]==6)switch(v){case 10:case 11:case 0:case 1:case 2:case 3:return true;}
if(id==35&&setting.b[34]==0)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==36&&setting.b[34]==0)switch(v){case 0:case 1:return true;}
if(id==76&&setting.b[34]==0)return true;
if(id==38&&setting.b[34]==0)switch(v){case 0:case 1:case 2:return true;}
if(id==37&&setting.b[34]==0)switch(v){case 0:case 1:case 2:case 3:return true;}
if(id==39&&setting.b[34]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==39&&setting.b[70]==2&&setting.b[31]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==39&&setting.b[70]==2&&setting.b[31]==2)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==39&&setting.b[70]==2&&setting.b[31]==3)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==39&&setting.b[70]==2&&setting.b[31]==4)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==39&&setting.b[70]==2&&setting.b[31]==5)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==39&&setting.b[70]==2&&setting.b[31]==6)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==10&&setting.b[68]==1)switch(v){case 0:case 1:return true;}
if(id==11&&setting.b[68]==1)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==12&&setting.b[68]==1)switch(v){case 0:case 1:return true;}
if(id==14&&setting.b[68]==1)switch(v){case 0:case 1:case 2:return true;}
if(id==13&&setting.b[68]==1)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==15&&setting.b[68]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==10&&setting.b[68]==2)switch(v){case 0:case 1:return true;}
if(id==11&&setting.b[68]==2)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==12&&setting.b[68]==2)switch(v){case 0:case 1:return true;}
if(id==14&&setting.b[68]==2)switch(v){case 0:case 1:case 2:return true;}
if(id==13&&setting.b[68]==2)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==15&&setting.b[68]==2)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==10&&setting.b[68]==3)switch(v){case 0:case 1:return true;}
if(id==11&&setting.b[68]==3)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==12&&setting.b[68]==3)switch(v){case 0:case 1:return true;}
if(id==14&&setting.b[68]==3)switch(v){case 0:case 1:case 2:return true;}
if(id==13&&setting.b[68]==3)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==15&&setting.b[68]==3)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==16&&setting.b[53]==0)switch(v){case 0:case 1:case 2:return true;}
if(id==27&&setting.b[53]==0)switch(v){case 0:case 1:case 2:return true;}
if(id==1&&setting.b[53]==1)switch(v){case 0:case 1:case 2:case 3:return true;}
if(id==27&&setting.b[53]==1)switch(v){case 0:case 1:case 2:return true;}
if(id==1&&setting.b[53]==2)switch(v){case 0:case 1:case 2:case 3:return true;}
if(id==16&&setting.b[53]==2)switch(v){case 0:case 1:case 2:return true;}
return false;
}

boolean blacklist_4_silver(byte id, byte v)
{
if(id==8)switch(v){case 1:return true;}
if(id==3&&setting.b[2]==1&&setting.b[57]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 12:return true;}
if(id==3&&setting.b[2]==4&&setting.b[57]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 9:case 11:case 12:return true;}
if(id==3&&setting.b[2]==7&&setting.b[57]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 9:case 11:case 12:return true;}
if(id==3&&setting.b[2]==9&&setting.b[57]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 6:case 9:case 11:case 12:return true;}
if(id==3&&setting.b[2]==8&&setting.b[57]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 6:case 9:case 11:case 12:return true;}
if(id==3&&setting.b[2]==10&&setting.b[57]==0)switch(v){case 0:case 1:case 3:case 4:case 6:case 7:case 8:case 9:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==12&&setting.b[57]==0)switch(v){case 0:case 2:case 3:case 4:case 6:case 7:case 9:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==11&&setting.b[57]==0)switch(v){case 0:case 1:case 3:case 4:case 6:case 7:case 8:case 9:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==13&&setting.b[57]==0)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==1&&setting.b[57]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:return true;}
if(id==3&&setting.b[2]==4&&setting.b[57]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 11:case 12:return true;}
if(id==3&&setting.b[2]==7&&setting.b[57]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 8:case 11:case 12:return true;}
if(id==3&&setting.b[2]==9&&setting.b[57]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 8:case 11:case 12:return true;}
if(id==3&&setting.b[2]==8&&setting.b[57]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 8:case 11:case 12:return true;}
if(id==3&&setting.b[2]==10&&setting.b[57]==1)switch(v){case 0:case 1:case 3:case 4:case 5:case 7:case 8:case 9:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==12&&setting.b[57]==1)switch(v){case 0:case 2:case 3:case 4:case 5:case 7:case 8:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==11&&setting.b[57]==1)switch(v){case 0:case 1:case 3:case 4:case 5:case 7:case 8:case 9:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[2]==13&&setting.b[57]==1)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:return true;}
if(id==4&&setting.b[2]==1)switch(v){case 1:case 2:case 4:return true;}
if(id==4&&setting.b[2]==4)switch(v){case 2:return true;}
if(id==4&&setting.b[2]==7)switch(v){case 1:case 2:case 4:return true;}
if(id==4&&setting.b[2]==8)switch(v){case 1:case 2:case 4:return true;}
if(id==4&&setting.b[2]==10)switch(v){case 1:case 2:case 4:return true;}
if(id==4&&setting.b[2]==11)switch(v){case 1:case 2:case 4:return true;}
if(id==4&&setting.b[2]==12)switch(v){case 4:return true;}
if(id==4&&setting.b[2]==13)switch(v){case 1:case 2:case 4:return true;}
if(id==2&&setting.b[68]==0)switch(v){case 2:case 3:case 5:case 6:return true;}
if(id==2&&setting.b[68]==2)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 8:case 10:case 11:case 13:return true;}
if(id==2&&setting.b[68]==3)switch(v){case 2:case 3:case 5:case 6:return true;}
if(id==3&&setting.b[68]==2&&setting.b[2]==7)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 11:case 12:return true;}
if(id==3&&setting.b[68]==2&&setting.b[2]==9)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 11:case 12:return true;}
if(id==3&&setting.b[68]==2&&setting.b[2]==8)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 11:case 12:return true;}
if(id==3&&setting.b[68]==2&&setting.b[2]==11)switch(v){case 0:case 1:case 2:case 3:case 4:case 7:case 8:case 9:case 10:case 11:case 12:return true;}
if(id==3&&setting.b[68]==2&&setting.b[2]==12)switch(v){case 0:case 1:case 2:case 3:case 4:case 7:case 10:case 11:case 12:return true;}
if(id==4&&setting.b[68]==2&&setting.b[2]==12&&setting.b[3]==5)switch(v){case 0:return true;}
if(id==8&&setting.b[68]==1)switch(v){case 0:case 1:return true;}
if(id==8&&setting.b[3]==0)switch(v){case 0:case 1:return true;}
if(id==8&&setting.b[3]==8)switch(v){case 0:case 1:return true;}
if(id==8&&setting.b[3]==9)switch(v){case 0:case 1:return true;}
if(id==8&&setting.b[3]==10)switch(v){case 0:case 1:return true;}
if(id==8&&setting.b[3]==11)switch(v){case 0:case 1:return true;}
if(id==8&&setting.b[3]==12)switch(v){case 0:case 1:return true;}
if(id==11&&setting.b[10]==0)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==12&&setting.b[10]==0)switch(v){case 0:case 1:return true;}
if(id==73&&setting.b[10]==0)return true;
if(id==73&&setting.b[3]==0)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:case 13:case 14:case 15:case 16:case 17:case 19:case 20:case 21:return true;}
if(id==73&&setting.b[3]==1)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:case 14:case 15:case 16:case 17:case 19:case 20:case 21:case 23:return true;}
if(id==73&&setting.b[3]==2)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 13:case 14:case 15:case 16:case 18:case 19:case 20:case 22:case 23:return true;}
if(id==73&&setting.b[3]==3)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 11:case 12:case 13:case 14:case 16:case 17:case 18:case 19:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==4)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 10:case 11:case 12:case 13:case 15:case 16:case 17:case 18:case 20:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==5)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 9:case 10:case 11:case 12:case 14:case 15:case 16:case 17:case 19:case 20:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==6)switch(v){case 1:case 2:case 3:case 4:case 5:case 6:case 8:case 9:case 10:case 11:case 13:case 14:case 15:case 16:case 18:case 19:case 20:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==7)switch(v){case 1:case 2:case 3:case 4:case 5:case 7:case 8:case 9:case 10:case 12:case 13:case 14:case 15:case 17:case 18:case 19:case 20:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==8)switch(v){case 1:case 2:case 3:case 4:case 6:case 7:case 9:case 10:case 11:case 12:case 14:case 15:case 16:case 17:case 18:case 19:case 20:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==9)switch(v){case 1:case 2:case 3:case 5:case 6:case 8:case 9:case 10:case 11:case 13:case 14:case 15:case 16:case 17:case 18:case 19:case 20:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==10)switch(v){case 1:case 2:case 4:case 5:case 7:case 8:case 9:case 10:case 12:case 13:case 14:case 15:case 16:case 17:case 18:case 19:case 20:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==11)switch(v){case 1:case 3:case 4:case 6:case 7:case 9:case 10:case 11:case 12:case 13:case 14:case 15:case 16:case 17:case 18:case 19:case 20:case 21:case 22:case 23:return true;}
if(id==73&&setting.b[3]==12)switch(v){case 2:case 3:case 5:case 6:case 8:case 9:case 10:case 11:case 12:case 13:case 14:case 15:case 16:case 17:case 18:case 19:case 20:case 21:case 22:case 23:return true;}
if(id==74&&setting.b[10]==1&&setting.b[73]==0)return true;
if(id==74&&setting.b[10]==0)return true;
if(id==14&&setting.b[10]==0)switch(v){case 0:case 1:case 2:return true;}
if(id==13&&setting.b[10]==0)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==15&&setting.b[10]==1&&setting.b[73]!=0)return true;
if(id==15&&setting.b[10]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==5&&setting.b[68]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==6&&setting.b[68]==0)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==7&&setting.b[68]==0)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==6&&setting.b[68]==1)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==7&&setting.b[68]==1)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==6&&setting.b[68]==2)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==5&&setting.b[68]==2)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==7&&setting.b[68]==3)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==5&&setting.b[68]==3)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==4&&setting.b[68]==1)switch(v){case 0:case 1:case 2:case 4:return true;}
if(id==9&&setting.b[68]==1)switch(v){case 0:case 1:return true;}
if(id==2&&setting.b[68]==1)switch(v){case 2:case 3:case 4:case 5:case 7:case 8:case 9:case 10:case 11:case 12:case 13:return true;}
if(id==3&&setting.b[68]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:return true;}
if(id==18&&setting.b[69]==0)switch(v){case 0:case 1:case 2:return true;}
if(id==19&&setting.b[69]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==19&&setting.b[69]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==18&&setting.b[69]==2)switch(v){case 0:case 1:case 2:return true;}
if(id==22&&setting.b[21]==0)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==23&&setting.b[21]==0)switch(v){case 0:case 1:return true;}
if(id==75&&setting.b[21]==0)return true;
if(id==25&&setting.b[21]==0)switch(v){case 0:case 1:case 2:return true;}
if(id==24&&setting.b[21]==0)switch(v){case 0:case 1:case 2:case 3:return true;}
if(id==26&&setting.b[21]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==22&&setting.b[69]==2&&setting.b[19]==1)switch(v){case 0:return true;}
if(id==22&&setting.b[69]==2&&setting.b[19]==2)switch(v){case 0:return true;}
if(id==22&&setting.b[69]==2&&setting.b[19]==3)switch(v){case 0:return true;}
if(id==22&&setting.b[69]==2&&setting.b[19]==4)switch(v){case 0:return true;}
if(id==22&&setting.b[69]==2&&setting.b[19]==5)switch(v){case 0:return true;}
if(id==22&&setting.b[69]==2&&setting.b[19]==6)switch(v){case 0:return true;}
if(id==26&&setting.b[69]==2&&setting.b[19]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==26&&setting.b[69]==2&&setting.b[19]==2)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==26&&setting.b[69]==2&&setting.b[19]==3)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==26&&setting.b[69]==2&&setting.b[19]==4)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==26&&setting.b[69]==2&&setting.b[19]==5)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==26&&setting.b[69]==2&&setting.b[19]==6)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==31&&setting.b[70]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==30&&setting.b[70]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==32&&setting.b[70]==0)switch(v){case 9:case 10:case 11:case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==31&&setting.b[70]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==29&&setting.b[70]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==32&&setting.b[70]==1)switch(v){case 9:case 10:case 11:case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==29&&setting.b[70]==2)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==30&&setting.b[70]==2)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return true;}
if(id==35&&setting.b[70]==2&&setting.b[31]==1)switch(v){case 0:return true;}
if(id==35&&setting.b[70]==2&&setting.b[31]==2)switch(v){case 0:return true;}
if(id==35&&setting.b[70]==2&&setting.b[31]==3)switch(v){case 0:return true;}
if(id==35&&setting.b[70]==2&&setting.b[31]==4)switch(v){case 0:return true;}
if(id==35&&setting.b[70]==2&&setting.b[31]==5)switch(v){case 0:return true;}
if(id==35&&setting.b[70]==2&&setting.b[31]==6)switch(v){case 0:return true;}
if(id==32&&setting.b[70]==2&&setting.b[31]==2)switch(v){case 10:case 11:return true;}
if(id==32&&setting.b[70]==2&&setting.b[31]==3)switch(v){case 10:case 11:case 0:return true;}
if(id==32&&setting.b[70]==2&&setting.b[31]==4)switch(v){case 10:case 11:case 0:case 1:return true;}
if(id==32&&setting.b[70]==2&&setting.b[31]==5)switch(v){case 10:case 11:case 0:case 1:case 2:return true;}
if(id==32&&setting.b[70]==2&&setting.b[31]==6)switch(v){case 10:case 11:case 0:case 1:case 2:case 3:return true;}
if(id==35&&setting.b[34]==0)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==36&&setting.b[34]==0)switch(v){case 0:case 1:return true;}
if(id==76&&setting.b[34]==0)return true;
if(id==38&&setting.b[34]==0)switch(v){case 0:case 1:case 2:return true;}
if(id==37&&setting.b[34]==0)switch(v){case 0:case 1:case 2:case 3:return true;}
if(id==39&&setting.b[34]==0)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==39&&setting.b[70]==2&&setting.b[31]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==39&&setting.b[70]==2&&setting.b[31]==2)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==39&&setting.b[70]==2&&setting.b[31]==3)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==39&&setting.b[70]==2&&setting.b[31]==4)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==39&&setting.b[70]==2&&setting.b[31]==5)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==39&&setting.b[70]==2&&setting.b[31]==6)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==10&&setting.b[68]==1)switch(v){case 0:case 1:return true;}
if(id==11&&setting.b[68]==1)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==12&&setting.b[68]==1)switch(v){case 0:case 1:return true;}
if(id==14&&setting.b[68]==1)switch(v){case 0:case 1:case 2:return true;}
if(id==13&&setting.b[68]==1)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==15&&setting.b[68]==1)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==10&&setting.b[68]==2)switch(v){case 0:case 1:return true;}
if(id==11&&setting.b[68]==2)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==12&&setting.b[68]==2)switch(v){case 0:case 1:return true;}
if(id==14&&setting.b[68]==2)switch(v){case 0:case 1:case 2:return true;}
if(id==13&&setting.b[68]==2)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==15&&setting.b[68]==2)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==10&&setting.b[68]==3)switch(v){case 0:case 1:return true;}
if(id==11&&setting.b[68]==3)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==12&&setting.b[68]==3)switch(v){case 0:case 1:return true;}
if(id==14&&setting.b[68]==3)switch(v){case 0:case 1:case 2:return true;}
if(id==13&&setting.b[68]==3)switch(v){case 0:case 1:case 2:case 3:case 4:return true;}
if(id==15&&setting.b[68]==3)switch(v){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:return true;}
if(id==16&&setting.b[53]==0)switch(v){case 0:case 1:case 2:return true;}
if(id==27&&setting.b[53]==0)switch(v){case 0:case 1:case 2:return true;}
if(id==1&&setting.b[53]==1)switch(v){case 0:case 1:case 2:case 3:return true;}
if(id==27&&setting.b[53]==1)switch(v){case 0:case 1:case 2:return true;}
if(id==1&&setting.b[53]==2)switch(v){case 0:case 1:case 2:case 3:return true;}
if(id==16&&setting.b[53]==2)switch(v){case 0:case 1:case 2:return true;}
return false;
}

boolean blacklist(byte id, byte v)
{
  boolean flag = false;
#if defined(HERO_4_BLACK) && defined(HERO_4_SILVER)
  if(id==2&&v==1)return true; // no common fps in 4K
#endif
#ifdef HERO_4_BLACK
  flag |= blacklist_4_black(id, v);
#endif
#ifdef HERO_4_SILVER
  flag |= blacklist_4_silver(id, v);
#endif
  return flag;
}
