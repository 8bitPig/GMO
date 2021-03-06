#ifndef RZFIVE_H_
#define RZFIVE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define RZFIVE_NUM_CELLS 2750
#define RZFIVE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) RZFIVE_DATA [] = {-1, -1,
1, 1, 1, 1, 0, -1, -1, -2, -1, 0, 1, 1, 0, -2, -4, -2, 0, 3, 7, 3, -11, -17,
-10, -2, 9, 19, 14, 4, -9, -27, -28, -14, 0, 23, 35, 15, -8, -17, -23, -16, -2,
3, 1, 0, -1, -2, 0, 5, 22, 41, 23, -16, -33, -40, -33, 2, 21, 5, -8, 8, 31, 34,
29, 13, -18, -29, -20, -10, 6, 19, 24, 26, 17, 1, -5, -7, -6, 0, 5, 13, 18, 11,
3, -3, -11, -17, -26, -19, 6, 27, 53, 63, 23, -16, -5, 20, 28, 28, -11, -102,
-127, -53, 3, 18, 22, -3, -32, -7, 46, 27, -62, -103, -94, -72, -7, 43, 9, -41,
-38, -13, 20, 72, 75, 13, -36, -77, -97, -31, 46, 51, 30, -13, -86, -101, -55,
-21, 7, 25, 17, 8, 9, 13, 15, 16, 8, -16, -28, -23, -15, 6, 24, 15, 1, 12, 38,
37, 10, -8, -23, -31, -25, -23, -46, -71, -32, 45, 67, 53, 31, -15, -39, -15, 5,
-13, -34, -4, 50, 62, 46, 15, -52, -78, -18, 33, 39, 40, 55, 76, 55, 2, -25,
-37, -29, 27, 60, 19, -25, -4, 38, 46, 38, 31, 23, 22, 34, 36, 4, -26, -12, 13,
12, 0, 4, 24, 40, 54, 48, -17, -74, -53, -12, 31, 86, 76, 11, -32, -69, -85,
-54, -24, -7, 7, 2, -11, -22, -38, -50, -63, -66, -45, -20, 19, 55, 25, -28,
-32, -7, 18, 54, 65, 30, 6, 20, 37, 35, 28, 23, 16, 8, -5, -6, 15, 25, 1, -28,
-49, -65, -22, 59, 77, 49, 28, 3, -17, -36, -52, -48, -38, -10, 30, 23, -25,
-46, -44, -40, -33, -25, -15, -3, 1, 2, -29, -91, -103, -59, -25, 7, 30, 26, 21,
27, 37, 19, -19, -27, -6, 6, 6, 3, -1, -4, 8, 24, 21, 10, 12, 26, 28, 6, -5, 16,
35, 27, 10, -11, -36, -15, 56, 80, 49, 13, -52, -103, -74, -29, -4, 18, 10, -21,
-43, -62, -69, -49, -28, -2, 25, 34, 39, 21, -19, -39, -45, -37, 9, 47, 63, 76,
75, 70, 48, 8, -22, -57, -68, -36, -8, 15, 33, 21, 0, -4, -1, 10, 32, 41, 34,
20, -18, -53, -50, -38, -9, 34, 63, 95, 99, 61, 17, -66, -125, -61, 27, 50, 50,
4, -94, -124, -84, -51, -21, 5, 26, 44, 31, 8, 11, 31, 37, 32, 16, -27, -50, 2,
59, 59, 41, 9, -42, -48, -10, 8, 5, -1, -6, -10, -7, -3, -10, -22, -9, 32, 53,
52, 45, 20, -4, -22, -39, -34, -17, 12, 63, 70, 18, -28, -79, -111, -55, 18, 43,
57, 66, 76, 76, 61, 40, -8, -41, -10, 31, 57, 83, 63, 9, -20, -38, -37, 5, 34,
19, 1, 9, 23, 5, -36, -57, -67, -51, 24, 73, 44, 8, -21, -51, -47, -27, -6, 27,
42, 35, 21, -23, -62, -66, -62, -41, -9, 16, 46, 46, 2, -36, -72, -90, -29, 43,
45, 22, -10, -62, -63, -2, 28, 4, -13, 11, 44, 68, 88, 43, -57, -74, -11, 40,
96, 126, 67, 2, -31, -59, -60, -48, -40, -29, -23, -22, -21, -21, -23, -31, -41,
-48, -55, -41, -5, 11, 7, 1, -10, -17, -3, 14, 12, 2, -7, -19, -20, -9, -3, -7,
-8, 11, 34, 48, 58, 13, -88, -128, -119, -94, -18, 40, 34, 22, 24, 30, 17, -13,
-28, -34, -35, -25, -17, -10, 1, 32, 71, 60, 21, 2, -8, -10, -1, 2, -5, -14,
-17, -21, -32, -46, -27, 29, 56, 50, 30, -40, -94, -61, -9, 16, 35, 30, 6, -6,
-8, -8, -7, 1, 35, 71, 53, 13, -8, -25, -33, -34, -41, -58, -60, 2, 68, 77, 71,
46, 4, -9, -1, 2, -1, -3, 3, 9, 13, 16, 13, 6, 1, -4, 0, 21, 33, 24, 11, -10,
-32, -23, 2, 8, 5, 6, 13, 13, -13, -36, -41, -38, -6, 44, 51, 30, 8, -29, -50,
-47, -36, 9, 58, 70, 73, 53, 11, -8, -12, -6, 22, 42, 39, 32, 22, 11, 16, 30,
30, 14, 5, 3, 3, 5, 8, 12, 13, -5, -38, -30, 15, 40, 43, 31, -29, -79, -47, 2,
9, 1, -6, -16, -19, -14, -12, -16, -14, 16, 51, 40, 10, -16, -50, -60, -47, -33,
-10, 12, 28, 40, 8, -41, -40, -9, 17, 49, 52, -4, -41, -13, 24, 41, 53, 29, -21,
-34, -19, -7, 5, 15, 22, 27, 10, -14, -33, -55, -49, -14, 8, 23, 25, -10, -42,
-40, -31, -16, 4, -10, -54, -67, -45, -25, -4, 12, 15, 16, 19, 23, 5, -34, -48,
-39, -27, 2, 29, 52, 75, 68, 52, 22, -27, -42, -29, -20, -12, -6, -8, -7, 12,
37, 24, -13, -32, -42, -34, 12, 40, 17, -11, -32, -52, -45, -25, -2, 31, 37, 1,
-27, -41, -45, -4, 44, 32, -7, -19, -17, -15, -11, -15, -35, -44, 4, 59, 62, 46,
14, -40, -62, -55, -44, -15, 10, 26, 38, 14, -23, -27, -14, -5, 5, 3, -22, -36,
-14, 12, 25, 34, 13, -29, -34, -7, 10, 19, 17, -16, -43, -21, 14, 32, 48, 42,
17, -2, -25, -37, -22, -5, 21, 50, 51, 43, 32, 12, 2, 0, -3, -10, -11, 13, 39,
42, 35, 10, -37, -49, -28, -15, -7, -1, 8, 16, 9, -4, -10, -13, -7, 10, 17, 8,
4, 14, 23, 8, -14, -13, 2, 20, 50, 51, 3, -30, -30, -24, -4, 18, 16, 4, 6, 21,
23, 10, -4, -23, -36, -21, -1, 13, 28, 34, 37, 27, -8, -28, -26, -22, -9, 3, 0,
-8, -11, -12, -19, -35, -34, 2, 31, 34, 31, 9, -18, -17, 0, 1, -12, -20, -21,
-19, -10, -1, 1, 2, -1, -5, 9, 48, 61, 41, 11, -60, -116, -71, -4, 28, 55, 48,
14, -4, -10, -18, -35, -47, -30, -8, -2, 1, 1, -2, -3, -3, -5, -15, -21, -14,
-5, -2, 1, 4, 7, 1, -18, -27, -17, -4, 20, 41, 24, -6, -24, -40, -32, 4, 26, 34,
37, 22, 5, -16, -38, -23, 13, 34, 51, 45, -2, -34, -36, -34, -23, -11, -6, -3,
-7, -18, -23, -20, -11, 14, 35, 32, 25, 19, 13, 4, -10, -13, -3, 4, 11, 11, -10,
-31, -21, 1, 6, 4, 0, -7, -3, 24, 45, 44, 38, 7, -32, -36, -23, -4, 33, 49, 41,
31, 12, -7, -24, -43, -39, -25, -3, 34, 39, 0, -28, -35, -32, 5, 47, 39, 9, -23,
-71, -86, -63, -36, 13, 51, 38, 18, 5, -6, -2, 13, 7, -25, -33, 5, 39, 54, 62,
39, 5, -3, -1, -6, -21, -23, -2, 17, 31, 42, 28, 5, -8, -21, -12, 21, 44, 62,
63, 12, -35, -37, -29, -10, 16, 11, -21, -34, -25, -14, 6, 24, 30, 35, 28, 16,
3, -16, -27, -34, -39, -39, -32, 6, 47, 40, 17, -12, -54, -59, -27, -8, -6, -2,
12, 29, 32, 32, 16, -12, -21, -16, -7, 14, 25, 9, -9, -18, -24, -4, 34, 41, 25,
2, -43, -70, -52, -29, -2, 27, 40, 49, 40, 11, -10, -33, -42, -16, 9, 21, 30,
27, 19, 7, -13, -22, -23, -23, -22, -21, -15, -6, 12, 37, 29, -1, -21, -41, -46,
-21, -4, -10, -18, -17, -14, -10, -5, -7, -14, -16, -8, -5, -16, -26, -15, 4,
20, 38, 33, 5, -9, -10, -8, -4, 0, 1, 3, 12, 27, 28, 19, 10, -6, -19, -31, -40,
-35, -24, 4, 44, 52, 42, 18, -36, -61, -30, 1, 25, 44, 24, -12, -20, -16, -8, 6,
13, 13, 13, 15, 16, 8, -3, -5, -3, 2, 12, 14, 7, 0, -6, -14, -26, -38, -20, 16,
34, 46, 42, 10, -10, -2, 5, -5, -18, -12, 3, 15, 29, 26, -3, -19, -12, -5, -6,
-7, -3, 4, 3, -5, -12, -19, -17, 12, 32, 21, 5, -6, -16, -13, 0, 10, 25, 30, 21,
12, -2, -15, -11, -5, -5, -9, -6, 5, 15, 30, 34, 7, -21, -33, -40, -23, 10, 15,
0, -13, -32, -37, -9, 17, 18, 13, -3, -26, -22, 0, 10, 9, 5, -3, -7, 6, 21, 13,
-5, -18, -32, -28, -3, 12, 16, 16, 4, -8, -12, -14, -11, -4, -5, -13, -13, 4,
17, 20, 19, 1, -22, -15, 9, 20, 24, 22, 8, -2, -3, -3, -4, -5, -8, -14, -17,
-20, -16, 1, 10, 5, 1, 3, 8, 16, 25, 15, -12, -23, -19, -16, -16, -15, -8, 1,
13, 29, 29, 20, 13, 7, 2, -1, -1, 4, 9, 2, -9, -15, -18, -16, -8, -5, -8, -9, 1,
10, 8, 3, -4, -15, -15, -5, 0, -1, -2, -3, -3, 4, 12, 11, 4, 3, 5, 3, -6, -12,
-15, -13, 6, 28, 25, 13, 6, 0, 0, 10, 13, 2, -7, -3, 2, 5, 9, 4, -5, -11, -14,
-13, -4, 4, 10, 14, 4, -10, -15, -16, -7, 16, 25, 13, -1, -24, -43, -31, -11,
-1, 5, 2, -11, -18, -22, -24, -20, -16, -13, -9, -2, 8, 11, 12, 8, -7, -12, 2,
16, 22, 26, 12, -9, -12, -4, 5, 18, 20, 2, -13, -13, -9, 0, 12, 6, -13, -17, -7,
5, 26, 37, 13, -14, -24, -31, -20, 3, 10, 8, 5, -3, -9, -9, -7, 1, 11, 6, -5,
-8, -6, -5, -3, -4, -14, -20, -2, 21, 19, 8, -5, -24, -25, -3, 10, 4, -2, -3,
-2, 0, 3, 3, 0, 0, 3, 3, 1, 0, 4, 8, 4, -2, -5, -8, -7, -1, 3, 2, 1, 1, 1, 2, 3,
1, -3, -1, 6, 10, 9, 6, -3, -11, -1, 13, 18, 21, 10, -18, -27, -14, -4, 5, 10,
2, -6, -2, 8, 8, 1, 0, 8, 10, 1, -7, -12, -15, -3, 16, 13, -4, -13, -17, -18,
-12, -7, -5, -2, 4, 12, 6, -7, -10, -4, 0, 2, 2, -7, -13, 0, 18, 20, 16, 9, -2,
-6, -2, 0, -6, -12, -4, 7, 15, 23, 17, -2, -12, -13, -12, -7, -3, -2, -3, -1, 3,
6, 9, 9, 7, 3, -6, -13, -9, -2, 5, 13, 10, -2, -9, -11, -10, 1, 7, 0, -9, -14,
-17, -10, 6, 10, 7, 3, -4, -9, -8, -7, -6, -3, -2, 0, 0, 1, 1, 3, 3, -5, -11,
-8, -3, 4, 13, 11, 0, -5, -5, -4, -4, -4, -5, -4, 1, 10, 12, 10, 8, 5, 1, -7,
-13, -13, -12, -8, -4, -3, -4, 0, 12, 18, 14, 9, 1, -7, -6, -2, 2, 7, 9, 8, 6,
3, -1, -8, -15, -19, -22, -15, -1, 9, 18, 19, 7, -4, -13, -21, -17, -12, -9, -6,
-1, 6, 10, 11, 10, -2, -11, -10, -8, -3, 4, 4, 1, 1, 5, 8, 6, 4, -5, -15, -16,
-15, -13, -8, -2, 8, 14, 14, 11, 2, -8, -9, -9, -6, -1, 5, 14, 18, 17, 14, 3,
-7, -6, -2, -3, -6, -5, -1, 5, 17, 23, 13, 3, -4, -10, -10, -7, -5, -2, -1, -2,
-2, 2, 6, 6, 6, -1, -10, -11, -10, -7, -4, 0, 6, 11, 9, 6, -1, -11, -12, -7, -2,
5, 8, 6, 4, 1, 0, 0, 1, -3, -11, -13, -10, -5, 8, 15, 7, -1, -5, -8, -5, 0, 1,
0, 2, 7, 10, 7, 4, -1, -6, -3, 3, 3, -1, -3, -4, -3, 3, 8, 8, 6, 2, -4, -8, -13,
-12, -5, -1, 4, 5, 0, -6, -5, -2, 2, 7, 6, -1, -5, -4, -2, 6, 13, 10, 4, -3,
-12, -13, -5, 2, 10, 14, 6, -1, -4, -5, -4, -2, -5, -14, -16, -11, -7, -2, 2, 5,
8, 9, 8, 5, -2, -6, -6, -6, -2, 2, 4, 5, 2, -4, -6, -7, -4, 6, 10, 5, 0, -6,
-10, -4, 5, 7, 5, 4, 2, 1, 3, 4, 6, 7, 1, -8, -11, -11, -7, 4, 8, 4, 1, 0, 0, 0,
-1, -1, -2, -1, 2, 3, -1, -5, -8, -10, -5, 2, 4, 3, -1, -10, -11, -6, -1, 5, 9,
4, -2, -5, -7, -5, 0, 3, 5, 7, 6, 4, -1, -6, -6, -4, -3, -2, -3, -4, -3, 3, 6,
5, 4, 6, 9, 7, 1, -5, -15, -16, -4, 3, 5, 4, 0, -6, -5, -2, 0, 2, 1, -5, -10,
-13, -13, -5, 6, 9, 11, 6, -4, -8, -7, -5, -2, 0, 2, 4, 2, -2, -5, -9, -7, 2, 6,
4, 1, -1, -2, -3, -4, -3, -2, 1, 5, 5, 0, -4, -4, -4, -2, 0, 2, 6, 4, -2, -5,
-8, -8, 0, 6, 4, 1, -1, -1, -1, 1, 0, -3, -5, -2, 1, 3, 4, 5, 6, 4, -1, -4, -7,
-6, 3, 9, 6, 3, -1, -5, -5, -2, 1, 7, 9, 5, 1, -5, -10, -4, 4, 5, 3, 2, 1, 1, 4,
5, 1, -2, 0, 4, 5, 5, 3, -2, -5, -7, -7, -3, 1, 3, 4, 0, -6, -4, 2, 5, 6, 4, -3,
-8, -5, 0, 2, 4, 2, -3, -4, -2, 0, 1, 1, -1, -3, -4, -4, 0, 5, 6, 1, -2, -3, -2,
0, 1, -3, -9, -8, -3, -1, 1, 1, 0, -1, -1, 0, 1, 1, 2, 3, 3, 0, -2, -3, -4, -3,
-1, 2, 5, 4, 1, -1, -4, -4, -2, -1, -1, 0, 0, 0, 0, -1, -2, -5, -3, 3, 6, 6, 4,
-2, -7, -4, 0, 2, 4, 2, -4, -7, -5, -3, 2, 7, 5, 2, 0, -4, -4, -1, 0, -1, -2,
-4, -6, -3, 0, 1, 2, 0, -4, -6, -7, -6, -1, 2, 2, 0, 0, -1, -1, -1, -2, -6, -7,
-2, 1, 2, 2, -1, -6, -5, -2, -1, 0, -1, -5, -7, -4, -1, 2, 5, 3, -3, -5, -3, -1,
4, 7, 2, -2, -4, -5, -1, 6, 7, 4, 1, -6, -10, -9, -6, 0, 7, 8, 7, 5, -1, -3, -4,
-5, -2, 0, 1, 2, 1, 0, -2, -3, -2, 1, 2, 3, 2, 0, -3, -2, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, -1, -2, -2, -2, 0, 1, 1, 0, -1, -2, -1, 2, 2, 2, 1, -2, -4,
-4, -4, -1, 2, 2, 1, 0, -2, -2, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -2, -2, -1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, -1, -1, 0, 0, 1, 1, -1, -3,
-4, -5, -3, 0, 1, 0, -1, -2, -3, -2, -1, 0, 1, 1, 1, 0, -1, -1, -1, -2, -2, -2,
-1, 0, 0, 0, 0, 0, 0, -1, -1, 1, 2, 1, 0, -2, -4, -4, -2, -1, 0, 0, 0, 0, -1,
-2, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -2, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, -1, -2, -3, -3, -3, -2, -1, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, 1, 2, 1, 0, -1, -3, -2, -1, 0, 0, 0, -1, -1, -1, 0, 0,
0, 0, 0, 0, -1, -1, 1, 1, 1, 0, -1, -1, -1, 0, -1, -2, -2, -2, -1, 0, 1, 1, 0,
0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

#endif /* RZFIVE_H_ */
