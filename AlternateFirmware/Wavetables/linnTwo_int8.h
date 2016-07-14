#ifndef LINNTWO_H_
#define LINNTWO_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define LINNTWO_NUM_CELLS 1928
#define LINNTWO_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) LINNTWO_DATA [] = {0, 1,
0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 5, 6, 4, 3, 2, 3,
2, 0, 4, 9, -15, -13, 22, -4, 3, 44, 45, 14, -19, -21, 3, 22, 11, 9, 9, -1, 5,
18, 13, -3, -5, 10, 9, -7, -3, 4, 1, -1, -8, -10, 2, 8, -8, -26, -18, -3, -4,
-17, -26, -23, -19, -18, -17, -27, -33, -23, -18, -28, -34, -33, -29, -29, -29,
-29, -33, -35, -36, -33, -32, -36, -38, -35, -35, -35, -32, -39, -40, -35, -33,
-35, -35, -31, -33, -34, -28, -26, -26, -22, -24, -29, -31, -25, -16, -5, 6, -1,
-18, -18, -10, -9, -7, 2, 14, 19, 17, 11, 9, 13, 17, 17, 19, 22, 25, 28, 30, 32,
35, 37, 39, 42, 44, 46, 48, 50, 52, 54, 55, 57, 58, 59, 59, 58, 57, 58, 59, 60,
60, 59, 59, 59, 59, 58, 58, 55, 54, 54, 53, 52, 51, 49, 47, 47, 45, 44, 42, 41,
41, 37, 35, 34, 32, 30, 30, 29, 25, 22, 21, 21, 19, 18, 14, 12, 11, 7, 5, 9, 6,
-2, -4, 0, -2, -6, -9, -12, -15, -18, -18, -20, -24, -28, -31, -35, -37, -39,
-40, -42, -45, -47, -49, -52, -55, -57, -59, -62, -64, -66, -68, -69, -71, -73,
-74, -75, -76, -77, -78, -78, -79, -79, -79, -79, -79, -79, -79, -77, -74, -73,
-73, -73, -73, -72, -71, -70, -69, -67, -65, -64, -64, -62, -61, -59, -58, -56,
-54, -52, -51, -49, -47, -45, -43, -42, -40, -38, -36, -35, -33, -31, -29, -27,
-25, -23, -21, -19, -16, -13, -11, -9, -7, -4, 1, 4, 7, 8, 10, 15, 21, 27, 28,
28, 30, 37, 43, 49, 49, 48, 49, 55, 63, 67, 67, 65, 68, 75, 97, 100, 90, 98,
107, 114, 120, 118, 114, 117, 114, 110, 104, 106, 108, 103, 98, 94, 91, 87, 85,
82, 81, 77, 73, 72, 71, 70, 68, 64, 61, 60, 60, 59, 58, 57, 55, 54, 52, 50, 49,
50, 48, 46, 43, 42, 42, 40, 39, 37, 35, 33, 32, 31, 30, 28, 26, 24, 22, 21, 21,
19, 17, 15, 14, 13, 12, 10, 8, 6, 5, 4, 2, 0, -1, -3, -5, -7, -10, -11, -12,
-14, -17, -21, -24, -26, -28, -31, -35, -38, -40, -42, -45, -48, -51, -55, -58,
-59, -60, -63, -66, -70, -72, -72, -72, -74, -77, -80, -82, -83, -83, -84, -84,
-86, -88, -87, -87, -87, -88, -88, -88, -90, -89, -88, -89, -90, -90, -87, -87,
-88, -88, -86, -84, -85, -85, -85, -85, -85, -83, -81, -81, -81, -80, -80, -78,
-76, -76, -76, -75, -75, -74, -72, -70, -69, -67, -65, -65, -64, -64, -61, -61,
-61, -58, -57, -56, -54, -52, -51, -50, -48, -46, -45, -44, -42, -40, -39, -37,
-34, -32, -31, -29, -27, -25, -23, -21, -19, -18, -16, -12, -10, -9, -7, -3, 0,
1, 1, 2, 4, 8, 12, 15, 16, 17, 18, 22, 25, 27, 27, 28, 30, 32, 34, 35, 35, 37,
39, 40, 42, 43, 44, 44, 44, 44, 46, 47, 48, 48, 48, 48, 49, 50, 51, 51, 50, 50,
50, 50, 50, 50, 51, 52, 51, 51, 51, 51, 50, 49, 49, 50, 51, 50, 50, 50, 50, 50,
49, 48, 48, 48, 48, 48, 48, 48, 48, 48, 47, 47, 47, 47, 48, 47, 46, 46, 47, 47,
47, 46, 46, 46, 46, 47, 46, 45, 45, 45, 45, 46, 45, 44, 43, 44, 44, 44, 45, 44,
43, 43, 43, 42, 41, 41, 41, 42, 42, 41, 40, 39, 39, 38, 38, 38, 37, 37, 36, 36,
35, 35, 35, 34, 34, 32, 31, 30, 30, 30, 28, 27, 27, 26, 25, 24, 23, 23, 22, 21,
19, 19, 18, 17, 16, 14, 13, 12, 11, 10, 8, 7, 6, 5, 4, 2, 0, -1, -3, -4, -5, -6,
-8, -9, -11, -12, -14, -16, -17, -19, -21, -22, -24, -26, -27, -29, -31, -32,
-34, -35, -37, -39, -41, -42, -44, -46, -47, -48, -50, -52, -54, -55, -56, -58,
-60, -61, -62, -63, -65, -66, -68, -69, -70, -71, -72, -72, -73, -74, -75, -76,
-76, -77, -79, -79, -80, -81, -82, -82, -81, -81, -82, -82, -82, -81, -81, -82,
-83, -83, -82, -82, -82, -82, -82, -81, -80, -80, -79, -79, -78, -78, -77, -77,
-76, -76, -75, -75, -74, -73, -72, -71, -70, -69, -69, -69, -68, -66, -65, -63,
-62, -61, -59, -58, -57, -56, -54, -53, -52, -50, -49, -47, -46, -44, -42, -40,
-38, -36, -35, -34, -32, -29, -27, -26, -24, -22, -20, -18, -15, -13, -11, -9,
-6, -4, -1, 1, 3, 5, 8, 11, 13, 16, 18, 21, 23, 26, 28, 30, 33, 35, 37, 40, 42,
44, 46, 48, 50, 52, 53, 55, 56, 58, 59, 60, 61, 62, 63, 64, 65, 65, 66, 67, 67,
67, 68, 68, 68, 68, 68, 69, 68, 68, 67, 67, 68, 68, 68, 67, 67, 66, 66, 65, 65,
65, 65, 65, 64, 62, 62, 62, 62, 61, 61, 59, 59, 58, 58, 57, 56, 55, 55, 54, 53,
52, 51, 50, 50, 50, 48, 48, 47, 46, 45, 44, 43, 42, 41, 41, 40, 38, 37, 36, 35,
35, 34, 33, 32, 30, 29, 28, 27, 26, 24, 23, 22, 21, 19, 18, 17, 15, 14, 13, 11,
10, 8, 7, 5, 4, 2, 0, -1, -3, -4, -6, -7, -9, -10, -12, -13, -15, -16, -17, -19,
-20, -21, -22, -24, -25, -26, -27, -28, -29, -30, -31, -31, -32, -33, -34, -35,
-35, -36, -36, -37, -37, -38, -38, -38, -38, -39, -39, -39, -40, -40, -39, -39,
-39, -39, -39, -39, -39, -39, -39, -39, -38, -38, -38, -37, -37, -37, -37, -36,
-36, -35, -35, -34, -34, -33, -33, -32, -31, -31, -31, -30, -29, -29, -28, -27,
-27, -26, -25, -24, -24, -23, -22, -21, -21, -20, -19, -18, -18, -17, -16, -15,
-15, -14, -13, -12, -11, -11, -10, -9, -9, -8, -7, -6, -6, -5, -4, -3, -2, -2,
-1, -1, 0, 1, 1, 2, 3, 3, 4, 4, 5, 6, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 10, 11,
11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 14, 14, 14,
14, 14, 14, 14, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 12, 12, 12, 12, 12,
11, 11, 11, 11, 11, 10, 10, 10, 10, 9, 9, 9, 9, 9, 8, 8, 8, 8, 7, 7, 7, 7, 6, 6,
6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4,
5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8,
8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7,
7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4,
4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, };

#endif /* LINNTWO_H_ */