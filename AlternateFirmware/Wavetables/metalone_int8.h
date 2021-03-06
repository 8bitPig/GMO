#ifndef METALONE_H_
#define METALONE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define METALONE_NUM_CELLS 4034
#define METALONE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) METALONE_DATA [] = {0, 0,
0, -1, -2, -10, 43, 68, 34, 29, -19, -32, 41, 103, 76, 9, -59, -83, -25, -2, 23,
18, -66, -90, -11, 21, 35, 46, -13, -73, -122, -109, -55, 1, 28, 34, 48, 50, 54,
57, 1, -52, -27, -19, -16, -50, -73, -31, 11, 73, 99, 37, -48, -69, -38, -6,
-16, -50, -40, -51, -63, -7, 45, 63, 82, 70, 26, -9, -46, -22, 32, 34, 10, -33,
-97, -114, -59, 18, 69, 75, 48, -6, -32, -29, -14, -33, -94, -79, -27, 9, 46,
76, 71, 54, 65, 57, -5, -76, -56, 16, 44, 43, 2, -77, -124, -105, -27, 43, 55,
56, 53, 14, -38, -41, -28, -28, -15, -19, -15, -7, 24, 84, 113, 92, 52, 15, -62,
-88, -38, 4, 29, 7, -51, -84, -71, -16, 38, 19, -22, -4, 29, 37, 39, 6, -32,
-33, -6, 30, 21, -1, 16, 65, 97, 79, 37, -22, -57, -59, -38, -14, -12, -25, -44,
-50, -51, -16, 36, 51, 42, 9, -12, -3, -8, 0, 36, 36, 21, -3, -40, -27, 29, 82,
111, 62, -37, -81, -69, -23, 4, -22, -50, -51, -29, 3, 17, -8, -5, 31, 53, 54,
25, 2, -10, 0, 16, 6, -2, -6, -5, 18, 46, 61, 57, 6, -63, -87, -65, -21, 6, 4,
-9, -34, -35, 0, 13, 20, 42, 66, 71, 20, -26, -14, 14, 31, 41, -11, -85, -67, 7,
77, 80, 28, -2, -34, -66, -53, -36, -44, -28, 8, 21, 15, 9, 10, 18, 21, 34, 49,
33, 2, -11, -2, 11, 31, 22, -34, -81, -77, -10, 57, 69, 42, 7, -28, -53, -49,
-50, -42, -8, 31, 45, 4, -17, 32, 76, 72, 43, -15, -69, -57, 5, 60, 63, 13, -21,
-40, -70, -54, -9, 13, 27, 37, 35, 15, -17, -45, -44, -52, -32, 28, 50, 34, 29,
47, 61, 55, 14, -52, -89, -58, 16, 58, 35, -6, -26, -41, -49, -32, -11, 7, 33,
41, 14, -29, -45, -2, 32, 16, -11, -34, -36, 5, 65, 96, 83, 25, -30, -63, -86,
-51, 4, 25, 13, -12, -20, -7, -7, -16, -8, -6, 13, 38, 11, -32, -31, 10, 51, 54,
13, -37, -53, -14, 44, 71, 49, 14, -9, -37, -57, -54, -38, -18, 6, 6, -8, -10,
6, 39, 44, 10, -25, -42, -37, -5, 35, 62, 65, 20, -38, -61, -43, 7, 47, 45, 12,
-21, -20, -5, -19, -43, -52, -36, -8, 10, 4, -4, 13, 41, 60, 32, -29, -61, -42,
5, 44, 56, 33, 0, -21, -34, -30, -5, 24, 30, 7, -29, -45, -35, -14, 5, 6, -7,
-22, -29, -19, 11, 49, 77, 63, 3, -57, -67, -22, 32, 56, 30, -13, -34, -21, 2,
3, -4, -7, 2, 7, -17, -48, -46, -12, 17, 29, 14, -18, -29, -10, 19, 42, 44, 28,
6, -25, -38, -16, 12, 20, 11, -12, -26, -22, -6, 9, 8, -3, -10, -16, -33, -37,
-10, 23, 40, 20, -20, -47, -27, 33, 75, 55, -3, -36, -34, -18, 6, 19, 11, -3,
-7, -10, -29, -40, -10, 22, 22, 9, -4, -26, -36, -16, 16, 36, 25, 6, -13, -35,
-24, 30, 67, 51, 12, -26, -45, -37, -14, 7, 13, 10, 10, -4, -39, -46, -6, 30,
34, 3, -39, -47, -16, 34, 60, 32, -16, -34, -25, -10, 14, 33, 36, 25, 9, -6,
-26, -38, -25, -10, -7, -5, 3, 7, 1, -3, 4, 14, 1, -24, -36, -25, 10, 55, 69,
30, -23, -42, -31, -9, 7, 21, 34, 31, 18, -6, -35, -40, -14, 6, -3, -31, -42,
-10, 34, 62, 57, 7, -48, -65, -45, -4, 38, 63, 59, 25, -19, -38, -32, -17, 2,
13, 18, 19, 12, -2, -20, -28, -12, 3, -12, -41, -42, -9, 39, 71, 59, 13, -34,
-48, -32, -9, 8, 26, 44, 40, 17, -16, -37, -26, -1, 12, 3, -15, -19, 0, 22, 26,
9, -24, -48, -49, -28, 17, 58, 65, 41, 7, -18, -18, -7, -4, -6, -7, 5, 28, 29,
13, -1, -7, -7, -13, -31, -44, -29, 11, 53, 56, 13, -33, -51, -42, -15, 18, 42,
50, 45, 24, -5, -27, -24, -1, 11, 0, -12, -14, -6, 11, 31, 33, 10, -32, -63,
-60, -29, 25, 66, 57, 12, -31, -42, -21, 4, 17, 25, 26, 28, 29, 9, -18, -24,
-11, 5, 2, -19, -25, -8, 15, 32, 26, -4, -29, -32, -25, -12, 7, 24, 29, 21, 7,
-3, -4, 1, 10, 15, 9, 6, 6, 6, 5, 5, 3, -8, -31, -46, -29, 8, 42, 47, 14, -32,
-52, -29, 9, 24, 16, 8, 5, 5, 8, 7, 7, 13, 17, 13, -7, -27, -20, 2, 18, 20, 4,
-23, -40, -36, -18, 10, 30, 32, 15, -13, -34, -27, -4, 15, 25, 25, 17, 8, -2,
-8, -3, 13, 24, 14, -15, -37, -27, 4, 27, 18, -14, -41, -40, -12, 16, 24, 18, 9,
2, -3, -9, -12, -4, 11, 20, 20, 13, 5, 3, 2, 1, -2, -8, -13, -13, -13, -9, 6,
10, -4, -23, -33, -23, 1, 18, 21, 15, 8, 6, 4, -7, -13, -5, 10, 19, 10, -7, -9,
7, 24, 21, -8, -45, -56, -33, 2, 26, 27, 11, -12, -31, -34, -21, 2, 25, 35, 27,
11, -3, -9, -8, -4, 1, 9, 7, -3, -12, -10, 5, 20, 17, -9, -37, -50, -37, -9, 10,
17, 21, 18, 6, -11, -26, -25, -2, 25, 38, 26, 1, -10, -4, 0, -3, -13, -22, -18,
-4, 10, 17, 10, -6, -22, -35, -34, -18, -1, 6, 6, 8, 12, 17, 15, 6, -5, -10, -6,
-2, -2, 1, 12, 23, 19, -4, -34, -49, -37, -8, 17, 21, 12, 3, -8, -22, -30, -28,
-13, 11, 25, 23, 13, 6, 10, 16, 14, 3, -15, -28, -25, -10, 13, 30, 27, 2, -29,
-47, -40, -17, 5, 15, 14, 8, 4, -2, -13, -20, -14, 2, 16, 18, 13, 10, 15, 22,
16, -6, -29, -36, -26, -11, 2, 8, 11, 8, -2, -17, -29, -31, -17, 3, 16, 18, 13,
6, -2, -5, -2, 2, 2, 3, 6, 11, 19, 22, 10, -15, -35, -36, -19, -3, 1, -3, -7,
-3, 6, 7, -1, -9, -10, -5, -3, -2, 4, 17, 28, 28, 13, -10, -23, -19, -3, 13, 21,
18, 5, -13, -29, -35, -27, -12, 3, 11, 8, 3, -2, -5, -2, 6, 13, 14, 4, -12, -16,
-3, 22, 37, 27, 2, -20, -26, -15, -2, 2, 3, 3, -1, -9, -20, -26, -20, -5, 9, 16,
12, 8, 8, 8, 5, 3, 1, 2, 5, 7, 8, 8, 6, 3, -2, -8, -8, -4, -5, -9, -10, -9, -6,
-4, -8, -9, -2, 8, 13, 9, 2, 4, 14, 23, 19, 3, -13, -15, -2, 14, 19, 11, -1,
-11, -18, -17, -9, -1, 5, 5, -3, -14, -19, -13, -1, 8, 14, 16, 13, 7, 5, 8, 13,
15, 10, -3, -15, -15, -3, 9, 12, 8, 1, -9, -18, -23, -22, -10, 10, 23, 18, -1,
-20, -21, -5, 12, 22, 21, 14, 10, 10, 11, 8, 3, -2, -9, -15, -14, -5, 4, 9, 7,
1, -6, -13, -16, -16, -11, 0, 13, 19, 16, 8, 3, 3, 1, -2, -1, 7, 19, 27, 23, 7,
-12, -22, -22, -19, -15, -6, 7, 15, 14, 3, -11, -19, -13, 0, 6, 4, 2, 3, 8, 16,
24, 23, 10, -8, -21, -21, -5, 17, 31, 25, 4, -19, -33, -37, -29, -11, 9, 23, 24,
13, -3, -14, -11, 0, 4, 2, 2, 7, 15, 21, 20, 13, 5, -5, -13, -18, -18, -7, 11,
21, 16, -1, -20, -32, -30, -16, 1, 15, 20, 18, 13, 6, 2, 0, -4, -10, -10, 1, 18,
26, 23, 10, -7, -17, -18, -16, -13, -8, 0, 6, 3, -5, -9, -9, -6, -4, -5, -6, 0,
13, 25, 26, 16, 2, -9, -17, -17, -7, 7, 17, 21, 14, -3, -19, -27, -23, -13, -3,
5, 5, -3, -12, -9, 1, 13, 16, 6, -9, -15, -4, 16, 27, 25, 12, -5, -18, -23, -18,
-6, 8, 16, 14, 0, -17, -25, -20, -11, -4, 0, 1, 1, 2, 4, 6, 6, 6, 5, 2, -1, 1,
5, 8, 7, 3, -3, -8, -14, -15, -12, -5, 2, 3, -3, -12, -14, -8, -1, -1, -6, -8,
-3, 10, 20, 18, 8, -4, -9, -6, 0, 8, 12, 9, -2, -14, -21, -20, -10, 2, 6, 0, -8,
-14, -14, -9, 0, 7, 7, 1, -6, -9, -2, 11, 20, 19, 9, -3, -11, -13, -10, -1, 7,
11, 6, -9, -26, -32, -21, -1, 14, 13, 1, -11, -16, -10, 0, 7, 7, 4, 0, -1, 2, 8,
13, 11, 2, -8, -15, -15, -10, -3, 0, 1, -2, -8, -14, -17, -14, -7, -2, 1, 3, 6,
9, 9, 3, -5, -11, -8, 1, 10, 14, 14, 10, 3, -6, -16, -22, -18, -7, 3, 6, -1,
-10, -13, -9, -1, 4, 3, -4, -10, -8, 3, 17, 25, 22, 5, -14, -24, -19, -4, 13,
21, 19, 7, -10, -23, -28, -21, -9, 2, 4, -1, -6, -4, 2, 6, 5, -1, -7, -7, -2, 5,
12, 17, 19, 12, -2, -16, -24, -19, -5, 9, 16, 11, -1, -12, -19, -18, -13, -8,
-5, -3, 2, 11, 18, 18, 9, -5, -14, -13, -4, 7, 14, 16, 12, 5, -4, -12, -15, -13,
-8, -5, -3, -2, 1, 6, 7, -1, -12, -20, -18, -7, 9, 22, 27, 22, 11, -2, -13, -16,
-10, 1, 10, 14, 11, 2, -8, -12, -10, -5, -3, -6, -12, -15, -7, 8, 21, 20, 6,
-12, -22, -18, -3, 15, 28, 29, 21, 6, -11, -21, -18, -8, 2, 7, 6, 2, -2, -3, -3,
-5, -9, -11, -9, -4, 2, 9, 14, 13, 9, 3, -2, -6, -5, 1, 9, 15, 17, 13, 2, -9,
-14, -14, -11, -8, -5, 0, 7, 13, 12, 1, -13, -21, -16, -2, 12, 21, 21, 13, 2,
-4, -6, -2, 5, 9, 8, 1, -4, -4, -1, 2, 2, -4, -13, -18, -15, -4, 8, 16, 17, 8,
-5, -12, -11, -4, 5, 14, 18, 16, 9, 0, -7, -9, -2, 6, 8, 1, -8, -10, -6, 1, 5,
2, -7, -13, -11, -2, 7, 13, 14, 9, 1, -5, -5, -1, 5, 10, 11, 7, 3, 0, -2, -3,
-3, -3, -4, -5, -4, -1, 1, 0, -3, -6, -7, -2, 4, 8, 8, 6, 5, 5, 4, 1, 0, 1, 4,
7, 5, 0, -4, -3, 0, 1, -3, -8, -12, -11, -3, 7, 11, 7, -3, -12, -14, -7, 6, 18,
21, 15, 4, -7, -12, -8, 0, 8, 11, 8, 0, -8, -10, -6, 0, 0, -4, -9, -10, -6, 0,
5, 8, 6, 3, -1, -6, -8, -4, 6, 15, 19, 15, 3, -10, -15, -12, -5, 1, 5, 4, 1, -1,
-3, -5, -9, -12, -12, -6, 2, 9, 12, 9, 2, -3, -5, -5, -3, 1, 5, 7, 6, 3, 0, -2,
-3, -6, -12, -16, -13, -4, 6, 12, 9, 0, -10, -16, -16, -10, -1, 9, 16, 16, 11,
1, -8, -12, -9, -2, 4, 6, 4, -1, -3, -3, -1, -3, -9, -15, -17, -10, 1, 10, 14,
9, -1, -10, -15, -13, -6, 5, 14, 16, 11, 2, -5, -8, -8, -6, -5, -5, -3, 0, 3, 2,
-1, -6, -10, -12, -11, -8, -3, 3, 8, 10, 8, 2, -6, -11, -11, -5, 4, 10, 9, 5, 0,
-4, -7, -10, -13, -13, -9, -1, 6, 7, 2, -5, -10, -12, -10, -5, 1, 5, 7, 5, 2, 0,
0, 1, 0, -3, -7, -8, -4, 2, 7, 7, 0, -9, -16, -18, -13, -5, 4, 8, 7, 3, -3, -9,
-12, -9, -2, 6, 11, 9, 1, -5, -6, -3, 1, 1, -3, -7, -9, -6, -2, 1, 1, -2, -6,
-10, -12, -9, -3, 2, 6, 6, 2, -2, -4, -4, -2, 0, 1, 2, 3, 2, 1, -1, -5, -7, -7,
-5, -2, -1, -2, -4, -5, -4, -2, -1, -2, -3, -1, 1, 3, 3, 1, 0, 1, 4, 4, 0, -3,
-5, -3, 1, 3, 2, -2, -7, -9, -8, -4, 0, 3, 2, -2, -5, -6, -4, 1, 5, 7, 5, 1, -2,
-4, -2, 2, 5, 3, 0, -3, -3, -2, -1, -1, -3, -4, -4, -4, -5, -4, -1, 3, 6, 4, -1,
-6, -7, -3, 5, 10, 9, 5, 0, -4, -5, -3, -1, 1, 1, 1, 0, -1, -2, -2, -4, -5, -5,
-4, -1, 1, 4, 6, 5, 2, 0, -2, -2, 0, 2, 3, 3, 4, 6, 5, 1, -5, -8, -8, -4, 1, 4,
4, 3, 2, -1, -5, -8, -7, -3, 4, 9, 11, 8, 2, -1, -2, -1, 1, 2, 1, 0, 0, 3, 5, 5,
2, -4, -9, -11, -8, -2, 5, 10, 11, 6, -3, -9, -10, -5, 2, 8, 11, 10, 7, 4, 1,
-3, -5, -5, -2, 1, 2, 3, 4, 4, 3, 1, -4, -9, -10, -6, 1, 9, 13, 11, 5, -2, -6,
-6, -3, 1, 5, 8, 9, 8, 6, 1, -5, -9, -9, -6, -1, 5, 8, 8, 5, 0, -6, -9, -7, -2,
3, 5, 6, 7, 7, 6, 4, -1, -5, -6, -4, 1, 5, 9, 9, 6, -1, -7, -12, -13, -8, 0, 8,
13, 11, 4, -4, -10, -9, -3, 2, 5, 6, 5, 5, 5, 5, 2, -2, -5, -7, -5, -2, 4, 8, 9,
4, -3, -10, -12, -9, -2, 5, 8, 9, 6, 3, -1, -4, -5, -4, -1, 3, 6, 7, 7, 4, 0,
-3, -6, -7, -6, -3, 1, 5, 6, 4, -1, -6, -8, -6, -1, 2, 4, 4, 4, 4, 4, 1, -2, -4,
-5, -3, 0, 4, 7, 7, 3, -4, -9, -10, -7, -2, 3, 4, 3, 0, -2, -3, -2, -1, 0, 0,
-1, 0, 2, 4, 5, 3, 0, -4, -6, -5, -3, 1, 4, 6, 4, -2, -9, -11, -9, -2, 4, 6, 4,
0, -3, -4, -3, -1, 1, 2, 1, 0, 0, 0, 2, 1, -1, -4, -6, -6, -3, 0, 2, 2, -1, -4,
-7, -7, -5, -2, 0, 1, 1, 1, 1, 0, -3, -5, -5, -3, 0, 2, 3, 2, 0, -3, -6, -8, -8,
-5, 0, 4, 4, 0, -5, -9, -9, -5, -1, 2, 3, 1, -1, -2, 0, 1, 1, -1, -4, -6, -5,
-1, 3, 5, 4, -1, -7, -12, -12, -7, 0, 5, 5, 2, -2, -6, -7, -6, -5, -3, 0, 3, 4,
3, 1, -1, -3, -5, -6, -7, -5, -1, 3, 5, 3, -1, -7, -11, -11, -7, -2, 2, 4, 3, 0,
-2, -3, -4, -5, -5, -4, -2, 2, 5, 6, 4, -1, -7, -11, -11, -8, -1, 5, 6, 4, -1,
-5, -8, -7, -6, -4, -2, 1, 3, 4, 4, 2, -1, -5, -7, -7, -4, 0, 5, 8, 6, 1, -5,
-10, -12, -9, -3, 2, 5, 3, 0, -3, -4, -4, -3, -4, -4, -3, -1, 3, 5, 6, 4, -1,
-7, -10, -10, -5, 2, 7, 8, 3, -2, -7, -9, -9, -6, -2, 1, 3, 4, 3, 1, -1, -4, -5,
-5, -3, 0, 3, 5, 6, 4, 0, -4, -7, -7, -4, 0, 3, 4, 2, 0, -1, -2, -3, -4, -5, -4,
-1, 2, 6, 7, 6, 2, -3, -7, -7, -3, 3, 7, 8, 5, 0, -5, -6, -5, -2, 0, 1, 1, 0, 0,
1, 1, 1, -1, -3, -4, -3, 0, 3, 6, 6, 4, 1, -3, -5, -5, -1, 2, 4, 4, 2, -1, -2,
-2, -2, -2, -2, -1, 0, 2, 3, 4, 3, 0, -2, -3, -2, 1, 4, 6, 5, 2, 0, -2, -2, -1,
1, 2, 1, 0, 0, 0, 2, 2, 1, -1, -3, -2, 0, 2, 4, 4, 3, 1, 0, -1, -1, 1, 3, 4, 3,
1, -1, -1, 0, 1, 1, 1, -1, -1, -1, 0, 2, 2, 2, 0, -2, -2, 0, 2, 4, 4, 2, 0, -1,
-1, 1, 3, 4, 3, 1, -2, -3, -2, 0, 2, 2, 1, 0, -1, -1, 0, 1, 1, 1, 1, 1, 1, 1, 3,
3, 3, 1, 0, -1, 0, 1, 2, 3, 2, 1, 0, -1, -1, -1, -1, -1, 0, 1, 2, 3, 3, 2, -1,
-2, -2, -1, 2, 5, 7, 5, 2, -2, -4, -4, -1, 2, 3, 3, 1, 0, -1, -1, -1, -1, -2,
-2, -2, 0, 2, 4, 4, 3, 0, -3, -4, -4, -1, 3, 6, 6, 4, 0, -4, -5, -5, -3, 0, 1,
2, 2, 2, 0, -1, -3, -4, -4, -2, 0, 2, 5, 6, 4, 1, -3, -4, -4, -2, 1, 3, 3, 2, 1,
0, -2, -4, -5, -5, -4, -1, 2, 4, 4, 2, -2, -5, -6, -5, -2, 2, 5, 6, 4, 1, -2,
-5, -5, -4, -2, -1, 0, 1, 1, 1, -1, -3, -5, -7, -6, -4, -1, 3, 5, 5, 1, -3, -7,
-7, -5, 0, 3, 5, 4, 2, -1, -3, -4, -5, -4, -3, -2, 0, 2, 2, 1, -1, -4, -6, -6,
-5, -2, 1, 4, 5, 3, 0, -3, -6, -5, -3, -1, 1, 3, 3, 1, -1, -4, -6, -7, -6, -4,
-1, 0, 2, 1, -1, -3, -5, -6, -5, -2, 0, 2, 2, 1, -1, -2, -3, -3, -4, -4, -4, -2,
0, 1, 1, -1, -4, -7, -8, -6, -3, 0, 2, 2, 1, -2, -5, -6, -4, -2, 0, 1, 1, 0, -1,
-2, -3, -3, -3, -3, -3, -3, -2, -2, -1, 0, -2, -4, -5, -5, -4, -1, 1, 2, 1, -1,
-3, -4, -3, -2, 0, 0, 0, 0, -1, -2, -3, -4, -4, -3, -2, -1, -1, -2, -3, -3, -3,
-3, -3, -2, -1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -1, -1, 0, -1, -2, -3, -4,
-5, -4, -3, -1, 1, 1, 0, -2, -4, -5, -4, -1, 2, 4, 3, 1, -2, -3, -3, -2, -1, 0,
0, 0, -1, -1, -1, -1, -2, -2, -3, -4, -3, -1, 1, 3, 3, 1, -2, -4, -5, -3, 0, 3,
4, 4, 2, -1, -4, -5, -5, -3, -1, 1, 1, 1, 0, -1, -3, -3, -4, -4, -2, 0, 2, 3, 3,
1, -1, -2, -3, -3, -2, 0, 2, 3, 3, 2, 0, -3, -5, -5, -4, -1, 2, 4, 4, 2, 0, -3,
-4, -4, -2, 1, 4, 5, 4, 3, 1, 0, -1, -2, -2, -1, 1, 2, 3, 3, 3, 1, -2, -4, -5,
-4, -1, 3, 6, 6, 4, 0, -3, -4, -3, 0, 3, 5, 5, 4, 2, 0, -1, -2, -2, -2, -1, 0,
1, 2, 3, 2, 1, -2, -4, -4, -3, 0, 4, 6, 6, 5, 2, -2, -4, -3, -1, 2, 5, 6, 5, 2,
0, -2, -3, -3, -2, 0, 2, 3, 4, 3, 1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 5, 4, 1, -1,
-3, -2, 0, 2, 5, 6, 4, 1, -2, -5, -5, -3, 1, 4, 5, 5, 2, 0, -2, -2, -1, 1, 2, 3,
3, 2, 2, 2, 2, 1, 0, -2, -3, -2, 0, 3, 4, 4, 1, -2, -4, -4, -2, 1, 4, 5, 4, 3,
1, 0, -1, -1, 0, 2, 3, 3, 3, 2, 1, 0, -1, -1, -2, -1, 0, 1, 2, 2, 2, 1, 0, -1,
-1, 0, 1, 3, 4, 3, 3, 2, 0, -1, -1, -1, 0, 1, 2, 2, 1, -1, -2, -3, -2, 0, 1, 1,
0, 0, -1, 0, 1, 2, 1, 0, 0, 0, 0, 1, 2, 3, 1, -1, -2, -3, -2, 0, 2, 2, 1, -1,
-3, -4, -3, -1, 1, 2, 2, 1, -1, -2, -2, 0, 2, 2, 2, 0, -1, -2, -1, 0, 1, 0, -1,
-2, -3, -2, -1, 0, 0, 0, -1, -2, -3, -2, -1, 1, 2, 2, 1, 0, -2, -3, -3, -1, 0,
1, 2, 1, -1, -3, -5, -5, -3, -1, 0, 0, 0, -2, -3, -3, -3, -2, -1, 0, 0, -1, -1,
0, 0, 0, 0, -1, -3, -4, -4, -2, 0, 2, 2, -1, -4, -6, -6, -4, -1, 2, 2, 2, 0, -3,
-4, -3, -2, -1, 1, 1, 0, 0, 0, 0, -1, -2, -3, -3, -4, -3, -1, 1, 1, 0, -2, -4,
-5, -5, -4, -1, 1, 2, 2, 0, -2, -3, -4, -3, -2, -1, 0, 1, 1, 0, -2, -3, -5, -5,
-4, -3, -1, 0, 0, -1, -1, -2, -3, -3, -4, -3, -2, 0, 2, 2, 2, 0, -3, -5, -5, -4,
-1, 1, 2, 1, -1, -3, -5, -5, -4, -2, 0, 0, 0, 0, -1, -2, -2, -1, -1, -2, -2, -2,
-1, 1, 2, 2, 0, -2, -5, -5, -4, -2, 1, 2, 2, -1, -3, -5, -5, -3, -2, 0, 1, 1, 0,
-1, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, -1, -2, -3, -3, -3, -2, -1, 0, 1, 0,
-1, -2, -3, -3, -2, 0, 1, 2, 2, 1, -1, -2, -3, -2, -1, 1, 2, 1, 0, -1, -2, -2,
-1, 0, 0, -1, -1, -1, -1, 0, 1, 1, 0, -1, -1, -1, -1, 1, 2, 2, 1, -1, -2, -2,
-2, 0, 1, 1, 1, 0, -2, -2, -2, -1, 0, 1, 0, 0, -1, -1, 0, 0, 1, 1, 0, -1, -1,
-1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, 0, 1, 1, 1, 1,
0, 0, 0, 0, 1, 1, 1, 1, 0, -1, -1, -1, 0, 0, 1, 0, 0, 0, -1, 0, 0, 1, 1, 0, 0,
0, 0, 1, 1, 2, 1, 0, -1, -1, -1, 0, 2, 2, 1, 0, -1, -2, -2, -1, 1, 1, 1, 1, 0,
-1, -1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, -1, -1, -1, 0, 1, 1, 1, 0, -1, -1,
-2, -1, 0, 1, 2, 2, 1, 0, 0, -1, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1, 0, 0, 0, 0, 0,
0, 0, 1, 1, 0, 0, -1, -1, -1, 0, 1, 2, 2, 1, -1, -1, -2, -1, 0, 1, 1, 1, 0, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 1, 1, 1, 1, -1, -1, -2,
-1, 0, 0, 1, 1, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 1, 1, 0, 0,
-1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1,
-1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1,
-1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, 0,
0, 0, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1,
-1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, };

#endif /* METALONE_H_ */
