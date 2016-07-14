#ifndef DTEIGHT_H_
#define DTEIGHT_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define DTEIGHT_NUM_CELLS 3952
#define DTEIGHT_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) DTEIGHT_DATA [] = {0, 0,
-4, -4, 12, 9, -29, 38, -14, 42, 26, -59, 32, 15, -37, 106, -58, -76, 87, -24,
49, -12, -47, 22, 38, -58, 25, -12, -27, 81, -27, -30, 35, 72, -2, -54, 5, 11,
-54, 26, -35, -70, -14, -26, -38, -3, -18, -35, -11, -43, 22, -64, -23, 67, -69,
-26, 6, -61, 9, -20, -52, 15, -12, -40, 41, 21, -7, 2, -6, 23, -22, 22, 27, -33,
-13, 29, 7, 22, 1, 35, 41, -1, 68, 27, 2, 20, 73, -15, -6, 37, 43, 82, 5, 37, 9,
31, 29, -8, 22, -5, 26, -7, -14, 29, -19, -8, -3, -21, -5, -36, -59, 19, -3,
-66, -10, -2, -37, -12, 15, -60, 8, -11, -51, -33, 12, 3, -76, 3, -55, 0, -6,
-77, -3, 58, -11, -25, 51, -3, -29, 4, 22, 94, 27, -1, 79, 49, 50, 3, 12, 15,
-28, -35, -12, -26, -22, -46, -3, 36, -7, -42, 13, -13, -8, -4, -77, -8, -36, 2,
20, -56, -37, 27, 0, 2, -36, -4, 21, 27, 52, -16, -10, 28, 6, -47, 0, 8, 23, 50,
-45, 12, 29, 20, -24, -53, 54, -37, -10, 1, 5, -4, -38, 22, -8, -98, -48, 34,
-14, -59, 27, 59, -35, -33, -17, 23, 2, 14, 14, 3, 18, 11, -20, 5, 38, -34, 5,
-20, 7, 7, -64, 23, 50, 0, 3, 55, 12, -16, 4, 3, 40, -14, -30, 21, 60, 16, -47,
60, -21, -45, 0, -22, 5, 21, -29, 11, 61, -55, 18, -4, -15, 23, -29, 5, 32, -17,
-39, 1, -51, -31, 61, -29, -14, 4, -3, 5, -35, 18, 12, 3, 8, 27, -13, -33, 10,
18, 33, 28, -10, 54, 27, -22, 18, 7, -11, 16, -3, 5, 44, -29, 5, 7, -17, -13,
-9, -33, -7, -2, -20, -3, -43, -16, 20, -7, -21, 15, -37, 31, -3, -36, 33, 7, 0,
-36, 16, 24, 17, -9, 39, 27, 6, 35, -4, 26, 14, -37, -1, 29, -7, 16, -49, -29,
34, 2, -43, -11, 15, -20, -16, -6, 21, -18, -39, -15, 35, -2, -49, 6, -3, 18,
-7, -26, 45, 22, 1, 3, 22, -1, -1, -3, 15, 18, 4, 6, -17, 13, 4, -57, -34, 45,
-22, -36, 20, 13, -43, -22, -12, 15, 8, -29, 22, 6, -1, 11, -6, -2, 37, -10,
-31, 8, 38, 25, -4, -8, 42, -14, -36, 44, -23, -4, -10, -37, 18, -5, -28, -3, 7,
-30, -22, -18, -26, -26, 10, 18, 3, 35, -4, -3, -14, -2, 25, -15, 27, 24, -6, 3,
-11, 19, -14, -22, -14, 4, 28, 22, -23, 7, 32, -27, -2, -6, 5, -26, 1, 18, -9,
-23, 11, -18, -11, 23, -50, 4, 4, 5, 29, -30, -26, 21, -1, -5, 5, 1, -17, -1,
14, -7, 2, -23, -4, 16, 13, -24, 4, 11, -5, 20, -27, 6, 25, 31, -10, 21, -13,
-12, 36, -36, 15, 8, -31, -6, 28, -4, -32, -39, 5, 6, -25, -30, 5, 2, -10, -12,
-4, 24, -5, -3, 19, 11, -41, 24, 7, 7, 4, 2, 37, -1, 23, 6, -18, -12, 28, -11,
-11, 31, -19, -2, 6, 5, -10, -30, -8, -4, 12, -33, 4, 9, -49, 14, -10, -54, 8,
47, -14, 6, 2, -28, 29, 17, 18, 7, -21, 7, 24, -6, 12, 30, -2, -19, 25, 0, -8,
5, -10, 2, -32, -25, 9, 31, -32, -10, 20, -17, -11, -13, -11, 8, -5, 10, 16, 12,
5, -16, 29, 3, 13, 1, -26, 15, 10, 1, 10, 0, -49, -9, 18, -36, 9, -20, -5, 4,
-7, 28, -51, -9, 31, 15, -18, -25, 18, -6, 30, 4, 7, 15, -29, 25, 1, 20, 6, 12,
31, -3, -7, 9, 31, -27, -22, 6, 17, -4, -45, -6, 19, -37, -17, 5, -11, -39, 6,
-2, -24, 15, -38, 22, -3, -11, 32, 8, 2, -1, 46, 1, 4, 19, -17, 1, 1, 27, 33,
-34, -7, 22, 8, -11, -14, 6, -25, 1, -20, 12, -14, -36, 14, -7, -10, -22, 13, 2,
-16, 4, 25, 28, -16, -18, 16, 24, -7, 15, 37, -24, -12, -3, 34, 1, -31, 7, -8,
-1, -11, -3, 14, -23, -16, 10, -5, -6, -9, 4, -5, 40, -11, -12, -3, -7, 31, -10,
6, -11, 12, 1, 21, 12, -18, 1, -7, 16, 10, -6, -21, -2, 9, -8, -15, -4, -12,
-14, -17, 15, 13, -27, -6, 0, 16, -4, 3, 15, 0, -5, 3, 12, 14, 0, 3, 1, 11, 29,
-1, 1, -10, 3, -10, 10, 5, -27, -5, 3, -9, -1, -3, -23, -3, 10, -6, 12, -13,
-29, 27, -2, -9, -7, 11, -16, 12, 32, -13, 0, -8, -10, -2, 22, -5, 5, 8, -14,
18, 6, -2, 14, -10, -2, 10, 1, -8, -18, 5, 2, -11, -1, -15, 4, 16, -20, 4, 23,
-5, -24, -7, 22, 11, 12, -18, -3, 9, -7, 25, 0, -13, 0, 11, -9, -1, -24, -7, 19,
-8, 10, -8, -30, 1, 14, 0, -12, -14, -7, 7, 18, -2, 13, -3, -17, 4, 12, -12, 26,
24, -21, 10, 12, -16, -10, 8, 0, 4, -5, 3, 4, -2, -4, -9, -20, -1, -6, 2, -6,
-10, 21, -3, -11, -1, -14, -11, 33, -1, -11, -5, 0, 10, 7, -5, -12, 9, -16, 9,
2, -7, -6, 13, 15, -17, -2, -4, 10, -13, 11, 9, -7, -1, -6, 17, 3, -10, 0, -6,
-8, 12, 6, 7, -10, -9, 4, 4, -10, -8, 2, 12, -7, -22, 32, -4, -17, 16, 2, -11,
-17, 10, -8, -1, 7, -3, 11, -23, -6, 18, 6, -1, -2, 5, -1, -3, 7, 12, -3, -12,
13, 12, -16, -2, 17, -1, 0, -9, -3, -6, -11, 2, -1, -12, -8, 2, -6, 6, 3, 9,
-11, -14, -9, 0, 14, 2, -4, 7, 1, -6, 2, 10, 3, -6, 3, -5, 8, -3, -2, 11, -10,
-4, 7, 6, -5, 0, 14, 1, 2, -16, -7, 3, -1, -4, -4, 2, -14, 2, 4, -7, 6, 4, -10,
3, -1, 8, -1, 0, 11, -6, -5, -3, 3, -5, 1, 3, 9, -1, -18, 4, 13, -2, -10, -1,
-7, -5, 4, 9, 4, 2, -16, -4, 18, -2, -6, 5, 8, -7, 7, -6, -1, 2, -17, -1, 17,
-16, -11, 21, -5, 4, 0, -13, -8, -1, -1, 2, 3, -2, -3, 9, 0, -8, 3, 3, -2, 3, 5,
-12, 2, 10, -6, -7, 7, -5, 1, 8, -10, 17, 7, -19, 5, 1, 0, 0, -2, -4, -8, -2,
-5, 7, 1, -10, -2, -2, -2, -4, 5, -4, -15, 9, 6, -7, 2, 4, -7, 2, 10, -3, 1, 2,
0, 10, -6, 0, 5, -4, -1, 7, 6, -11, -5, 5, -3, -1, -4, 0, 1, -9, -1, -7, 13, -6,
-9, 6, -2, 1, 2, 5, -12, -1, 6, -1, 2, -3, -1, 4, 6, -5, -8, 5, -5, 3, 7, 1, -1,
-10, -4, 9, 7, -1, -12, 0, 2, -1, 4, -3, 2, -8, 5, -1, 0, -7, -2, 11, -5, -4,
-2, 3, -3, 3, 2, -2, -1, -2, 1, 3, 0, 2, -2, -4, 0, -6, 7, -1, -2, 3, -8, -2, 5,
-1, -9, 6, 1, -1, -2, 0, 1, -5, 3, 5, 3, -5, -5, 6, 8, -7, 1, 2, -5, -6, -1, 10,
-3, -2, -3, -5, 4, -1, -1, -4, 4, -3, -3, 5, -2, 1, 0, -7, 0, 7, -8, -3, 3, 10,
-4, -8, 3, -3, -1, -1, 8, 5, -8, -5, 9, 0, -7, -4, 1, -1, 1, -1, -1, 5, -1, -6,
1, 9, -9, -1, 1, -2, 6, -3, -5, -1, 5, -3, 1, 4, -6, 2, 0, -6, 7, 0, -9, -1, -1,
0, 3, -3, -3, 1, -2, 2, -4, 1, 0, -2, 7, -3, -1, 4, -2, 3, 1, 1, -3, -4, 7, -6,
0, 0, -4, 4, -5, -1, 1, 4, -1, -4, 1, -1, 1, -4, 2, 0, -9, -1, 4, 5, -6, -6, 12,
1, -6, -5, 1, 3, -2, 7, -3, 3, -4, -7, 9, -1, -5, 4, 0, -2, 4, 0, 0, -4, -4, 3,
-2, 0, 1, -1, 2, -1, 1, -2, -5, -2, 6, -1, -7, -1, 2, -2, -3, -2, 3, 7, -8, 0,
7, 1, -3, 1, 2, -6, 2, 7, -1, -5, -3, 3, 2, -4, -3, 1, -1, -4, 4, 2, -8, -2, 4,
2, -1, -2, -1, 4, 4, -4, 2, -2, -3, 1, 4, 0, -2, 0, 0, -3, -1, 2, -4, 2, -3, 3,
2, -6, 0, -1, 2, -1, -4, 2, 0, 0, 2, -1, -2, 0, 2, 2, -2, -2, 2, 3, -4, -3, 2,
2, -2, 0, 2, -3, 2, -3, 2, 2, -3, 2, -2, -1, -4, -2, 1, -2, 2, 2, -2, 0, 0, 0,
-1, 0, -2, 0, 4, -1, 2, 1, -4, 1, 1, -2, -2, 2, -1, 1, -1, -5, 1, -1, 1, -2, 0,
3, -2, -1, 2, -2, -2, -1, -2, 1, -1, -1, 2, -1, 0, -1, -1, 1, -1, 0, 1, -1, 2,
1, -2, 1, -1, 0, -1, -3, 1, 1, -2, -2, 1, 2, -4, -2, 2, -2, 0, 2, -1, -1, 0, 1,
-1, 1, -1, -2, 1, 1, 0, 0, 1, -1, 1, -2, -2, 3, 0, -3, 0, 1, 0, -1, -2, -1, 2,
-1, -2, 0, -1, 0, -1, 2, -2, -3, 3, 0, -1, 2, -1, 0, 0, -2, 1, 1, -1, 0, 0, -1,
-1, -1, -1, -1, 0, 1, 0, 0, 0, -1, -1, 0, 0, -1, -1, -1, 0, 1, -1, -1, -1, -1,
0, -1, -1, 0, 0, -1, -1, 1, -1, -2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -2, -1, 1, -1,
-1, 0, 2, -2, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, -1, -1, 1, 0, -1, 0, 0, 0, 0,
-1, 0, -1, -1, 1, 0, -1, -1, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0,
0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, -1, -1,
0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0,
-1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
0, -1, 0, -1, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
-1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, 0, 0, -1, 0, -1, 0, -1, -1, 0,
-1, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1,
0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1,
-1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0,
-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, };

#endif /* DTEIGHT_H_ */