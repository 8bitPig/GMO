#ifndef DUFOURTEEN_H_
#define DUFOURTEEN_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define DUFOURTEEN_NUM_CELLS 7351
#define DUFOURTEEN_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) DUFOURTEEN_DATA [] = {0,
-1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 2, 2, 3,
3, 4, 3, 2, 1, 1, 1, 1, 0, 1, 2, 3, 4, 5, 3, 2, 0, -2, -4, -8, -9, -9, -10, -13,
-15, -16, -16, -13, -10, -8, -8, -9, -11, -13, -15, -18, -16, -11, -7, -4, 7,
16, 21, 28, 39, 42, 34, 28, 27, 23, 7, -9, -18, -26, -34, -42, -38, -29, -29,
-32, -22, -12, -12, -10, -5, 0, -2, -5, 0, 2, 1, 3, 16, 26, 27, 32, 36, 32, 25,
21, 21, 10, -10, -25, -29, -39, -54, -57, -52, -50, -50, -37, -23, -17, -14, 2,
18, 22, 18, 16, 27, 31, 31, 35, 37, 32, 23, 20, 21, 12, 3, 2, 5, -1, -6, 0, 7,
7, 2, 4, 6, 6, 6, 5, 5, 3, 3, 10, 15, 18, 23, 32, 36, 35, 38, 43, 44, 39, 32,
25, 16, 5, -3, -12, -17, -26, -32, -32, -33, -33, -29, -23, -21, -18, -13, -7,
0, 3, 6, 4, 1, 0, -1, 5, 9, 10, 22, 35, 43, 49, 56, 55, 50, 46, 39, 26, 9, -9,
-25, -36, -49, -58, -57, -53, -49, -43, -31, -28, -26, -14, 3, 10, 9, 14, 24,
28, 24, 26, 29, 27, 23, 26, 38, 44, 40, 38, 43, 40, 32, 30, 29, 26, 18, 16, 17,
9, -1, -7, -8, -17, -29, -33, -33, -31, -29, -21, -10, -10, -15, -13, -8, -16,
-28, -33, -38, -54, -67, -66, -67, -78, -89, -82, -78, -79, -81, -75, -65, -66,
-61, -51, -45, -42, -39, -27, -18, -19, -14, -1, 11, 13, 21, 35, 44, 44, 41, 44,
43, 39, 33, 27, 19, 9, 2, 2, 0, -2, 3, 13, 16, 17, 26, 33, 33, 28, 24, 22, 14,
9, 4, -1, -5, -5, 4, 3, -8, -14, -18, -19, -21, -15, -20, -21, -10, -6, -4, -4,
-2, 0, 3, 0, 1, 2, 4, 3, 3, 3, 3, 4, 7, 11, 10, 4, 0, -3, -12, -23, -28, -32,
-43, -56, -59, -56, -56, -51, -41, -35, -34, -34, -24, -13, -14, -16, -12, -6,
-5, -6, 1, 9, 13, 12, 23, 38, 43, 48, 57, 68, 68, 62, 57, 50, 36, 24, 19, 4,
-14, -19, -18, -19, -20, -20, -13, -10, -11, -4, 10, 16, 12, 16, 19, 13, -3, -4,
4, 0, -5, 0, 1, -10, -19, -21, -20, -21, -21, -16, -14, -19, -20, -12, -6, -6,
-11, -15, -7, -6, -4, 6, 13, 15, 16, 22, 29, 30, 37, 45, 46, 44, 37, 34, 27, 11,
-2, -11, -22, -32, -42, -46, -51, -56, -56, -54, -48, -44, -40, -37, -31, -28,
-28, -28, -22, -17, -10, -1, 13, 26, 36, 43, 49, 55, 59, 61, 56, 53, 48, 35, 25,
15, 5, -4, -7, -6, -2, 0, 5, 13, 13, 15, 24, 28, 26, 23, 20, 24, 26, 23, 20, 22,
20, 16, 22, 22, 15, 7, 11, 11, -6, -16, -15, -18, -19, -17, -17, -14, -18, -21,
-14, -18, -25, -25, -24, -23, -28, -20, -9, -8, -10, -7, 3, 6, 5, 7, 4, -5, -15,
-18, -15, -19, -22, -19, -13, -18, -26, -24, -26, -34, -33, -29, -29, -33, -35,
-35, -41, -44, -43, -39, -32, -23, -11, 11, 25, 32, 40, 48, 58, 57, 55, 49, 41,
28, 17, 7, -6, -15, -21, -24, -27, -24, -14, -9, -7, -6, -6, -4, -10, -15, -20,
-23, -21, -18, -18, -16, -9, -1, 6, 11, 14, 14, 9, 2, -1, -5, -12, -17, -17,
-10, -4, -1, 6, 15, 21, 24, 25, 32, 38, 33, 36, 45, 43, 34, 26, 32, 37, 22, 11,
15, 16, 3, -8, -17, -27, -35, -44, -47, -43, -42, -38, -30, -22, -10, 6, 30, 41,
46, 59, 69, 71, 67, 69, 67, 53, 38, 39, 41, 29, 21, 14, 6, -2, -11, -14, -19,
-26, -27, -16, -7, -13, -18, -11, -9, -4, -5, -4, 6, 3, 3, 8, 14, 9, 6, 10, 8,
-1, -11, -18, -29, -38, -44, -36, -32, -29, -13, 1, 6, 11, 25, 36, 35, 36, 41,
40, 26, 13, 11, 8, -5, -14, -8, 0, 1, 1, 12, 23, 19, 19, 28, 27, 18, 12, 6, 1,
-14, -26, -29, -37, -49, -55, -54, -54, -55, -53, -44, -40, -47, -50, -43, -41,
-47, -52, -45, -40, -44, -32, -9, 6, 16, 34, 53, 68, 66, 67, 69, 57, 36, 19, 1,
-22, -41, -56, -61, -68, -69, -60, -46, -35, -25, -4, 9, 21, 30, 37, 47, 49, 49,
54, 62, 58, 51, 45, 43, 33, 29, 32, 29, 20, 18, 25, 17, 8, 4, 3, -9, -24, -28,
-23, -21, -30, -24, -15, -6, 8, 21, 25, 19, 11, 18, 18, -3, -24, -41, -54, -67,
-77, -75, -73, -76, -65, -45, -31, -30, -27, -15, -8, -13, -15, -11, -10, -13,
-10, -1, -4, -4, 11, 25, 26, 23, 27, 36, 37, 39, 44, 41, 30, 18, 11, 4, -5, -7,
-2, 2, 7, 12, 21, 29, 28, 36, 33, 19, 16, 16, 5, -5, -10, -19, -32, -44, -40,
-27, -23, -23, -13, 6, 12, 8, 18, 27, 25, 15, 13, 21, 15, 7, 17, 26, 17, 5, 11,
20, 0, -20, -18, -16, -30, -45, -39, -34, -44, -46, -35, -27, -28, -24, -11,
-12, -20, -26, -23, -23, -38, -46, -38, -34, -43, -41, -25, -16, -30, -27, -9,
-6, -6, 3, 28, 41, 44, 53, 71, 82, 77, 81, 92, 89, 76, 69, 73, 63, 37, 19, 11,
-2, -28, -37, -33, -43, -61, -63, -57, -60, -68, -64, -48, -47, -45, -19, 7, 17,
20, 32, 50, 51, 41, 27, 20, 10, -6, -8, -3, -13, -30, -29, -21, -22, -27, -21,
-1, 11, 11, 22, 34, 33, 25, 26, 28, 21, 12, 8, 15, 12, 1, 5, 15, 11, -6, -15,
-11, -11, -25, -38, -46, -55, -71, -78, -70, -67, -72, -66, -50, -39, -34, -26,
-15, -11, -16, -22, -20, -23, -34, -38, -32, -25, -23, -15, -3, 11, 20, 26, 39,
52, 53, 55, 58, 43, 26, 17, 4, -8, -21, -17, -5, -5, -8, -19, -26, -28, -25,
-24, -29, -26, -22, -24, -29, -28, -23, -21, -20, -17, -11, -2, 5, 9, 15, 15,
11, 13, 17, 11, 5, 7, 9, 2, -2, 2, 5, -1, -2, 9, 19, 20, 20, 29, 37, 39, 46, 55,
57, 51, 46, 45, 40, 27, 14, 9, -1, -20, -31, -33, -36, -48, -56, -54, -55, -59,
-52, -39, -31, -24, -11, 6, 15, 15, 25, 39, 42, 42, 46, 58, 60, 52, 54, 57, 50,
37, 31, 28, 16, 1, -4, -3, -8, -13, -7, -2, 5, 12, 22, 27, 24, 21, 24, 26, 18,
7, 7, 4, -1, -4, -9, -8, -17, -30, -39, -45, -54, -61, -56, -50, -46, -40, -30,
-19, -7, 2, 14, 23, 19, 24, 29, 23, 11, 6, 11, 10, 6, 9, 14, 15, 15, 26, 42, 48,
47, 54, 61, 54, 37, 26, 21, 3, -17, -21, -25, -37, -45, -47, -45, -48, -54, -50,
-51, -58, -61, -58, -65, -74, -80, -79, -76, -72, -57, -35, -13, 0, 24, 46, 56,
61, 55, 52, 42, 21, 2, -8, -23, -42, -54, -52, -47, -41, -22, -5, 5, 12, 31, 44,
47, 54, 62, 66, 61, 61, 70, 77, 69, 60, 60, 53, 45, 39, 35, 24, 4, -8, -10, -10,
-25, -35, -38, -46, -47, -43, -42, -44, -50, -39, -17, -10, -7, 1, 9, 12, 7, 6,
3, -14, -26, -27, -30, -41, -51, -46, -37, -35, -33, -22, -11, -8, -4, 6, 5, -4,
-1, 9, 10, 2, -1, 4, 4, 0, 6, 11, 13, 12, 15, 18, 14, 11, 14, 13, 7, -2, -9,
-11, -20, -18, -10, -15, -12, 4, 13, 19, 31, 40, 39, 30, 27, 30, 22, 3, -9, -11,
-13, -24, -23, -10, -2, 0, 3, 22, 29, 23, 30, 43, 38, 19, 13, 24, 14, -6, -2,
13, 12, -2, 2, 12, 0, -17, -22, -29, -46, -61, -56, -53, -59, -59, -51, -37,
-37, -36, -21, -7, -13, -21, -15, -9, -27, -42, -35, -34, -41, -46, -34, -21,
-20, -17, 0, 19, 21, 26, 46, 62, 64, 65, 79, 90, 83, 77, 81, 86, 73, 61, 66, 60,
35, 18, 13, 1, -21, -37, -41, -52, -78, -85, -80, -85, -91, -85, -60, -38, -28,
-17, 0, 18, 23, 33, 50, 52, 34, 23, 21, 13, -3, -15, -12, -11, -19, -17, -4, 4,
2, 5, 16, 20, 20, 22, 33, 39, 30, 27, 34, 31, 14, 3, 5, 13, 8, 1, 1, 0, -12,
-24, -25, -28, -43, -57, -62, -68, -78, -83, -80, -75, -72, -70, -57, -40, -34,
-30, -18, -5, -4, -8, -10, -14, -19, -25, -24, -14, -12, -7, 11, 22, 27, 41, 52,
56, 54, 52, 60, 54, 42, 23, -1, -17, -24, -26, -32, -32, -28, -31, -37, -37,
-31, -29, -30, -30, -28, -26, -26, -28, -27, -26, -29, -26, -14, -4, 1, 12, 25,
30, 28, 32, 38, 31, 22, 21, 20, 12, -1, -4, -2, -4, -3, 7, 16, 18, 24, 37, 48,
50, 47, 50, 49, 36, 26, 26, 20, 6, -8, -9, -12, -27, -35, -31, -34, -45, -51,
-48, -44, -52, -49, -32, -23, -19, -12, 9, 27, 28, 35, 53, 66, 67, 68, 69, 67,
62, 56, 54, 48, 36, 25, 16, 1, -9, -14, -11, -16, -24, -18, -8, -4, -2, 8, 16,
12, 3, 6, 12, 6, 3, 5, 4, 3, -1, -3, -9, -19, -27, -27, -28, -38, -46, -40, -37,
-30, -21, -11, 6, 12, 17, 23, 30, 27, 25, 27, 25, 18, 12, 9, 4, 0, -2, 7, 12, 8,
17, 26, 28, 24, 27, 31, 26, 20, 15, 9, -5, -20, -23, -27, -40, -52, -48, -43,
-47, -53, -51, -46, -54, -58, -49, -50, -58, -58, -54, -45, -41, -31, -11, 4,
14, 30, 48, 56, 58, 57, 55, 43, 21, 5, -9, -26, -47, -52, -54, -55, -50, -44,
-29, -18, -9, 5, 26, 35, 37, 43, 56, 61, 63, 73, 73, 66, 57, 59, 50, 38, 33, 31,
22, 7, 1, 5, 5, -10, -18, -20, -27, -28, -25, -27, -33, -40, -27, -8, -6, -5, 3,
12, 16, 13, 13, 7, -13, -28, -31, -38, -53, -62, -57, -49, -48, -46, -34, -24,
-20, -16, -7, -10, -16, -8, 4, 3, -5, -6, -1, -1, -2, 6, 13, 17, 17, 19, 23, 20,
19, 22, 20, 14, 6, 2, 2, -6, 0, 5, -2, 3, 18, 23, 28, 37, 42, 38, 27, 25, 28,
19, 0, -12, -12, -17, -29, -27, -15, -10, -11, -7, 10, 12, 5, 13, 25, 18, 3, 5,
20, 11, -4, 3, 16, 12, -2, 3, 11, -4, -20, -23, -28, -42, -52, -44, -42, -46,
-43, -30, -15, -15, -15, -4, 3, -9, -19, -14, -11, -31, -44, -35, -36, -42, -45,
-31, -19, -21, -20, -6, 9, 7, 12, 31, 43, 43, 46, 64, 77, 72, 70, 78, 83, 70,
62, 69, 61, 36, 20, 14, 1, -20, -33, -35, -49, -72, -72, -64, -67, -73, -66,
-43, -24, -16, -6, 11, 26, 29, 37, 50, 47, 26, 17, 15, 4, -13, -25, -20, -19,
-28, -26, -15, -11, -15, -9, 5, 10, 12, 17, 28, 31, 22, 23, 32, 30, 16, 8, 14,
23, 20, 14, 14, 10, -2, -13, -12, -16, -33, -49, -54, -61, -72, -77, -74, -69,
-67, -67, -53, -37, -34, -31, -21, -14, -18, -23, -27, -30, -35, -41, -39, -28,
-24, -14, 7, 19, 25, 40, 49, 53, 50, 51, 61, 54, 42, 21, 1, -11, -14, -13, -17,
-15, -10, -11, -16, -18, -16, -18, -23, -26, -26, -25, -26, -28, -27, -28, -30,
-25, -13, -7, -5, 5, 17, 20, 18, 21, 21, 10, 0, 0, 1, -5, -12, -10, -6, -6, -2,
9, 19, 24, 30, 42, 52, 54, 54, 60, 59, 45, 37, 38, 33, 20, 8, 9, 4, -13, -22,
-21, -28, -41, -48, -46, -47, -58, -55, -37, -29, -27, -20, 1, 19, 20, 27, 43,
52, 51, 53, 55, 54, 50, 45, 42, 38, 26, 17, 11, 1, -6, -9, -5, -10, -13, -3, 6,
8, 9, 19, 27, 24, 17, 22, 25, 17, 13, 11, 10, 9, 7, 5, -4, -17, -28, -29, -32,
-46, -55, -52, -50, -42, -33, -22, -5, -1, 4, 12, 18, 16, 16, 20, 18, 12, 7, 3,
-1, -3, -3, 6, 10, 11, 25, 36, 37, 35, 39, 44, 40, 35, 31, 22, 4, -12, -17, -22,
-36, -46, -41, -38, -46, -54, -49, -44, -53, -57, -52, -56, -65, -65, -62, -55,
-55, -46, -26, -11, 2, 21, 42, 50, 54, 52, 49, 35, 17, 2, -11, -29, -48, -50,
-53, -52, -48, -40, -23, -9, 3, 20, 42, 50, 52, 57, 67, 70, 72, 80, 78, 67, 58,
60, 51, 40, 34, 29, 17, 3, 0, 5, 3, -15, -24, -30, -39, -39, -36, -38, -45, -50,
-35, -17, -14, -9, 2, 12, 15, 11, 12, 5, -15, -28, -30, -37, -52, -60, -52, -42,
-42, -38, -24, -15, -12, -7, 4, 0, -6, 0, 9, 6, -2, -3, 0, -2, -2, 8, 15, 18,
16, 17, 16, 13, 14, 18, 15, 9, 1, -5, -8, -15, -8, -4, -9, -1, 14, 19, 26, 38,
43, 37, 26, 24, 28, 19, 2, -6, -6, -11, -25, -22, -11, -5, -6, -1, 17, 17, 10,
21, 32, 22, 7, 9, 22, 10, -4, 4, 15, 6, -7, 0, 6, -11, -26, -29, -35, -49, -56,
-47, -45, -48, -44, -32, -19, -20, -18, -6, -1, -14, -22, -14, -10, -29, -36,
-27, -29, -37, -39, -24, -14, -17, -14, 1, 13, 9, 15, 35, 45, 43, 49, 69, 80,
73, 72, 80, 81, 64, 57, 62, 50, 24, 11, 6, -8, -27, -38, -39, -54, -74, -72,
-65, -68, -72, -62, -39, -24, -15, -4, 14, 30, 34, 45, 58, 53, 33, 26, 24, 12,
-8, -19, -15, -18, -28, -24, -13, -12, -16, -10, 4, 8, 9, 13, 24, 26, 15, 16,
25, 21, 6, -1, 6, 14, 9, 5, 7, 7, -4, -13, -11, -16, -33, -48, -53, -60, -69,
-70, -66, -60, -57, -56, -40, -26, -24, -22, -12, -6, -10, -15, -20, -25, -32,
-39, -37, -28, -27, -14, 7, 17, 22, 36, 43, 42, 36, 40, 48, 40, 28, 8, -10, -20,
-21, -20, -23, -19, -14, -17, -22, -21, -16, -18, -22, -23, -23, -20, -19, -19,
-16, -15, -15, -8, 3, 6, 8, 18, 28, 27, 22, 24, 25, 14, 6, 6, 6, -1, -10, -9,
-8, -11, -7, 3, 10, 12, 18, 29, 38, 39, 39, 45, 46, 34, 29, 31, 26, 13, 4, 4,
-5, -22, -28, -27, -33, -42, -45, -39, -39, -49, -41, -23, -16, -13, -4, 20, 34,
32, 38, 54, 62, 61, 62, 62, 60, 55, 51, 50, 43, 29, 19, 8, -6, -15, -19, -15,
-21, -24, -16, -8, -5, -2, 9, 14, 9, 5, 12, 14, 6, 4, 4, 4, 4, 2, 0, -7, -18,
-25, -23, -26, -39, -45, -40, -38, -30, -22, -9, 8, 13, 20, 29, 33, 28, 28, 31,
28, 18, 10, 4, -1, -3, -3, 7, 9, 9, 21, 28, 29, 28, 34, 36, 28, 21, 16, 5, -14,
-28, -33, -38, -50, -56, -48, -44, -48, -53, -46, -44, -55, -57, -50, -54, -62,
-62, -58, -49, -46, -33, -11, 4, 17, 39, 59, 67, 69, 65, 59, 40, 19, 3, -11,
-32, -50, -52, -54, -51, -45, -36, -20, -10, -2, 14, 34, 39, 40, 44, 53, 54, 58,
65, 64, 55, 50, 53, 45, 35, 30, 28, 17, 3, -1, 2, -3, -19, -23, -26, -32, -30,
-26, -27, -33, -36, -18, -2, -1, 4, 14, 23, 23, 19, 18, 7, -15, -26, -28, -36,
-53, -60, -52, -43, -44, -40, -30, -24, -23, -17, -7, -13, -17, -9, 0, -5, -13,
-14, -10, -11, -8, 3, 9, 12, 13, 18, 20, 17, 18, 20, 17, 14, 7, 5, 2, -5, 2, 4,
-1, 10, 25, 30, 38, 49, 53, 47, 36, 34, 34, 19, -1, -10, -10, -19, -32, -26,
-14, -10, -12, -5, 11, 9, 4, 16, 24, 12, -4, 2, 12, -5, -18, -6, 6, 0, -9, 1, 5,
-10, -20, -21, -28, -44, -51, -43, -44, -45, -38, -23, -12, -15, -11, 3, 9, -4,
-9, -1, -1, -24, -31, -23, -28, -38, -41, -27, -21, -23, -18, -2, 10, 7, 17, 35,
42, 39, 45, 64, 72, 64, 63, 71, 72, 56, 50, 55, 42, 19, 10, 7, -7, -26, -36,
-37, -55, -73, -69, -63, -69, -73, -59, -31, -15, -6, 5, 22, 35, 39, 53, 65, 57,
36, 30, 25, 11, -9, -18, -14, -18, -29, -24, -14, -13, -17, -9, 4, 6, 6, 9, 20,
21, 12, 14, 22, 15, 1, -5, 3, 9, 4, 1, 3, 1, -10, -16, -13, -18, -35, -47, -50,
-57, -68, -71, -66, -59, -56, -53, -36, -24, -22, -18, -7, -1, -6, -9, -12, -18,
-26, -34, -31, -24, -23, -13, 6, 14, 21, 36, 44, 46, 40, 43, 47, 37, 25, 4, -14,
-24, -26, -28, -32, -28, -24, -25, -29, -26, -21, -21, -21, -21, -20, -19, -19,
-19, -17, -18, -19, -10, 3, 7, 10, 22, 32, 32, 30, 35, 34, 22, 14, 14, 11, 0,
-10, -9, -8, -11, -6, 4, 10, 13, 19, 32, 42, 43, 42, 46, 42, 28, 23, 24, 18, 4,
-5, -4, -12, -26, -29, -27, -34, -44, -45, -39, -41, -49, -38, -22, -17, -14,
-4, 18, 32, 33, 44, 60, 65, 64, 66, 66, 63, 57, 53, 51, 44, 29, 19, 7, -6, -16,
-19, -16, -22, -23, -14, -5, -4, 0, 12, 16, 9, 4, 11, 12, 5, 5, 3, 2, 0, -2, -3,
-11, -21, -26, -24, -28, -41, -46, -41, -38, -28, -20, -6, 7, 10, 17, 26, 31,
25, 25, 29, 27, 20, 14, 9, 5, 1, 1, 9, 10, 11, 23, 30, 28, 26, 32, 34, 27, 22,
17, 7, -10, -22, -27, -35, -49, -56, -49, -47, -54, -58, -51, -50, -60, -58,
-51, -56, -61, -59, -53, -45, -44, -29, -9, 5, 17, 36, 53, 61, 65, 63, 57, 39,
20, 4, -10, -30, -45, -46, -50, -49, -46, -38, -23, -13, -4, 14, 33, 38, 41, 48,
57, 57, 63, 70, 67, 56, 51, 54, 43, 33, 27, 24, 11, -1, -3, 4, 0, -15, -19, -23,
-28, -26, -25, -28, -35, -36, -17, -3, -3, 1, 10, 19, 20, 16, 16, 4, -17, -27,
-29, -39, -54, -60, -52, -47, -49, -43, -31, -25, -24, -17, -8, -14, -17, -6, 3,
0, -7, -7, -4, -6, -2, 9, 15, 16, 16, 19, 19, 17, 19, 23, 20, 16, 9, 8, 3, -2,
5, 4, -2, 8, 21, 25, 31, 40, 43, 36, 26, 26, 26, 12, -5, -12, -11, -20, -31,
-24, -15, -13, -16, -7, 8, 5, 4, 19, 26, 13, 1, 11, 22, 6, -3, 8, 17, 6, -2, 8,
9, -10, -22, -24, -32, -46, -49, -38, -40, -41, -36, -21, -12, -16, -13, -2, -1,
-15, -21, -14, -17, -39, -41, -33, -38, -45, -43, -27, -21, -22, -16, 0, 8, 5,
17, 35, 41, 40, 49, 71, 78, 71, 73, 83, 81, 66, 66, 70, 53, 28, 18, 12, -4, -24,
-33, -37, -58, -76, -70, -64, -69, -72, -58, -33, -19, -12, -1, 17, 27, 30, 42,
51, 39, 20, 17, 13, -2, -19, -25, -19, -23, -29, -20, -10, -10, -13, -3, 7, 10,
11, 16, 27, 26, 19, 25, 33, 26, 12, 9, 19, 24, 17, 13, 13, 8, -6, -13, -13, -23,
-42, -55, -58, -65, -74, -74, -69, -63, -62, -58, -42, -33, -32, -27, -18, -15,
-22, -25, -27, -31, -36, -41, -34, -25, -21, -6, 15, 23, 31, 45, 49, 49, 44, 50,
54, 44, 31, 10, -6, -14, -14, -15, -17, -13, -11, -15, -21, -20, -18, -21, -25,
-27, -27, -26, -27, -28, -25, -25, -24, -15, -3, 0, 3, 15, 23, 21, 19, 23, 21,
8, 2, 5, 3, -5, -11, -8, -7, -8, 0, 13, 20, 23, 31, 42, 48, 48, 49, 54, 48, 35,
31, 32, 25, 11, 4, 5, -5, -20, -24, -23, -33, -43, -46, -43, -48, -57, -45, -30,
-25, -22, -9, 15, 26, 27, 39, 56, 61, 60, 62, 61, 57, 50, 45, 42, 34, 21, 14, 4,
-6, -13, -13, -9, -15, -13, -4, 3, 3, 7, 17, 19, 11, 8, 14, 14, 8, 9, 9, 10, 9,
7, 5, -5, -18, -24, -24, -31, -46, -50, -46, -44, -35, -27, -11, 4, 8, 16, 26,
28, 23, 24, 26, 21, 11, 4, -2, -5, -8, -6, 5, 6, 11, 25, 31, 32, 32, 39, 40, 32,
27, 21, 8, -10, -21, -24, -32, -46, -50, -42, -41, -46, -49, -41, -42, -52, -51,
-47, -54, -61, -61, -56, -49, -48, -32, -13, 0, 13, 34, 50, 57, 58, 55, 49, 31,
13, -3, -18, -41, -54, -54, -58, -54, -50, -38, -22, -11, 0, 21, 39, 45, 49, 57,
66, 66, 73, 78, 72, 61, 57, 57, 45, 36, 32, 29, 17, 5, 4, 9, 1, -14, -18, -25,
-32, -31, -33, -37, -46, -46, -26, -14, -12, -5, 6, 14, 14, 12, 13, 0, -21, -30,
-34, -45, -61, -64, -54, -48, -48, -39, -24, -17, -13, -3, 5, -3, -4, 6, 12, 5,
-2, -3, -1, -4, 0, 9, 14, 16, 18, 23, 23, 19, 21, 21, 15, 8, 0, -3, -10, -15,
-6, -8, -12, 1, 14, 19, 30, 40, 43, 35, 27, 29, 28, 12, -6, -12, -11, -20, -28,
-18, -8, -4, -6, 6, 20, 16, 16, 31, 34, 19, 7, 17, 22, 2, -5, 8, 14, 1, -7, 4,
2, -17, -27, -29, -39, -55, -56, -46, -49, -49, -44, -29, -21, -24, -18, -5, -5,
-19, -21, -11, -17, -37, -35, -27, -30, -36, -32, -16, -13, -15, -8, 9, 15, 13,
26, 44, 48, 46, 57, 77, 81, 75, 78, 85, 80, 63, 61, 62, 41, 15, 5, -2, -19, -37,
-43, -45, -66, -81, -73, -69, -75, -75, -57, -33, -21, -15, -3, 15, 25, 30, 45,
56, 45, 30, 29, 25, 9, -9, -13, -8, -16, -23, -15, -7, -8, -11, 0, 9, 12, 14,
20, 32, 29, 21, 27, 32, 20, 4, 0, 8, 11, 4, 2, 2, -3, -16, -20, -18, -27, -44,
-54, -58, -68, -77, -77, -71, -66, -65, -59, -41, -31, -29, -22, -10, -7, -13,
-16, -18, -22, -29, -34, -26, -19, -17, -2, 17, 24, 35, 49, 53, 53, 47, 53, 54,
42, 27, 5, -10, -18, -18, -20, -23, -19, -18, -23, -28, -25, -23, -26, -30, -32,
-30, -29, -30, -31, -28, -28, -25, -13, -1, 1, 5, 17, 24, 21, 20, 26, 24, 12, 8,
11, 9, 0, -4, 1, 2, 1, 9, 20, 25, 27, 33, 44, 49, 48, 50, 55, 49, 36, 33, 32,
23, 9, 2, 1, -13, -29, -33, -35, -46, -55, -57, -53, -57, -62, -45, -30, -26,
-22, -7, 16, 24, 26, 39, 55, 59, 59, 61, 61, 59, 56, 55, 54, 46, 34, 27, 16, 4,
-5, -6, -6, -14, -11, -1, 6, 5, 10, 20, 20, 12, 10, 16, 14, 5, 4, 1, 0, -4, -7,
-11, -21, -32, -35, -32, -39, -52, -54, -50, -46, -36, -28, -10, 3, 7, 15, 25,
28, 24, 28, 32, 28, 20, 15, 11, 8, 4, 7, 15, 14, 19, 33, 39, 37, 36, 43, 41, 33,
28, 21, 7, -13, -25, -30, -40, -54, -57, -51, -51, -57, -58, -49, -51, -61, -59,
-55, -64, -69, -67, -60, -53, -49, -32, -13, 1, 17, 41, 57, 64, 66, 63, 56, 36,
18, 2, -14, -37, -48, -48, -50, -45, -40, -28, -13, -4, 7, 27, 42, 44, 47, 53,
60, 59, 65, 69, 63, 52, 51, 52, 41, 33, 28, 23, 9, -3, -3, 2, -8, -23, -25, -32,
-35, -31, -30, -32, -39, -36, -15, -4, -2, 4, 13, 20, 18, 15, 15, 0, -19, -25,
-29, -41, -56, -57, -47, -42, -44, -36, -26, -21, -20, -11, -6, -14, -13, -1, 5,
-2, -8, -6, -4, -8, -2, 7, 13, 14, 15, 19, 17, 15, 19, 21, 17, 12, 6, 6, -1, -3,
5, 0, -4, 10, 20, 25, 35, 45, 47, 38, 29, 31, 28, 11, -5, -10, -11, -24, -32,
-22, -14, -13, -14, -1, 11, 7, 9, 24, 26, 11, 2, 13, 16, -4, -7, 7, 12, -2, -5,
7, 4, -14, -21, -23, -32, -46, -45, -37, -42, -42, -35, -20, -15, -18, -10, 3,
0, -14, -15, -7, -16, -36, -33, -29, -36, -44, -40, -25, -23, -24, -16, 1, 7, 5,
22, 39, 42, 41, 54, 73, 73, 67, 72, 81, 74, 58, 61, 62, 42, 21, 15, 8, -9, -26,
-32, -38, -62, -73, -65, -63, -70, -69, -49, -25, -14, -7, 6, 24, 32, 37, 50,
56, 40, 23, 21, 13, -4, -21, -23, -19, -26, -30, -19, -11, -15, -16, -5, 4, 6,
8, 16, 26, 21, 15, 23, 28, 18, 5, 6, 17, 19, 13, 10, 10, 4, -9, -13, -12, -24,
-41, -49, -52, -61, -70, -69, -64, -59, -59, -52, -35, -28, -28, -22, -12, -12,
-17, -20, -23, -29, -35, -39, -30, -25, -23, -6, 12, 17, 28, 40, 44, 43, 40, 49,
49, 39, 24, 3, -12, -19, -18, -21, -23, -17, -16, -20, -24, -20, -17, -19, -21,
-22, -21, -20, -20, -20, -17, -19, -18, -8, 2, 3, 8, 21, 28, 25, 24, 29, 24, 12,
8, 8, 3, -8, -12, -9, -10, -11, -2, 9, 14, 17, 26, 38, 44, 43, 46, 50, 42, 29,
28, 26, 16, 3, 0, 0, -13, -24, -25, -26, -36, -44, -43, -38, -45, -50, -34, -21,
-18, -13, 3, 26, 32, 33, 47, 62, 65, 65, 67, 65, 60, 53, 50, 46, 35, 22, 14, 2,
-10, -18, -17, -16, -22, -18, -9, -4, -5, 2, 12, 12, 4, 4, 11, 8, 3, 4, 3, 4, 2,
1, -2, -12, -22, -24, -22, -30, -43, -43, -39, -35, -24, -16, 3, 14, 18, 26, 34,
33, 28, 30, 31, 26, 16, 11, 5, 1, -3, 0, 8, 6, 12, 23, 26, 24, 25, 32, 29, 21,
16, 9, -5, -23, -30, -32, -42, -55, -56, -49, -49, -55, -53, -44, -48, -56, -51,
-47, -54, -56, -53, -45, -40, -35, -17, 2, 14, 29, 50, 63, 67, 67, 64, 54, 33,
15, 0, -17, -40, -50, -52, -56, -53, -50, -37, -23, -16, -5, 15, 30, 33, 38, 47,
54, 54, 63, 65, 60, 50, 52, 50, 38, 30, 27, 23, 11, 3, 5, 10, 0, -12, -13, -19,
-22, -18, -19, -25, -33, -28, -7, 1, 2, 9, 17, 23, 20, 18, 15, -2, -21, -28,
-34, -49, -64, -65, -57, -54, -55, -45, -34, -30, -27, -17, -13, -21, -18, -5,
0, -7, -12, -9, -6, -8, 1, 10, 14, 16, 19, 25, 26, 25, 29, 30, 24, 19, 12, 12,
5, 5, 11, 5, 4, 18, 28, 31, 40, 47, 46, 35, 27, 29, 24, 5, -11, -16, -18, -31,
-36, -26, -20, -19, -20, -6, 5, -1, 3, 19, 19, 3, -3, 12, 13, -6, -5, 10, 14, 1,
1, 12, 5, -13, -18, -20, -30, -43, -39, -31, -36, -35, -27, -10, -7, -11, -3, 7,
0, -14, -14, -7, -21, -41, -36, -33, -40, -46, -38, -24, -25, -27, -18, -1, 2,
1, 18, 34, 35, 35, 50, 68, 68, 64, 71, 81, 74, 61, 66, 65, 42, 21, 15, 6, -12,
-28, -30, -37, -60, -68, -58, -58, -65, -63, -42, -20, -10, -2, 11, 27, 32, 36,
50, 53, 36, 21, 19, 10, -8, -25, -25, -21, -31, -35, -24, -18, -22, -21, -7, 2,
4, 7, 17, 28, 21, 19, 30, 34, 21, 9, 12, 25, 26, 19, 17, 16, 6, -9, -11, -12,
-29, -49, -56, -60, -73, -79, -76, -71, -67, -67, -56, -36, -30, -28, -19, -9,
-11, -16, -18, -22, -29, -36, -38, -29, -25, -20, 3, 22, 26, 38, 50, 48, 39, 34,
43, 36, 19, -1, -23, -35, -35, -25, -24, -23, -14, -10, -14, -22, -21, -19, -25,
-30, -31, -26, -24, -25, -22, -17, -17, -12, 6, 18, 16, 19, 34, 40, 32, 29, 37,
34, 13, 11, 16, 6, -13, -20, -16, -23, -29, -21, -5, 1, 1, 18, 42, 48, 43, 48,
59, 47, 23, 21, 21, 7, -13, -14, -8, -23, -33, -23, -16, -31, -40, -36, -36,
-52, -63, -45, -35, -40, -42, -27, -8, -2, 6, 28, 42, 47, 57, 67, 73, 69, 68,
73, 65, 41, 27, 22, 5, -15, -22, -17, -15, -15, -5, 11, 15, 17, 27, 32, 28, 26,
24, 18, 10, 4, 2, -2, -5, -10, -14, -22, -29, -34, -37, -42, -48, -50, -51, -55,
-52, -40, -33, -28, -19, -6, 3, 10, 16, 26, 25, 22, 27, 26, 13, 6, 10, 4, -9,
-12, -14, -16, -20, -27, -20, -17, -23, -20, -10, -9, -18, -16, -5, -7, -19,
-18, -9, -15, -27, -21, -8, -12, -16, -9, -6, -18, -30, -26, -23, -35, -40, -25,
-15, -20, -16, 5, 16, 8, 5, 15, 15, -1, -8, 0, -3, -24, -30, -24, -26, -27, -26,
-22, -21, -24, -15, 4, 10, 11, 24, 42, 51, 53, 59, 68, 59, 43, 41, 39, 23, 8,
14, 14, 2, -1, 1, 1, -4, -6, 3, 2, -14, -22, -20, -21, -33, -29, -14, -6, -3, 9,
33, 47, 47, 50, 62, 58, 40, 29, 19, 3, -21, -35, -41, -53, -62, -61, -51, -48,
-46, -33, -20, -15, -13, -5, 6, 14, 11, 12, 23, 27, 17, 22, 35, 34, 28, 28, 38,
41, 32, 32, 36, 20, -1, -11, -12, -21, -39, -43, -40, -40, -43, -32, -4, 4, 0,
25, 53, 51, 37, 39, 51, 44, 25, 19, 24, 18, 3, 6, 20, 18, 9, 15, 33, 39, 32, 42,
60, 50, 31, 37, 50, 40, 19, 19, 25, 6, -13, -14, -10, -25, -43, -34, -23, -38,
-48, -30, -23, -44, -58, -45, -39, -49, -56, -42, -33, -46, -49, -29, -14, -24,
-26, -9, -2, -17, -28, -17, -11, -20, -26, -8, 6, -1, 6, 28, 41, 39, 55, 87,
103, 96, 100, 116, 117, 98, 83, 85, 69, 39, 22, 23, 14, -6, -10, 1, -1, -14,
-10, 1, -2, -14, -12, -1, -7, -19, -16, -1, 6, 5, 16, 30, 33, 28, 28, 26, 11,
-3, -9, -10, -20, -32, -28, -16, -15, -16, -4, 6, 8, 8, 14, 24, 24, 19, 23, 23,
17, 10, 11, 19, 13, 3, 1, 1, -7, -20, -27, -37, -47, -58, -66, -66, -69, -74,
-71, -57, -47, -48, -41, -21, -7, -4, 3, 19, 25, 24, 28, 25, 19, 12, 9, 12, 9,
4, 11, 17, 14, 16, 18, 18, 12, 6, 7, 5, -3, -12, -16, -18, -22, -20, -18, -17,
-15, -19, -18, -17, -19, -23, -22, -21, -31, -40, -41, -37, -35, -34, -31, -29,
-24, -19, -14, -7, 2, 10, 18, 25, 31, 33, 29, 27, 24, 16, 9, 5, 3, -3, -6, 1, 9,
15, 25, 41, 55, 62, 65, 68, 70, 62, 48, 41, 33, 20, 2, -9, -12, -21, -28, -27,
-27, -34, -39, -40, -43, -52, -58, -48, -43, -44, -43, -34, -18, -10, 0, 16, 31,
43, 56, 64, 69, 71, 71, 71, 62, 44, 29, 19, 4, -11, -18, -17, -13, -8, 0, 13,
20, 25, 34, 38, 35, 35, 34, 27, 20, 15, 11, 4, -1, -6, -10, -20, -27, -33, -36,
-43, -49, -51, -53, -57, -56, -47, -41, -38, -28, -15, -5, 1, 7, 18, 19, 16, 22,
25, 15, 6, 10, 7, -5, -9, -11, -13, -17, -24, -17, -11, -16, -14, -5, -4, -13,
-13, -4, -5, -17, -18, -9, -13, -26, -22, -8, -10, -16, -12, -9, -20, -34, -31,
-27, -39, -47, -34, -22, -26, -22, -2, 11, 4, 1, 12, 15, -1, -9, -1, -3, -24,
-33, -27, -28, -28, -27, -21, -18, -20, -12, 6, 13, 13, 25, 43, 53, 54, 59, 69,
62, 45, 41, 40, 25, 8, 13, 16, 4, -1, 2, 3, -3, -9, -2, -1, -15, -24, -22, -22,
-34, -32, -16, -7, -2, 7, 30, 46, 47, 49, 60, 58, 41, 29, 19, 4, -19, -33, -39,
-49, -60, -60, -50, -47, -47, -36, -22, -16, -15, -8, 4, 12, 9, 10, 20, 24, 15,
18, 33, 33, 27, 25, 34, 39, 32, 31, 35, 21, 0, -10, -10, -16, -33, -39, -37,
-37, -40, -32, -6, 4, 1, 22, 50, 51, 38, 39, 50, 44, 24, 16, 20, 14, -1, 0, 14,
15, 5, 10, 26, 34, 27, 35, 54, 47, 28, 31, 46, 38, 17, 13, 21, 7, -12, -13, -8,
-19, -36, -29, -16, -28, -40, -25, -16, -34, -50, -40, -33, -42, -50, -38, -28,
-39, -43, -26, -10, -19, -24, -10, -2, -16, -30, -23, -16, -25, -33, -17, -1,
-6, -1, 20, 34, 32, 43, 73, 91, 84, 86, 102, 106, 91, 77, 78, 66, 39, 23, 24,
18, 2, -3, 7, 8, -4, -3, 6, 4, -8, -9, 1, -1, -12, -10, 3, 10, 7, 14, 26, 29,
24, 22, 22, 8, -6, -13, -14, -23, -35, -33, -22, -20, -22, -10, 0, 2, 2, 6, 15,
17, 14, 17, 19, 14, 9, 10, 18, 15, 6, 4, 4, -1, -14, -19, -27, -36, -45, -51,
-52, -54, -58, -57, -46, -37, -38, -33, -16, -4, -3, 2, 16, 20, 18, 21, 19, 14,
8, 5, 8, 4, -1, 4, 8, 5, 5, 7, 7, 4, -1, 1, 0, -7, -14, -18, -18, -19, -18, -16,
-15, -12, -15, -16, -15, -14, -17, -17, -14, -20, -26, -27, -24, -21, -20, -19,
-18, -15, -13, -9, -3, 5, 10, 16, 23, 28, 30, 25, 24, 21, 12, 5, 2, -2, -9, -12,
-6, 0, 4, 12, 27, 40, 45, 48, 53, 55, 46, 35, 30, 23, 12, -2, -9, -12, -20, -24,
-21, -21, -27, -28, -27, -29, -37, -40, -30, -28, -30, -28, -20, -9, -3, 6, 20,
32, 42, 54, 59, 61, 60, 60, 59, 49, 32, 20, 12, -2, -15, -20, -19, -18, -15, -7,
3, 7, 12, 20, 23, 21, 21, 20, 15, 9, 7, 5, 1, -3, -5, -7, -13, -19, -23, -26,
-32, -36, -36, -36, -39, -37, -28, -23, -20, -12, -2, 5, 8, 12, 20, 20, 17, 20,
20, 10, 4, 6, 2, -8, -10, -12, -14, -18, -24, -19, -17, -21, -20, -14, -14, -21,
-18, -9, -11, -19, -17, -9, -13, -22, -16, -6, -9, -12, -8, -5, -14, -23, -19,
-18, -27, -31, -17, -9, -12, -8, 9, 17, 10, 8, 15, 13, -1, -6, 0, -4, -20, -24,
-20, -21, -22, -22, -18, -18, -20, -13, 1, 5, 4, 14, 27, 34, 34, 39, 47, 40, 29,
29, 28, 15, 4, 10, 10, 1, -1, 1, 2, -2, -4, 3, 3, -8, -14, -12, -13, -21, -17,
-6, 0, 2, 10, 28, 38, 38, 40, 49, 45, 31, 22, 14, 2, -16, -26, -31, -41, -49,
-48, -40, -38, -38, -28, -18, -15, -14, -8, 0, 5, 2, 4, 12, 14, 8, 12, 23, 22,
19, 19, 27, 30, 24, 25, 28, 16, 1, -5, -6, -13, -26, -28, -26, -25, -26, -17, 3,
8, 5, 23, 41, 39, 29, 30, 38, 31, 16, 12, 15, 9, -2, 1, 11, 9, 3, 8, 20, 24, 17,
24, 36, 28, 15, 20, 29, 22, 8, 8, 14, 2, -10, -9, -6, -16, -27, -21, -13, -24,
-30, -18, -12, -27, -36, -26, -22, -28, -33, -23, -16, -25, -27, -14, -5, -13,
-15, -5, -1, -13, -21, -14, -11, -18, -22, -9, -1, -6, -1, 14, 22, 20, 31, 53,
63, 57, 60, 72, 73, 61, 52, 54, 44, 25, 15, 16, 10, -2, -4, 4, 4, -4, -1, 7, 5,
-3, -2, 5, 1, -7, -4, 6, 10, 8, 15, 24, 25, 21, 20, 18, 7, -3, -8, -10, -18,
-26, -24, -17, -17, -17, -9, -3, -2, -2, 2, 9, 10, 7, 9, 10, 6, 3, 4, 9, 6, 0,
0, 2, -2, -10, -13, -19, -25, -31, -36, -36, -38, -40, -38, -30, -24, -26, -21,
-9, 0, 1, 6, 15, 18, 17, 19, 16, 11, 5, 2, 4, 0, -3, 1, 4, 2, 3, 3, 4, 1, -2,
-1, -3, -7, -12, -15, -16, -17, -16, -14, -13, -11, -13, -12, -10, -9, -11, -10,
-8, -13, -18, -18, -16, -15, -14, -13, -12, -9, -8, -5, 0, 6, 9, 14, 18, 21, 21,
18, 17, 14, 8, 2, 0, -3, -8, -9, -5, 0, 3, 9, 20, 29, 32, 34, 36, 37, 31, 23,
20, 15, 7, -3, -6, -9, -15, -17, -15, -15, -19, -19, -19, -22, -28, -28, -21,
-20, -21, -19, -12, -5, -1, 6, 15, 22, 29, 37, 40, 42, 42, 42, 41, 34, 22, 15,
8, -3, -11, -14, -13, -12, -10, -4, 2, 5, 9, 15, 16, 15, 16, 15, 11, 7, 6, 4, 1,
-2, -4, -7, -12, -16, -18, -19, -23, -25, -25, -26, -27, -25, -19, -17, -15, -9,
-2, 1, 4, 7, 12, 12, 10, 13, 13, 6, 3, 5, 2, -4, -6, -8, -10, -14, -17, -13,
-12, -14, -12, -7, -8, -12, -10, -4, -7, -12, -9, -5, -9, -15, -10, -4, -7, -9,
-6, -5, -12, -17, -13, -12, -19, -21, -12, -8, -10, -7, 4, 8, 3, 3, 8, 6, -3,
-5, -1, -4, -15, -17, -14, -15, -15, -15, -12, -12, -12, -7, 2, 4, 5, 12, 21,
25, 26, 30, 35, 29, 22, 21, 19, 10, 4, 8, 7, 1, 0, 2, 2, -2, -3, 1, -1, -9, -12,
-10, -11, -17, -13, -6, -3, -1, 6, 18, 24, 24, 26, 31, 27, 18, 12, 7, -2, -13,
-18, -21, -27, -31, -30, -24, -24, -23, -17, -10, -8, -7, -3, 3, 5, 3, 5, 10,
11, 7, 11, 18, 17, 14, 14, 19, 19, 15, 15, 16, 7, -3, -6, -7, -12, -19, -20,
-18, -18, -19, -12, 0, 2, 1, 14, 25, 22, 16, 19, 24, 18, 9, 8, 10, 6, 0, 3, 10,
8, 4, 8, 15, 16, 13, 19, 26, 20, 12, 17, 23, 17, 8, 9, 10, 1, -6, -5, -4, -12,
-19, -14, -10, -18, -21, -12, -10, -21, -25, -19, -17, -22, -24, -17, -15, -21,
-21, -11, -6, -12, -11, -4, -2, -10, -14, -9, -7, -12, -13, -4, 1, -2, 3, 13,
17, 16, 24, 38, 44, 40, 43, 49, 49, 41, 36, 37, 29, 15, 10, 10, 6, -2, -2, 3, 1,
-4, -2, 2, -1, -6, -5, -1, -4, -8, -5, 1, 3, 3, 8, 13, 13, 10, 11, 9, 3, -3, -5,
-6, -11, -16, -14, -9, -9, -8, -2, 2, 3, 3, 5, 9, 9, 7, 8, 8, 5, 4, 5, 7, 4, 1,
0, 0, -3, -8, -10, -15, -18, -22, -25, -25, -26, -28, -26, -20, -16, -16, -13,
-4, 1, 2, 6, 13, 14, 14, 16, 15, 12, 10, 9, 9, 6, 3, 3, 3, 1, 0, -1, -1, -2, -4,
-5, -5, -7, -8, -7, -5, -6, -6, -5, -5, -5, -7, -6, -3, -5, -7, -4, -3, -8, -13,
-14, -12, -12, -13, -12, -12, -15, -15, -11, -8, -7, -3, 4, 9, 10, 12, 14, 13,
9, 7, 7, 7, 3, 1, 2, 4, 4, 6, 14, 20, 21, 24, 28, 29, 27, 25, 24, 19, 13, 9, 5,
-2, -7, -7, -6, -9, -12, -9, -8, -10, -12, -11, -9, -10, -12, -9, -7, -7, -6, 0,
4, 6, 11, 19, 25, 25, 25, 28, 28, 22, 16, 12, 6, -2, -6, -8, -10, -12, -10, -4,
-2, 0, 4, 10, 11, 10, 12, 16, 15, 12, 11, 13, 11, 6, 5, 5, 3, 0, -1, -1, -3, -8,
-7, -4, -7, -9, -9, -9, -10, -11, -10, -8, -8, -9, -6, -4, -2, 0, 3, 7, 6, 4, 3,
3, 2, -1, -4, -5, -9, -12, -13, -12, -13, -13, -10, -7, -4, -2, 0, 2, 1, -1, -2,
-2, -3, -7, -7, -7, -8, -7, -7, -6, -7, -6, -5, -4, -3, -6, -7, -5, -6, -7, -8,
-6, -5, -5, -5, -3, -1, -2, -1, 0, 1, 1, -1, -1, -1, -3, -5, -6, -5, -6, -4, -2,
1, 0, 0, 3, 7, 8, 8, 9, 11, 8, 7, 7, 7, 5, 3, 4, 5, 3, 1, 2, 0, -4, -7, -8, -10,
-13, -14, -12, -10, -10, -10, -8, -5, -4, -2, 0, 0, -1, -3, -4, -5, -7, -11,
-11, -12, -13, -14, -14, -10, -9, -9, -9, -6, 0, 1, 3, 6, 7, 8, 11, 13, 13, 12,
12, 13, 12, 10, 9, 9, 6, 2, 0, 0, -3, -8, -10, -10, -11, -13, -12, -9, -8, -8,
-6, -1, 1, 1, 3, 6, 6, 5, 4, 5, 6, 3, -1, -2, -4, -7, -6, -5, -7, -9, -7, -3,
-3, -4, -1, 3, 3, 2, 4, 6, 5, 1, 1, 2, 1, -2, -1, 1, 1, 0, 2, 3, 1, -3, -2, -3,
-8, -12, -13, -13, -17, -18, -15, -13, -14, -13, -10, -6, -6, -6, -3, -2, -4,
-5, -4, -4, -6, -8, -6, -5, -5, -5, 0, 4, 4, 5, 9, 11, 10, 10, 11, 10, 6, 4, 3,
1, -3, -4, -3, -4, -4, -3, -2, -1, -2, -2, -1, -2, -3, -3, -1, -1, -2, -1, 1, 3,
3, 4, 6, 8, 7, 7, 8, 7, 6, 4, 3, 2, -1, -2, -2, -3, -5, -5, -4, -4, -4, -2, -1,
0, 0, 1, 2, 2, 1, 0, 0, -1, -3, -3, -3, -4, -6, -7, -7, -8, -10, -10, -10, -11,
-11, -11, -10, -9, -9, -8, -6, -4, -3, -1, 1, 3, 4, 5, 6, 6, 6, 6, 6, 5, 4, 4,
3, 2, 0, 0, 0, -1, -2, -1, 0, 0, 0, 2, 3, 2, 1, 1, 1, 0, -1, -1, -1, -2, -3, -3,
-3, -3, -5, -5, -5, -6, -7, -6, -6, -7, -7, -6, -5, -4, -4, -2, 0, 0, 1, 2, 2,
2, 1, 1, 1, 0, -1, 0, 0, 0, 0, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 4, 3, 3, 2, 0, 0,
0, 0, -1, -1, 0, 0, -1, -1, -1, -1, -2, -2, -1, -1, -2, -1, 0, 1, 2, 3, 5, 6, 5,
6, 6, 5, 4, 3, 2, 0, -2, -3, -3, -3, -4, -3, -1, -1, 0, 1, 2, 2, 2, 3, 4, 3, 2,
2, 3, 2, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -1, -2,
-1, -1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, -1, -1, -2, -2, -3, -3, -3, -3, -3, -2,
-2, -1, -1, 0, 0, 0, -1, -1, -1, -1, -2, -1, -2, -2, -2, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, };

#endif /* DUFOURTEEN_H_ */
