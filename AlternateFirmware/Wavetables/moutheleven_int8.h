#ifndef MOUTHELEVEN_H_
#define MOUTHELEVEN_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define MOUTHELEVEN_NUM_CELLS 3469
#define MOUTHELEVEN_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) MOUTHELEVEN_DATA [] = {0,
0, 0, 1, 0, 0, 1, 0, 0, -1, 1, 1, -1, -1, -1, 0, -1, -2, -2, -1, 0, 0, 1, 1, 1,
1, 2, 2, 3, 2, 1, 1, 2, 4, 5, 5, 5, 5, 5, 4, 3, 4, 4, 2, -2, -6, -6, -6, -8,
-10, -12, -12, -12, -13, -13, -12, -11, -12, -13, -14, -10, -6, -3, -2, -1, 3,
8, 13, 17, 20, 23, 24, 22, 21, 21, 20, 17, 11, 3, -2, -4, -5, -8, -13, -17, -18,
-20, -21, -20, -19, -20, -23, -23, -17, -12, -8, -4, 1, 9, 14, 18, 23, 26, 27,
23, 20, 19, 17, 12, 5, -3, -7, -9, -11, -14, -16, -17, -17, -19, -17, -13, -11,
-10, -11, -6, -1, 5, 8, 10, 12, 14, 13, 12, 10, 8, 5, -2, -4, -6, -4, -5, -5,
-4, -4, -4, -1, 5, 9, 9, 2, 1, 6, 11, 7, 6, 8, 23, 45, 47, 33, 7, -9, -17, -37,
-79, -103, -104, -97, -92, -82, -42, 3, 28, 35, 53, 83, 98, 80, 58, 49, 51, 41,
20, 18, 25, 24, 6, -8, -9, -11, -35, -63, -79, -80, -75, -71, -58, -32, -3, 27,
50, 71, 88, 90, 79, 60, 40, 24, 5, -17, -36, -45, -42, -38, -38, -37, -31, -26,
-29, -33, -27, -16, -11, -7, 3, 24, 45, 55, 58, 59, 55, 41, 19, -2, -22, -40,
-58, -67, -63, -54, -40, -27, -14, 1, 14, 23, 27, 27, 28, 29, 23, 20, 23, 25,
24, 18, 11, 5, -2, -13, -23, -32, -39, -42, -42, -33, -19, -6, 4, 14, 26, 35,
34, 27, 19, 10, -2, -12, -18, -20, -20, -20, -16, -9, 3, 7, 9, 14, 16, 13, 14,
13, 13, 12, 7, 7, 10, 20, 41, 55, 33, -2, -19, -22, -45, -91, -126, -121, -98,
-91, -73, -23, 33, 60, 68, 86, 118, 122, 86, 50, 37, 28, 5, -21, -27, -19, -25,
-38, -39, -29, -30, -44, -56, -53, -40, -28, -11, 11, 36, 60, 83, 97, 98, 90,
71, 44, 9, -25, -48, -65, -86, -97, -90, -71, -52, -40, -23, 1, 16, 19, 23, 36,
44, 41, 37, 41, 48, 45, 34, 27, 19, 3, -20, -43, -61, -74, -84, -83, -73, -57,
-34, -6, 22, 45, 60, 71, 74, 67, 52, 35, 17, -1, -18, -29, -33, -34, -33, -30,
-25, -18, -14, -15, -12, -7, -1, 4, 13, 24, 34, 39, 42, 46, 42, 31, 14, -2, -18,
-36, -50, -56, -53, -47, -42, -28, -7, 13, 25, 28, 35, 42, 38, 24, 17, 13, 9, 0,
-8, -10, -12, -11, -19, -19, -11, -7, -3, 17, 31, 21, 8, -2, -6, -16, -40, -56,
-47, -42, -40, -23, 2, 24, 31, 30, 38, 46, 35, 18, 5, -4, -10, -18, -17, -9, -2,
-1, 2, 11, 15, 12, 4, -2, -6, -10, -12, -7, -2, 0, 6, 11, 15, 17, 14, 7, -2,
-13, -18, -19, -22, -22, -17, -9, -1, 6, 14, 22, 24, 19, 14, 13, 10, 3, -3, -5,
-7, -9, -11, -8, -4, -4, -8, -14, -19, -17, -15, -15, -12, -8, -1, 9, 15, 23,
26, 19, 11, 7, -1, -14, -23, -29, -28, -29, -28, -17, -5, 6, 16, 20, 24, 31, 33,
28, 22, 18, 13, 6, -1, -5, -7, -12, -18, -21, -23, -24, -23, -24, -23, -12, -6,
4, 15, 25, 33, 38, 37, 32, 25, 15, 3, -13, -23, -29, -30, -27, -26, -23, -10, 2,
7, 13, 12, 9, 13, 15, 34, 47, 25, 9, 0, -14, -27, -50, -71, -70, -72, -73, -48,
-20, 4, 21, 28, 47, 65, 62, 54, 42, 29, 16, 5, 3, 1, -5, -9, -10, -5, -5, -9,
-11, -16, -24, -24, -19, -11, -4, -2, 9, 24, 30, 32, 34, 29, 20, 4, -9, -15,
-23, -32, -36, -30, -20, -14, -7, 3, 11, 15, 14, 15, 17, 15, 9, 7, 5, 3, -1, -5,
-7, -6, -13, -22, -24, -23, -21, -21, -18, -10, -1, 6, 14, 24, 25, 19, 20, 17,
5, -4, -14, -19, -22, -27, -23, -15, -8, -2, 5, 12, 18, 20, 17, 16, 14, 10, 5,
1, 0, -2, -3, -3, -3, -3, -5, -5, -6, -10, -9, -9, -6, 0, 6, 13, 13, 16, 15, 8,
8, 1, -7, -6, -9, -14, -11, -3, 0, 8, 11, 8, 11, 3, -3, -3, 0, 18, 19, 1, -9,
-19, -26, -35, -57, -68, -60, -56, -44, -16, 10, 36, 51, 53, 70, 75, 64, 47, 22,
5, -10, -24, -30, -31, -30, -26, -21, -10, 0, 6, 7, 6, 4, 6, 7, 6, 8, 8, 14, 19,
16, 17, 15, 8, -1, -15, -23, -28, -38, -42, -38, -28, -15, -5, 7, 20, 28, 32,
34, 32, 27, 19, 11, 4, -4, -11, -16, -20, -20, -19, -22, -22, -19, -18, -13, -9,
-5, 2, 9, 14, 20, 26, 21, 14, 11, 5, -7, -17, -26, -32, -30, -27, -23, -12, -3,
7, 19, 25, 32, 34, 30, 25, 18, 9, 1, -8, -16, -20, -19, -15, -13, -10, -5, -3,
-1, 2, -1, -1, 0, 1, 2, 8, 12, 11, 10, 11, 9, 10, 8, 2, -1, -6, -14, -9, -1, -3,
-3, -2, -4, -3, 6, 10, 25, 35, 17, 1, -9, -25, -36, -54, -74, -70, -62, -52,
-23, 6, 28, 49, 55, 63, 70, 57, 39, 19, -1, -15, -27, -32, -30, -26, -20, -13,
-2, 5, 7, 7, 6, 2, 3, 6, 7, 12, 14, 18, 25, 26, 22, 18, 8, -2, -13, -26, -33,
-38, -42, -38, -29, -16, -4, 9, 21, 29, 32, 32, 30, 24, 15, 5, -1, -7, -14, -18,
-17, -16, -18, -27, -25, -18, -16, -14, -13, -8, 2, 9, 14, 23, 30, 22, 12, 13,
7, -6, -16, -26, -33, -28, -22, -14, -3, 4, 12, 21, 25, 30, 27, 17, 12, 5, -4,
-7, -11, -16, -20, -19, -13, -6, -2, 0, 2, 5, 6, 7, 9, 9, 11, 12, 10, 13, 17,
12, 4, -4, -5, -6, -9, -9, -18, -24, -14, -4, -1, 2, 0, 2, 17, 39, 49, 36, 18,
-4, -27, -41, -59, -77, -79, -78, -65, -35, -4, 27, 49, 54, 66, 73, 65, 52, 31,
7, -10, -23, -27, -25, -26, -26, -22, -15, -7, -2, -2, -3, -5, -3, 3, 13, 22,
26, 30, 36, 36, 30, 19, 5, -9, -26, -37, -39, -39, -38, -31, -20, -4, 10, 19,
27, 31, 29, 25, 18, 11, 5, -2, -7, -10, -13, -13, -12, -11, -11, -14, -20, -23,
-21, -18, -13, -3, 6, 13, 21, 27, 32, 35, 24, 5, -8, -17, -29, -42, -47, -45,
-41, -28, -11, 8, 24, 32, 37, 40, 39, 34, 25, 11, 1, -5, -11, -12, -12, -14,
-12, -11, -8, -7, -7, -6, -8, -5, -2, 3, 12, 16, 18, 22, 25, 23, 15, 8, 1, -6,
-16, -21, -18, -21, -27, -21, -2, 4, -8, -6, 5, 28, 52, 35, 19, 18, -7, -27,
-40, -60, -64, -66, -69, -40, -8, 14, 39, 46, 52, 63, 57, 47, 30, 6, -10, -22,
-27, -30, -30, -22, -21, -19, -11, -4, 3, 1, -5, 3, 13, 16, 23, 28, 33, 38, 33,
29, 24, 7, -11, -28, -38, -43, -48, -47, -38, -28, -11, 5, 20, 32, 34, 36, 35,
29, 22, 13, 3, -4, -13, -17, -18, -20, -22, -22, -23, -19, -17, -14, -7, -7, -6,
3, 12, 22, 26, 25, 26, 26, 19, 11, -2, -15, -24, -40, -52, -48, -38, -28, -21,
-10, 7, 21, 31, 35, 36, 35, 30, 21, 14, 8, 0, -11, -18, -18, -18, -17, -15, -13,
-10, -6, -1, 8, 13, 15, 16, 17, 21, 22, 17, 13, 7, -3, -13, -15, -14, -18, -18,
-14, -12, -7, 0, 6, 12, 15, 13, 13, 15, 13, 18, 30, 22, 1, -14, -30, -39, -52,
-72, -73, -64, -57, -35, -5, 22, 45, 54, 63, 71, 64, 49, 31, 10, -8, -23, -31,
-34, -34, -29, -24, -16, -9, -4, 5, 6, 3, 6, 9, 13, 19, 21, 26, 29, 25, 22, 18,
9, -5, -21, -31, -38, -41, -38, -32, -22, -9, 3, 19, 31, 36, 38, 34, 25, 17, 9,
0, -10, -18, -19, -21, -22, -20, -18, -14, -16, -18, -12, -7, -4, 1, 6, 13, 20,
24, 27, 26, 19, 10, 5, -6, -27, -40, -43, -47, -44, -39, -28, -8, 6, 18, 34, 42,
45, 43, 37, 30, 16, 2, -9, -19, -21, -20, -23, -22, -17, -11, -7, -4, 1, 4, 6,
11, 14, 19, 23, 24, 23, 18, 14, 7, -3, -13, -21, -26, -29, -29, -24, -17, -8, 2,
9, 16, 23, 21, 15, 13, 11, 4, -1, -5, -11, -11, -9, -8, -7, -6, -6, -5, -11,
-15, -12, -6, 10, 18, 12, 15, 11, 0, -8, -22, -33, -41, -48, -41, -26, -12, 7,
22, 33, 44, 49, 51, 44, 31, 18, 4, -6, -14, -19, -19, -21, -20, -14, -7, -2, -2,
-4, -2, -2, -1, 6, 12, 16, 17, 18, 23, 22, 17, 8, -5, -15, -24, -29, -30, -30,
-28, -21, -14, -4, 7, 16, 21, 20, 19, 19, 15, 10, 6, 1, -5, -12, -16, -17, -19,
-22, -24, -26, -25, -22, -17, -9, 0, 9, 17, 26, 31, 34, 35, 30, 23, 13, 0, -10,
-19, -28, -33, -35, -32, -24, -14, -4, 6, 18, 26, 31, 32, 31, 28, 23, 16, 11, 4,
-5, -10, -12, -21, -29, -30, -28, -27, -27, -22, -12, 0, 11, 20, 28, 32, 34, 32,
26, 17, 11, 1, -14, -22, -25, -30, -32, -31, -25, -18, -15, -9, -2, 4, 10, 15,
18, 19, 19, 19, 17, 12, 8, 3, -4, -12, -18, -19, -21, -20, -19, -14, -6, 1, 6,
10, 13, 17, 15, 12, 12, 9, 5, 3, 7, 5, 2, 5, 6, 4, 2, -3, -7, -15, -17, -5, 1,
-2, 0, 2, -1, -6, -9, -9, -13, -19, -17, -11, -6, 1, 10, 14, 10, 13, 18, 15, 7,
4, 3, -4, -11, -7, -2, -5, -10, -10, -8, -10, -12, -10, -10, -12, -9, -1, 5, 11,
17, 22, 21, 19, 20, 15, 5, -7, -15, -23, -29, -30, -26, -22, -16, -6, 4, 12, 20,
28, 28, 24, 23, 23, 19, 12, 6, 2, -5, -11, -14, -17, -20, -23, -23, -20, -16,
-10, -2, 3, 8, 14, 20, 23, 23, 22, 16, 7, 0, -7, -15, -24, -29, -31, -31, -27,
-20, -12, -5, 2, 10, 17, 20, 23, 24, 21, 16, 13, 8, 2, -3, -8, -12, -16, -18,
-20, -21, -22, -19, -12, -7, 1, 9, 15, 20, 25, 28, 27, 22, 16, 8, -1, -9, -14,
-18, -21, -20, -17, -13, -8, -4, 1, 5, 7, 9, 11, 12, 11, 11, 10, 9, 9, 8, 5, 2,
-1, -6, -12, -17, -21, -22, -22, -19, -14, -7, 1, 8, 13, 17, 18, 17, 13, 9, 4,
-2, -8, -12, -14, -16, -15, -12, -9, -7, -3, 1, 3, 4, 5, 5, 4, 3, 3, 3, 2, 1, 0,
0, 0, 0, -1, -3, -2, -2, -1, 1, 2, 3, 3, 4, 5, 6, 5, 4, 3, 1, -1, -1, -1, -3,
-2, -1, -2, -1, 0, 0, 0, -1, -1, 1, 0, 0, 0, -2, -3, -4, -7, -9, -9, -8, -8, -8,
-5, -1, 2, 3, 6, 7, 5, 4, 1, -2, -3, -5, -8, -8, -7, -7, -7, -4, -1, 2, 2, 0, 0,
0, 1, 3, 3, 3, 6, 7, 7, 7, 8, 7, 3, -1, -2, -2, -1, 7, 13, 8, 4, 4, 2, 0, -3,
-8, -14, -18, -15, -10, -8, -5, -1, -1, -1, 5, 10, 7, 4, 2, 0, -1, 1, 3, 2, -1,
0, -1, -3, -1, -3, -10, -15, -15, -14, -14, -11, -7, -6, -3, 4, 11, 13, 16, 18,
14, 12, 13, 10, 4, 0, -4, -9, -12, -13, -14, -16, -16, -15, -15, -12, -4, 2, 5,
11, 17, 19, 21, 23, 21, 16, 9, 4, -3, -7, -10, -14, -17, -17, -14, -14, -11, -4,
0, 2, 6, 11, 13, 13, 13, 12, 10, 8, 5, 1, -3, -7, -11, -15, -17, -18, -20, -20,
-16, -13, -9, -2, 4, 8, 13, 17, 19, 17, 13, 9, 4, -3, -9, -14, -16, -17, -16,
-13, -9, -4, 0, 3, 8, 11, 13, 12, 10, 10, 9, 7, 6, 4, 2, 0, -2, -4, -6, -8, -9,
-10, -10, -9, -6, -4, -1, 2, 7, 11, 14, 15, 14, 13, 10, 5, -1, -5, -10, -14,
-16, -16, -15, -12, -10, -6, -2, 2, 5, 5, 5, 5, 5, 5, 4, 3, 1, -1, -2, -2, -2,
-4, -7, -9, -10, -8, -7, -5, -2, 0, 3, 5, 8, 9, 8, 5, 2, -1, -3, -5, -6, -6, -6,
-4, -2, 1, 4, 6, 8, 8, 7, 7, 6, 3, -1, -3, -4, -5, -5, -4, -4, -4, -3, -2, 1, 3,
4, 5, 5, 6, 6, 5, 3, 3, 0, -4, -7, -9, -10, -11, -12, -12, -11, -9, -6, -3, -1,
1, 3, 6, 8, 10, 11, 11, 10, 8, 6, 2, -3, -9, -13, -16, -17, -18, -16, -12, -7,
-2, 3, 8, 11, 12, 12, 10, 7, 5, 2, 1, 0, -1, -1, 0, 0, 1, 1, 1, 0, -1, -2, -3,
-1, 1, 3, 4, 6, 8, 8, 8, 6, 3, -1, -5, -9, -11, -13, -14, -12, -9, -6, -2, 2, 6,
8, 9, 9, 7, 4, 1, -3, -5, -7, -10, -10, -10, -9, -8, -6, -5, -3, -2, 0, 1, 3, 5,
6, 8, 9, 9, 7, 5, 3, 0, -4, -8, -10, -12, -13, -11, -9, -6, -2, 2, 6, 10, 12,
13, 13, 12, 10, 8, 6, 4, 2, 0, -3, -5, -6, -6, -7, -8, -8, -7, -6, -4, 0, 3, 4,
6, 6, 7, 7, 5, 3, -1, -3, -5, -7, -9, -10, -10, -11, -10, -9, -6, -5, -3, -1, 1,
2, 4, 5, 6, 5, 3, 3, 2, 1, 0, 0, -1, -2, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, 0, -1, 0, 1, 1, 1, 1, 1, 0, 0, 0, -1,
-1, -1, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, -1, -1, -2, -3, -5, -5, -5, -5,
-5, -4, -3, -1, 1, 1, 1, 2, 3, 4, 4, 4, 3, 1, 0, 0, -1, -3, -4, -6, -7, -7, -6,
-5, -3, -2, 0, 2, 5, 7, 8, 8, 8, 7, 6, 4, 3, 1, -2, -4, -5, -4, -4, -4, -4, -2,
-1, 0, 2, 4, 5, 6, 6, 6, 6, 4, 2, -1, -3, -5, -8, -10, -12, -13, -12, -11, -10,
-7, -5, -2, 1, 4, 6, 7, 6, 6, 5, 4, 3, 1, -1, -2, -3, -4, -3, -3, -2, -2, -3,
-2, -1, 0, 0, 0, 1, 1, 2, 3, 3, 3, 2, 2, 1, 0, -1, -2, -3, -3, -2, -1, 0, 1, 3,
3, 3, 4, 4, 3, 2, 1, 0, -1, -2, -2, -2, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -3, -3, -3, -4, -4, -3, -3, -3, -2, 0, 1, 2, 3, 4, 4, 4, 3,
3, 2, 1, -1, -2, -3, -4, -5, -4, -4, -4, -3, -3, -2, 0, 1, 1, 2, 2, 2, 3, 3, 4,
4, 3, 3, 3, 2, 2, 1, 0, -1, -2, -2, -2, -2, -1, -1, -1, -1, 0, 1, 1, 1, 0, 0,
-1, -1, -1, -2, -2, -3, -3, -4, -4, -4, -4, -5, -4, -4, -3, -2, -1, -1, -1, -1,
0, 1, 1, 1, 1, 1, 1, 1, 2, 1, 0, -1, -1, -1, -2, -2, -2, -1, -1, 0, 1, 2, 2, 2,
1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 2, 2, 2, 1, 1, 1, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -2, -2, -3, -3, -3, -2, -2, -2, -2, -2, -1, -1, -2, -2, -2, -2,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 1, 1,
1, 1, 1, 1, 1, 1, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -1, -1, 0, 0, 1, 3, 3,
4, 4, 3, 2, 1, 0, -1, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2,
-2, -2, -1, 0, 0, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0,
-1, -1, -1, -1, -1, 0, 0, 1, 1, 2, 2, 3, 2, 2, 1, 0, 0, -1, -2, -2, -2, -2, -1,
-1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, -1, -1, -2, -2, -3, -3, -3, -3,
-3, -3, -3, -3, -2, -2, -2, -1, -1, 0, 1, 1, 1, 1, 0, 0, 0, 0, -1, -2, -2, -2,
-2, -2, -2, -1, -1, -1, 0, 1, 1, 1, 2, 2, 2, 2, 2, 1, 1, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1, -2, -3, -3, -3, -3,
-3, -2, -1, -1, 0, 1, 1, 1, 1, 0, 0, 0, -1, -2, -2, -3, -3, -3, -3, -3, -3, -2,
-2, -1, -1, 0, 0, 1, 1, 2, 2, 2, 2, 1, 1, 1, 0, -1, -1, -2, -2, -2, -2, -1, -1,
-1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -2, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -2, -2, -2, -2, -2, -2, -1, -1, 0, 0, 0, 0,
0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 1,
1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, };

#endif /* MOUTHELEVEN_H_ */
