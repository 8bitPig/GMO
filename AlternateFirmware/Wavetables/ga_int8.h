#ifndef GA_H_
#define GA_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define GA_NUM_CELLS 4911
#define GA_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) GA_DATA [] = {0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1,
-1, -1, -1, -1, -2, -2, -1, -2, -2, -2, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1, -1, -1, -1, -2, -1,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, 0, 3, 0, -2, -2, -2, -5, -6,
-4, -1, -1, -1, 1, 1, 0, -4, -4, -4, -5, 0, 3, 1, -2, -2, -3, -5, -5, 0, 3, 0,
-3, -2, -2, -6, -9, -8, -6, -6, -4, -1, 1, 2, 1, -1, -5, -6, -7, -7, -6, -4, -2,
1, 2, 2, 0, -3, -6, -8, -8, -6, -4, -1, 1, 2, 2, -2, -5, -7, -7, -6, -4, -2, -1,
1, -1, -2, -6, -7, -8, -9, -8, -5, -4, -3, -2, -2, -2, -4, -4, -4, -3, -5, -4,
-4, -3, -3, -2, -1, -3, -2, -2, 0, -1, 0, 1, 1, 4, 8, 8, 5, 2, 0, -1, -3, -4, 1,
8, 7, 5, 6, 3, -5, -9, -8, -7, -5, 0, 8, 13, 14, 12, 10, 7, -1, -8, -9, -8, -6,
1, 10, 16, 16, 14, 9, 3, -4, -11, -13, -9, -4, 2, 15, 19, 18, 12, 6, -5, -12,
-12, -10, -2, 4, 11, 17, 18, 11, 2, -7, -14, -16, -12, 1, 11, 20, 25, 21, 10,
-3, -14, -21, -23, -16, -5, 9, 16, 17, 14, 6, -7, -17, -19, -17, -12, -2, 8, 14,
14, 10, 1, -8, -15, -19, -17, -10, -2, 6, 8, 7, 0, -7, -16, -20, -20, -16, -8,
0, 6, 7, 4, -2, -10, -17, -19, -20, -17, -11, -4, 1, 3, 3, 0, -5, -10, -10, -11,
-10, -6, -1, 4, 6, 5, 4, 3, -2, -4, -3, 0, 3, 5, 7, 7, 7, 4, 1, -1, 0, 0, 2, 5,
7, 9, 8, 8, 6, 2, 0, -1, -2, -1, 3, 6, 7, 7, 7, 5, 1, -1, -1, -1, -1, 1, 5, 7,
5, 3, 4, 1, -2, -2, 0, 2, 4, 9, 10, 9, 7, 5, 4, 3, 3, 5, 9, 12, 12, 11, 11, 9,
7, 2, -1, -1, 0, 3, 5, 8, 10, 8, 8, 7, 6, 4, 2, 3, 1, -1, -4, -3, -3, -5, -5,
-7, -8, -9, -8, -8, -5, -6, -8, -10, -10, -10, -12, -12, -11, -11, -12, -12,
-12, -13, -17, -17, -17, -18, -17, -16, -14, -16, -21, -26, -30, -30, -24, -16,
-11, -10, -11, -11, -11, -13, -16, -16, -15, -12, -8, -2, 3, 7, 5, 2, -1, -4,
-4, -2, 3, 7, 9, 9, 9, 8, 5, 0, -4, -6, -6, -5, 0, 4, 6, 4, 1, -4, -7, -8, -8,
-5, -2, 3, 5, 6, 6, 5, 3, 0, -2, -2, 1, 5, 8, 10, 10, 7, 5, 3, 2, 2, 1, 3, 4, 6,
7, 8, 10, 12, 9, 5, 5, 7, 10, 11, 12, 12, 11, 11, 10, 8, 6, 3, 1, 0, 2, 4, 8,
10, 9, 5, 0, -1, -2, -3, -8, -7, -5, 0, 2, 3, 6, 6, 0, -6, -7, -7, -7, -10, -8,
-3, 0, 0, -3, -6, -11, -17, -23, -25, -23, -20, -16, -17, -23, -29, -34, -39,
-43, -39, -27, -12, -8, -12, -15, -10, -10, -14, -20, -19, -7, 2, 10, 14, 20,
24, 20, 8, -2, -2, 4, 8, 13, 14, 14, 12, 9, 6, -1, -11, -17, -17, -15, -9, -2,
3, 4, -2, -11, -15, -18, -17, -13, -8, -1, 6, 12, 14, 15, 13, 11, 8, 5, 8, 14,
22, 28, 29, 29, 25, 22, 19, 14, 11, 8, 10, 12, 14, 14, 14, 13, 8, 1, -2, 0, 3,
4, 2, 4, 8, 10, 8, 3, -2, -6, -10, -8, -4, 5, 14, 17, 14, 9, 4, 4, 5, 3, 0, 1,
7, 13, 14, 12, 9, 6, 1, -7, -12, -11, -6, -5, -4, -5, -7, -10, -15, -24, -32,
-34, -32, -29, -27, -29, -30, -35, -41, -50, -53, -39, -17, -2, -4, -11, -7, 1,
4, -3, -11, -2, 13, 20, 23, 29, 36, 33, 22, 6, -4, 1, 8, 9, 5, -1, 0, -2, -7,
-16, -29, -37, -38, -38, -32, -21, -9, -1, -3, -12, -19, -19, -14, -11, -11, -5,
10, 26, 36, 39, 36, 33, 29, 25, 21, 23, 31, 38, 40, 40, 36, 33, 26, 15, 4, -3,
-1, 0, -2, -1, 2, 6, 6, 0, -8, -11, -9, -7, -8, -5, 2, 8, 11, 9, 5, 2, -1, -4,
-5, 0, 11, 20, 25, 21, 14, 10, 12, 12, 5, -2, -2, 1, 5, 9, 10, 10, 7, 1, -8,
-14, -15, -13, -14, -17, -20, -19, -15, -17, -25, -34, -39, -43, -44, -46, -49,
-53, -46, -22, 8, 23, 11, -6, -7, 4, 11, 6, 4, 19, 34, 42, 43, 45, 48, 36, 13,
-7, -16, -10, -2, 2, -2, -13, -21, -28, -33, -41, -56, -65, -67, -58, -39, -21,
-7, -1, 1, 1, -2, -2, 1, 7, 14, 22, 35, 49, 62, 70, 69, 62, 52, 41, 36, 33, 35,
36, 36, 32, 26, 21, 15, 5, -9, -23, -28, -25, -15, -4, 4, 8, 9, 6, 0, -5, -6,
-4, -2, 4, 12, 22, 29, 29, 21, 9, -4, -13, -17, -10, 4, 17, 20, 12, 4, 2, 2, -4,
-15, -24, -23, -17, -9, -2, 4, 6, 2, -8, -19, -28, -34, -35, -34, -32, -27, -24,
-21, -19, -24, -39, -61, -61, -28, 17, 46, 37, 24, 36, 52, 54, 32, 15, 22, 33,
38, 39, 51, 66, 58, 30, -7, -29, -34, -35, -36, -45, -55, -50, -42, -34, -38,
-57, -71, -81, -79, -66, -44, -16, 6, 22, 32, 34, 39, 39, 38, 33, 29, 39, 57,
76, 85, 84, 80, 67, 49, 31, 17, 12, 5, 1, -2, -1, 6, 6, -1, -15, -29, -32, -24,
-9, 3, 12, 23, 34, 43, 43, 36, 31, 23, 16, 11, 11, 19, 25, 23, 13, -2, -14, -25,
-34, -38, -33, -23, -19, -22, -25, -18, -10, -14, -27, -39, -36, -25, -17, -12,
-5, 4, 10, 5, -9, -21, -27, -27, -29, -35, -37, -32, -25, -24, -37, -53, -45,
-9, 30, 40, 21, 16, 39, 60, 54, 28, 21, 36, 46, 44, 42, 55, 62, 43, 11, -16,
-26, -31, -38, -46, -61, -68, -63, -55, -51, -62, -77, -84, -85, -77, -61, -34,
-8, 10, 22, 31, 40, 47, 46, 41, 32, 32, 46, 61, 69, 67, 64, 57, 42, 24, 10, 6,
5, -4, -15, -21, -15, -4, 2, -2, -11, -12, -3, 10, 20, 26, 36, 45, 48, 47, 44,
46, 44, 33, 19, 9, 7, 7, 4, -2, -13, -22, -29, -35, -40, -39, -30, -23, -27,
-38, -42, -30, -16, -14, -24, -31, -25, -14, -6, -3, 1, 7, 3, -14, -34, -44,
-40, -39, -47, -57, -57, -47, -43, -44, -27, 8, 41, 42, 24, 26, 54, 76, 66, 41,
35, 51, 65, 64, 61, 64, 58, 37, 8, -13, -21, -27, -39, -57, -76, -83, -77, -64,
-62, -74, -86, -87, -78, -64, -47, -26, -6, 11, 24, 33, 44, 54, 58, 51, 38, 33,
43, 56, 56, 47, 40, 36, 27, 9, -8, -15, -17, -20, -26, -30, -23, -10, -2, -4,
-9, -3, 18, 34, 36, 33, 42, 62, 71, 61, 48, 46, 46, 36, 17, 5, 2, -1, -12, -27,
-36, -35, -32, -34, -39, -36, -22, -10, -12, -27, -34, -27, -19, -17, -19, -17,
-9, -2, 2, 4, 5, 2, -7, -21, -38, -50, -55, -61, -69, -74, -75, -75, -72, -47,
-1, 37, 43, 29, 32, 60, 82, 76, 52, 44, 58, 71, 77, 79, 83, 78, 55, 23, -1, -13,
-21, -34, -56, -77, -86, -80, -69, -63, -71, -85, -91, -84, -66, -47, -33, -17,
5, 31, 47, 55, 59, 62, 58, 44, 33, 33, 41, 43, 36, 29, 24, 18, 8, -8, -24, -35,
-40, -42, -41, -36, -22, -6, 2, 5, 7, 20, 36, 46, 45, 43, 51, 65, 66, 55, 45,
44, 40, 22, 3, -6, -9, -18, -33, -45, -49, -47, -44, -40, -31, -15, -3, -4, -16,
-21, -13, -5, -9, -18, -16, -3, 7, 12, 15, 15, 6, -11, -28, -43, -57, -69, -81,
-90, -94, -90, -80, -67, -42, -2, 34, 46, 36, 38, 65, 82, 69, 46, 48, 72, 84,
81, 78, 84, 77, 52, 21, -1, -13, -25, -43, -64, -77, -78, -69, -67, -69, -70,
-69, -67, -66, -55, -36, -19, -7, 7, 31, 51, 59, 60, 60, 55, 43, 33, 31, 31, 27,
20, 16, 11, 4, -5, -17, -30, -41, -45, -40, -35, -30, -18, 1, 16, 21, 24, 30,
42, 52, 55, 55, 54, 58, 63, 56, 43, 32, 26, 13, -5, -16, -19, -25, -40, -51,
-51, -45, -40, -34, -22, -8, 1, 3, 2, 2, 6, 5, -2, -9, -7, 2, 7, 9, 13, 18, 14,
-3, -23, -42, -62, -83, -99, -104, -102, -97, -90, -81, -57, -12, 42, 70, 56,
40, 62, 99, 105, 71, 50, 64, 88, 91, 78, 74, 71, 55, 20, -16, -37, -42, -48,
-68, -95, -104, -88, -66, -56, -58, -57, -50, -43, -30, -9, 9, 19, 26, 39, 54,
65, 69, 68, 60, 42, 27, 19, 19, 12, -2, -11, -15, -15, -18, -26, -36, -40, -37,
-35, -35, -30, -13, 12, 29, 34, 39, 48, 58, 59, 60, 64, 64, 54, 43, 40, 36, 29,
15, -1, -20, -34, -36, -33, -41, -57, -62, -53, -45, -37, -19, 8, 24, 22, 16,
19, 29, 35, 28, 11, -2, -1, 10, 19, 16, 10, 5, -3, -22, -45, -63, -78, -96,
-114, -119, -111, -94, -76, -63, -46, -7, 47, 82, 74, 57, 73, 105, 109, 80, 64,
77, 89, 81, 66, 61, 53, 29, -3, -36, -60, -71, -74, -85, -107, -117, -99, -72,
-58, -55, -47, -33, -22, -10, 7, 27, 40, 46, 52, 58, 66, 70, 67, 52, 29, 13, 6,
2, -6, -21, -32, -37, -34, -33, -41, -48, -43, -28, -20, -23, -20, 3, 32, 44,
41, 45, 60, 70, 64, 56, 58, 61, 53, 33, 20, 18, 14, 1, -22, -40, -48, -46, -43,
-50, -61, -61, -49, -37, -32, -18, 11, 34, 35, 24, 26, 39, 47, 41, 27, 14, 10,
12, 16, 13, 4, -3, -11, -25, -45, -64, -80, -95, -106, -112, -105, -91, -72,
-56, -47, -37, -9, 43, 87, 92, 74, 81, 111, 127, 107, 80, 74, 76, 65, 44, 32,
23, 8, -18, -50, -73, -83, -81, -86, -102, -112, -102, -75, -52, -40, -32, -21,
-8, 5, 20, 37, 53, 60, 60, 59, 65, 72, 68, 47, 20, 3, -5, -10, -20, -33, -41,
-45, -47, -48, -48, -43, -34, -23, -18, -16, -4, 20, 40, 45, 43, 49, 62, 69, 63,
54, 48, 45, 39, 29, 16, 4, -2, -8, -25, -40, -44, -40, -43, -53, -54, -45, -35,
-32, -29, -15, 4, 22, 34, 39, 38, 41, 50, 53, 45, 29, 17, 9, 3, -4, -11, -16,
-21, -30, -44, -60, -69, -72, -76, -88, -95, -86, -65, -48, -40, -33, -22, -10,
10, 48, 92, 112, 98, 89, 106, 123, 110, 73, 49, 38, 25, 7, -3, -7, -20, -42,
-64, -82, -92, -92, -87, -90, -102, -99, -73, -40, -21, -15, -6, 7, 18, 32, 49,
65, 68, 65, 62, 63, 62, 49, 29, 10, -4, -16, -29, -40, -45, -47, -53, -57, -50,
-36, -26, -21, -12, 0, 8, 13, 24, 40, 51, 49, 47, 53, 60, 58, 48, 36, 24, 10, 2,
2, -1, -13, -26, -27, -25, -32, -40, -38, -31, -34, -41, -35, -23, -16, -13, 2,
25, 38, 38, 36, 45, 56, 55, 41, 22, 9, 4, -1, -12, -24, -29, -31, -38, -47, -53,
-52, -53, -59, -64, -65, -62, -53, -39, -26, -18, -13, -6, 2, 7, 21, 57, 93,
102, 82, 72, 90, 101, 80, 40, 13, 3, -8, -21, -27, -29, -39, -56, -69, -79, -81,
-77, -73, -76, -86, -82, -56, -25, -5, 3, 12, 26, 37, 49, 60, 70, 70, 59, 49,
45, 44, 34, 13, -9, -27, -39, -46, -50, -51, -52, -50, -42, -26, -12, -8, -7, 2,
12, 15, 14, 23, 38, 44, 41, 42, 53, 60, 50, 34, 25, 20, 11, -4, -21, -34, -35,
-28, -27, -33, -35, -24, -12, -15, -24, -22, -12, -13, -20, -15, 6, 28, 38, 42,
43, 44, 48, 49, 39, 21, 5, -4, -11, -19, -23, -23, -27, -33, -35, -33, -33, -36,
-39, -39, -39, -34, -24, -16, -12, -8, 0, 7, 9, 8, 8, 4, -3, -2, 25, 61, 78, 66,
52, 59, 68, 52, 15, -15, -27, -39, -50, -53, -45, -40, -45, -54, -61, -61, -52,
-43, -44, -53, -50, -29, -3, 15, 25, 35, 42, 43, 42, 46, 47, 38, 21, 10, 8, 9,
1, -12, -22, -27, -30, -33, -34, -30, -24, -23, -22, -17, -6, 2, 7, 12, 16, 19,
22, 32, 45, 52, 49, 44, 42, 40, 33, 24, 13, -1, -18, -28, -29, -31, -35, -36,
-31, -25, -20, -14, -7, -5, -8, -12, -10, -6, -1, 4, 15, 34, 48, 47, 37, 33, 37,
32, 14, -4, -13, -14, -17, -17, -12, -3, 3, 2, -3, -8, -9, -10, -15, -23, -25,
-20, -12, -4, 3, 9, 10, 7, 4, 2, 0, -6, -14, -24, -31, -36, -37, -19, 17, 50,
49, 22, 16, 36, 42, 10, -29, -38, -33, -33, -34, -17, 1, 0, -9, -16, -20, -22,
-22, -24, -36, -46, -38, -15, 2, 4, 5, 12, 13, 8, 8, 17, 22, 16, 9, 7, 12, 17,
16, 5, -10, -17, -14, -9, -9, -13, -9, -1, 6, 13, 17, 18, 18, 17, 14, 10, 13,
19, 20, 13, 9, 15, 25, 23, 12, 5, 4, -2, -11, -16, -19, -21, -24, -25, -23, -20,
-17, -13, -6, -3, -6, -7, -2, 5, 7, 7, 13, 27, 36, 35, 31, 33, 37, 33, 21, 7,
-4, -5, 1, 5, 3, 4, 12, 17, 15, 6, -1, -8, -16, -22, -24, -20, -13, -6, -1, 0,
1, 3, 3, -6, -17, -22, -26, -31, -35, -35, -33, -33, -39, -40, -17, 23, 50, 42,
19, 25, 46, 43, 10, -15, -14, -12, -19, -20, -5, 7, 2, -11, -23, -31, -33, -30,
-32, -47, -55, -38, -10, 3, 1, 1, 8, 12, 11, 16, 24, 27, 22, 18, 18, 24, 30, 31,
23, 6, -3, 1, 9, 6, -5, -11, -8, -4, -1, 2, 9, 17, 16, 7, 3, 11, 24, 25, 13, 2,
5, 12, 13, 7, 0, -5, -10, -13, -14, -16, -15, -16, -19, -22, -20, -14, -9, -8,
-10, -9, -4, 3, 9, 16, 24, 39, 53, 57, 52, 47, 45, 39, 27, 14, 2, -4, -5, -3,
-3, -3, 2, 7, 6, -1, -6, -4, -3, -8, -13, -12, -6, -1, 2, 5, 7, 9, 10, 11, 9, 6,
4, -1, -7, -15, -16, -14, -15, -21, -28, -33, -37, -43, -52, -61, -54, -21, 18,
29, 16, 20, 47, 59, 37, 8, 1, 3, -4, -11, -1, 12, 11, 6, -1, -11, -20, -19, -17,
-32, -51, -47, -24, -8, -9, -8, 2, 9, 8, 13, 24, 32, 35, 37, 40, 43, 47, 49, 42,
26, 11, 6, 6, 0, -10, -14, -10, -7, -7, -9, -10, -7, -6, -12, -20, -19, -11, -5,
-7, -6, 6, 21, 28, 27, 27, 27, 23, 16, 9, 1, -5, -8, -7, -3, 0, 2, 4, 7, 5, -4,
-12, -16, -19, -23, -25, -12, 12, 31, 35, 33, 41, 53, 52, 37, 19, 8, 2, 1, 1, 2,
6, 13, 20, 17, 9, 7, 9, 3, -11, -17, -14, -6, 0, 1, 1, 3, 6, 6, 2, -5, -9, -9,
-12, -17, -16, -8, -4, -5, -9, -10, -12, -16, -23, -34, -43, -48, -49, -51, -57,
-47, -12, 28, 40, 27, 27, 48, 56, 33, 3, -3, 2, -1, -5, 6, 22, 25, 18, 7, -5,
-15, -15, -15, -28, -45, -47, -27, -6, 1, -1, 3, 10, 14, 17, 24, 31, 35, 31, 22,
20, 27, 30, 19, 0, -14, -15, -11, -14, -23, -26, -23, -18, -16, -16, -13, -5, 0,
-3, -7, 0, 14, 21, 19, 14, 17, 24, 25, 21, 17, 14, 10, 5, 1, -1, -2, -4, -5, -5,
-5, -6, -5, -4, -8, -16, -21, -21, -20, -19, -14, 0, 17, 29, 32, 34, 39, 45, 47,
39, 25, 15, 14, 16, 12, 5, 3, 5, 4, -2, -8, -10, -13, -17, -24, -28, -25, -14,
-4, -1, 0, 6, 15, 22, 22, 17, 12, 9, 5, 1, 0, 0, 1, -1, -4, -5, -5, -5, -10,
-19, -27, -31, -33, -35, -37, -38, -37, -36, -35, -34, -36, -37, -24, 6, 33, 41,
38, 47, 65, 65, 45, 28, 24, 19, 4, -6, -3, 4, 1, -13, -27, -37, -41, -41, -46,
-57, -60, -48, -30, -20, -12, 2, 15, 18, 18, 24, 36, 40, 35, 28, 24, 24, 21, 13,
0, -12, -17, -18, -22, -29, -30, -26, -23, -23, -21, -15, -9, -6, -4, -1, 4, 9,
14, 16, 13, 13, 19, 25, 27, 24, 20, 18, 17, 13, 5, -1, -4, -8, -14, -18, -19,
-17, -17, -19, -19, -18, -15, -15, -15, -13, -6, 7, 20, 26, 26, 27, 31, 33, 27,
19, 13, 7, 1, -1, 1, 3, 4, 4, 2, -2, -5, -7, -10, -17, -22, -21, -16, -11, -6,
-1, 3, 7, 11, 17, 19, 18, 17, 16, 13, 12, 14, 17, 14, 5, 0, 0, 0, -4, -11, -18,
-19, -17, -17, -20, -20, -16, -12, -13, -15, -13, -8, -7, -13, -19, -19, -17,
-19, -24, -24, -20, -9, 8, 25, 30, 23, 22, 29, 27, 12, -2, -6, -10, -18, -20,
-12, -6, -7, -9, -11, -14, -17, -15, -14, -18, -22, -17, -7, -1, 3, 10, 17, 19,
16, 16, 16, 15, 11, 3, -5, -8, -5, -7, -13, -19, -16, -10, -10, -13, -11, -5,
-2, -5, -8, -5, 0, 1, 0, 2, 6, 11, 13, 12, 12, 13, 13, 12, 9, 7, 4, 2, -1, -3,
-5, -6, -5, -5, -7, -8, -7, -4, -3, -6, -9, -10, -9, -10, -10, -9, -4, 4, 11,
15, 16, 17, 19, 18, 13, 6, 1, -4, -7, -8, -10, -10, -8, -5, -2, 0, -1, -5, -9,
-10, -13, -14, -11, -5, -2, -1, 3, 8, 11, 10, 8, 6, 3, 2, 2, 2, 3, 6, 9, 7, 4,
5, 6, 4, -1, -6, -6, -7, -8, -10, -9, -8, -9, -9, -8, -8, -9, -9, -9, -9, -11,
-13, -13, -12, -12, -14, -16, -19, -24, -28, -30, -30, -30, -24, -7, 14, 21, 15,
17, 28, 27, 11, 0, 1, 1, -5, -3, 6, 11, 5, 4, 4, -6, -17, -18, -14, -22, -30,
-26, -13, -8, -9, -2, 6, 4, -2, 2, 9, 8, 4, 6, 10, 9, 8, 10, 9, -1, -10, -9, -5,
-8, -10, -7, -1, 2, 2, 6, 9, 9, 8, 8, 7, 4, 3, 5, 3, 0, 0, 4, 7, 7, 6, 7, 9, 8,
5, 3, 2, 0, 0, 1, 2, 3, 3, 2, -2, -6, -9, -10, -11, -13, -13, -8, 1, 9, 12, 14,
14, 13, 11, 8, 3, -3, -7, -9, -9, -9, -8, -5, -4, -6, -10, -10, -6, -2, 0, 0, 0,
5, 10, 12, 10, 9, 8, 7, 7, 5, 5, 4, 2, 0, 0, 4, 6, 6, 4, 2, 2, 2, 2, -2, -4, -5,
-5, -6, -6, -4, -2, -3, -7, -10, -9, -8, -8, -11, -13, -11, -8, -4, -2, -1, 0,
0, 0, -2, -6, -10, -14, -18, -25, -30, -32, -31, -30, -30, -29, -21, -2, 17, 21,
14, 18, 30, 27, 13, 6, 8, 3, -7, -5, 4, 4, -3, -4, -8, -18, -24, -19, -18, -30,
-34, -21, -9, -8, -8, 1, 6, 0, -3, 4, 9, 4, 0, 2, 2, 2, 5, 9, 4, -2, -3, 2, 2,
-1, -1, 1, 0, -2, 0, 5, 5, 2, 2, 5, 4, 2, 6, 8, 6, 3, 6, 11, 10, 8, 7, 9, 8, 6,
7, 6, 3, 2, 3, 2, -1, -2, -1, -4, -9, -12, -12, -13, -17, -19, -17, -12, -6, -1,
1, 2, 2, 5, 5, 2, -2, -4, -4, -3, -3, -3, -1, 0, -2, -5, -7, -6, -6, -8, -10,
-8, -5, -2, 3, 6, 6, 5, 5, 6, 2, -1, 0, 1, -1, -3, 0, 4, 4, 1, 0, 0, 0, 1, 2, 1,
0, 1, 3, 3, 2, 3, 2, 0, -4, -7, -7, -7, -8, -9, -9, -8, -6, -4, -4, -4, -5, -4,
-3, -5, -6, -5, -6, -8, -10, -11, -13, -15, -17, -19, -22, -22, -20, -16, -14,
-14, -12, -8, -6, -7, -7, -4, 2, 4, 3, 3, 8, 11, 7, 1, -2, -3, -7, -11, -12,
-13, -13, -14, -13, -14, -13, -9, -7, -6, -7, -5, -2, -2, -3, -3, -1, 0, 0, 1,
3, 4, 4, 5, 5, 2, 0, 0, -1, -5, -7, -5, -3, -2, -1, 3, 5, 5, 5, 6, 6, 4, 3, 3,
3, 2, 3, 4, 3, 3, 3, 4, 3, 2, 1, 0, -2, -2, -2, -1, -1, -1, -1, 0, -1, -1, -3,
-4, -4, -5, -7, -7, -6, -6, -5, -3, 0, 2, 3, 5, 5, 4, 3, 2, 0, -3, -6, -7, -8,
-8, -8, -7, -6, -6, -7, -6, -4, -2, -2, -2, -1, 1, 4, 7, 8, 7, 7, 9, 10, 9, 7,
6, 7, 6, 5, 5, 5, 4, 3, 2, 2, 2, 3, 2, 0, -1, -1, 0, 0, -1, -1, -1, 0, 1, 1, 2,
2, 2, 2, 2, 3, 4, 4, 1, 0, 0, 0, 0, -2, -3, -4, -3, -2, -2, -2, -3, -1, -1, -2,
-2, -1, 0, -3, -4, -4, -3, -2, -2, -3, -3, -2, -1, -1, -2, -3, -3, -4, -3, -1,
-1, 0, 1, 4, 3, 2, 3, 2, -1, -4, -2, -2, -4, -4, -2, -2, -3, 0, 2, 2, 0, 0, 1,
1, 2, 4, 5, 5, 5, 5, 6, 5, 5, 5, 4, 3, 3, 4, 5, 5, 4, 4, 4, 5, 5, 6, 6, 7, 7, 7,
7, 7, 6, 5, 5, 4, 4, 5, 5, 4, 3, 4, 4, 3, 2, 1, 1, -1, -2, -3, -4, -4, -4, -4,
-4, -5, -4, -3, -2, -2, -2, 0, 0, 0, -1, 0, 1, 1, 0, 1, 2, 2, 3, 4, 3, 3, 3, 3,
3, 3, 5, 5, 5, 7, 9, 8, 7, 8, 6, 4, 3, 3, 2, 1, 1, 3, 4, 4, 5, 6, 7, 7, 8, 7, 6,
5, 6, 5, 3, 2, 2, 2, 2, 1, 2, 2, 2, 3, 3, 3, 2, 2, 1, 0, 0, 1, 2, 2, 2, 2, 2, 2,
1, 0, -1, -2, -2, -3, -4, -4, -4, -4, -5, -5, -5, -4, -4, -4, -4, -4, -3, -1, 2,
6, 8, 9, 10, 12, 13, 12, 8, 6, 4, 2, 1, 1, 2, 1, 0, 0, 2, 2, 1, 0, 0, -2, -2,
-1, 0, 1, 1, 2, 3, 3, 4, 5, 5, 3, 3, 4, 4, 4, 4, 4, 3, 2, 3, 4, 4, 4, 4, 4, 5,
6, 6, 5, 4, 3, 3, 4, 3, 3, 4, 4, 4, 5, 7, 8, 8, 7, 7, 7, 7, 7, 7, 6, 5, 5, 5, 4,
3, 2, 2, 1, 0, 0, 0, 0, 0, 1, 1, 2, 4, 5, 4, 4, 4, 4, 3, 1, 0, 0, -1, -1, 0, 1,
1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 3, 3, 3, 3, 4, 3, 2, 3, 2, 0, 0, 2, 2, 2, 2, 2,
2, 1, 2, 2, 1, 0, 1, 1, 0, -1, 0, 0, -1, 0, 1, 2, 0, 2, 3, 3, 2, 2, 3, 2, 2, 2,
2, 1, 1, 3, 3, 1, 0, 1, 1, 0, -1, 0, 0, -1, -1, 0, 0, 1, 2, 3, 3, 3, 4, 4, 4, 3,
2, 1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -3, -3, -4, -4, -3, -3, -3, -3,
-3, -4, -4, -4, -4, -6, -6, -6, -6, -6, -6, -5, -5, -6, -6, -5, -5, -5, -5, -6,
-6, -6, -6, -5, -6, -5, -5, -4, -4, -3, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1,
0, 0, 0, -1, -2, -2, -2, -3, -4, -4, -4, -4, -4, -3, -3, -3, -3, -2, -2, -2, -1,
-1, -1, -1, -1, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1,
-1, -2, -1, 0, -1, 0, 0, 0, 0, 0, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 0, 1, 1, 2, 1,
1, 0, 0, -1, 0, 0, 0, 1, 1, 2, 1, 1, 1, 1, 0, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-2, -2, -3, -3, -4, -3, -3, -3, -3, -4, -4, -4, -4, -5, -5, -4, -4, -3, -3, -3,
-3, -4, -4, -4, -4, -4, -4, -5, -5, -4, -4, -4, -5, -5, -5, -5, -5, -6, -6, -6,
-5, -5, -5, -4, -3, -3, -3, -2, -1, 0, 0, 0, -1, -1, -2, -3, -4, -4, -4, -4, -3,
-2, -2, -2, -2, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, -2, -1,
-1, 0, 0, -1, -1, -1, -1, -1, -2, -3, -2, -2, -1, -1, -1, -1, -1, -1, -1, -2,
-2, -2, -2, -2, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, -1,
-1, -1, -1, -2, -2, -2, -2, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1,
1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };

#endif /* GA_H_ */
