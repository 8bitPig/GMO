#ifndef DRMONE_H_
#define DRMONE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define DRMONE_NUM_CELLS 1139
#define DRMONE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) DRMONE_DATA [] = {0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, 3, 19, 39, 59, 75, 88, 97, 103, 106, 108, 107, 106, 103, 98, 94, 88,
81, 74, 67, 59, 51, 42, 34, 25, 16, 7, -1, -10, -19, -27, -35, -43, -51, -59,
-66, -73, -80, -86, -91, -97, -101, -106, -110, -113, -116, -118, -119, -121,
-121, -121, -121, -120, -118, -116, -113, -110, -107, -103, -98, -93, -88, -82,
-77, -70, -64, -57, -50, -43, -36, -29, -22, -14, -7, 0, 7, 15, 22, 28, 35, 41,
48, 53, 59, 64, 69, 74, 79, 83, 86, 89, 92, 95, 97, 99, 100, 101, 102, 102, 102,
101, 100, 99, 97, 95, 92, 90, 86, 83, 79, 75, 70, 66, 61, 55, 50, 44, 39, 33,
27, 20, 14, 8, 1, -5, -11, -17, -23, -30, -35, -41, -47, -52, -57, -62, -66,
-70, -74, -78, -81, -84, -86, -88, -90, -91, -92, -92, -92, -92, -91, -90, -89,
-87, -84, -82, -79, -75, -72, -68, -64, -60, -55, -50, -45, -40, -35, -30, -24,
-19, -13, -8, -2, 3, 8, 14, 19, 24, 29, 33, 38, 42, 46, 50, 54, 57, 60, 63, 66,
68, 70, 72, 73, 74, 75, 76, 76, 76, 75, 75, 74, 72, 71, 69, 67, 65, 62, 59, 56,
53, 49, 45, 41, 37, 33, 29, 24, 20, 15, 11, 6, 1, -4, -8, -13, -17, -22, -26,
-30, -35, -38, -42, -46, -49, -52, -55, -58, -60, -62, -64, -65, -67, -67, -68,
-69, -69, -68, -68, -67, -66, -64, -63, -61, -58, -56, -53, -50, -47, -44, -41,
-37, -34, -30, -26, -22, -18, -14, -10, -6, -2, 2, 6, 10, 14, 18, 21, 25, 28,
32, 35, 38, 40, 43, 45, 48, 50, 51, 53, 54, 55, 56, 57, 57, 57, 57, 57, 56, 56,
55, 53, 52, 50, 49, 47, 44, 42, 40, 37, 34, 31, 28, 25, 22, 18, 15, 12, 8, 5, 1,
-2, -6, -9, -13, -16, -19, -22, -25, -28, -31, -33, -36, -38, -40, -42, -44,
-45, -47, -48, -49, -50, -50, -50, -50, -50, -50, -49, -48, -47, -46, -45, -43,
-41, -40, -37, -35, -33, -30, -28, -25, -22, -19, -17, -14, -11, -8, -5, -2, 1,
4, 7, 10, 13, 16, 18, 21, 23, 26, 28, 30, 32, 34, 35, 37, 38, 39, 40, 41, 42,
42, 42, 43, 42, 42, 42, 41, 41, 40, 39, 37, 36, 34, 33, 31, 29, 27, 25, 23, 21,
18, 16, 13, 11, 8, 6, 3, 0, -2, -5, -7, -10, -12, -15, -17, -20, -22, -24, -26,
-27, -29, -31, -32, -33, -34, -35, -36, -37, -38, -38, -38, -38, -38, -38, -37,
-37, -36, -35, -34, -33, -32, -30, -29, -27, -25, -23, -22, -20, -18, -15, -13,
-11, -9, -7, -4, -2, 0, 2, 5, 7, 9, 11, 13, 15, 17, 18, 20, 22, 23, 24, 26, 27,
28, 29, 29, 30, 30, 31, 31, 31, 31, 31, 30, 30, 29, 29, 28, 27, 26, 25, 24, 22,
21, 19, 18, 16, 15, 13, 11, 9, 7, 5, 3, 2, 0, -2, -4, -6, -8, -10, -11, -13,
-15, -16, -18, -19, -21, -22, -23, -24, -25, -26, -27, -27, -28, -28, -28, -29,
-29, -28, -28, -28, -27, -27, -26, -26, -25, -24, -23, -21, -20, -19, -18, -16,
-15, -13, -12, -10, -8, -7, -5, -3, -2, 0, 2, 3, 5, 6, 8, 10, 11, 12, 14, 15,
16, 17, 18, 19, 20, 21, 21, 22, 22, 23, 23, 23, 23, 23, 23, 23, 23, 22, 22, 21,
21, 20, 19, 18, 17, 16, 15, 14, 13, 11, 10, 9, 7, 6, 5, 3, 2, 0, -1, -3, -4, -5,
-7, -8, -9, -11, -12, -13, -14, -15, -16, -17, -18, -18, -19, -19, -20, -20,
-21, -21, -21, -21, -21, -21, -20, -20, -20, -19, -19, -18, -17, -17, -16, -15,
-14, -13, -12, -11, -9, -8, -7, -6, -4, -3, -2, -1, 1, 2, 3, 4, 5, 7, 8, 9, 10,
11, 12, 13, 13, 14, 15, 15, 16, 16, 17, 17, 17, 18, 18, 18, 18, 18, 17, 17, 17,
16, 16, 15, 15, 14, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1, -2,
-3, -4, -5, -6, -7, -8, -9, -10, -11, -11, -12, -13, -13, -14, -14, -15, -15,
-15, -16, -16, -16, -16, -16, -16, -15, -15, -15, -15, -14, -14, -13, -13, -12,
-11, -11, -10, -9, -8, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 1, 2, 3, 4, 5, 6,
6, 7, 8, 8, 9, 10, 10, 11, 11, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
12, 11, 11, 10, 10, 9, 9, 8, 8, 7, 6, 6, 5, 4, 3, 3, 2, 1, 0, -1, -1, -2, -3,
-4, -5, -5, -6, -7, -7, -8, -9, -9, -10, -10, -11, -11, -11, -12, -12, -12, -12,
-13, -13, -13, -13, -13, -12, -12, -12, -12, -11, -11, -11, -10, -10, -9, -9,
-8, -7, -7, -6, -6, -5, -4, -3, -3, -2, -1, -1, 0, 1, 1, 2, 3, 3, 4, 5, 5, 6, 6,
7, 7, 7, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 8, 8, 7, 7, 7, 6, 6, 5,
5, 4, 4, 3, 2, 2, 1, 1, 0, 0, -1, -2, -2, -3, -3, -4, -4, -5, -5, -6, -6, -6,
-7, -7, -7, -8, -8, -8, -8, -9, -9, -9, -9, -9, -9, -9, -9, -9, -8, -8, -8, -8,
-7, -7, -7, -6, -6, -6, -5, -5, -4, -4, -3, -3, -2, -2, -1, -1, 0, 0, 1, 1, 2,
2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5,
5, 5, 4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -2, -2,
-2, -2, -3, -3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4,
-3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };

#endif /* DRMONE_H_ */