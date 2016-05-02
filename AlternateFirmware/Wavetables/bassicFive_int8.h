#ifndef BASSICFIVE_H_
#define BASSICFIVE_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define BASSICFIVE_NUM_CELLS 6309
#define BASSICFIVE_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) BASSICFIVE_DATA [] = {-1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -5,
-2, 20, 52, 86, 113, 127, 124, 103, 72, 36, 4, -19, -22, -11, 19, 43, 12, -21,
-45, -54, -46, -23, 11, 46, 76, 93, 95, 81, 55, 23, -4, -21, -9, 0, -11, -35,
-66, -96, -117, -125, -117, -96, -65, -34, -7, 5, 4, -17, -27, 0, 28, 53, 65,
63, 46, 18, -15, -45, -67, -74, -67, -48, -21, 6, 20, 4, -5, 4, 24, 52, 80, 101,
111, 106, 88, 62, 33, 9, -4, -4, 13, 14, -11, -35, -56, -64, -61, -43, -17, 14,
40, 59, 64, 57, 38, 16, -8, -14, 0, 1, -10, -32, -57, -80, -96, -99, -90, -70,
-44, -19, -1, 7, 2, -14, -5, 18, 36, 49, 48, 37, 15, -11, -38, -57, -67, -64,
-52, -32, -13, 3, 3, -2, 7, 24, 46, 67, 80, 83, 75, 57, 34, 10, -8, -17, -16,
-4, 8, -6, -23, -31, -30, -18, 2, 26, 48, 64, 70, 66, 53, 35, 17, 4, -1, -1,
-11, -26, -44, -58, -65, -62, -50, -30, -8, 13, 27, 34, 30, 20, 4, -2, 9, 11, 4,
-10, -29, -48, -63, -70, -68, -57, -40, -21, -6, 4, 5, 0, 8, 22, 33, 38, 35, 24,
6, -14, -32, -46, -52, -49, -40, -26, -13, -4, -1, 4, 15, 29, 43, 52, 54, 48,
35, 18, 0, -15, -25, -27, -24, -15, -9, -14, -15, -9, 2, 18, 33, 46, 53, 52, 45,
32, 17, 4, -6, -11, -9, -15, -24, -30, -32, -26, -16, -1, 15, 29, 39, 42, 40,
32, 21, 10, 2, -3, -11, -21, -31, -38, -41, -37, -28, -15, 0, 13, 24, 29, 29,
25, 18, 11, 8, 2, -7, -19, -30, -39, -43, -42, -35, -23, -10, 3, 13, 18, 19, 15,
15, 18, 16, 10, -1, -14, -27, -38, -43, -42, -36, -26, -13, -3, 6, 9, 11, 18,
24, 26, 24, 16, 4, -11, -24, -35, -39, -38, -32, -23, -12, -3, 2, 7, 16, 25, 31,
33, 29, 19, 6, -9, -22, -31, -34, -31, -24, -16, -7, -2, 3, 12, 22, 32, 37, 37,
30, 19, 4, -10, -20, -26, -26, -22, -14, -8, -7, -3, 7, 18, 29, 37, 40, 36, 27,
14, 0, -12, -19, -20, -17, -10, -10, -12, -8, 1, 13, 26, 36, 41, 39, 31, 19, 6,
-6, -13, -15, -11, -9, -14, -16, -12, -3, 10, 23, 34, 39, 39, 32, 21, 8, -2, -9,
-10, -7, -12, -18, -19, -15, -5, 8, 22, 32, 38, 37, 31, 20, 8, -1, -7, -6, -8,
-15, -21, -21, -16, -6, 8, 22, 32, 37, 35, 28, 17, 6, -2, -5, -5, -11, -19, -23,
-22, -15, -3, 11, 24, 33, 36, 32, 23, 12, 3, -3, -3, -7, -15, -21, -24, -20,
-11, 2, 16, 28, 34, 33, 27, 17, 7, -1, -3, -4, -11, -18, -23, -23, -16, -5, 10,
22, 31, 34, 30, 21, 10, 2, -2, -2, -7, -15, -21, -23, -18, -8, 5, 19, 29, 33,
31, 23, 13, 3, -2, -2, -4, -12, -18, -21, -18, -9, 3, 17, 28, 33, 31, 24, 14, 4,
-2, -3, -2, -8, -15, -18, -17, -9, 3, 17, 28, 34, 32, 25, 14, 4, -3, -5, -1, -5,
-13, -16, -14, -6, 6, 19, 30, 35, 33, 25, 14, 2, -5, -7, -3, -2, -9, -13, -11,
-3, 10, 23, 33, 36, 33, 23, 10, -2, -9, -10, -5, 0, -6, -9, -6, 2, 15, 27, 35,
36, 30, 18, 4, -8, -14, -14, -8, -1, -2, -5, -1, 8, 20, 31, 36, 34, 24, 10, -5,
-16, -20, -18, -11, -2, 0, -2, 3, 13, 24, 32, 33, 27, 13, -2, -17, -25, -27,
-21, -12, -4, 0, 0, 6, 16, 25, 29, 25, 14, -2, -18, -29, -34, -30, -20, -10, -2,
-1, -1, 6, 15, 21, 20, 12, -3, -19, -33, -39, -36, -27, -14, -3, 3, 0, -4, 4,
11, 13, 7, -6, -21, -35, -42, -40, -30, -15, -1, 8, 10, 4, -4, -1, 5, 2, -8,
-22, -34, -41, -39, -28, -12, 5, 17, 20, 16, 7, -2, -2, -1, -8, -19, -30, -35,
-32, -21, -3, 15, 27, 31, 27, 16, 6, 0, 1, -2, -11, -21, -25, -22, -9, 8, 25,
37, 40, 33, 20, 6, -3, -4, 3, 2, -8, -12, -9, 2, 18, 34, 42, 41, 30, 14, -2,
-14, -15, -10, 0, 4, -2, 0, 9, 23, 34, 39, 33, 18, -1, -19, -29, -30, -22, -11,
-2, -1, -1, 7, 17, 26, 26, 16, -1, -21, -36, -43, -38, -26, -11, -1, 3, -5, -6,
5, 11, 9, -2, -19, -36, -46, -45, -33, -15, 2, 14, 16, 9, -2, -7, -1, -2, -13,
-26, -37, -39, -30, -12, 9, 26, 34, 31, 20, 8, 0, 2, 2, -8, -18, -23, -19, -4,
15, 34, 44, 43, 32, 15, -1, -8, -7, 4, 8, -3, -5, 2, 17, 33, 43, 42, 30, 10,
-11, -25, -29, -22, -11, -1, 0, -2, 6, 18, 28, 28, 17, -3, -25, -41, -46, -39,
-24, -7, 2, 2, -8, -8, 4, 8, 2, -13, -31, -45, -48, -39, -20, 2, 18, 24, 18, 7,
-3, -3, -1, -9, -22, -32, -33, -22, -2, 21, 39, 44, 37, 22, 6, -3, -1, 9, 5, -7,
-10, -3, 14, 33, 47, 48, 36, 14, -7, -22, -25, -17, -5, 3, 1, 0, 10, 23, 32, 29,
14, -9, -32, -46, -46, -34, -17, -2, 3, -3, -13, -4, 6, 5, -8, -27, -44, -51,
-43, -24, 0, 20, 29, 24, 12, 0, -2, 2, -4, -17, -28, -29, -16, 6, 30, 46, 49,
38, 19, 0, -8, -6, 7, 12, -1, -3, 6, 23, 40, 47, 39, 19, -7, -29, -38, -34, -20,
-6, -1, -8, -6, 7, 17, 18, 6, -16, -39, -53, -52, -37, -14, 7, 17, 14, 2, -10,
-6, 0, -9, -24, -38, -39, -27, -2, 24, 43, 47, 37, 18, 2, -4, 5, 15, 3, -8, -6,
8, 29, 47, 52, 40, 16, -11, -29, -34, -25, -11, 0, -3, -7, 3, 17, 24, 17, -3,
-29, -50, -56, -47, -25, -1, 13, 14, 4, -11, -10, 0, -7, -21, -37, -42, -31, -7,
22, 43, 49, 39, 20, 2, -4, 4, 17, 6, -6, -4, 10, 32, 48, 51, 36, 10, -19, -36,
-38, -26, -10, 0, -6, -11, 1, 14, 18, 7, -16, -42, -57, -55, -37, -10, 13, 23,
18, 4, -7, -4, 1, -9, -24, -34, -29, -8, 21, 46, 56, 48, 26, 3, -11, -10, 3, 16,
6, -2, 8, 26, 42, 44, 29, 0, -30, -49, -50, -36, -14, 0, 1, -14, -18, -1, 4, -4,
-24, -45, -55, -45, -21, 10, 34, 41, 32, 14, 1, 2, 13, 6, -9, -15, -6, 16, 40,
55, 52, 32, 2, -22, -33, -27, -12, 0, -2, -8, 2, 16, 23, 14, -9, -36, -55, -57,
-40, -13, 11, 22, 17, 4, -7, -3, 1, -11, -25, -32, -23, 1, 30, 51, 54, 40, 15,
-7, -16, -11, 3, 11, 1, 1, 15, 31, 37, 26, 1, -29, -50, -53, -39, -16, 3, 9, 1,
-14, -11, 0, -6, -22, -38, -43, -30, -3, 27, 46, 48, 33, 11, -4, -6, 6, 15, 2,
-3, 8, 26, 42, 43, 26, -3, -31, -47, -44, -28, -8, 2, -1, -15, -10, 3, 0, -14,
-35, -47, -43, -22, 8, 34, 43, 36, 18, 2, -3, 8, 13, -1, -7, 2, 22, 41, 48, 36,
10, -20, -40, -42, -29, -11, 0, -3, -14, -6, 6, 3, -12, -33, -48, -46, -26, 3,
29, 40, 34, 17, 2, -2, 9, 9, -5, -8, 2, 23, 41, 47, 34, 7, -22, -39, -40, -25,
-9, 1, -5, -13, -1, 7, 1, -17, -37, -48, -41, -18, 12, 34, 40, 29, 12, -1, -1,
11, 5, -7, -5, 10, 30, 44, 42, 21, -8, -33, -42, -35, -17, -2, 2, -9, -11, 2, 3,
-8, -28, -43, -43, -24, 4, 30, 42, 36, 18, 2, -6, 2, 11, 0, -4, 6, 23, 38, 39,
22, -6, -33, -45, -40, -21, -2, 6, 2, -10, -6, 1, -7, -23, -37, -37, -20, 9, 34,
46, 38, 19, -2, -11, -8, 4, 6, -1, 6, 20, 32, 30, 12, -16, -40, -49, -38, -17,
5, 15, 11, 0, -6, -1, -6, -20, -29, -24, -4, 22, 43, 47, 32, 8, -14, -22, -17,
-5, 1, -2, 3, 15, 21, 13, -8, -32, -47, -44, -24, 2, 22, 27, 18, 5, -1, 4, -2,
-13, -15, -5, 17, 37, 45, 34, 9, -18, -33, -32, -19, -5, 1, -7, -4, 7, 5, -7,
-27, -41, -39, -20, 8, 31, 39, 30, 11, -3, -6, 3, 5, -4, 0, 14, 30, 35, 23, -2,
-28, -43, -40, -23, -1, 11, 10, 1, -5, -1, -7, -20, -29, -24, -4, 21, 41, 43,
28, 4, -16, -23, -16, -5, -1, -2, 6, 16, 17, 4, -18, -39, -45, -32, -7, 17, 30,
26, 13, 1, 0, 4, -5, -10, -4, 13, 31, 39, 29, 5, -21, -37, -36, -21, -3, 6, 3,
-5, -1, 1, -11, -25, -33, -26, -4, 22, 39, 39, 22, 0, -15, -17, -9, 0, 0, 3, 14,
21, 16, -3, -26, -42, -40, -22, 3, 22, 26, 17, 5, -1, 2, -4, -12, -9, 5, 25, 37,
34, 13, -13, -33, -36, -25, -7, 5, 5, -3, -1, 1, -9, -23, -32, -25, -5, 21, 38,
38, 21, 0, -16, -18, -11, -2, -1, 3, 14, 19, 12, -7, -29, -41, -35, -14, 11, 26,
27, 16, 2, -3, 1, -4, -9, -3, 13, 29, 34, 22, -2, -26, -38, -32, -15, 3, 11, 9,
0, -1, -3, -15, -24, -23, -8, 15, 34, 38, 25, 1, -18, -26, -19, -7, -1, -1, 5,
11, 7, -8, -26, -37, -31, -10, 15, 31, 31, 18, 1, -9, -9, -1, -2, 0, 12, 24, 25,
11, -12, -32, -39, -28, -7, 13, 21, 17, 6, -1, -2, -9, -15, -10, 5, 24, 35, 29,
8, -16, -32, -31, -18, -1, 8, 6, 0, 2, -3, -16, -26, -25, -9, 14, 32, 35, 22, 0,
-18, -23, -16, -5, 0, 2, 10, 13, 4, -13, -30, -35, -23, 0, 22, 31, 25, 9, -6,
-12, -7, -3, -2, 7, 19, 24, 15, -5, -26, -36, -30, -11, 11, 22, 20, 9, -1, -3,
-7, -13, -8, 5, 22, 31, 24, 4, -19, -32, -30, -15, 3, 12, 11, 4, 0, -5, -16,
-22, -16, 1, 21, 33, 28, 10, -12, -26, -25, -14, -1, 4, 3, 7, 5, -7, -21, -29,
-22, -3, 19, 31, 28, 11, -8, -18, -17, -9, -2, 3, 11, 15, 9, -7, -24, -32, -24,
-4, 17, 27, 23, 9, -5, -12, -9, -5, -2, 8, 19, 21, 11, -9, -26, -32, -22, -3,
15, 22, 17, 5, -4, -6, -9, -10, -1, 13, 25, 24, 10, -12, -27, -30, -18, 0, 13,
16, 10, 2, -4, -12, -17, -12, 2, 19, 28, 22, 5, -15, -27, -24, -11, 3, 11, 9, 4,
0, -10, -19, -20, -10, 9, 24, 28, 17, -2, -19, -24, -17, -4, 5, 7, 8, 6, -5,
-17, -24, -19, -2, 16, 27, 23, 8, -10, -19, -18, -8, 0, 6, 11, 11, 2, -13, -24,
-24, -11, 8, 22, 24, 14, -2, -14, -16, -10, -2, 5, 13, 16, 8, -7, -22, -27, -17,
0, 17, 23, 17, 3, -9, -13, -10, -5, 3, 14, 18, 13, -3, -19, -26, -21, -5, 12,
21, 17, 6, -6, -11, -10, -8, 1, 13, 20, 16, 1, -16, -26, -22, -8, 9, 18, 16, 7,
-4, -9, -11, -10, 0, 13, 21, 18, 3, -15, -25, -23, -9, 8, 17, 15, 6, -3, -8,
-13, -11, 0, 14, 22, 19, 3, -15, -25, -22, -8, 7, 15, 13, 5, -3, -10, -15, -12,
0, 16, 24, 18, 2, -16, -25, -21, -6, 8, 14, 10, 3, -4, -12, -16, -11, 3, 18, 24,
17, -2, -19, -25, -18, -3, 9, 12, 7, 1, -6, -15, -17, -9, 7, 22, 24, 13, -7,
-22, -24, -13, 1, 10, 10, 4, -1, -9, -17, -16, -4, 13, 25, 22, 6, -13, -24, -21,
-8, 5, 10, 6, 2, -4, -14, -19, -13, 3, 20, 26, 16, -3, -19, -24, -15, -1, 8, 8,
4, 0, -9, -18, -18, -6, 13, 25, 23, 7, -12, -23, -20, -7, 5, 9, 5, 2, -4, -15,
-19, -12, 5, 22, 26, 15, -5, -21, -23, -13, 1, 8, 6, 3, -1, -11, -19, -16, -1,
17, 26, 20, 1, -18, -24, -17, -3, 7, 8, 3, 0, -8, -17, -17, -5, 13, 26, 23, 6,
-14, -25, -20, -6, 6, 9, 4, 1, -5, -15, -17, -8, 10, 24, 24, 9, -12, -25, -22,
-8, 6, 10, 5, 1, -4, -13, -17, -9, 8, 23, 25, 10, -11, -25, -23, -9, 6, 11, 7,
1, -3, -11, -15, -8, 8, 23, 25, 10, -12, -26, -24, -9, 7, 13, 8, 1, -2, -9, -13,
-7, 8, 23, 23, 8, -14, -27, -24, -8, 9, 15, 10, 1, -2, -7, -11, -4, 10, 22, 21,
5, -17, -29, -23, -5, 12, 17, 10, 0, -3, -5, -8, -2, 12, 22, 18, -1, -21, -30,
-20, 1, 17, 19, 9, -2, -4, -3, -5, 1, 13, 20, 12, -8, -26, -29, -14, 8, 21, 19,
6, -6, -7, -2, -2, 4, 14, 16, 5, -15, -28, -25, -5, 16, 25, 16, 0, -10, -9, -3,
0, 5, 12, 10, -4, -21, -28, -17, 6, 24, 25, 10, -7, -15, -10, -3, 0, 4, 9, 3,
-12, -25, -23, -5, 18, 28, 20, 0, -16, -18, -9, 0, 0, 2, 4, -4, -17, -23, -12,
10, 27, 26, 8, -14, -23, -17, -3, 5, 2, -1, 0, -9, -18, -15, 2, 22, 28, 15, -9,
-25, -24, -9, 6, 10, 3, -1, -3, -10, -12, -2, 15, 26, 19, -3, -24, -29, -15, 5,
15, 11, 2, -1, -1, -7, -4, 9, 21, 19, 1, -22, -31, -19, 3, 19, 18, 7, -4, -3, 0,
-2, 4, 15, 16, 3, -19, -30, -22, 1, 21, 24, 11, -5, -11, -6, -1, 0, 7, 11, 2,
-15, -27, -21, 1, 23, 28, 14, -7, -17, -13, -3, -1, -2, 4, 1, -12, -22, -18, 2,
23, 29, 14, -10, -23, -19, -5, 4, 2, -2, -1, -7, -15, -13, 4, 23, 27, 11, -14,
-28, -23, -4, 10, 11, 3, 0, -1, -7, -7, 5, 20, 23, 6, -18, -31, -23, -1, 17, 18,
7, -3, -2, 2, -2, 4, 15, 15, 0, -21, -31, -18, 6, 24, 23, 6, -9, -11, -3, -1, 0,
6, 7, -5, -22, -26, -10, 15, 29, 22, 0, -17, -18, -8, 1, -2, -3, 1, -7, -17,
-17, -1, 21, 29, 15, -10, -26, -22, -5, 8, 8, 0, -1, -2, -9, -7, 7, 22, 23, 4,
-21, -31, -19, 4, 18, 15, 3, -3, 2, 1, -1, 8, 17, 12, -9, -28, -28, -8, 17, 26,
15, -3, -11, -7, -1, -2, 2, 7, 0, -16, -26, -17, 8, 28, 26, 6, -16, -21, -11, 0,
1, -5, -1, -4, -14, -15, -2, 20, 28, 15, -11, -28, -24, -4, 10, 11, 2, 0, 2, -5,
-4, 9, 21, 18, -4, -26, -30, -12, 12, 23, 14, -1, -6, -1, 2, 0, 7, 11, 1, -18,
-29, -17, 8, 27, 24, 4, -14, -16, -7, 0, -5, -3, 1, -8, -18, -16, 4, 25, 28, 9,
-17, -27, -17, 1, 9, 4, -1, 1, -3, -8, 0, 16, 24, 10, -15, -31, -23, 0, 19, 18,
5, -4, -1, 3, -1, 4, 12, 7, -11, -28, -24, 0, 24, 27, 10, -11, -17, -9, 0, -4,
-5, 1, -6, -17, -17, 0, 23, 29, 11, -15, -28, -18, 0, 9, 5, -1, 2, -1, -6, 1,
16, 22, 8, -17, -32, -21, 4, 21, 18, 3, -6, -2, 3, -1, 4, 10, 2, -16, -28, -17,
8, 28, 24, 2, -17, -17, -6, 1, -5, -5, 0, -8, -16, -9, 11, 27, 22, -4, -26, -27,
-8, 10, 12, 3, 0, 5, 1, -2, 8, 18, 12, -10, -29, -26, -2, 21, 24, 8, -8, -10,
-2, -2, -4, 2, 2, -10, -23, -17, 6, 27, 26, 3, -20, -23, -9, 4, 4, -3, -1, -1,
-8, -5, 10, 24, 17, -8, -29, -27, -5, 17, 18, 6, -4, 0, 4, -1, 3, 10, 4, -14,
-28, -18, 8, 28, 23, 1, -17, -16, -5, 1, -6, -5, -1, -9, -14, -5, 17, 27, 15,
-13, -29, -21, 1, 14, 11, 0, 1, 7, 0, 1, 11, 14, 0, -23, -29, -11, 16, 27, 15,
-6, -14, -7, -1, -6, -6, 1, -6, -17, -15, 5, 26, 25, 2, -22, -26, -9, 8, 10, 1,
1, 6, -1, -1, 10, 18, 9, -15, -30, -21, 6, 24, 19, 0, -10, -7, 0, -5, -4, 2, -4,
-17, -20, -1, 22, 28, 9, -17, -26, -13, 4, 8, 0, 0, 4, -2, -3, 9, 20, 12, -12,
-30, -23, 3, 23, 19, 2, -9, -5, 1, -5, -3, 3, -4, -18, -20, -1, 23, 28, 8, -18,
-25, -11, 4, 6, -2, 1, 4, -3, -2, 11, 20, 9, -16, -31, -19, 7, 23, 16, -1, -9,
-3, 0, -6, -1, 2, -7, -20, -17, 6, 27, 24, -1, -22, -22, -5, 7, 4, -2, 3, 3, -4,
2, 15, 18, -1, -24, -29, -8, 17, 23, 8, -7, -8, -1, -3, -7, 0, -1, -13, -20, -6,
18, 28, 11, -15, -26, -14, 4, 9, 1, 0, 7, 1, -2, 9, 17, 7, -17, -29, -16, 11,
25, 15, -5, -12, -5, -1, -8, -6, 0, -8, -16, -9, 13, 27, 16, -12, -27, -18, 3,
12, 6, -1, 5, 7, -1, 4, 12, 7, -14, -28, -17, 10, 27, 17, -5, -16, -10, -1, -4,
-9, -2, -4, -11, -7, 12, 25, 14, -13, -29, -18, 5, 17, 9, -1, 0, 7, 0, 0, 7, 3,
-14, -25, -12, 15, 28, 14, -11, -21, -11, 1, 1, -5, 0, 1, -6, -2, 13, 20, 5,
-20, -29, -11, 14, 21, 8, -6, -5, 1, -4, -6, 1, -3, -15, -18, 0, 22, 25, 3, -21,
-23, -6, 8, 6, -1, 4, 7, -1, 2, 12, 11, -8, -26, -21, 5, 24, 19, -2, -14, -9,
-1, -5, -10, -1, -4, -11, -6, 13, 24, 10, -16, -28, -14, 9, 16, 6, -3, 1, 5, -2,
0, 6, -3, -18, -20, 0, 22, 23, 2, -19, -18, -4, 5, 0, -2, 4, 1, -3, 6, 16, 9,
-13, -27, -16, 10, 23, 12, -6, -10, -3, -2, -9, -4, -1, -9, -13, 0, 19, 21, 0,
-22, -22, -3, 13, 10, 0, -1, 6, 1, -1, 6, 3, -12, -22, -10, 14, 25, 11, -12,
-19, -8, 3, 1, -3, 2, 1, -4, 3, 14, 13, -7, -24, -19, 4, 20, 14, -3, -10, -5,
-1, -8, -5, -1, -8, -12, -1, 17, 20, 1, -21, -22, -3, 13, 10, 0, -2, 5, 1, -1,
5, 2, -12, -20, -7, 15, 23, 6, -15, -18, -5, 5, 2, -2, 4, 2, -2, 4, 13, 7, -13,
-23, -11, 12, 21, 8, -9, -11, -3, -1, -7, -4, -1, -8, -7, 7, 19, 11, -11, -24,
-13, 8, 15, 6, -4, -3, 1, -3, -2, 2, -5, -15, -11, 8, 21, 12, -10, -21, -11, 5,
8, 1, 0, 6, 1, 0, 7, 6, -8, -20, -12, 9, 21, 10, -9, -16, -7, 2, 0, -3, 2, -1,
-4, 4, 14, 8, -11, -22, -11, 10, 18, 6, -7, -9, -2, -3, -7, -2, -3, -9, -6, 9,
18, 6, -14, -21, -7, 11, 12, 2, -4, 0, 0, -4, 1, 1, -9, -15, -4, 15, 18, 2, -17,
-17, -2, 8, 5, -1, 3, 4, -1, 3, 7, -2, -16, -16, 2, 18, 14, -4, -16, -10, 1, 3,
-2, 1, 2, -3, 2, 11, 8, -9, -20, -11, 9, 18, 7, -8, -10, -3, 0, -6, -3, -1, -6,
-3, 9, 15, 3, -16, -19, -3, 14, 12, -1, -7, -3, -1, -6, -2, -1, -9, -10, 3, 17,
12, -7, -20, -12, 6, 12, 4, -3, 0, 1, -2, 1, 2, -8, -15, -5, 13, 18, 2, -16,
-16, -1, 8, 4, -1, 3, 3, -1, 4, 6, -4, -16, -12, 7, 19, 9, -9, -16, -6, 4, 2,
-1, 3, 1, -2, 5, 10, 0, -15, -17, 0, 17, 13, -4, -13, -7, 1, -1, -3, 0, -2, -4,
5, 13, 5, -13, -19, -5, 13, 15, 0, -10, -7, 0, -3, -5, -1, -5, -7, 3, 14, 9,
-10, -20, -9, 10, 14, 3, -7, -5, -1, -5, -3, -1, -7, -9, 1, 15, 12, -7, -19,
-11, 7, 12, 3, -4, -2, 0, -3, 0, 0, -9, -12, 0, 15, 13, -5, -18, -11, 5, 10, 3,
-3, 1, 1, -2, 3, 0, -10, -13, 0, 16, 13, -5, -17, -10, 4, 8, 1, -1, 3, 0, 0, 5,
0, -12, -14, 1, 16, 13, -5, -16, -8, 4, 6, 0, 1, 3, -1, 3, 7, -1, -14, -14, 3,
16, 11, -7, -15, -6, 4, 3, -1, 2, 1, -1, 5, 8, -3, -16, -13, 5, 17, 8, -9, -13,
-4, 3, 0, -1, 2, -2, 0, 8, 7, -6, -17, -9, 9, 16, 3, -11, -10, -1, 2, -2, 0, 0,
-3, 2, 10, 5, -11, -17, -4, 13, 13, -1, -11, -7, 1, -1, -3, 0, -3, -3, 6, 11, 1,
-15, -15, 2, 15, 9, -6, -10, -3, 0, -3, -2, -1, -5, 0, 10, 9, -6, -17, -9, 9,
14, 2, -9, -7, -1, -2, -4, -1, -4, -5, 5, 12, 3, -13, -16, -1, 13, 10, -4, -9,
-3, 0, -4, -2, -2, -6, -1, 10, 10, -5, -17, -10, 8, 13, 2, -8, -7, 0, -2, -3,
-1, -5, -5, 5, 12, 3, -14, -15, 1, 13, 8, -5, -8, -2, -1, -4, -1, -3, -6, 1, 11,
8, -8, -17, -6, 10, 12, 0, -9, -5, 0, -3, -2, -1, -6, -2, 8, 11, -2, -16, -11,
6, 13, 4, -7, -7, -1, -1, -3, -1, -4, -4, 5, 11, 2, -13, -14, 1, 13, 7, -5, -9,
-2, 0, -3, -1, -3, -5, 2, 10, 5, -10, -16, -3, 12, 10, -3, -10, -4, 1, -2, -2,
-1, -5, 0, 9, 7, -8, -16, -5, 11, 12, -1, -10, -6, 1, -1, -2, 0, -3, -1, 8, 8,
-6, -16, -7, 9, 13, 0, -10, -7, 1, 1, -1, 0, -2, -1, 6, 7, -4, -15, -8, 9, 13,
1, -11, -8, 1, 2, -1, 1, -1, -1, 5, 7, -4, -14, -8, 9, 13, 1, -11, -8, 1, 4, 0,
1, 0, -1, 4, 6, -4, -14, -7, 9, 13, 0, -12, -8, 2, 5, 0, 0, 1, -1, 3, 4, -5,
-13, -5, 10, 12, -2, -13, -8, 4, 6, 0, -1, 1, -1, 2, 3, -6, -12, -3, 11, 10, -5,
-14, -6, 6, 6, -1, -2, 0, -1, 1, 1, -7, -10, 0, 12, 8, -8, -14, -3, 8, 6, -2,
-4, -1, -2, 0, 0, -7, -7, 4, 12, 4, -11, -13, 1, 10, 5, -5, -5, -1, -3, -1, -1,
-7, -4, 6, 10, -1, -14, -10, 6, 11, 2, -7, -5, 0, -2, -2, -2, -5, -1, 8, 7, -7,
-14, -4, 10, 9, -3, -9, -4, 1, -1, -1, -1, -3, 2, 8, 2, -11, -12, 2, 12, 5, -8,
-9, -1, 4, 0, 0, 0, -1, 4, 5, -4, -12, -6, 9, 11, -2, -12, -6, 4, 5, -1, 0, 0,
0, 3, 1, -8, -10, 2, 12, 5, -9, -12, 0, 7, 3, -3, -2, -1, -1, 2, -3, -9, -4, 8,
10, -3, -14, -7, 7, 8, -1, -5, -2, -1, -2, 0, -5, -6, 3, 10, 3, -11, -11, 2, 11,
3, -7, -6, 0, -1, -2, -1, -4, -1, 7, 6, -7, -13, -3, 10, 8, -5, -9, -3, 3, 0, 0,
-1, -2, 3, 6, -2, -12, -7, 8, 11, -1, -11, -6, 3, 4, -1, -1, 0, 0, 3, 0, -8, -8,
4, 11, 2, -11, -10, 3, 7, 1, -4, -2, -1, 0, 1, -5, -8, 1, 10, 5, -9, -12, 1, 9,
4, -5, -5, -1, -1, -1, -2, -5, -1, 8, 6, -7, -12, -2, 10, 6, -6, -8, -1, 2, 0,
0, -2, -1, 5, 5, -5, -12, -3, 10, 8, -5, -10, -2, 5, 2, -1, 0, -1, 2, 3, -4,
-10, -3, 9, 8, -5, -12, -3, 6, 5, -3, -3, -1, -1, 1, -2, -7, -3, 7, 8, -5, -12,
-4, 8, 6, -4, -6, -1, 0, -1, -1, -4, -2, 6, 6, -5, -12, -3, 9, 7, -5, -9, -2, 3,
0, 0, -1, -1, 4, 4, -5, -10, -2, 10, 6, -7, -10, -1, 6, 2, -3, -1, -1, 1, 1, -5,
-8, 0, 9, 5, -8, -11, 1, 8, 2, -5, -4, 0, -1, -1, -3, -5, 1, 8, 2, -10, -9, 3,
10, 1, -8, -5, 1, 1, -1, -1, -2, 2, 5, -1, -10, -6, 6, 9, -2, -10, -5, 4, 4, -2,
-2, -1, 0, 2, -3, -8, -3, 8, 7, -6, -11, -2, 7, 4, -4, -5, -1, -1, -1, -2, -5,
0, 7, 3, -9, -9, 2, 9, 2, -8, -6, 1, 2, -1, -1, -2, 1, 5, -1, -9, -6, 6, 8, -3,
-10, -4, 5, 4, -2, -2, -1, 0, 1, -3, -7, -1, 8, 4, -8, -10, 1, 8, 2, -6, -4, 0,
0, -1, -3, -4, 3, 6, -1, -10, -6, 6, 8, -3, -9, -3, 3, 2, -1, -1, -1, 3, 2, -5,
-8, 0, 9, 3, -8, -8, 2, 6, 0, -4, -2, -1, 0, -1, -5, -4, 5, 7, -3, -10, -3, 7,
5, -5, -7, -1, 2, 0, -1, -3, 0, 5, 1, -8, -7, 4, 9, -1, -9, -5, 4, 4, -2, -2,
-1, 1, 2, -3, -7, -1, 8, 4, -8, -9, 2, 7, 1, -6, -3, 1, 0, -1, -3, -3, 4, 5, -4,
-10, -2, 8, 5, -6, -7, 0, 4, 0, -2, -1, 0, 3, -1, -7, -5, 5, 7, -4, -10, -2, 6,
3, -4, -4, -1, 0, 0, -3, -4, 2, 6, -1, -9, -5, 6, 7, -3, -8, -2, 3, 1, -1, -1,
0, 3, 1, -6, -6, 4, 8, -1, -9, -4, 5, 4, -3, -4, -1, 0, 0, -3, -5, 1, 6, 1, -9,
-6, 5, 7, -2, -7, -2, 3, 1, -1, -2, 0, 4, 1, -6, -6, 3, 7, -1, -9, -4, 5, 4, -3,
-4, -1, 0, 0, -4, -5, 2, 6, 0, -9, -5, 5, 6, -3, -7, -1, 3, 0, -1, -2, 0, 4, 0,
-7, -5, 5, 6, -3, -9, -2, 5, 2, -4, -3, -1, 0, 0, -5, -4, 4, 5, -3, -9, -2, 7,
3, -6, -6, 1, 2, -1, -2, -2, 2, 3, -3, -7, -1, 7, 3, -7, -7, 2, 5, -1, -4, -2,
0, 0, -2, -5, 0, 6, 2, -7, -6, 3, 6, -2, -7, -2, 3, 1, -2, -2, 0, 3, 0, -6, -5,
4, 6, -3, -8, -2, 5, 2, -4, -4, 0, 0, -1, -4, -3, 4, 4, -4, -8, 0, 7, 1, -7, -5,
2, 3, -1, -2, -1, 2, 1, -4, -6, 2, 6, -1, -8, -4, 5, 4, -3, -5, 0, 1, -1, -3,
-3, 2, 4, -3, -8, -1, 6, 3, -6, -6, 2, 4, -1, -3, -1, 1, 1, -3, -5, 1, 6, 0, -8,
-4, 5, 4, -4, -6, 0, 2, 0, -2, -2, 2, 3, -3, -7, -1, 6, 2, -7, -6, 2, 4, -2, -4,
-1, 0, 0, -3, -4, 1, 5, -1, -8, -3, 5, 3, -5, -6, 1, 3, -1, -2, -1, 2, 2, -4,
-6, 1, 6, 0, -7, -4, 4, 3, -3, -5, 0, 1, -1, -3, -3, 3, 3, -4, -7, 0, 6, 1, -7,
-4, 3, 3, -2, -3, -1, 1, 0, -4, -4, 3, 4, -4, -7, 0, 6, 1, -6, -4, 2, 1, -1, -2,
-1, 3, 0, -6, -4, 4, 5, -4, -7, 0, 5, 0, -5, -2, 1, 0, -2, -4, 0, 4, 0, -6, -4,
4, 4, -4, -6, 0, 4, 0, -3, -2, 1, 1, -3, -5, 1, 5, -1, -7, -3, 5, 3, -4, -5, 1,
2, -1, -2, -1, 2, 1, -4, -5, 2, 5, -2, -7, -1, 4, 1, -4, -3, 1, 1, -2, -4, -1,
4, 1, -6, -4, 4, 4, -4, -6, 0, 3, 0, -3, -2, 1, 1, -3, -4, 1, 4, -1, -6, -2, 4,
2, -5, -4, 1, 2, -1, -2, -1, 2, 0, -5, -3, 3, 3, -4, -6, 1, 4, -1, -5, -2, 1, 0,
-2, -3, 1, 3, -2, -6, -1, 4, 1, -5, -4, 2, 2, -2, -3, 0, 1, -1, -4, -2, 3, 2,
-4, -5, 2, 4, -2, -5, -1, 3, 0, -3, -2, 1, 1, -3, -4, 1, 4, -1, -6, -2, 4, 1,
-4, -3, 1, 1, -1, -3, 0, 2, 0, -5, -3, 3, 2, -4, -5, 1, 3, -2, -4, -1, 1, 0, -3,
-2, 2, 2, -3, -5, 1, 4, -1, -5, -1, 3, 1, -3, -2, 0, 1, -2, -4, 0, 3, -1, -5,
-2, 4, 1, -4, -3, 2, 2, -2, -2, 0, 2, -1, -4, -2, 3, 1, -4, -4, 2, 3, -3, -4, 0,
2, -1, -2, -1, 2, 1, -4, -3, 2, 3, -3, -5, 1, 3, -1, -4, -1, 1, 0, -2, -2, 1, 2,
-3, -4, 1, 3, -1, -5, -1, 3, 0, -3, -2, 1, 0, -2, -3, 1, 2, -2, -5, 0, 3, 0, -4,
-2, 2, 1, -3, -2, 0, 1, -2, -3, 0, 3, -1, -5, -1, 3, 1, -4, -2, 2, 1, -2, -2, 0,
1, -1, -4, 0, 3, 0, -4, -2, 3, 1, -3, -3, 1, 1, -2, -2, 0, 2, -1, -4, -1, 3, 0,
-4, -2, 2, 1, -3, -3, 1, 1, -1, -2, 0, 2, -1, -4, -1, 3, 0, -4, -2, 2, 1, -3,
-3, 1, 1, -1, -3, 0, 2, -1, -4, -1, 3, 0, -4, -2, 2, 1, -3, -2, 0, 0, -2, -3, 0,
2, -1, -4, -1, 3, 0, -4, -2, 2, 1, -3, -2, 0, 0, -2, -3, 1, 2, -2, -4, 0, 3, -1,
-4, -1, 2, 0, -3, -1, 0, 0, -2, -2, 1, 2, -2, -4, 1, 3, -2, -4, 0, 2, -1, -2,
-1, 1, 0, -3, -2, 2, 1, -3, -3, 2, 2, -2, -3, 0, 1, -1, -2, 0, 1, -1, -3, -1, 2,
0, -4, -2, 2, 1, -3, -2, 1, 1, -2, -2, 0, 1, -2, -3, 0, 2, -1, -4, -1, 2, 0, -3,
-1, 1, 0, -2, -1, 1, 1, -3, -3, 1, 2, -3, -3, 1, 2, -2, -3, 0, 1, -1, -2, -1, 1,
0, -3, -1, 2, 0, -4, -2, 2, 1, -3, -2, 1, 0, -1, -2, 0, 1, -2, -3, 0, 2, -2, -4,
0, 2, -1, -3, -1, 1, -1, -2, -1, 1, 0, -3, -2, 2, 1, -3, -2, 2, 1, -2, -2, 0, 0,
-1, -2, 0, 1, -2, -3, 0, 2, -1, -4, 0, 2, -1, -3, -1, 1, -1, -2, -1, 1, 0, -3,
-2, 2, 1, -3, -2, 2, 1, -2, -2, 0, 0, -1, -2, 0, 1, -2, -3, 1, 2, -2, -3, 0, 2,
-1, -3, 0, 0, -1, -2, -1, 1, -1, -3, -1, 2, 0, -3, -1, 2, 0, -3, -1, 0, 0, -1,
-1, 1, 0, -3, -2, 1, 1, -3, -2, 1, 1, -2, -2, 0, 0, -1, -1, 0, 1, -2, -3, 1, 2,
-2, -3, 0, 1, -1, -2, 0, 0, -1, -1, 0, 1, -1, -3, 0, 2, -1, -3, -1, 2, -1, -3,
-1, 0, -1, -1, -1, 1, 0, -3, -1, 2, 0, -3, -1, 2, 0, -2, -1, 0, 0, -1, -1, 0, 0,
-2, -2, 1, 1, -3, -2, 1, 1, -2, -2, 0, 0, -1, -1, 0, 0, -2, -2, 1, 1, -2, -2, 1,
1, -2, -2, 0, 0, -1, -1, 0, 0, -2, -2, 1, 1, -2, -2, 1, 1, -2, -2, 0, 0, -1, -1,
0, 0, -1, -2, 1, 1, -2, -3, 1, 1, -2, -2, 0, 0, -1, -1, 0, 0, -1, -2, 0, 1, -2,
-2, 1, 1, -2, -2, 0, 0, -1, -1, 0, 0, -1, -2, 0, 1, -2, -2, 1, 1, -2, -2, 0, 0,
-1, -1, 0, 0, -1, -2, 0, 1, -2, -2, 1, 1, -2, -2, 1, 0, -1, -1, 0, 0, -1, -1, 0,
0, -2, -2, 1, 1, -2, -2, 1, 0, -2, -1, 0, 0, -1, -1, 0, 0, -2, -1, 1, 0, -3, -1,
1, 0, -2, -1, 0, -1, -1, -1, 0, 0, -2, -1, 1, -1, -3, -1, 1, -1, -2, -1, 0, -1,
-1, -1, 0, -1, -2, 0, 1, -1, -2, 0, 1, -1, -2, 0, 0, -1, -1, 0, 0, -1, -2, 0, 1,
-2, -2, 1, 1, -2, -2, 0, 0, -1, -1, 0, 0, -1, -1, 1, 0, -2, -1, 1, 0, -2, -1, 1,
-1, -1, -1, 0, -1, -1, -1, 1, -1, -2, 0, 1, -1, -2, 0, 1, -1, -1, 0, 0, -1, -1,
0, 0, -2, -2, 1, 0, -2, -1, 1, 0, -2, -1, 0, 0, -1, -1, 0, 0, -2, -1, 1, -1, -2,
0, 1, -1, -2, 0, 0, -1, -1, 0, 0, -1, -2, 0, 0, -2, -2, 1, 0, -2, -1, 0, 0, -1,
-1, 0, 0, -1, -1, 1, -1, -2, -1, 1, -1, -2, 0, 0, -1, -1, -1, 0, -1, -1, 0, 0,
-1, -2, 0, 0, -2, -1, 0, 0, -1, -1, 0, -1, -1, -1, 0, -1, -2, 0, 1, -1, -2, 0,
0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -2, -1, 1, -1, -2, -1, 0, -1, -1,
-1, 0, -1, -1, 0, 0, -1, -1, 0, 0, -2, -1, 0, 0, -1, -1, 0, -1, -1, -1, 0, -1,
-2, 0, 1, -1, -2, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1, -2, 0, 0, -1,
-1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -2, -1, 0, -1, -2, -1, 0, -1, -1, -1, 0,
-1, -1, 0, 0, -1, -1, 0, 0, -2, -1, 0, -1, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0,
0, -1, -1, 0, 0, -1, -1, 0, -1, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1,
0, -1, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1,
0, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1, -1, 0, -1, -1, 0, 0, -1,
-1, 0, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1,
-1, -1, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1, -1, -1, 0,
-1, -1, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, 0,
-1, -1, 0, 0, -1, -1, 0, -1, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0,
-1, -1, -1, -1, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1, 0,
0, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, -1, -1, -1, 0, 0, -1, -1, 0,
0, -1, -1, 0, 0, -1, -1, -1, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1, 0,
0, -1, -1, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, -1, -1, -1, 0,
0, -1, -1, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, 0, 0, -1, -1, 0, 0,
-1, -1, 0, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, -1,
-1, -1, 0, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1,
-1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, -1,
-1, 0, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1, 0, 0, -1,
-1, -1, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1,
-1, -1, 0, -1, -1, 0, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1, 0, -1, -1, 0, 0, -1,
-1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, -1, -1, 0, -1, 0, 0,
-1, 0, -1, };

#endif /* BASSICFIVE_H_ */