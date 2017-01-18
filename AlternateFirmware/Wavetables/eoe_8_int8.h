#ifndef EOE_8_H_
#define EOE_8_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define EOE_8_NUM_CELLS 5903
#define EOE_8_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) EOE_8_DATA [] = {30, -38,
22, 13, -36, 34, -39, 39, -26, 41, -69, 59, -33, 3, 1, 14, -11, 1, -6, -4, 25,
-37, 28, -23, 42, -67, 57, -34, 22, -6, -16, 15, -10, 7, -16, 25, -17, 9, -5,
-2, 3, -6, 12, -19, 31, -29, -15, 35, -32, 46, -62, 58, -39, 7, 29, -57, 60,
-50, 33, 2, -27, 3, 18, -17, -5, 39, -57, 42, -7, -28, 35, -16, -17, 27, 0, -36,
32, -10, 15, -22, -14, 53, -56, 34, -20, 13, -3, -25, 51, -59, 53, -51, 31, -9,
4, 11, -48, 57, -30, -7, 24, -10, -22, 37, -27, -4, 28, -16, -25, 52, -48, 12,
24, -39, 40, -15, -23, 12, 27, -51, 63, -57, 12, 25, -32, 27, -24, 27, -19, -2,
-15, 46, -55, 41, -22, -7, 39, -56, 32, 9, -27, 14, 7, -26, 38, -33, -6, 29, -5,
-37, 58, -57, 41, -14, -16, 38, -52, 44, -41, 44, -21, -13, 27, -39, 34, -3,
-31, 41, -32, 13, -1, -6, 7, -7, 4, -1, -12, 20, 5, -44, 37, -8, -7, 15, -7,
-29, 57, -59, 18, 31, -60, 67, -59, 26, 17, -50, 46, -19, 7, -3, -28, 52, -50,
28, -11, -1, 1, -4, 19, -45, 68, -80, 61, -27, -2, 15, -19, 34, -58, 46, -28,
34, -43, 41, -39, 26, -12, -8, 39, -65, 74, -66, 31, 4, -20, 4, 16, -21, 8, 13,
-34, 21, 9, -22, 17, -19, 5, 22, -35, 28, -28, 43, -48, 16, 6, -6, 3, -10, 10,
-17, 43, -54, 20, 24, -40, 21, -9, -4, 23, -28, 13, -2, 7, -34, 49, -35, -4, 39,
-45, 12, 13, 6, -49, 65, -53, 22, 3, -11, 17, -24, 25, -33, 30, -20, 6, -1, -9,
21, -21, 19, -20, 21, -1, -52, 66, -38, 11, 12, -27, 5, 25, -21, -17, 48, -58,
36, -7, -4, 8, -11, 9, -7, -7, -5, 35, -42, 15, 15, -32, 36, -27, -5, 32, -36,
19, -7, -4, 4, 8, -14, 21, -5, -45, 66, -63, 47, -17, -13, 36, -45, 25, -8, 12,
-34, 44, -29, 0, 23, -37, 33, -24, 13, -7, 3, -3, -9, 28, -40, 51, -60, 37, 3,
-41, 55, -48, 53, -71, 64, -37, 7, 5, -17, 39, -64, 75, -67, 31, -2, -1, -2, 5,
-9, 6, 1, -21, 45, -51, 23, 2, -23, 30, -9, -21, 32, -32, 23, -26, 32, -25, 14,
0, -29, 50, -57, 50, -51, 51, -30, 1, 15, -30, 43, -50, 38, -27, 14, 6, -34, 46,
-31, 7, 17, -46, 44, -9, -12, -5, 21, -27, 21, 7, -45, 63, -58, 48, -38, 9, 10,
-12, 25, -44, 38, -28, 21, -29, 44, -42, 14, 20, -53, 68, -67, 54, -35, 4, 27,
-49, 57, -58, 44, -26, 13, -6, 2, 17, -57, 68, -57, 44, -20, -20, 51, -62, 41,
-2, -35, 46, -39, 16, -2, 9, -2, -24, 25, -26, 48, -70, 61, -30, -3, 30, -49,
45, -37, 30, -34, 41, -34, 13, -8, 4, 2, -1, 18, -57, 67, -58, 45, -23, -13, 48,
-71, 63, -32, -7, 36, -47, 36, -30, 31, -37, 35, -21, -9, 43, -72, 73, -49, 10,
9, -5, -1, 11, -23, 26, -9, -34, 57, -58, 45, -23, -8, 34, -40, 11, 20, -22,
-10, 39, -44, 24, 4, -35, 49, -32, -11, 35, -26, 11, -7, -1, 2, -10, 24, -35,
37, -30, 12, 8, -38, 54, -47, 25, -7, -4, 7, -14, 25, -36, 29, -15, 18, -33, 12,
31, -58, 48, -21, -3, 7, 14, -39, 36, -22, -7, 41, -61, 64, -53, 22, 5, -19, 5,
21, -15, -25, 51, -52, 38, -15, -19, 31, -17, -5, 15, -22, 19, 1, -23, 29, -14,
-24, 46, -42, 18, 11, -31, 35, -37, 17, 9, -5, -18, 38, -55, 45, -13, -16, 29,
-31, 16, -9, 22, -27, 21, -19, 0, 13, 3, -26, 25, -14, -11, 27, -4, -26, 19, 1,
-21, 39, -44, 30, -22, 10, 9, -30, 40, -29, -3, 29, -32, 11, 13, -30, 32, -22,
-3, 31, -37, 3, 23, -23, 20, -19, 23, -27, 11, 6, -22, 35, -42, 33, -30, 38,
-35, 23, -1, -36, 50, -35, 9, 0, -2, -2, 16, -33, 25, -7, 1, 7, -24, 35, -41,
22, -4, -9, 23, -26, 3, 11, 14, -45, 43, -18, -12, 33, -48, 46, -18, -22, 39,
-31, 15, 2, -19, 28, -44, 42, -12, -24, 38, -36, 25, -17, 11, -14, 17, -17, 1,
23, -43, 51, -48, 19, 11, -17, -8, 32, -30, 7, 14, -29, 31, -33, 40, -47, 40,
-13, -28, 49, -45, 31, -11, -11, 21, -31, 19, 4, 6, -40, 45, -19, -17, 47, -63,
63, -55, 32, -5, -27, 46, -44, 23, 10, -28, -3, 40, -51, 35, 0, -34, 42, -28,
-8, 36, -30, -3, 25, -34, 19, 9, -19, 10, 5, -32, 31, -2, -8, -9, 21, -17, -11,
37, -47, 47, -48, 34, -9, -6, 19, -44, 48, -29, 12, -6, 22, -33, -1, 34, -45,
47, -42, 14, 28, -59, 61, -43, 15, 5, -15, 6, 7, -2, -24, 36, -29, 30, -33, 26,
-25, 9, 12, -22, 20, -21, 24, -35, 38, -22, -5, 31, -49, 31, -2, -7, 10, -21,
33, -38, 29, -29, 21, 2, -34, 57, -64, 44, -15, -7, 20, -14, -12, 9, 6, -3, 0,
-3, 4, -13, 3, 18, -18, -1, 11, -27, 44, -40, 13, 0, 12, -28, 19, 3, -26, 42,
-57, 51, -31, 14, -8, 10, -7, -9, 30, -63, 65, -39, 12, 12, -25, 17, -20, 33,
-44, 43, -27, -5, 25, -32, 45, -52, 29, -13, 9, 4, -30, 43, -34, 29, -30, 11,
15, -32, 23, -17, 18, -10, -1, 5, -8, 16, -20, 4, -6, 13, -13, -4, 32, -48, 30,
-2, -16, 12, 13, -27, -9, 39, -43, 47, -41, 13, 3, -18, 31, -33, 43, -50, 27,
-16, 16, 6, -36, 40, -41, 42, -35, 9, 27, -52, 54, -42, 17, 1, -11, 14, -22, 42,
-59, 48, -26, 12, -12, 15, -2, -32, 43, -48, 59, -59, 35, 1, -36, 49, -39, 8,
25, -39, 25, -3, -15, 18, -17, 2, 18, -12, -18, 37, -52, 51, -24, -19, 42, -40,
26, -11, -12, 10, 19, -47, 44, -19, -14, 39, -60, 59, -34, 5, 10, -29, 48, -51,
39, -21, -4, 14, -24, 30, -27, 37, -50, 47, -34, 0, 23, -27, 40, -57, 46, -38,
33, -7, -27, 24, 9, -33, 22, 8, -36, 56, -61, 37, 1, -36, 49, -31, -8, 31, -18,
-9, 5, 17, -30, 28, -31, 19, 7, -28, 43, -55, 53, -37, 3, 19, -16, 8, 1, -11,
17, -9, -23, 30, -6, -21, 21, -2, -24, 42, -50, 33, -15, 21, -28, 14, 4, -25,
31, -28, 23, -24, 25, -30, 35, -34, 16, 11, -33, 41, -39, 18, -3, -12, 32, -31,
6, 2, -5, 3, 6, 3, -29, 36, -40, 39, -24, 6, 11, -25, 27, -32, 19, 6, -2, -29,
41, -30, 12, -2, -4, 5, -5, 1, -7, 15, -15, 23, -48, 51, -34, 23, -23, 7, 23,
-44, 34, -20, 14, -13, 12, -20, 33, -41, 31, -16, 4, 11, -26, 18, -18, 32, -34,
13, -5, 14, -16, -6, 18, -7, -5, 22, -45, 34, 2, -35, 36, -13, -6, 3, -1, -10,
34, -52, 40, -11, -14, 18, -14, 5, 3, -14, 14, 3, -17, 20, -30, 25, -9, 3, -5,
19, -38, 35, -15, -21, 43, -41, 22, -3, -3, -3, 5, -9, 6, 5, -15, 3, 17, -21,
18, -22, 15, -6, 0, -5, 9, 7, -34, 50, -57, 47, -23, -3, 25, -36, 20, -3, -12,
24, -11, -28, 54, -53, 27, 5, -31, 34, -9, -29, 35, -13, -10, 27, -46, 42, -13,
-16, 9, 16, -41, 48, -30, -7, 37, -52, 47, -42, 35, -23, 1, 10, 0, -4, -14, 22,
-19, 8, 10, -23, 18, -7, -3, -1, 3, 14, -32, 22, -18, 36, -43, 25, -1, -22, 30,
-28, 11, 9, -9, -19, 31, -24, 19, -11, -12, 33, -39, 14, 2, 2, 6, -21, 16, -12,
15, -21, 17, -12, 0, 23, -52, 55, -36, 14, 6, -22, 25, -28, 24, -20, 17, -9, -2,
8, -21, 24, -8, -16, 14, 4, 1, -32, 42, -29, 17, -2, -27, 39, -39, 42, -46, 43,
-39, 23, -11, 11, -10, -12, 39, -62, 72, -69, 54, -30, -2, 20, -23, 26, -26, 25,
-37, 28, 3, -36, 47, -33, 6, 3, -13, 29, -39, 51, -62, 41, -8, -17, 34, -49, 37,
-10, -8, 1, 26, -43, 33, -24, 12, 7, -24, 23, -17, 15, -16, 3, 7, -2, 4, -20,
14, 4, -20, 19, -23, 40, -53, 39, -11, -21, 37, -37, 27, -21, 33, -53, 34, 0,
-21, 40, -57, 42, -11, -15, 25, -17, 9, -18, 24, -25, 12, 9, -20, 25, -32, 45,
-61, 43, -10, -18, 31, -35, 24, -20, 32, -51, 51, -34, 3, 16, -19, 16, -9, 0,
-10, 34, -50, 26, 12, -36, 32, -11, -16, 42, -54, 31, -13, 25, -33, 7, 22, -37,
36, -40, 52, -57, 41, -18, -15, 40, -46, 25, -1, -10, 10, -1, -11, -4, 24, -37,
31, -5, -27, 52, -64, 58, -39, 16, -11, 9, 2, -15, 28, -50, 58, -52, 47, -48,
33, -6, -22, 35, -41, 45, -39, 19, -8, 0, 3, -11, 12, -1, -7, 9, -10, 17, -30,
15, 4, -1, -7, -10, 29, -34, 38, -35, 11, 3, 7, -24, 20, -5, -16, 34, -44, 41,
-25, -2, 24, -40, 39, -17, -17, 44, -56, 44, -18, -11, 17, 1, -19, 11, 12, -32,
41, -46, 30, -8, -1, 2, -3, 6, -14, 17, -17, 9, 5, -24, 22, -10, 0, -5, 12, -9,
0, 19, -47, 58, -55, 31, -10, 8, -3, -10, 18, -37, 49, -48, 43, -38, 22, -5,
-17, 40, -46, 20, 17, -35, 22, 1, -27, 40, -33, 18, -4, -7, -7, 20, -21, 9, 7,
-19, 15, -19, 36, -50, 44, -33, 16, 7, -19, 4, 8, 3, -27, 38, -40, 45, -41, 9,
17, -16, 9, -15, 5, 21, -39, 29, -5, -17, 30, -34, 12, 6, 6, -38, 57, -55, 30,
2, -24, 29, -26, 18, -12, 2, -1, 18, -34, 22, -2, -3, -12, 18, -12, 2, -1, -5,
13, -19, 15, -15, 7, 5, -3, -8, 15, -17, 13, -3, -12, 8, 0, -10, 19, -10, -12,
18, -14, 0, 14, -17, 11, 2, -29, 36, -25, 24, -24, 26, -30, 8, 19, -38, 52, -57,
41, -20, 2, 7, -10, 7, -6, -3, 18, -17, -11, 38, -41, 16, 5, -8, -13, 38, -45,
29, -3, -25, 40, -39, 13, 17, -19, -10, 36, -46, 27, -1, -11, 11, -13, 0, 15,
-14, 1, -1, 4, 11, -32, 21, 3, -10, -14, 36, -42, 44, -35, 4, 18, -29, 29, -21,
24, -40, 43, -43, 31, -2, -25, 25, -9, -4, -6, 26, -33, 21, -7, -11, 23, -27,
15, 10, -38, 44, -35, 16, -2, -12, 23, -22, 5, -1, 9, -13, 20, -25, 6, 21, -39,
24, 4, -20, 22, -25, 22, -11, -3, 7, -4, -7, 9, 6, -28, 36, -39, 35, -34, 27,
-9, -15, 34, -44, 37, -36, 44, -47, 33, -12, -7, 16, -27, 43, -53, 43, -21, -5,
19, -27, 26, -22, 9, 13, -29, 34, -28, 4, -2, 19, -27, 18, -4, -18, 28, -24, 28,
-37, 26, -14, 11, -7, -9, 17, -7, -7, 6, -2, -1, 1, -3, -6, 20, -16, -5, 22,
-40, 46, -40, 36, -29, 5, 12, -25, 28, -21, 25, -30, 18, -23, 31, -18, -13, 37,
-44, 29, -2, -26, 42, -36, 12, -1, -4, 1, 0, 10, -31, 51, -61, 53, -37, 12, 7,
-14, 18, -23, 27, -39, 42, -41, 39, -38, 27, -10, -12, 27, -32, 29, -35, 41,
-32, 2, 23, -31, 34, -32, 6, 26, -46, 41, -25, 7, 3, -6, 1, 1, 13, -38, 49, -39,
8, 22, -38, 29, -14, 2, 8, -9, 4, -8, 1, 0, 21, -36, 26, -6, -19, 31, -30, 34,
-36, 20, -2, -15, 10, 5, -6, -13, 36, -52, 47, -28, 4, 19, -35, 29, -29, 42,
-42, 20, 0, -18, 30, -41, 37, -24, 19, -8, -22, 34, -38, 42, -39, 22, -7, -8,
27, -47, 56, -57, 42, -18, -5, 7, 3, -11, -2, 22, -36, 36, -27, 5, 12, -2, -24,
33, -27, 8, -1, 7, -9, 8, -13, 6, -1, -4, 13, -31, 48, -60, 55, -37, 15, -9, 2,
16, -34, 40, -43, 39, -27, 2, 14, -16, 14, -13, 10, -11, 14, -7, -16, 25, -30,
22, -10, 23, -32, 7, 17, -33, 43, -44, 40, -34, 13, 10, -24, 12, 7, -2, -28, 43,
-41, 25, -3, -23, 39, -37, 14, 2, -18, 37, -39, 16, 9, -19, 13, -11, 8, -5, 10,
-27, 38, -33, 10, 21, -48, 52, -38, 15, -5, 7, -3, -10, 20, -30, 22, -12, 5, -3,
1, -4, 2, 9, -28, 39, -29, -2, 22, -24, 33, -49, 41, -18, -6, 20, -25, 16, -10,
17, -34, 41, -32, 6, 23, -44, 35, -10, -14, 27, -25, -2, 29, -36, 15, 13, -36,
38, -22, -8, 24, -26, 36, -47, 30, -2, -19, 14, 4, 2, -31, 43, -44, 31, -9, -13,
28, -36, 17, 1, -3, 1, 4, -1, -21, 24, -17, 6, 12, -32, 35, -25, 7, -7, 22, -30,
17, 2, -21, 36, -45, 34, -18, 13, -7, -4, -2, 15, -28, 16, 9, -31, 40, -39, 20,
9, -30, 21, 1, -17, 26, -31, 16, -3, -3, -6, 25, -27, 1, 26, -44, 42, -27, 18,
-15, 6, -3, -4, 12, -1, -12, 1, 5, -7, 14, -11, -2, -5, 17, -22, 17, -14, 8, 2,
-13, 8, 4, -6, 7, 0, -27, 38, -23, -3, 11, 9, -35, 32, -8, -23, 40, -41, 29,
-16, 4, -3, 1, 12, -31, 30, -12, -10, 24, -36, 31, -9, -11, 11, -6, 4, -11, 19,
-13, 0, -6, 14, -24, 33, -34, 19, 1, -17, 13, -11, 26, -47, 53, -49, 29, -5,
-12, 13, -14, 17, -22, 27, -32, 17, 8, -16, -4, 15, -9, 10, -22, 11, 11, -18, 4,
-1, 14, -19, 9, -14, 23, -11, -9, 5, 1, 9, -16, -3, 24, -23, 4, 14, -29, 29,
-15, -6, 12, -8, -4, 6, 3, 1, -12, 2, 0, 6, -8, 15, -16, -12, 32, -21, 0, -4,
17, -22, 10, 4, -13, 20, -24, 18, -15, 7, -2, -7, 12, -9, 4, -5, 12, -20, 19,
-16, -3, 20, -28, 20, -1, -17, 22, -8, -15, 17, -10, -6, 27, -35, 18, -4, 0, 10,
-26, 30, -28, 15, -10, 10, -8, 15, -20, 3, 12, -18, 18, -13, 2, -2, 12, -22, 26,
-24, 20, -12, -9, 4, 11, -6, -17, 33, -39, 29, -16, -3, 11, -1, -19, 14, 11,
-34, 38, -29, 8, 9, -26, 28, -20, 21, -18, -10, 25, -13, -11, 13, 9, -35, 40,
-30, 6, 13, -22, 21, -9, -8, 3, 8, -22, 33, -29, 4, 22, -38, 33, -17, 9, -11,
-2, 20, -30, 20, -5, 13, -28, 11, 16, -27, 23, -24, 29, -27, 13, 1, -9, 15, -30,
31, -17, 3, 1, -14, 19, 2, -32, 37, -22, 2, 12, -25, 19, 0, -21, 24, -11, -13,
32, -45, 42, -28, 11, -9, 10, -5, -11, 23, -26, 25, -31, 23, -7, -5, 10, -16,
26, -25, -3, 25, -32, 26, -16, 4, -5, 10, -7, -2, 12, -23, 30, -32, 19, -13, 18,
-10, -16, 34, -31, 12, -8, 17, -17, 2, -1, 1, 9, -19, 24, -24, 15, -8, -6, 5, 8,
1, -24, 21, -2, -7, -2, 2, 15, -34, 36, -27, 6, 18, -36, 39, -38, 27, -16, 19,
-22, 2, 22, -42, 44, -31, 10, 4, -18, 21, -15, 21, -24, 10, 4, -19, 21, -22, 27,
-27, 12, 0, 4, -12, 3, 6, -16, 30, -43, 41, -28, 11, -2, -15, 29, -28, 15, -18,
30, -33, 17, 9, -30, 35, -34, 21, 0, -25, 35, -26, 8, 11, -23, 11, 4, -8, -5,
23, -36, 31, -12, -16, 26, -19, 16, -18, -1, 12, -4, -9, 16, -6, -18, 22, -22,
18, 1, -23, 27, -29, 29, -21, 0, 11, -2, -5, -14, 27, -26, 23, -20, 15, -9, 7,
-10, -8, 32, -42, 37, -24, 5, 6, -13, 12, -10, 6, -3, 0, -3, 11, -18, 6, 14,
-21, 9, 0, -12, 21, -21, 14, -4, -13, 22, -16, -16, 33, -20, -6, 26, -36, 30,
-15, -10, 22, -8, -15, 13, -7, 12, -15, -3, 19, -16, -1, 7, -7, 1, 10, -26, 31,
-27, 16, -9, 2, 10, -22, 21, -24, 26, -19, 13, -5, -16, 22, -17, 6, -4, 13, -25,
19, 1, -26, 40, -38, 21, -8, -6, 18, -24, 14, -2, 0, -14, 23, -20, 13, -10, 14,
-13, -12, 32, -33, 22, -18, 15, -14, 15, -20, 13, 4, -17, 14, -15, 23, -25, 11,
-4, 3, 7, -12, -5, 16, -22, 26, -22, 4, 13, -22, 13, -9, 24, -42, 41, -27, 3,
18, -31, 22, -9, 3, 4, -14, 8, 0, -6, 4, -10, 26, -31, 13, -4, 7, -6, 1, 4, -9,
2, 0, -6, 9, 4, -27, 35, -31, 25, -20, 8, -1, -4, 11, -26, 35, -34, 25, -4, -27,
32, -17, 2, 1, 6, -12, 0, 9, -11, 7, -5, 10, -22, 19, -1, -21, 20, -1, -12, 5,
0, -5, 15, -27, 27, -10, -17, 31, -29, 13, -3, 0, -7, 13, -2, -21, 27, -17, -1,
11, -21, 27, -23, 4, 14, -22, 25, -31, 29, -22, 14, -14, 8, 7, -21, 26, -36, 37,
-20, -9, 24, -21, 6, 13, -27, 22, -4, -12, 10, -3, -10, 15, -1, -22, 24, -4,
-20, 18, -1, -18, 29, -36, 30, -15, -2, 7, -12, 18, -23, 20, -22, 23, -17, 6, 3,
-13, 22, -33, 22, 6, -30, 36, -29, 7, 15, -28, 17, 3, -3, -22, 30, -20, 8, 4,
-16, 21, -21, 4, 9, -17, 17, -7, -4, 6, -18, 30, -31, 13, 8, -21, 14, -2, -14,
25, -19, -2, 13, -17, 19, -27, 33, -28, 13, 0, -13, 15, -13, 8, -12, 18, -19,
11, -2, -6, 12, -14, 4, 15, -28, 12, 3, -5, 7, -11, 6, 0, -10, 14, -8, -3, 11,
-21, 23, -16, -1, 9, 3, -18, 15, -9, -4, 19, -25, 23, -16, -2, 7, -7, 5, -6, 4,
6, -27, 28, -14, -5, 18, -27, 18, 4, -18, 5, 15, -27, 27, -25, 9, 12, -24, 13,
-1, 3, -7, 5, -10, 15, -22, 19, -9, -4, 14, -18, 6, 15, -23, 7, 10, -25, 28,
-20, 2, 14, -14, -6, 19, -24, 19, -5, -5, 2, -1, 3, -14, 28, -37, 31, -12, -7,
2, 14, -15, -7, 21, -24, 27, -35, 32, -19, 1, 10, -17, 15, -12, 3, 3, 6, -24,
30, -21, -2, 20, -25, 14, 3, -22, 21, -6, -9, 22, -30, 17, 2, -18, 15, -5, 3,
-1, 0, -8, 6, -3, 0, 6, -15, 19, -17, 8, 0, -6, 1, 13, -20, 6, 13, -30, 31, -26,
28, -25, 7, 1, -4, 6, -15, 28, -38, 34, -19, 0, 14, -21, 13, -10, 12, -5, -17,
25, -16, 1, -5, 13, -6, -12, 19, -21, 21, -21, 13, -7, 5, -10, 10, -3, -4, 7,
-22, 28, -23, 14, -11, 22, -34, 18, 7, -27, 35, -32, 16, 0, -16, 16, -5, -7, 14,
-13, 10, -19, 21, -15, 9, -5, -7, 14, -18, 22, -31, 31, -21, 4, 6, -19, 25, -16,
-2, 5, 6, -17, 8, 11, -27, 26, -16, 1, 3, -1, -4, -2, 14, -27, 24, -15, 11, -14,
18, -12, -12, 23, -27, 31, -33, 22, -6, -8, 18, -23, 18, -13, 2, 2, -7, 14, -10,
-5, 10, -6, -3, -1, 15, -28, 26, -15, 2, 4, -8, 13, -24, 23, -22, 21, -13, -3,
7, -1, -8, 7, -5, 3, 2, -13, 10, -2, -2, 9, -12, 1, 8, -22, 25, -20, 22, -25,
10, -6, 10, -4, -13, 27, -39, 40, -33, 15, 0, -10, 12, -7, -2, -9, 20, -19, 5,
1, 4, -2, -18, 23, -7, -11, 11, -7, 5, -11, 21, -23, 14, -5, -9, 14, -12, 9,
-10, 18, -31, 28, -20, 12, -3, -13, 26, -32, 21, -2, -13, 15, -7, -13, 27, -27,
17, -6, -10, 16, -9, -11, 22, -14, -10, 25, -31, 27, -20, 14, -15, 11, -6, -4,
18, -28, 28, -27, 20, -12, -2, 11, -13, 13, -12, -1, 5, -5, 4, -6, 6, -11, 13,
-8, -6, 18, -22, 11, -1, -1, -10, 19, -22, 11, 6, -23, 26, -17, -1, 8, -3, -12,
20, -17, 10, 1, -21, 25, -17, -1, 13, -15, 12, -1, -14, 13, -10, 7, -6, 4, -8,
15, -20, 13, 1, -18, 25, -23, 7, 8, -12, 5, 6, -20, 19, -12, 6, -5, 4, -9, 14,
-16, 11, -3, -10, 17, -20, 14, -15, 23, -28, 18, -9, 11, -16, 9, -4, -4, 15,
-28, 35, -34, 26, -20, 7, 10, -23, 24, -13, -2, 1, 3, -4, 8, -5, -11, 11, -4,
-8, 19, -21, 11, 1, -16, 22, -14, 1, 2, -2, 2, -6, 4, -2, -5, 11, -13, 7, -7, 8,
-10, 4, 3, -8, 13, -19, 9, 10, -17, 8, 4, -14, 16, -19, 19, -17, 11, -6, -7, 15,
-15, 12, -10, 6, -9, 7, -6, 3, 6, -18, 16, -3, -15, 27, -28, 13, 7, -21, 23,
-19, 8, -1, -8, 14, -12, -3, 18, -22, 9, 3, -6, 7, -8, 5, -1, -8, 0, 13, -19,
11, -1, -3, 1, 1, -5, 8, -3, -18, 21, -11, 3, -6, 11, -10, 2, 3, -11, 19, -15,
-3, 12, -12, 0, 13, -21, 18, -10, -7, 16, -16, 13, -7, -7, 16, -16, -1, 18, -24,
19, -6, -14, 23, -19, 1, 18, -26, 14, 6, -17, 5, 6, -9, 9, 1, -22, 30, -31, 21,
-11, 4, 3, -18, 15, -4, 4, -16, 16, -12, 9, -11, 7, 4, -17, 15, -3, -8, 6, -2,
-4, 3, 9, -20, 15, 1, -16, 12, -3, 4, -11, 17, -27, 27, -19, 7, 7, -22, 27, -23,
11, -9, 16, -19, 12, -9, 8, -5, -5, 15, -24, 21, -7, -9, 7, 9, -25, 24, -13, -1,
7, -10, 2, 9, -14, 7, 5, -20, 26, -29, 24, -15, 3, 1, -9, 18, -22, 20, -13, -1,
3, -4, 8, -8, 12, -19, 9, 1, -6, 8, -10, 10, -13, 17, -22, 19, -10, -5, 10, -8,
10, -22, 29, -30, 24, -15, -1, 14, -21, 22, -22, 10, 0, 2, -6, -9, 23, -20, 4,
9, -21, 22, -18, 3, 4, 4, -13, -2, 20, -25, 14, -12, 14, -9, -2, 5, -10, 17,
-17, 9, -4, -2, 3, 1, -9, 8, 4, -18, 17, -8, -8, 16, -11, 0, 0, 5, -14, 12, -2,
-14, 24, -29, 20, -11, 12, -14, 3, 9, -22, 26, -29, 27, -21, 5, 8, -17, 22, -28,
18, 1, -16, 16, -8, -6, 8, 1, -11, 13, -11, -4, 18, -20, 7, 3, -4, -4, 7, -11,
9, 0, -14, 16, -13, 18, -22, 11, 0, -9, 12, -13, 11, -9, 5, -3, -5, 15, -21, 16,
-6, -10, 18, -20, 19, -20, 14, -7, 2, -4, -2, 13, -23, 20, -11, 4, -2, -1, 0, 1,
0, -7, 5, 0, -5, -1, 6, 2, -18, 20, -13, 8, -1, -16, 24, -24, 17, -14, 12, -9,
1, 4, -13, 22, -27, 18, -9, 3, -2, 1, 7, -22, 24, -20, 6, 9, -16, 22, -24, 9, 5,
-10, 3, 2, 3, -16, 24, -28, 21, -6, -11, 15, -16, 18, -17, 2, 8, -6, 1, 3, -8,
3, 3, -10, 12, -4, -13, 23, -26, 19, -9, -5, 8, -7, 6, -15, 24, -29, 24, -20,
15, -8, -7, 19, -29, 32, -30, 19, -8, -3, 9, -12, 3, 3, 2, -17, 24, -21, 8, 4,
-11, 12, -13, 11, -3, -10, 14, -8, 2, -1, 1, 2, -9, 5, 2, 4, -22, 28, -21, 9, 0,
-12, 22, -25, 16, -14, 17, -12, -3, 7, -3, 2, -10, 9, 0, -10, 9, -11, 11, -4,
-6, 5, -9, 17, -24, 23, -23, 17, -7, -5, 8, -8, 8, -11, 14, -22, 26, -20, 3, 11,
-19, 21, -18, 4, 9, -9, -3, 2, 7, -16, 21, -23, 9, 6, -18, 17, -11, 13, -19, 8,
2, -3, -7, 11, -6, -7, 18, -26, 18, -4, -11, 14, -6, -8, 12, -13, 5, 8, -16, 5,
10, -20, 9, 4, -10, 18, -26, 22, -18, 13, -7, -2, 8, -18, 22, -24, 20, -12, 3,
2, -9, 10, -5, 4, -8, 0, 9, -14, 8, -8, 12, -7, -12, 23, -24, 15, -6, -6, 9, 1,
-16, 17, -9, -3, 13, -22, 22, -15, 1, 4, 3, -10, 8, -7, 3, 8, -20, 16, -2, -15,
18, -11, -5, 18, -24, 21, -17, 7, 2, -10, 4, 5, -6, -2, 6, -11, 13, -10, -2, 7,
-3, -4, 0, -3, 12, -19, 15, -13, 10, -5, -5, 10, -14, 17, -16, 5, 2, -1, -8, 10,
-7, 5, -5, 3, -1, -5, 2, -2, 5, -9, 9, -11, 7, 0, -7, 9, -6, -6, 15, -20, 12, 2,
-16, 23, -22, 12, 0, -9, 8, -5, 2, -5, 6, -4, -3, 5, -6, 4, -6, 13, -17, 7, 9,
-23, 25, -22, 18, -14, 3, 6, -12, 8, -8, 4, 4, -2, -14, 22, -22, 15, -6, -5, 11,
-9, -3, 8, -2, -10, 11, -11, 7, 2, -9, 1, 9, -17, 18, -18, 12, -2, -8, 9, -13,
20, -23, 16, -10, 2, 3, -8, 7, -7, 5, -5, 0, 0, 5, 0, -17, 19, -10, -1, 4, -9,
16, -25, 24, -19, 5, 5, -8, 7, -10, 13, -20, 22, -18, 5, 6, -14, 16, -16, 8, -2,
0, -3, -1, 3, -8, 16, -20, 13, -4, -7, 7, -8, 13, -20, 17, -12, 5, -3, 1, 4,
-14, 21, -23, 14, -3, -7, 9, -8, -1, 6, -2, -10, 9, 2, -16, 19, -15, 7, 4, -19,
23, -20, 19, -19, 13, -6, 0, 3, -10, 14, -14, 19, -24, 12, 2, -11, 10, -2, -7,
8, -7, -5, 13, -8, -7, 16, -17, 5, 7, -11, 7, -9, 13, -18, 15, -10, 13, -15, -2,
18, -24, 24, -22, 17, -17, 12, -5, -3, 9, -13, 12, -17, 19, -15, 0, 9, -9, 4, 0,
-7, 11, -14, 5, -3, 7, -11, 5, 5, -17, 25, -27, 19, -8, -1, 1, -1, 2, -10, 14,
-17, 14, -9, 6, -2, -10, 12, -11, 6, -5, 7, -9, 6, -1, -5, 11, -20, 22, -17, 3,
6, -10, 9, -10, 11, -18, 16, -11, 1, 6, -14, 16, -14, 8, -4, 1, 2, -16, 21, -17,
6, 6, -18, 21, -18, 8, -3, 9, -17, 10, 0, -11, 16, -19, 18, -20, 15, -9, -1, 7,
-7, 5, -5, -1, 0, 2, -8, 10, -5, -9, 14, -10, 1, 10, -23, 23, -15, 6, -4, 0, 7,
-12, 14, -22, 22, -17, 8, -5, 2, 5, -16, 20, -19, 17, -15, 1, 9, -12, 7, -6, 6,
-2, -5, 5, -4, 2, -3, 3, -8, 10, -6, -4, 10, -18, 18, -11, -2, 5, 3, -13, 12,
-6, -6, 18, -23, 17, -10, 0, 7, -14, 15, -7, -8, 14, -13, 7, -4, 0, -1, 2, -4,
0, 9, -19, 23, -22, 12, -3, -7, 7, -2, 0, -9, 18, -23, 16, -8, 0, 3, -4, 0, -2,
8, -14, 11, -7, -1, 6, -10, 8, -3, -1, 3, -9, 5, -4, 8, -12, 7, -6, 6, -3, -6,
15, -22, 18, -11, -2, 7, 0, -12, 15, -7, -8, 14, -15, 9, -4, -4, 4, 1, -7, 8,
-6, -4, 6, 1, -9, 8, -8, 3, -1, -2, 6, -14, 14, -10, 0, 6, -5, -2, 5, -9, 7, 1,
-6, -1, 8, -11, 3, 5, -12, 12, -9, 6, -9, 7, -8, 9, -7, 0, 0, 0, 0, -7, 11, -11,
13, -19, 15, -9, 1, 2, -3, 4, -7, 5, -3, 0, -1, 6, -13, 11, -4, -4, 2, 6, -13,
7, 2, -10, 12, -14, 12, -8, -1, 4, -5, 2, -2, -1, 0, -1, 0, -1, 1, -2, 0, -2, 2,
-1, -8, 12, -10, 2, 2, -5, 3, -2, -1, 2, -5, 4, -2, -2, 3, -7, 9, -9, 4, -1, -2,
2, -3, -1, 2, 1, -8, 6, 0, -7, 9, -8, 0, 6, -13, 10, -5, 1, 1, -5, 1, 2, -2, 0,
-1, 3, -4, 1, 2, -5, 5, -6, 8, -12, 12, -8, 1, 5, -11, 13, -13, 9, -10, 10, -8,
1, 5, -10, 9, -6, -1, 4, 0, -10, 12, -8, 1, 0, -2, 4, -7, 2, 2, -2, -2, 3, -3,
-1, 5, -6, 1, 3, -10, 12, -11, 5, 0, -8, 11, -8, -1, 3, 1, -7, 3, -1, -2, 4, -6,
1, 3, -7, 4, -3, 1, -2, 1, -2, 0, 2, -7, 10, -11, 7, -4, -1, 1, -3, 0, 3, -3,
-4, 9, -11, 8, -4, -2, 4, -6, 2, 2, -6, 5, -4, -2, 2, -1, -4, 6, -6, 0, 5, -11,
12, -14, 10, -5, 0, 0, -1, 1, -4, 4, -7, 7, -6, 3, -2, 1, -2, 0, 0, 3, -8, 5,
-1, -3, 1, -1, 2, -7, 8, -9, 5, -4, 1, -2, 3, -4, 0, 3, -7, 8, -9, 6, -2, -3, 2,
-1, -1, -3, 4, -5, 1, 2, -7, 7, -9, 7, -5, 1, 3, -8, 9, -9, 5, -5, 5, -6, 2, 0,
-4, 6, -8, 5, -3, 2, -4, 2, 0, -3, 3, -4, 3, -2, -3, 3, -4, 3, -4, 1, -1, -2, 4,
-8, 8, -6, 1, 0, -2, 1, 0, 0, -4, 4, -6, 6, -6, 1, 1, -5, 4, -4, 1, 2, -4, 1,
-1, 2, -5, 2, -1, -2, 3, -6, 8, -9, 6, -3, -2, 2, -1, 1, -6, 7, -7, 4, -3, -2,
3, -6, 6, -5, 1, 1, -3, 1, -2, 3, -4, 3, -2, 0, 0, -2, 1, -3, 4, -5, 3, -3, 1,
-1, -2, 4, -6, 4, -2, -1, 1, -1, -1, 1, -2, -1, 1, -2, -1, 3, -5, 3, -1, -3, 5,
-7, 6, -5, 2, 0, -2, 1, 0, -1, -2, 3, -6, 5, -4, 0, 2, -3, 0, 1, -2, 1, 1, -5,
3, -1, -3, 3, -2, -1, 0, -2, 1, -3, 3, -4, 1, -2, 1, 0, -3, 3, -4, 3, -5, 4, -4,
1, 0, -3, 3, -5, 3, -2, 0, 2, -4, 1, 1, -4, 3, -3, -1, 2, -2, -1, 2, -3, 2, -1,
-2, 3, -3, 0, 1, -1, -2, 2, -3, 0, 0, -1, 1, -2, 1, -1, -2, 2, -3, 1, -1, -1, 1,
-3, 2, -3, 2, -3, 2, -2, -1, 1, -3, 2, -2, 2, -4, 2, -1, -1, 1, -2, 1, -1, -1,
-1, 1, -3, 1, -1, -1, 0, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, -1, 0, -1, 0, -2,
1, -2, 0, 0, -2, 1, -1, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1, 1, -1, -1, 0, 0, -2,
0, 0, -2, 1, -2, 1, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, 0, -1, 0, 0,
-1, 0, -1, -1, 0, 0, -1, 1, -1, -1, 0, -2, 0, -1, 0, -1, 1, -2, 0, -1, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, -1, 0, -2, 0, -1, -1,
0, -1, -1, 0, 0, -2, 0, -1, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, -1,
0, -1, 0, -1, 0, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, 0,
-1, 0, -1, 0, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1, 0,
-1, 0, -1, -1, 0, -1, 0, -1, -1, 0, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, 0,
-1, 0, -1, 0, -1, -1, 0, -1, 0, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1,
-1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, -1, 0, 0, -1, 0,
-1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0,
-1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1,
0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0,
-1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0,
0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0,
-1, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0,
0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0,
-1, 0, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1,
0, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0,
-1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1,
0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0,
0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, };

#endif /* EOE_8_H_ */
