#ifndef MOUTHTWENTY_H_
#define MOUTHTWENTY_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define MOUTHTWENTY_NUM_CELLS 3469
#define MOUTHTWENTY_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) MOUTHTWENTY_DATA [] =
{-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 2, 3, 14, 29, 13, -38,
-69, -45, 27, 76, 35, -24, -29, -26, -26, -2, 20, 8, -2, 15, 27, 24, -12, -37,
-49, -5, 28, 17, 25, -1, -2, 13, 31, 10, -34, -12, -12, 9, 68, 21, -54, -91,
-18, 50, 23, -17, -39, -21, 51, 54, -57, -64, -19, 41, 25, -1, 7, 16, 38, 32,
-6, -70, -65, -9, 61, 56, 2, -43, -5, 27, -8, -38, -14, 15, 20, 32, 0, -8, 8,
-14, -27, -12, -8, 3, 22, 24, 25, -32, -49, 11, -7, -18, 8, 26, 0, -13, -12, -3,
2, 0, 13, -9, 3, -7, 14, 3, -21, 42, 0, -24, 7, 1, 8, 1, -3, -10, -28, -6, 17,
8, -16, 8, 24, -7, -18, 6, 12, 0, 5, 5, -8, -12, 9, -6, 4, 21, -2, -16, -28, 1,
34, 15, -10, -40, -34, 6, 40, 15, -32, -6, 1, 9, 11, -20, -24, 15, 18, -4, -14,
35, 50, -5, -25, -14, -15, -22, 18, 28, -2, -7, 6, 0, 6, -11, -23, -37, 12, 42,
0, -9, 6, 12, 19, 0, -51, -28, 15, 51, 21, -25, -48, -12, -3, 2, 2, -5, 31, 21,
-14, -39, -9, 25, 8, -51, -32, 14, 50, 45, -16, -32, -22, 17, 40, -10, -49, -28,
43, 55, 5, -10, -22, -5, 17, 37, -19, -64, -22, 39, 52, -9, -17, 0, -10, -5, -6,
-28, -19, 27, 41, -7, -30, -16, 5, 8, 0, -7, -21, -3, 33, 31, -5, -22, -17, 8,
6, -21, -9, 35, 49, 10, -28, -22, -39, -7, 10, -4, 5, 8, 32, 35, -10, -46, -46,
-18, 30, 17, 13, 16, 9, 9, -2, -32, -38, -21, 1, 28, 39, 24, 19, 22, -14, -37,
-56, -12, 18, 18, 19, 6, 22, 14, -32, -61, -24, 15, 23, 2, -8, 16, 17, 1, -28,
-42, -25, -3, 22, 15, 18, 21, 32, 24, -21, -42, -41, 3, 36, 23, -8, 1, 36, 28,
-17, -32, -25, -23, -8, 8, 3, 10, 18, 10, -2, -30, -27, 4, 21, 4, -18, -13, 11,
16, 11, -4, -20, -12, 7, 6, -4, 20, 27, 4, -15, -15, -14, -5, 0, 7, 9, 6, 14, 8,
2, -20, -35, -21, -2, 15, 23, 6, -3, -5, -10, -7, -2, 2, 10, 9, 3, 3, -1, -4,
-6, -7, -15, 0, 10, 12, 11, 1, -5, -5, -5, -29, -17, 15, 14, 21, 9, 6, -6, -22,
-25, -25, 8, 5, 19, 10, 0, 9, -7, 10, 4, -24, -22, 1, 9, 15, 14, 12, 17, 5, -5,
-19, -28, -12, -10, 0, -4, -4, 12, 5, 0, -12, -6, 2, 0, 12, 3, 3, 6, -5, 6, 0,
-11, -1, 3, 14, 21, 5, 5, -8, -14, -17, -22, 3, 6, 11, 17, -3, -17, -21, -12,
-2, -4, -3, 0, 13, 20, 17, 1, -14, -19, -7, 2, -3, 6, 6, 8, 10, 16, 8, -13, -11,
-14, -8, 5, 8, 6, -5, -2, -2, 0, -1, -1, -3, -12, -2, -3, 4, -7, -8, 2, -6, 0,
0, 13, 12, 2, -2, 0, -9, -24, -2, 15, 33, 26, 9, 9, -4, -19, -32, -27, -16, -3,
10, 22, 12, 9, 9, -1, -16, -31, -28, -21, -3, 25, 38, 31, 11, -8, -16, -20, -12,
-11, 8, 13, 21, 18, 3, 5, -8, -12, -18, -10, -3, -5, -1, 2, 8, 1, -10, -13, -17,
-13, -9, 3, 20, 26, 18, 14, -3, -20, -24, -15, 8, 19, 19, 18, 15, 15, -3, -24,
-17, -29, -23, -20, -2, 22, 29, 38, 20, 5, -23, -35, -37, -32, -19, -1, 24, 37,
36, 13, -4, -12, -9, -10, -20, -16, 0, 19, 31, 25, 14, -3, -11, -17, -18, -13,
-19, -2, 13, 22, 16, 7, 7, -4, -13, -20, -30, -23, -9, 1, 5, 4, 9, 9, 18, 14, 2,
-5, -7, -10, -13, -11, 2, 15, 21, 28, 10, -1, -4, -9, -26, -31, -12, -7, 10, 12,
9, 16, 12, 12, -6, -20, -27, -29, -11, 0, 8, 11, 9, 22, 20, 7, 3, 2, -8, -13,
-14, -14, -3, 2, 19, 24, 21, 11, -11, -19, -24, -27, -25, -9, 12, 17, 13, 10,
14, 16, 7, -14, -34, -29, -20, -13, 0, 19, 41, 33, 11, -5, -14, -21, -26, -27,
-21, -4, 11, 20, 24, 23, 10, -1, -15, -29, -26, -17, 3, 17, 22, 24, 27, 16, -1,
-17, -12, -1, -8, -4, 9, 21, 18, 12, -3, -8, -14, -19, -13, -6, 3, 1, 5, -2, 0,
1, -8, -11, -15, -12, 1, 14, 9, 3, 0, 6, 0, -14, -10, -7, 16, 21, 11, -2, -3, 5,
-2, -11, -21, -11, 0, 5, 9, 7, 4, -2, 2, 4, -5, -10, -14, -7, 0, -6, 2, 2, 3, 3,
-11, -15, -10, 3, 8, 4, -1, -11, -11, -8, -12, -9, -6, -3, 5, -4, -12, -8, -5,
4, 3, -5, -1, 7, 12, 10, 5, 7, 9, 20, 21, 11, 7, 9, 18, 21, 11, 12, 16, 14, 9,
1, 1, -3, 2, 0, -6, -14, -16, -6, -3, 3, 1, 1, -9, -17, -19, -21, -13, -8, -13,
-9, -10, -2, -2, -6, -1, -4, 9, 7, 7, 4, 0, 5, 2, -3, 8, 14, 24, 18, 2, -10,
-23, -20, -10, -6, -5, -6, -16, -20, -20, -19, -25, -22, -16, -21, -19, -19,
-21, -12, -6, 2, 4, 1, 3, 16, 23, 20, 24, 15, 21, 27, 25, 23, 19, 27, 24, 21,
18, 15, 26, 24, 19, 7, -3, 0, -1, -3, -13, -14, -10, -6, -3, -8, -12, -9, -11,
-14, -23, -29, -20, -12, -8, -12, -12, -8, 3, 6, 3, 5, 7, 16, 17, 10, -2, -1, 5,
4, 1, -5, -7, 2, 3, -4, 2, 9, 18, 21, 11, 18, 21, 18, 6, -20, -37, -45, -39,
-45, -58, -56, -50, -42, -22, -23, -29, -21, -22, -11, -13, -13, 1, 7, 20, 29,
39, 45, 42, 59, 58, 54, 61, 51, 49, 49, 30, 14, 8, 9, 5, -5, -7, -6, 0, 2, -1,
-11, -21, -31, -36, -44, -42, -37, -37, -34, -32, -24, -22, -15, -9, -4, 0, 5,
7, 8, 6, 5, 10, 14, 18, 19, 25, 31, 35, 42, 31, 15, 9, -3, -2, 2, 5, 14, 31, 46,
50, 32, 7, -23, -33, -40, -74, -96, -111, -106, -92, -89, -77, -58, -29, 1, 7,
13, 16, 25, 38, 32, 25, 24, 29, 37, 51, 52, 65, 76, 85, 91, 73, 69, 66, 58, 43,
3, -21, -31, -30, -26, -54, -69, -67, -59, -51, -55, -52, -43, -44, -46, -58,
-61, -47, -37, -18, -8, -3, 17, 33, 51, 57, 50, 50, 42, 40, 28, 17, 17, 23, 23,
29, 29, 28, 29, 19, 36, 47, 54, 59, 30, 0, -26, -46, -62, -93, -113, -124, -127,
-109, -98, -83, -57, -39, -15, 4, 6, 12, 13, 19, 33, 38, 41, 43, 54, 72, 77, 91,
102, 99, 100, 86, 72, 57, 33, 14, -4, -26, -36, -44, -50, -48, -57, -59, -55,
-49, -46, -52, -50, -53, -59, -60, -62, -57, -53, -40, -20, 0, 13, 31, 48, 65,
77, 74, 73, 63, 56, 45, 25, 14, 6, -4, -12, -13, -5, 4, 13, 23, 12, 8, 30, 40,
32, 0, -40, -58, -53, -54, -79, -105, -96, -70, -54, -44, -43, -15, 16, 27, 32,
19, 15, 28, 35, 32, 21, 15, 25, 33, 49, 53, 42, 49, 56, 55, 40, 20, 11, 11, -1,
-20, -35, -44, -37, -33, -27, -32, -33, -17, -11, -7, -7, -10, -10, -8, -14,
-25, -28, -23, -16, -11, -9, -2, 14, 29, 38, 49, 48, 43, 41, 30, 18, 3, -9, -19,
-26, -33, -39, -37, -30, -26, -21, -18, -15, -19, -15, -8, -3, 0, -7, 9, 27, 37,
39, 36, 38, 49, 54, 49, 34, 20, 21, 6, -7, -20, -37, -41, -43, -49, -58, -65,
-59, -52, -49, -45, -46, -40, -33, -23, -6, 3, 10, 28, 41, 57, 67, 64, 75, 84,
86, 70, 53, 52, 47, 37, 19, 0, -7, -12, -20, -27, -33, -40, -48, -55, -52, -52,
-56, -60, -62, -58, -57, -58, -51, -39, -25, -17, -9, 7, 25, 40, 55, 63, 66, 62,
58, 56, 42, 29, 25, 19, 18, 12, 3, 1, 5, 9, 5, -2, -8, -13, -20, -28, -40, -49,
-48, -50, -48, -42, -34, -18, 6, 32, 47, 53, 54, 47, 44, 40, 25, 7, -13, -23,
-29, -38, -40, -40, -32, -17, -13, -10, -8, 0, 10, 7, 3, -7, -15, -14, -6, -2,
-1, 1, 15, 30, 39, 45, 46, 52, 54, 48, 34, 22, 10, -2, -17, -35, -41, -48, -49,
-47, -40, -33, -34, -27, -20, -18, -20, -24, -24, -25, -27, -24, -15, -3, 12,
21, 30, 41, 49, 61, 69, 76, 72, 61, 51, 41, 25, 7, -13, -29, -39, -48, -53, -56,
-52, -44, -42, -41, -38, -34, -29, -28, -28, -30, -30, -24, -19, -13, -4, 8, 17,
29, 40, 52, 63, 67, 70, 67, 60, 53, 42, 31, 19, 2, -13, -20, -26, -26, -21, -21,
-21, -26, -19, -16, -14, -14, -27, -29, -26, -25, -27, -34, -32, -27, -21, -15,
-13, -6, 8, 17, 24, 29, 27, 34, 34, 31, 26, 12, 11, 6, 5, 5, 0, 4, 1, 4, 11, 6,
7, 9, 6, 0, -11, -17, -16, -19, -19, -21, -24, -18, -11, -2, 6, 5, 8, 10, 8, 9,
2, -1, -6, -12, -15, -21, -20, -14, -12, -6, -3, 0, 10, 17, 24, 24, 22, 23, 22,
22, 18, 8, 5, 3, 1, -1, -8, -9, -8, -10, -9, -11, -16, -15, -15, -12, -14, -21,
-20, -19, -14, -13, -14, -6, 0, 5, 11, 15, 21, 25, 25, 25, 21, 16, 9, 0, -2, -9,
-17, -24, -26, -22, -21, -17, -11, -5, -1, 1, 5, 8, 7, 8, 9, 8, 8, 9, 11, 12,
11, 9, 9, 8, 8, 5, 2, 0, -3, -5, -8, -10, -7, -11, -12, -10, -10, -10, -10, -11,
-12, -13, -15, -9, -5, -2, 3, 6, 11, 13, 14, 14, 12, 12, 12, 8, 10, 10, 8, 9, 9,
14, 14, 9, 9, 7, 3, -3, -10, -15, -22, -26, -28, -31, -27, -23, -19, -14, -10,
-6, -4, -4, 0, 1, 1, 4, 3, 4, 5, 8, 13, 16, 20, 19, 21, 24, 25, 27, 25, 23, 18,
13, 4, 0, -5, -15, -23, -35, -37, -33, -32, -30, -30, -25, -20, -17, -13, -12,
-12, -10, -11, -7, -3, -2, 5, 8, 11, 16, 20, 29, 36, 40, 42, 37, 31, 24, 19, 16,
7, -1, -8, -12, -13, -14, -16, -15, -16, -16, -15, -19, -18, -17, -17, -16, -19,
-20, -18, -16, -11, -9, -7, -1, 4, 8, 10, 8, 11, 11, 11, 10, 5, 9, 9, 13, 17,
15, 17, 17, 18, 19, 19, 17, 17, 15, 14, 11, 5, 1, -8, -13, -21, -30, -33, -36,
-34, -33, -34, -29, -26, -21, -18, -17, -9, -2, 3, 5, 5, 8, 12, 12, 14, 14, 16,
19, 19, 23, 24, 24, 24, 17, 13, 9, 4, 0, -6, -9, -12, -16, -19, -20, -19, -18,
-19, -18, -17, -14, -9, -6, -4, -3, -4, -1, 5, 9, 12, 11, 10, 11, 13, 11, 9, 11,
14, 14, 11, 11, 12, 12, 8, 4, -1, -6, -10, -11, -11, -11, -13, -12, -8, -8, -9,
-10, -10, -10, -9, -11, -13, -12, -8, -4, -4, -1, 2, 7, 14, 15, 14, 14, 15, 15,
8, 2, -2, -4, -4, -6, -8, -7, -5, -1, 0, 0, 1, 2, 5, 5, 5, 1, -1, -2, -2, -4,
-6, -6, -5, -3, -3, -3, -3, -3, -3, -4, -4, -5, -3, 0, 1, 0, -1, 0, 4, 7, 6, 5,
3, 2, 1, -3, -7, -6, -6, -4, -3, -2, 1, 4, 8, 8, 6, 7, 7, 7, 4, -2, -4, -6, -8,
-8, -10, -8, -5, -3, -1, 2, 3, 4, 2, -1, -6, -8, -10, -8, -6, -5, -3, 1, 7, 11,
14, 16, 17, 17, 14, 10, 3, -3, -8, -11, -14, -14, -12, -10, -6, -1, 0, 0, -1,
-1, -2, -4, -6, -10, -11, -11, -9, -6, -2, 2, 7, 12, 19, 22, 22, 21, 19, 15, 8,
-2, -9, -16, -18, -19, -22, -21, -17, -10, -4, -2, -1, 1, 2, 3, 1, -1, -3, -5,
-6, -7, -6, -3, 1, 6, 12, 15, 15, 18, 18, 16, 11, 4, -1, -6, -7, -8, -9, -10,
-9, -6, -4, -3, -2, -1, 2, 2, 0, -2, -4, -4, -6, -9, -10, -10, -8, -2, 4, 8, 11,
12, 15, 16, 14, 12, 9, 6, 0, -8, -11, -12, -12, -11, -11, -9, -6, -3, 1, 3, 3,
1, 1, 0, -3, -6, -7, -6, -6, -5, -5, -3, 2, 5, 9, 10, 10, 10, 10, 9, 6, 2, -2,
-6, -8, -11, -11, -8, -6, -2, -1, 0, 0, 0, -1, -4, -5, -6, -9, -9, -8, -5, -2,
0, 2, 6, 8, 11, 11, 11, 11, 10, 9, 5, 1, -3, -4, -4, -3, -3, -2, -1, 0, 1, 1, 2,
2, 0, 0, -2, -5, -7, -8, -8, -9, -9, -8, -5, -3, -2, 0, 2, 4, 4, 3, 1, 0, 0, 0,
-2, -2, -2, 0, 1, 3, 6, 6, 8, 7, 7, 6, 3, 2, -1, -3, -5, -7, -7, -6, -5, -3, -3,
-3, -3, -3, -4, -5, -6, -7, -7, -6, -4, -2, 0, 3, 4, 5, 7, 8, 11, 11, 11, 9, 8,
6, 3, 2, 1, 0, -2, -3, -2, -2, -4, -6, -8, -8, -10, -12, -14, -15, -16, -16,
-15, -14, -12, -10, -6, -2, 2, 4, 6, 10, 13, 15, 18, 18, 18, 18, 17, 17, 14, 12,
9, 7, 5, 3, 1, 0, -3, -7, -11, -16, -17, -18, -20, -21, -20, -17, -13, -11, -7,
-4, -2, 0, 2, 4, 4, 4, 4, 5, 6, 6, 8, 11, 14, 14, 14, 15, 14, 11, 8, 4, 1, -1,
-4, -6, -6, -7, -8, -9, -9, -8, -7, -8, -8, -9, -10, -11, -12, -12, -11, -10,
-7, -5, -2, 2, 6, 10, 13, 15, 16, 14, 12, 10, 7, 3, -2, -3, -4, -5, -6, -6, -3,
1, 2, 2, 3, 4, 3, 2, 0, -3, -4, -5, -6, -8, -8, -8, -6, -3, -2, 1, 4, 6, 7, 6,
4, 2, 0, -3, -6, -8, -10, -11, -9, -7, -4, -1, 3, 5, 7, 9, 9, 7, 6, 4, 3, 1, 0,
-1, -1, 0, 0, 0, 1, 0, -1, -2, -3, -4, -6, -7, -8, -9, -9, -10, -9, -7, -5, -2,
1, 5, 8, 10, 12, 12, 12, 10, 7, 5, 2, 0, -2, -3, -2, -2, -1, 1, 2, 3, 3, 2, 1,
-1, -2, -5, -7, -9, -12, -13, -13, -11, -10, -8, -5, -2, 0, 1, 3, 4, 5, 5, 5, 3,
2, 1, 1, 1, 1, 2, 3, 4, 4, 5, 6, 6, 5, 3, 3, 2, 0, -2, -4, -6, -9, -11, -11,
-10, -9, -7, -6, -3, 0, 1, 2, 4, 4, 3, 1, 1, 0, -1, -1, -2, -2, -1, 0, 3, 4, 6,
7, 6, 6, 5, 3, 1, -1, -2, -4, -6, -6, -5, -4, -3, -2, -1, 1, 2, 3, 3, 4, 4, 3,
2, 1, 0, -2, -3, -3, -4, -4, -4, -3, -3, -3, -3, -5, -4, -4, -3, -3, -3, -2, -1,
0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 2, 2, 2, 1, 3, 3, 3, 4, 4, 4,
3, 3, 1, 0, -1, -2, -3, -4, -4, -3, -3, -3, -5, -5, -6, -5, -4, -4, -4, -4, -3,
-3, -4, -5, -6, -6, -6, -5, -3, 0, 3, 6, 8, 10, 11, 11, 12, 12, 9, 6, 3, 1, -2,
-4, -6, -7, -7, -6, -5, -4, -2, -1, 0, -1, -2, -2, -3, -4, -6, -7, -7, -7, -6,
-5, -2, 1, 3, 6, 8, 8, 9, 9, 8, 6, 4, 2, 1, 0, -2, -2, -2, -2, -2, -2, -2, -2,
-1, -1, -2, -2, -3, -3, -4, -5, -5, -5, -5, -4, -3, -3, -1, 1, 3, 3, 3, 2, 1, 1,
0, -1, -2, -1, -1, -2, -2, -2, 0, 1, 2, 1, 0, -1, -2, -3, -4, -4, -4, -3, -2,
-1, 1, 3, 6, 7, 8, 9, 9, 9, 8, 6, 3, 0, -3, -5, -7, -8, -9, -9, -8, -8, -7, -6,
-5, -4, -4, -3, -2, -1, 1, 2, 2, 2, 4, 5, 6, 7, 7, 8, 8, 8, 7, 6, 5, 2, 0, -3,
-5, -7, -9, -10, -12, -12, -13, -12, -10, -9, -7, -6, -4, -3, -1, 0, 2, 4, 4, 5,
5, 5, 5, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 3, 2, 1, 0, -1, -2, -3, -5, -6, -6, -5,
-5, -5, -5, -6, -6, -6, -7, -8, -8, -7, -6, -5, -4, -2, 1, 3, 5, 7, 8, 9, 10,
10, 9, 7, 6, 4, 2, 1, 0, 0, -1, -2, -2, -3, -4, -5, -6, -6, -7, -8, -9, -9, -9,
-8, -6, -3, 0, 2, 4, 7, 8, 9, 9, 9, 8, 6, 4, 2, 0, -1, -3, -3, -4, -4, -4, -4,
-4, -4, -4, -4, -5, -5, -6, -5, -5, -4, -2, -1, 0, 2, 5, 6, 7, 8, 7, 7, 6, 4, 2,
0, -1, -3, -4, -4, -4, -3, -2, -2, -2, -2, -2, -2, -3, -4, -5, -6, -6, -5, -5,
-4, -3, -1, 0, 1, 2, 3, 3, 3, 3, 4, 4, 4, 2, 0, -1, 0, 1, 2, 2, 4, 4, 3, 2, 0,
-1, -3, -4, -6, -7, -7, -7, -6, -4, -2, -1, -1, -1, -1, 0, 2, 2, 1, -1, -3, -3,
-1, 2, 5, 6, 8, 8, 7, 5, 2, -1, -2, -2, -2, -2, -1, -1, -1, -2, -3, -4, -5, -6,
-7, -8, -10, -10, -9, -6, -4, -1, 0, 0, 0, -1, -2, -1, 0, 3, 5, 7, 9, 9, 9, 8,
6, 5, 4, 3, 2, 2, 3, 3, 3, 2, 1, 0, -2, -4, -6, -8, -9, -9, -9, -7, -6, -5, -4,
-4, -4, -5, -5, -4, -3, -2, 0, 1, 3, 4, 5, 5, 4, 4, 3, 4, 4, 4, 5, 5, 5, 5, 4,
2, 1, -1, -3, -4, -4, -5, -5, -4, -4, -4, -4, -5, -6, -6, -6, -5, -5, -4, -2,
-1, 0, 1, 1, 1, 1, 2, 2, 3, 4, 5, 6, 6, 5, 4, 3, 2, 0, -1, -2, -3, -3, -3, -2,
-1, -1, -1, -1, -2, -2, -3, -3, -3, -3, -3, -2, -2, -2, -1, 0, 1, 1, 2, 2, 2, 1,
1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -2, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -2, -2, -1, -1,
-1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, 0, 0, 0, 0,
1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, };

#endif /* MOUTHTWENTY_H_ */