#ifndef WOODSIX_H_
#define WOODSIX_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define WOODSIX_NUM_CELLS 2011
#define WOODSIX_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) WOODSIX_DATA [] = {0, -1,
1, -2, 1, -2, 3, -2, -1, -4, -11, -40, -47, -82, -84, -107, -91, -27, -89, -50,
-47, -63, -31, -16, 9, 39, 41, 44, 16, -10, -44, -69, -55, 4, 33, 37, 82, 86,
62, 2, 22, -30, -19, 15, 7, 34, 35, 18, 8, -5, -29, 0, -31, 1, -11, -5, 0, -10,
31, 2, -6, -6, 21, 4, 25, 12, -2, 15, 2, 7, 6, -8, -21, -1, -1, 33, 17, 38, 22,
9, 1, -29, -2, 6, 21, 27, 38, 17, 29, 21, 1, 9, 9, 24, 60, 63, 67, 53, 31, 14,
6, 19, 5, 10, 22, 39, 25, 22, -6, -29, -30, -43, -29, -6, 14, 28, 28, 8, 4, -12,
-4, -1, 0, 15, 20, 49, 49, 36, 25, 13, -6, 2, 17, 28, 30, 27, 32, 27, 16, -10,
-12, -30, -22, -8, 8, 19, 22, 24, -3, -17, -35, -46, -44, -27, -23, 0, 23, 29,
32, 14, -8, -25, -25, -22, -2, 6, 23, 37, 31, 21, 2, -7, -30, -35, -7, 21, 38,
38, 21, 13, -7, -21, -25, -32, -26, -15, 13, 18, 29, 24, -3, -11, -28, -29, -19,
3, 20, 26, 34, 19, 10, -2, -30, -42, -36, -29, -9, -1, 4, 11, 6, -6, -19, -13,
-20, -12, -2, 11, 15, 15, 19, 6, 3, -20, -28, -19, -19, -15, -3, -3, -3, -4,
-14, -21, -27, -25, -25, -15, -9, -4, -3, -6, -11, -13, -13, -24, -12, -6, -4,
3, 2, -2, 0, -7, -18, -18, -17, -16, -17, -4, -2, 2, -1, -5, -8, -10, -9, -10,
1, -12, -7, 1, 1, 8, 7, -11, -6, -10, -20, -15, -14, 2, -7, -2, -2, -10, -8,
-18, -27, -25, -29, -28, -15, -16, -10, -6, -13, -12, -4, -16, -12, -11, -15,
-4, -3, 5, 1, -2, -6, -15, -7, -2, -1, 10, 9, 3, 5, -2, -4, 3, 1, -8, -2, -2, 1,
3, -8, -9, -14, -19, -17, -14, -2, -3, 0, 7, 4, 6, -3, -15, -14, -11, -9, 1, 7,
5, 8, 5, -1, 0, -13, -15, -8, 0, 7, 9, 13, 5, -1, -6, -15, -14, -5, -5, -1, 6,
5, 8, 8, 1, -3, -8, -11, -3, 2, 5, 8, 4, 1, -3, -5, -9, -9, -1, 2, 3, 10, 10, 9,
8, -1, -4, -2, -4, 1, 5, 2, 6, 8, 6, 4, 0, -5, -5, 1, 8, 7, 12, 12, 7, 7, 3, -1,
0, -2, -4, 7, 10, 12, 17, 9, 3, -1, -6, -3, -1, 2, 2, 2, 8, 1, -1, -4, -11, -8,
-5, -1, 7, 8, 5, 5, 5, 0, -1, -1, -3, 4, 9, 11, 12, 10, 6, -1, -1, -3, 2, 8, 6,
11, 14, 8, 7, 5, -3, -5, -3, -1, 3, 7, 6, 6, 3, -2, -7, -8, -5, -6, 0, 2, 2, 9,
3, 2, 4, -1, 1, 5, 7, 9, 11, 8, 5, 6, 5, 3, 2, 2, 2, 3, 5, 2, 2, 1, -5, -1, 0,
-4, 2, 2, 1, 5, 4, 2, 2, 0, -3, -2, -1, -1, -1, -1, 0, -2, -3, -5, -5, 1, -3,
-2, 2, -2, 5, 3, 2, 3, 2, 2, 1, 1, 1, 1, 3, 4, 5, 5, 1, 0, 0, -3, -5, -1, -2,
-1, 4, -1, 2, 1, -3, -2, -2, -2, 0, 1, 1, 2, 1, -1, -2, 0, -3, -5, -3, -2, -4,
1, -1, -4, -1, -5, -4, -2, -2, 0, -1, -1, 3, 4, 2, -1, -1, -3, -5, -3, 0, 0, 2,
4, 0, 1, 0, -5, -2, -2, -2, 1, 0, 1, 3, 1, -2, -2, -4, -6, -3, -1, -1, 1, 4, 1,
1, 1, -4, -2, 0, -1, 1, 1, 2, 4, 2, -2, -2, -2, -4, -3, 0, 1, 2, 4, 1, -1, -1,
-4, -5, -2, -3, -1, 2, 1, 2, 1, -3, -3, -3, -4, -4, -1, -1, -2, 0, -1, -3, -2,
-2, -3, 0, 2, 3, 5, 4, 3, 3, 0, -2, -1, -2, -2, 1, 1, 0, 0, 0, -1, -2, -2, -3,
-1, 0, -2, 1, 0, -1, 1, 0, -1, 1, 0, -3, 0, 0, -1, 0, -1, -1, -2, -1, -1, -2,
-1, -3, -2, -1, -3, 0, -2, -4, -2, -2, -4, -3, -1, -3, -2, -1, -2, -1, -1, -1,
-1, -1, -1, -2, 0, -2, -3, -2, -5, -3, -1, -3, -2, 1, 0, 0, 1, 0, 0, 0, -2, -1,
-1, -1, -2, -2, 0, -2, 0, -3, -4, -1, -3, -3, 0, -1, -3, -1, -2, -1, -2, -2, -2,
-1, -1, -1, 0, -1, -1, -2, 0, -1, 0, -1, -4, -2, -1, -4, -2, -2, -3, -1, -2, -1,
0, 1, 0, 1, 0, -1, 0, -1, 0, -1, 0, -2, -1, 1, -1, 0, 1, -1, -1, 0, -1, 1, 1, 0,
1, 2, 1, 0, 0, -2, -1, -1, -1, -1, 1, 1, -1, 1, 0, -1, -1, -2, -2, 0, -2, 0, 1,
0, 0, 0, -1, 0, 1, 0, 1, 1, 1, 0, 1, 2, 0, 0, 0, 0, 1, 0, -1, 1, -1, -2, 0, -1,
-1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 2, 0, 1, 1, -1, 1, 0, 0, 2,
1, 0, 0, 0, 0, 0, 1, 1, 1, 3, 2, 2, 3, 1, 1, 1, -1, 0, 1, -1, 0, 0, -1, -1, 0,
0, -1, -1, -1, -1, 0, -1, -2, 0, -1, -2, 0, -1, -2, 0, -2, -2, 0, -1, -1, 1, 0,
0, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, -1, 2, 1, -1, 1, 0, 0, 0, -1, -1,
0, 0, -1, 0, 0, -1, -1, 0, -2, -1, -1, -2, -1, 1, -1, -1, 0, -2, -2, -2, -2, -1,
-1, -2, -1, -1, -1, -1, 0, -1, -1, 0, -1, -1, 0, -2, -2, 0, -1, -1, 0, -1, 0,
-1, -1, 0, 0, -1, 0, 1, 1, 0, 1, 0, -1, 0, -1, -2, 0, 0, -1, 1, 0, -1, 0, -1,
-1, 0, -1, -1, 0, -1, -1, 0, 0, -1, 0, 0, -2, 0, 0, -1, 0, -1, -2, -1, -2, -2,
-1, -2, -2, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, -1, -1, -2,
-1, -1, -2, -1, -1, -2, -1, -1, -2, -1, -1, -1, -1, 0, 0, -1, 0, -1, -1, 0, -1,
-1, 0, -1, -1, 1, -1, 0, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, -1,
0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -2, -1, -1, -1, -1, -1, -1, -1, 0, -1,
0, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-1, 0, 1, 0, 0, 1, -1, 0, 1, -1, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, -1, 0,
0, -1, 0, -1, -1, 0, -1, -1, 0, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
-1, -1, -1, -2, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, -1,
0, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0,
-1, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0,
0, -1, 0, -1, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0,
0, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0,
-1, -1, 0, -1, -1, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, -1, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, -1, -1, -1,
-1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, -1, -1, -1, 0, 0,
0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0,
0, -1, -1, 0, -1, -1, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0,
0, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0,
0, 0, 0, 0, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, 0, -1,
-1, -1, -1, 0, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, -1, -1, 0, -1, -1, 0, 0, 0, 0, -1,
0, 0, -1, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
-1, 0, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, 0, -1, 0,
0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, 0,
-1, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, 0, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };

#endif /* WOODSIX_H_ */
