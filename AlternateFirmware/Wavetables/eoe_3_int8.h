#ifndef EOE_3_H_
#define EOE_3_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define EOE_3_NUM_CELLS 5410
#define EOE_3_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) EOE_3_DATA [] = {2, 49,
27, -13, 108, 101, 42, 22, 25, 33, 33, 38, 30, 35, 22, 35, 14, 27, -37, 35, 29,
-26, 24, 35, 55, -36, -96, -6, 74, 6, -67, -65, -26, -97, 34, 6, -65, -34, -87,
10, -21, -49, -73, -74, -58, -65, -52, -92, -49, 20, -20, -37, -73, -74, -56,
-87, -21, -9, -41, -78, -18, 69, -16, -71, -59, 72, 28, -27, -19, -23, -25, -14,
105, -23, 51, 93, 31, 5, 31, -10, 13, 103, 28, 122, 80, 36, 31, 38, 41, 71, 65,
43, 27, 97, 84, 47, 39, -1, 109, 88, 33, 40, -6, -36, 92, 106, 14, 6, 29, -2,
16, -51, 18, 51, 29, 73, -10, -32, -75, -43, 52, 34, -13, -26, -76, 30, -3, -39,
-51, -96, 19, 11, -84, -3, 17, -104, -44, 36, -18, -70, -59, -68, -64, -31, -6,
-73, -65, 29, 14, -54, -39, -81, -65, 49, 40, -39, -27, -47, -68, 46, 68, 4,
-20, -9, -17, 35, -20, 2, 92, 58, 13, 35, -28, 50, 63, 31, 83, 13, 93, 51, 8,
59, 97, 33, 45, 7, -7, 98, 117, 66, 27, 18, 40, 4, 31, 100, 44, 34, 18, 28, 21,
23, -43, 59, 86, 24, -17, -21, 8, 20, 34, -57, -41, 68, 24, -49, 22, -8, -37,
-34, -38, -40, -20, -26, -21, -23, -23, -90, -9, 0, -9, 15, -94, -48, -55, 31,
8, -49, -54, -55, -33, -30, -26, -28, -20, -34, 3, -63, 19, 18, -27, 60, -45,
-24, 6, 35, 55, -9, -37, -30, 54, 80, 21, 11, -22, -11, 106, 14, 17, 97, 74, 23,
21, 26, 39, 40, 50, 36, 6, 104, 73, 42, 19, 48, 29, -15, 77, 126, 16, 0, 70, 47,
-2, -3, 51, 41, -10, -39, 69, 83, -35, -33, 60, 44, -19, -16, -25, -12, -48,
-30, 51, -16, -13, -27, -39, 4, 26, -5, -56, -44, -71, -83, -7, 64, -10, -46,
-61, -47, -50, -53, -14, -32, 11, -22, -33, 28, -44, -58, 38, -17, -81, 16, 21,
-21, 20, -10, -26, 4, -1, 7, -10, 40, 10, -15, 11, 65, 45, 34, 65, 29, -20, -6,
89, 7, 49, 103, 29, -10, 95, 35, 14, 77, 54, 54, 51, 53, 25, 31, 23, 7, 67, 105,
-9, 36, 44, 62, 30, 29, 37, 26, 4, -7, -11, -33, 67, 75, 31, -30, -22, -17, -6,
-38, 32, -13, -7, -38, -63, 37, 16, -46, -71, 34, -35, -4, -57, -26, 26, -85,
-13, -1, -36, -36, -79, -24, -12, -19, 33, -20, -27, -75, -65, 26, 3, 31, -9,
-58, 16, -18, 38, 6, -17, -16, -6, -8, -52, 64, 76, 21, 1, 7, 0, 28, 34, 33, 22,
36, -25, 62, 82, -4, 77, 49, 28, 23, 22, -20, 38, 108, 90, 23, 24, -4, 3, 86,
41, 19, 22, 40, 23, 26, 20, 21, 19, -51, 53, 59, -21, 50, 10, 14, 23, 3, -56,
-36, 42, 7, -32, -75, 38, 36, -35, -22, -86, -36, 31, -13, -23, 11, -30, -62,
-41, -27, -41, -11, 2, -76, -30, 35, 2, -38, -46, -37, -30, -22, -19, -16, -13,
-12, -12, -8, -5, -6, -3, -3, 4, 2, 6, 5, 7, 8, 14, 16, -36, 40, 45, 53, 60,
-27, -1, 57, 51, -36, 14, 53, 87, 69, 20, 1, 3, 58, -4, 22, 34, 88, 73, 8, 18,
-35, 43, 38, 3, 89, 45, -7, 32, 17, -8, 0, 11, 15, 4, 19, -26, 1, 23, -14, -19,
-48, 37, 42, -13, -24, -42, -84, 4, 45, -24, -33, -51, -26, -81, -42, 63, -34,
-73, 14, -11, -48, -35, -70, -57, 36, -12, -34, -56, -69, 33, -6, -52, -29, 26,
-21, 1, 2, -28, -24, -68, 14, -9, 35, 10, 37, 24, -17, -10, -45, 26, 0, 79, 27,
17, -28, -15, 75, 32, 44, 10, -13, 42, 52, 20, -4, 29, 63, -25, 73, 36, -10, 48,
50, -3, -29, 13, 101, 29, -4, 21, -24, 44, -28, 45, -12, 13, 16, 9, -11, -61,
47, 5, -27, -32, 27, -3, -15, -72, -18, -10, -55, 0, -25, -13, -4, -7, -55, -39,
-53, -26, -70, -53, 30, -11, -34, -49, -37, -89, 7, 7, -29, -39, -33, -61, -54,
51, -2, -27, -35, -28, -22, -16, -13, -13, -34, 14, 16, -1, -5, -2, -10, -26,
24, 43, -44, 14, 77, 4, 9, -37, -7, 39, 73, -19, 28, 38, -43, 55, 54, -4, -25,
45, 47, 19, 6, 6, -6, -41, 50, 67, 1, 41, 13, -15, -8, -1, 1, -4, -1, -6, -5,
-30, 19, -50, 4, 48, -57, 18, -46, -42, 34, -65, -58, 24, -37, -13, -21, -97,
-20, -4, -44, -59, -32, 24, -59, -72, -6, -71, -13, -25, -53, -35, -30, -38,
-28, -11, -19, -53, -75, 15, -38, -44, -6, -15, -2, -15, -55, -4, -33, -23, 32,
21, -36, -50, 41, 6, -4, -17, -3, -29, -16, 49, 35, -20, -32, 29, 19, 33, 39,
-9, 2, -51, 12, 68, 15, 3, -4, 3, 2, 8, 2, 2, -46, 34, 32, 2, 45, -13, -15, -30,
-66, 27, 46, -11, -24, -28, -24, -20, -25, -19, -28, -30, -7, -20, -30, -33,
-36, -33, -43, -73, 14, -17, -25, -81, -59, 10, -29, -56, -84, -7, -16, -54,
-87, -32, 10, -35, -66, -18, -32, -48, -63, -35, -43, -15, -11, -35, 4, -19,
-50, -66, 14, -20, -18, -43, -47, -2, 2, 23, -4, -30, -15, -49, -16, 37, -5, 14,
9, -23, -1, -31, -20, 47, 15, -32, -11, 18, 10, -9, 4, 30, 1, -32, -25, 32, 6,
-5, -42, -35, 39, 24, -36, -17, 9, -17, -21, -22, -25, -62, 2, 27, -43, -46, 12,
-11, -54, -79, -15, -7, -19, -9, -53, -44, -57, -41, -50, -28, -73, -38, -9,
-69, -17, -45, -49, -22, -25, -49, -58, -53, -50, -43, -44, -45, -37, -30, -41,
-35, -77, -6, -14, -79, -7, 15, -33, -38, -49, -27, -33, -17, -43, -52, 25, -38,
12, -12, -8, 2, -45, -45, -12, 31, 6, -18, -24, -30, -34, 42, -23, -14, 2, -10,
9, -41, -2, -4, 17, 9, -24, -19, -28, -13, -47, -11, 33, -7, -23, -26, -27, -27,
-24, -12, -40, -50, -6, -5, -29, -29, -22, -19, -32, -52, -39, -73, -56, -15,
-13, -19, -45, -54, -53, -53, -44, -57, -74, -35, -14, -44, -35, -27, -85, -34,
-39, -73, -57, -20, -13, -68, -30, -42, -45, -52, -39, -58, -69, 10, -12, -38,
-41, -41, -33, -40, -25, -33, -61, 15, -2, -57, -5, 2, -28, -52, -9, -3, -23,
-19, -25, -14, -31, -52, 11, 30, 2, -23, -29, -20, -51, -5, 19, -21, -39, -19,
2, -3, -14, -48, -22, 17, -19, -26, -57, -50, 14, -4, -29, -36, -40, -30, -54,
-31, -7, -30, -34, -44, -38, -76, -42, 7, -20, -52, -54, -54, -75, -18, -8, -78,
-56, -15, -39, -55, -55, -84, -57, -6, -17, -48, -57, -59, -68, -29, -37, -40,
-66, -46, -17, -38, -44, -58, -24, -43, -37, -24, -35, -33, -56, -52, -13, -10,
-12, -17, -59, -56, 3, -19, -31, 4, -48, -40, -7, -17, -20, -22, -22, -22, -10,
-24, -4, -12, -53, -19, 0, -24, -12, -9, -49, -29, 3, -2, -21, -35, -27, -57,
-28, -6, 0, -23, -47, -13, -34, -30, -42, -39, -16, -58, -43, -3, -22, -53, -60,
-20, -36, -61, -26, -37, -58, -47, -41, -24, -48, -42, -30, -50, -53, -50, -51,
-46, -53, -73, -27, -23, -27, -45, -53, -49, -51, -59, -44, -29, -32, -38, -46,
-12, -41, -38, -60, -41, -38, -33, -19, -32, -7, -31, -34, -43, -31, -60, -11,
-2, -35, -6, -32, -39, -25, -6, -30, -16, -9, -30, -40, -10, -9, -24, -20, -28,
-17, -43, -26, 14, -16, -22, -37, -40, 1, -18, -23, -57, -27, 9, -18, -29, -36,
-41, -52, -19, -27, -20, -10, -53, -33, -24, -40, -41, -70, -32, -16, -24, -29,
-58, -36, -40, -42, -44, -43, -42, -43, -40, -44, -39, -48, -37, -66, -35, -20,
-31, -35, -66, -24, -34, -61, -40, -20, -35, -38, -44, -34, -56, -43, -22, -26,
-10, -36, -30, -27, -36, -55, -16, -6, -20, -33, -31, -35, -22, -21, -40, -19,
-3, -11, -37, -7, -20, -19, -51, -10, -1, -23, -13, -28, -19, -22, -2, -26, -21,
-37, -28, 1, -13, -18, -27, -35, -5, -19, -27, -30, -28, -34, -43, 0, -18, -24,
-35, -28, -49, -38, -7, -36, -15, -33, -46, -26, -46, -17, -31, -40, -30, -43,
-27, -52, -39, -27, -19, -41, -49, -27, -40, -44, -33, -26, -23, -32, -41, -38,
-38, -35, -37, -25, -36, -33, -23, -22, -42, -35, -9, -23, -34, -48, -7, -10,
-23, -29, -43, -15, -3, -20, -43, -14, -10, -22, -6, -8, -21, -21, -23, -16,
-31, -24, 6, -19, -13, 1, -10, -18, -21, -18, -18, -15, -17, -14, -16, -17, -16,
-12, -17, -15, -21, -35, -5, -17, -13, -22, -10, -10, -27, -25, -30, -23, -46,
-19, -7, -10, -18, -31, -29, -35, -49, -10, -15, -24, -16, -34, -30, -45, -30,
-19, -17, -16, -37, -43, -18, -27, -29, -15, -21, -27, -45, -31, -2, -31, -29,
-7, -22, -23, -33, -26, -22, -24, -16, -14, -6, -10, -23, -19, -36, -17, -1,
-16, -10, -2, -18, -28, -4, -14, -6, -11, -11, 4, -17, -15, -1, -15, -11, -4,
-16, -8, 2, 1, -7, -20, -15, 1, -5, -22, -15, 9, -14, 0, -7, -21, -2, -8, -6,
-27, -14, -4, -10, -11, -13, -9, -14, -11, -6, -24, -29, -4, -7, -15, -22, -25,
-21, -9, -4, -14, -21, -18, -33, -18, -8, -20, -9, -20, -8, -13, -19, -22, -19,
-15, -22, -23, -4, -6, -29, -10, -1, -9, -17, -15, -22, -9, -7, -8, -11, -8,
-16, -22, 9, -4, -9, -3, 3, 0, -11, -13, -1, -2, -3, -5, -2, -12, -8, 14, 3, 2,
-12, 4, 9, 1, -3, -3, -2, 0, 0, 0, 0, 0, 0, -17, 10, 8, -1, 11, 0, -14, -1, 6,
-1, -14, -5, 0, 2, 4, -10, 5, -1, -7, -19, -1, 7, -7, -8, -19, -3, 8, -11, -5,
3, -11, -6, -23, -8, 1, -6, 0, -7, -6, -10, -1, -1, -6, -7, -6, -8, -6, -11, 2,
-7, -11, 7, -1, 4, 3, -8, -10, 5, -4, 1, 5, 3, 6, -3, 8, 4, 1, 0, 2, 4, 3, 7,
-6, 10, 18, 10, -4, 4, 15, 9, 17, 0, 6, 12, 9, 3, -4, 18, 14, 7, 15, 11, 4, -5,
12, 13, 17, 6, 5, 13, 8, 0, -1, 15, 6, 12, 5, 8, 10, 2, -1, 10, 8, -5, 3, 13,
14, -1, -1, 10, 0, -5, 12, 7, 6, -8, 3, 9, 3, 10, -5, 3, 9, 6, 6, -3, 0, 5, 8,
6, 10, 9, 5, 1, -4, 8, 7, 16, 8, 3, 10, 14, 5, 4, 17, 11, 5, 10, 9, 7, 19, 6,
12, 20, 17, 10, 13, 13, 8, 9, 17, 25, 17, 13, 8, 19, 16, 16, 11, 9, 23, 15, 21,
18, 6, 21, 16, 18, 20, 13, 14, 3, 16, 20, 16, 22, 13, 6, 16, 14, 13, 20, 11, 12,
17, 11, 12, 10, 11, 9, 5, 19, 13, 12, 19, 11, 10, 7, 4, 9, 17, 14, 9, 15, 11,
12, 7, 10, 19, 7, 7, 15, 18, 13, 10, 4, 15, 15, 11, 21, 11, 10, 17, 16, 16, 15,
12, 15, 20, 20, 9, 16, 24, 13, 15, 25, 19, 16, 14, 15, 24, 23, 21, 18, 20, 20,
20, 24, 22, 19, 19, 18, 14, 20, 28, 23, 20, 25, 17, 24, 21, 20, 16, 14, 25, 22,
23, 19, 20, 13, 18, 24, 20, 21, 14, 22, 21, 13, 22, 21, 15, 15, 18, 17, 13, 17,
18, 20, 14, 14, 21, 17, 14, 17, 18, 20, 17, 10, 19, 18, 10, 19, 22, 19, 16, 15,
16, 14, 17, 20, 18, 13, 21, 19, 20, 24, 19, 15, 13, 24, 25, 20, 13, 22, 26, 17,
24, 22, 20, 24, 18, 25, 23, 16, 27, 25, 18, 24, 25, 23, 27, 21, 20, 27, 21, 20,
29, 28, 18, 23, 29, 24, 24, 21, 17, 25, 24, 24, 27, 22, 25, 23, 23, 19, 16, 25,
23, 23, 25, 24, 21, 19, 20, 13, 20, 26, 25, 17, 21, 24, 20, 18, 12, 22, 26, 18,
18, 24, 18, 19, 23, 16, 15, 25, 21, 19, 21, 17, 21, 19, 24, 23, 20, 19, 18, 16,
20, 24, 26, 23, 20, 21, 16, 23, 24, 27, 21, 21, 26, 22, 23, 18, 21, 25, 26, 28,
26, 23, 23, 22, 19, 26, 31, 26, 26, 20, 21, 30, 28, 24, 20, 28, 28, 24, 19, 24,
30, 28, 22, 23, 29, 25, 24, 23, 22, 18, 24, 28, 28, 26, 18, 21, 27, 24, 22, 23,
17, 19, 28, 21, 23, 25, 17, 23, 22, 20, 22, 20, 25, 21, 21, 19, 16, 22, 25, 21,
21, 22, 20, 20, 20, 20, 15, 23, 27, 20, 20, 21, 22, 23, 22, 21, 22, 22, 22, 23,
23, 23, 20, 25, 21, 20, 27, 25, 23, 22, 23, 24, 22, 22, 24, 25, 29, 26, 22, 21,
28, 24, 22, 26, 25, 28, 25, 24, 23, 24, 20, 22, 30, 28, 25, 23, 23, 23, 23, 24,
24, 24, 24, 24, 23, 19, 24, 26, 25, 23, 23, 25, 22, 21, 21, 21, 21, 22, 21, 22,
21, 22, 18, 19, 27, 22, 18, 24, 22, 16, 21, 22, 15, 19, 20, 21, 18, 17, 19, 18,
15, 17, 20, 14, 16, 16, 19, 17, 15, 16, 16, 18, 14, 16, 14, 15, 16, 15, 17, 16,
14, 15, 16, 14, 15, 15, 14, 13, 15, 15, 15, 14, 15, 13, 12, 14, 15, 15, 14, 12,
11, 14, 14, 13, 11, 13, 13, 12, 14, 13, 11, 10, 13, 13, 11, 13, 12, 12, 10, 10,
13, 11, 11, 11, 12, 10, 9, 11, 11, 10, 10, 8, 9, 11, 8, 10, 11, 10, 9, 9, 9, 9,
8, 8, 10, 10, 7, 9, 11, 10, 9, 8, 8, 8, 7, 9, 10, 10, 8, 9, 8, 8, 10, 8, 9, 9,
9, 8, 8, 9, 10, 8, 8, 9, 8, 9, 8, 9, 10, 8, 8, 10, 9, 9, 9, 7, 7, 9, 9, 9, 9, 9,
8, 9, 8, 8, 9, 8, 8, 7, 7, 8, 9, 8, 8, 8, 7, 8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 7,
7, 7, 6, 8, 8, 7, 8, 7, 7, 6, 7, 5, 7, 7, 7, 7, 6, 7, 7, 6, 7, 7, 6, 6, 6, 5, 6,
8, 6, 6, 7, 7, 6, 5, 7, 6, 5, 7, 7, 6, 6, 6, 5, 6, 7, 7, 7, 7, 6, 6, 6, 5, 6, 7,
7, 6, 6, 7, 6, 6, 6, 6, 6, 5, 5, 7, 7, 7, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 6, 7,
6, 6, 6, 5, 5, 5, 4, 6, 7, 5, 5, 6, 6, 5, 4, 5, 6, 5, 5, 4, 5, 5, 5, 5, 5, 5, 4,
4, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 5, 4, 4, 5, 5, 5, 5, 4, 4, 5, 5, 5, 4, 4, 4, 4,
3, 4, 5, 4, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 5, 5, 4, 4, 5, 5, 4, 4, 5, 5, 5, 4, 4,
5, 5, 4, 4, 4, 4, 5, 4, 4, 4, 4, 3, 4, 5, 4, 4, 4, 4, 4, 3, 3, 4, 4, 3, 3, 4, 4,
4, 3, 3, 3, 4, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3,
3, 3, 3, 3, 3, 3, 2, 2, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3, 2, 2, 3, 3, 2, 2,
3, 2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 1, 2, 2, 2,
1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1,
1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0,
0, -1, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1,
-1, 0, 0, -1, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, -1,
0, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, -1, -2, -1, -1,
-1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1, 0,
-1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, -1, -1, 0, -1, -1, 0, -1, 0, 0, -1,
-1, 0, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1,
0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1,
-1, -1, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, -1, 0, 0, -1, 0, -1, 0, -1,
-1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0,
-1, 0, -1, 0, -1, -1, -1, 0, 0, -1, 0, -1, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0,
0, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, -1, 0, -1, -1, 0, -1, 0, -1, -1, -1, -1,
-1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, -1, -1, 0, -1, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1,
0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1,
0, -1, -1, 0, 0, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, 0, -1, 0, -1, -1, 0,
-1, 0, -1, -1, 0, -1, 0, -1, 0, };

#endif /* EOE_3_H_ */
