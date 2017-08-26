#define SYNC_TIME_HSYNC 0
#define SYNC_TIME_VSYNC 1
#define SYNC_TIME_STRETCH 2
#define FPS_TABLE_SIZE 14

#define SYNC_TIME_2_7K_MEDIUM 14
#define SYNC_TIME_1080_MEDIUM 15
#define SYNC_TIME_720_MEDIUM  16
#define SYNC_TIME_1080_NARROW 17
#define SYNC_TIME_720_NARROW  18
#define SYNC_TIME_PHOTO       19

#define _NA_ {0,0,0}

const unsigned int syncTime[][3] PROGMEM = {
// HSYNC duration unit is the number of clock cycles in 16MHz AVR, i.e. 1 clock = 62.5 ns
// VSYNC duration unit is the number of HSYNC pulses
// Note: the last HSYNC duration followed by VSYNC will be longer than others by STRETCH (clock)
//
// frame per second = 16000000 / (HSYNC * VSYNC + STRETCH)
//
// video modes WIDE
// {HSYNC (clock), VSYNC (pulse), STRETCH (clock)}
//240      120          100          90           80           60             50            48              30            25              24              15           12.5          12
// 0x00: 4K 17:9             4096x2160
_NA_,      _NA_,        _NA_,        _NA_,        _NA_,        _NA_,          _NA_,         _NA_,           _NA_,         _NA_,           _NA_,           _NA_,        _NA_,         _NA_,
// 0x01: 4K 16:9             3840x2160
_NA_,      _NA_,        _NA_,        _NA_,        _NA_,        _NA_,          _NA_,         _NA_,           {121,4412,0}, {121,5289,0},   {121,5516,0},   {121,8827,0},{121,10576,0},_NA_,
// 0x02: 4K SuperView 16:9   3840x2160
_NA_,      _NA_,        _NA_,        _NA_,        _NA_,        _NA_,          _NA_,         _NA_,           _NA_,         _NA_,           {120,5561,0},   _NA_,        _NA_,         _NA_,
// 0x03: 2.7K 17:9           2704x1440
_NA_,      _NA_,        _NA_,        _NA_,        _NA_,        _NA_,          _NA_,         _NA_,           _NA_,         _NA_,           _NA_,           _NA_,        _NA_,         _NA_,
// 0x04: 2.7K 16:9           2704x1520
_NA_,      _NA_,        _NA_,        _NA_,        _NA_,        {121,2206,0},  {121,2645,0}, {148,2255,0},   {187,2854,0}, {185,3459,0},   {222,3006,0},   _NA_,        _NA_,         _NA_,
// 0x05: 2.7K SuperView 16:9 2704x1520
_NA_,      _NA_,        _NA_,        _NA_,        _NA_,        _NA_,          _NA_,         _NA_,           {144,3707,0}, {144,4445,0},   _NA_,           _NA_,        _NA_,         _NA_,
// 0x06: 2.7K 4:3            2704x2028
_NA_,      _NA_,        _NA_,        _NA_,        _NA_,        _NA_,          _NA_,         _NA_,           {171,3121,0}, {160,4000,0},   _NA_,           _NA_,        _NA_,         _NA_,
// 0x07: 1440 4:3            1920x1440
_NA_,      _NA_,        _NA_,        _NA_,        {118,1695,0},{78,3432,0},   {78,4103,0},  {78,4290,0},    {171,3120,0}, {160,4000,0},   {212,3148,0},   _NA_,        _NA_,         _NA_,
// 0x08: 1080 SuperView 16:9 1920x1080
_NA_,      _NA_,        _NA_,        _NA_,        {118,1695,0},{78,3432,0},   {78,4103,0},  {78,4290,0},    {169,3157,0}, {160,4000,0},   {212,3148,0},   _NA_,        _NA_,         _NA_,
// 0x09: 1080 16:9           1920x1080   
_NA_,      {118,1131,0},_NA_,        {118,1507,0},_NA_,        {121,2206,0},  {121,2645,0}, {151,2221,0},   {235,2275,0}, {282,2270,0},   {152,4389,0},   _NA_,        _NA_,         _NA_,
// 0x0a: 960 4:3             1280x960
_NA_,      {124,1076,0},{127,1265,0},_NA_,        _NA_,        {85,3140,33},  {83,3850,0},  _NA_,           _NA_,         _NA_,           _NA_,           _NA_,        _NA_,         _NA_,
// 0x0b: 720 SuperView 16:9  1280x720
_NA_,      {124,1076,0},{120,1338,0},_NA_,        _NA_,        {78,3432,0},   {78,4103,0},  _NA_,           _NA_,         _NA_,           _NA_,           _NA_,        _NA_,         _NA_,
// 0x0c: 720 16:9            1280x720
_NA_,      {118,1131,0},_NA_,        _NA_,        _NA_,        {121,2206,0},  {121,2645,0}, _NA_,           {237,2250,83},{284,2250,1000},_NA_,           _NA_,        _NA_,         _NA_,
// 0x0d: WVGA 16:9           848x480
{86,776,0},_NA_,        _NA_,        _NA_,        _NA_,        _NA_,          _NA_,         _NA_,           _NA_,         _NA_,           _NA_,           _NA_,        _NA_,         _NA_,
//
// video modes MEDIUM
// 14:   2.7K 16:9           2704x1520
_NA_,      _NA_,        _NA_,        _NA_,        _NA_,        {151,1771,0},  {150,2133,0}, {153,2184,0},   {235,2275,0}, {284,2250,1000},{293,2277,173}, _NA_,        _NA_,         _NA_,
// 15:   1080 16:9           1920x1080   
_NA_,      _NA_,        _NA_,        _NA_,        _NA_,        {146,1828,0},  {147,2181,0}, {155,2145,0},   {235,2275,0}, {284,2250,1000},{216,3090,0},   _NA_,        _NA_,         _NA_,
// 16:   720 16:9            1280x720
_NA_,      {118,1131,0},_NA_,        _NA_,        _NA_,        {139,1919,193},{139,2302,0}, _NA_,           {235,2275,0}, {284,2250,1000},_NA_,           _NA_,        _NA_,         _NA_,
//
// video modes NARROW
// 17:   1080 NARROW
_NA_,      {112,1191,0},_NA_,        {111,1602,0},_NA_,        {139,1919,193},{139,2302,22},{141,2366,0},   {140,3810,0}, {139,4604,44},  {141,4732,122}, _NA_,        _NA_,         _NA_,
// 18:   720 NARROW
{83,804,0},{113,1180,0},_NA_,        _NA_,        _NA_,        {133,2002,0},  {132,2424,0}, _NA_,           {133,4014,0}, {132,4848,0},   _NA_,           _NA_,        _NA_,         _NA_,
// 
// 19:   photo mode
{146,3640,0}
};

