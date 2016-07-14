#ifndef RFIFTYEELEVEN_H_
#define RFIFTYEELEVEN_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define RFIFTYEELEVEN_NUM_CELLS 6254
#define RFIFTYEELEVEN_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) RFIFTYEELEVEN_DATA [] =
{0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, -1, 0, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0, -1, -1, -1, 0, 1, 3,
6, 2, -9, -10, 30, 56, 34, -12, -17, 10, 18, 17, -3, -27, -8, 16, 18, 4, 6, 14,
8, 3, -11, -29, -26, -17, 5, 46, 58, 29, -17, -17, 0, 10, 46, 52, 35, 40, 63,
57, 3, -36, -33, -4, 18, 13, 0, 1, 0, -2, 2, 18, 14, -13, -30, -22, -10, -17,
-30, -32, -18, -2, 16, 31, 33, 11, -22, -38, 1, 35, 21, -3, -20, -31, -52, -30,
-7, -27, -21, 22, 59, 29, -17, -37, -34, -48, -55, -20, 16, 34, 31, 11, -9, -22,
-29, -22, 9, 50, 42, -6, -51, -66, -34, -1, -17, -56, -72, -50, -49, -28, 12, 6,
-17, -31, -28, -31, -32, -27, -37, -48, -39, -5, 18, 18, 7, -9, -16, -8, 12, 11,
-14, -27, -19, 7, 33, 25, -6, -27, -8, 18, 14, -21, -44, -20, 36, 42, 21, 9, 3,
-6, 1, 48, 40, 2, 4, 35, 64, 69, 64, 53, 38, 20, 0, -9, -4, 8, 8, 4, 20, 49, 56,
20, -9, -14, -7, -33, -29, 19, 46, 49, 32, 6, -28, -23, 30, 41, 27, 9, -22, -35,
-19, 14, 13, -12, -25, -8, 26, 40, 7, -37, -64, -65, -39, -4, 18, 1, -31, -60,
-82, -66, -26, 3, 11, 1, -13, -27, -27, -21, -26, -12, 6, 4, -2, -14, -34, -54,
-53, -38, -39, -18, -2, -16, -37, -18, 23, 7, -40, -58, -11, 5, 9, 29, -16, -70,
-74, -21, 34, 71, 94, 46, -27, -61, -54, -8, 39, 42, 15, -1, 16, 25, 9, -18,
-41, -6, 54, 60, 17, -6, 36, 83, 100, 78, 34, -4, -11, 22, 43, 45, 43, 35, 21,
20, 75, 102, 75, 43, 33, 42, 48, 30, 6, -8, -2, -4, -5, 23, -4, -44, -39, -20,
-19, -29, 6, 15, -2, 2, -8, -35, -55, -30, -12, -25, -36, -22, -13, -40, -5, 28,
-4, -47, -30, 17, -6, -57, -76, -38, -15, 2, 26, 14, -15, -32, -22, 3, 28, 41,
14, -18, -27, -55, -41, 13, 48, 17, -33, -43, -49, -60, -63, -35, -6, 13, 33,
45, 32, 1, -4, 13, 30, 32, 42, 51, 29, -26, -51, -13, 38, 43, 14, 24, 45, 35,
-14, -62, -62, -5, 64, 97, 81, 39, -14, -57, -64, -24, 29, 47, 0, -48, -48, -8,
5, -5, 5, 17, 41, 60, 34, -21, -47, -4, 43, 47, 9, -36, -51, -33, -11, -1, -9,
-27, -30, -20, -12, -25, -6, 39, 16, -46, -78, -43, -1, 22, 27, 12, -20, -53,
-62, -17, 47, 63, 12, -51, -69, -59, -40, -22, 6, -8, -41, -35, -9, 15, 30, 70,
72, 17, -41, -50, -11, 33, 58, 66, 63, 42, 8, -25, -38, -35, -16, 14, 37, 17,
-34, -55, -25, 17, 16, 5, 6, 17, 35, 35, 15, 4, 4, 10, 19, 60, 96, 80, 47, 0,
-48, -64, -52, -31, -19, 12, 42, 40, 10, -11, -15, -35, -50, -50, -45, -62, -68,
-38, -16, -13, -12, 11, 30, 23, -6, -44, -61, -44, 15, 55, 55, 49, 38, 5, -45,
-40, 4, 33, 1, -15, 7, 8, -4, -24, -35, 6, 75, 120, 89, 34, -15, -72, -85, -42,
22, 42, 23, 9, 27, 26, -22, -84, -78, -14, 40, 48, 17, -25, -62, -70, -38, 20,
47, 12, -58, -76, -43, 1, 24, 37, 43, 36, 30, 22, 5, -14, -26, -22, -1, 19, 25,
15, 1, -10, -13, 0, 17, 18, -6, -40, -55, -35, 0, 22, 24, 26, 29, 29, 18, 9, -5,
-23, -13, 31, 73, 56, 21, -8, -47, -52, -18, 26, 28, -4, -31, -23, 0, 5, -27,
-10, 21, 1, -33, -37, -11, -17, -15, 4, 9, 28, 37, 16, -12, -31, -39, -45, -12,
41, 59, 8, -56, -66, -48, -7, 44, 84, 75, 32, 1, -27, -31, -5, 9, 13, 12, 5,
-15, -23, -4, 1, -20, -40, -13, 25, 43, 46, 20, -15, -36, -14, -13, -49, -33,
34, 79, 33, -55, -102, -66, 8, 60, 60, 27, 5, -4, -28, -30, -4, 29, 26, 4, -13,
-29, -24, -1, 19, -3, -32, -21, 13, 36, 28, 5, -40, -64, -23, -3, 1, 16, 22, -9,
-53, -48, -30, -15, 9, 33, 40, 26, 7, -4, 1, 17, 19, 5, -11, 9, 27, 5, -33, -36,
-5, 16, 4, -18, -17, -1, 8, 0, -10, -13, -11, -9, -15, -18, -12, 0, -6, -34,
-51, -36, 6, 50, 51, 15, -18, -13, 6, 15, 35, 23, -8, -11, 9, 21, 8, 5, 11, 14,
17, 7, -5, -5, -1, -10, -23, 3, 40, 47, 2, -16, 4, 9, 18, 9, -26, -69, -55, 2,
28, 25, 37, 80, 70, 9, -42, -29, 12, 32, 23, 5, -7, -15, -34, -28, 13, 41, 36,
8, -16, -39, -39, -11, -4, -33, -62, -34, 39, 89, 63, -6, -53, -40, -1, 31, 34,
17, -28, -64, -48, 3, 23, -10, -28, -17, 0, -8, -15, 3, 39, 50, 14, -41, -53,
-16, 24, 9, -5, -2, -2, 8, 16, 9, -18, -10, 23, 7, -22, -37, -33, -23, -15, -6,
15, 37, 34, -8, -33, -17, 20, 45, 39, 5, -40, -40, 14, 81, 85, 47, 26, 9, 6, 7,
-16, -33, -12, 49, 67, 53, 50, 32, 1, -28, -34, -21, -3, 5, -16, -42, -42, 5,
35, 19, 0, 9, 31, 30, 7, -31, -57, -35, 29, 84, 65, 32, 6, -22, -28, -8, 6, -67,
-96, -32, 25, 41, 12, -30, -54, -37, 1, -2, -22, -34, -35, -29, -14, 12, 35, 30,
-9, -61, -80, -55, -11, 9, 11, 16, -4, -25, -20, 14, 29, 15, 3, -13, -11, 16, 7,
-11, -4, 22, 21, 8, 30, 54, 50, 12, -31, -40, -5, 48, 57, 25, -6, -11, -31, -69,
-18, 65, 95, 51, -2, -29, -38, -28, -7, 16, 27, 26, 8, -34, -64, -65, -34, 23,
85, 114, 63, -1, -28, -25, -16, 1, 30, 16, -22, -45, -17, -17, -54, -57, -42,
-3, 47, 61, 15, -53, -57, -46, -52, -56, -35, 5, 37, 47, 25, -9, -23, -9, 15,
22, 45, 43, -10, -46, -36, 2, 20, 19, 14, 7, 31, 32, -17, -34, -2, 44, 55, 51,
40, 14, -9, -11, 8, 26, 26, 12, 2, 6, 7, -7, -23, -13, 22, 37, 18, -14, -28,
-44, -55, -39, 18, 58, 41, 0, -18, 4, 43, 55, 24, -22, -29, -7, 0, -43, -75,
-60, -19, 40, 66, 39, -2, -13, 0, -23, -29, -11, -9, -43, -64, -42, -25, -33,
-47, -24, -11, -14, -4, 2, 5, 4, -7, -12, 4, 44, 49, 9, -38, -51, -27, 11, 46,
49, 27, 7, 2, -16, -63, -71, -18, 58, 99, 78, 15, -45, -58, -24, 27, 57, 63, 53,
21, -8, -31, -55, -55, -14, 51, 72, 52, 12, -47, -73, -40, 32, 77, 77, 48, 10,
-23, -37, -11, 7, 13, 36, 35, 12, -16, -24, -41, -54, 3, 35, 11, -27, -51, -46,
-30, -32, -59, -70, -14, 41, 50, 22, -21, -55, -63, -35, 7, 26, -2, -50, -73,
-49, -4, 26, 29, 20, 22, 28, 13, -8, -14, 0, -23, -18, 40, 72, 58, 22, 9, -13,
-14, 31, 54, 33, -8, -34, -15, 22, 35, 12, -6, 7, 20, 5, -25, -32, -15, 0, -8,
-4, 17, 34, 10, -21, -31, -30, -27, -7, 37, 41, 5, -35, -37, -36, -31, 29, 80,
81, 41, -23, -64, -55, -7, 19, 8, 7, -10, -38, -52, -58, -47, -18, 17, 28, 17,
18, 18, 8, -5, 1, 9, -2, -25, -19, 14, 33, 17, -4, -2, -3, -10, -12, 12, 24, 11,
-7, -7, -7, -18, 12, 55, 66, 31, -13, -23, 6, 32, 19, -18, -7, 23, 23, -26, -32,
20, 67, 28, -45, -75, -59, -22, 10, 33, 30, 19, 20, 21, 12, 0, 19, 28, -5, -63,
-78, -29, 39, 50, 18, -6, 8, 17, 9, 14, 23, 19, -4, -39, -46, -15, 19, 12, -24,
-37, -55, -51, -3, 37, 40, 12, -14, -37, -52, -44, -27, 7, 46, 40, -3, -32, 3,
38, 25, -25, -28, 5, 21, 14, -15, -44, -47, -4, 35, 16, -32, -46, -9, -16, -7,
37, 59, 33, 11, 50, 73, 44, -18, -52, -52, -27, 9, 27, 26, 16, 9, -10, -35, -23,
14, 41, 29, 4, -12, -12, -3, 7, 6, -19, -28, 2, 55, 55, 0, -51, -29, 23, 44, 21,
8, 11, -6, -36, -50, -32, 8, 27, 10, -15, -19, -17, -41, -50, -46, -50, -52,
-47, -23, 19, 41, 12, -53, -43, 17, 47, 18, -8, 1, 14, -3, -22, 2, 33, 36, 10,
12, -9, -54, -58, -6, 47, 42, 28, 15, 10, 43, 49, 18, 4, 6, 1, -18, 6, 49, 61,
28, -21, -48, -34, 12, 42, 23, -24, -52, -45, -36, -9, 29, 47, 13, -36, -44,
-12, 24, 35, 28, 1, -24, -23, -19, -12, 2, 10, 9, -1, -8, -28, -29, 18, 45, 25,
-15, -17, -14, -28, -35, -11, 16, 8, 42, 52, -6, -57, -49, -1, 12, -11, -45,
-66, -28, 12, 7, -7, -4, 14, 23, 21, 22, 27, 30, 1, -38, -7, 24, 23, 19, 19, 15,
-2, 27, 33, -7, -2, -7, -18, 6, 32, 19, -28, -16, 9, 6, 4, 17, 25, 3, -35, -57,
-47, -16, 2, -3, -15, 14, 44, 8, -35, -47, -25, 0, 39, 74, 61, 25, -8, -22, -1,
18, 16, 27, 36, 19, -35, -35, -4, -3, 5, 36, 70, 63, 25, -15, -33, -27, -4, 16,
4, -31, -54, -30, -9, -6, -1, 5, -20, -67, -13, 55, 44, -34, -73, -36, 22, 34,
1, -31, -19, 7, 12, -6, -2, 18, 18, 14, 9, 0, -41, -42, 1, 8, -22, -45, -28, 16,
37, 16, -14, -4, 36, 32, 36, 26, -27, -66, -32, 45, 45, -25, -85, -67, -9, 30,
29, 13, 12, 25, 23, -10, -37, -15, 35, 50, 8, -41, -29, 33, 54, 11, -33, -6, 43,
76, 71, 21, -46, -86, -61, -17, 4, -3, 11, 32, 20, -18, -49, -43, 7, 20, -3,
-13, 18, 13, -53, -45, 17, 53, 14, -19, 7, 72, 98, 78, 38, -3, -38, -50, -16,
-6, -16, -9, 5, -11, -42, -1, 54, 58, 13, -50, -66, -14, 44, 54, 16, -10, -19,
-13, 6, 10, -4, -18, -13, 8, 19, -7, -34, -31, 3, -19, -50, -23, -9, -10, -16,
-14, -34, -33, 45, 71, 39, 10, 11, 16, 1, -25, -38, -31, -11, 8, 22, 24, -11,
-41, -36, -13, 17, 32, 19, -35, -66, -35, -2, 41, 77, 69, 18, -20, -2, 10, 4,
-5, 24, 13, -33, -29, 6, 25, 2, -26, -43, -36, 18, 36, 1, -22, -29, -16, 6, 23,
5, -39, -51, -36, -13, 6, 35, 56, 45, 10, -5, 7, 10, -8, -30, -33, -54, -70,
-53, -11, 12, 8, 14, 16, -8, -53, -42, 5, 28, -1, -24, -4, 34, 52, 39, 16, -13,
-15, 13, 15, 11, 26, 58, 52, 9, -30, -42, -32, -27, -51, -69, -55, -16, 8, 15,
20, 24, 21, 15, 32, 38, 19, -8, 1, 17, 7, -2, 19, 46, 0, -37, -29, -11, -8, -14,
-7, 1, -2, -18, -49, -43, -20, -29, -36, -7, 48, 57, 23, -15, -20, -13, -1, 21,
18, -11, -38, -26, 5, 21, 13, 0, -5, 1, 28, 40, 12, -37, -67, -55, -16, 27, 50,
43, 34, 2, -45, -54, -6, 50, 50, 24, 15, 31, 20, -2, -10, -18, -13, -8, -23,
-52, -52, -2, 34, 33, 1, -47, -48, -7, 22, 13, -13, -22, -25, -3, 29, 22, 21,
35, 41, 23, -7, -20, -5, 32, 52, 8, -30, -41, -50, -49, -30, -1, 11, 15, 14, -3,
-3, 8, 8, 7, -2, -16, -19, 3, 23, -3, -26, -7, 44, 47, 23, 10, -1, -20, -37,
-28, -32, -29, 9, 9, -6, -6, 0, -9, -17, 6, 17, 6, -10, -10, -13, -25, -16, -9,
-11, -16, 3, 15, -4, -5, 12, 27, 24, 22, 16, -9, -32, -25, 6, 4, -5, 2, 13, 18,
10, -4, 0, 24, 46, 29, 5, 7, 35, 49, 41, 32, 18, 0, -16, -7, 13, 25, 30, 15, -4,
-9, -18, -23, -19, -11, -20, -36, -27, -35, -43, -18, 26, 50, 35, 10, -5, -5,
-2, -10, -31, -49, -29, -4, 0, 2, 21, 39, 22, -5, -27, -41, -34, -30, -36, -31,
-22, -13, -10, 4, 9, -10, -14, -15, -11, 21, 48, 42, 8, -14, -18, -13, 17, 30,
14, 5, -1, -6, -4, 23, 49, 50, 41, 24, -2, -41, -46, -25, -7, 6, 15, 19, -4, 2,
33, 34, 19, 2, -7, -6, -6, -9, -14, 7, 31, 15, -23, -50, -45, -19, 2, 3, -6,
-15, -13, 0, 31, 42, 12, -6, -4, 5, 0, -10, -18, -24, 7, 42, 41, 24, 4, -13,
-29, -30, -17, -4, -3, -11, -19, -22, -11, 4, 6, -18, -39, -27, 1, 2, -30, -38,
-17, 13, 28, 24, 4, -16, -13, 0, 4, -6, 5, 23, 1, -20, -23, -13, -12, 0, 24, 14,
-10, -20, -15, 4, 17, 12, 7, 13, 18, -7, -32, -30, -1, 25, 33, 30, 22, 19, 19,
13, -6, -24, -20, -13, -5, 5, 0, 2, 17, 24, 4, -11, 15, 18, 18, 35, 33, 3, -25,
-6, 21, 33, 27, 13, -13, -46, -46, -26, -5, 5, 11, 10, -1, -4, -9, -21, -30,
-21, -9, -22, -46, -51, -25, 1, 16, 17, 3, -12, -7, 24, 47, 34, -7, -39, -35,
-4, 24, 25, 8, -2, -13, -21, -16, 7, 21, 11, -7, -19, -21, -18, -13, -4, 9, 26,
32, 22, 1, -3, 8, 12, -2, -11, -1, 3, 1, 0, 9, 2, -4, 13, 27, 14, -17, -17, -7,
-8, -19, -2, 24, 23, 24, 24, 13, 5, -12, -20, -2, 31, 32, -14, -30, -16, -5,
-13, -22, -11, 11, 15, -6, -31, -31, -11, 6, 11, -2, -13, -5, -1, -4, -6, 6, 8,
-1, 18, 13, -9, -11, 9, 21, 11, 14, 19, 12, -2, -10, -5, 8, 14, 3, -16, -22,
-14, -4, -6, -5, 4, 12, 18, 16, 5, -8, -14, -11, -6, -4, -5, -4, 17, 33, 23, 0,
-6, 5, 6, -5, -16, -16, -6, 4, 13, 26, 36, 36, 20, -2, -18, -21, -16, -3, 6, -1,
-17, -20, 1, 17, 7, -17, -14, 2, 6, -8, -23, -31, -32, -17, 2, 10, 1, 2, 12,
-11, -13, 1, -3, -14, -3, 30, 20, -3, -13, -18, -6, 11, 14, -1, -12, -6, -2, -8,
-17, -16, -15, -4, 18, 16, 0, -6, 13, 15, -4, -8, 8, 16, -3, -9, 4, 21, 19, 17,
15, 5, -11, -12, 7, 8, -4, -8, 7, 24, 23, 6, -14, -17, 0, 7, 10, 8, -12, -25,
-17, 4, 4, -4, -1, -10, -15, -9, 0, 5, 1, -13, -33, -36, -11, 17, 29, 16, -10,
-32, -31, -4, 24, 36, 27, 7, -24, -46, -29, -3, 14, 23, 26, 17, 2, -2, -3, -7,
-3, 2, 3, -3, -20, -32, -27, -8, -1, -1, 10, 18, 11, -5, -14, -9, 4, 10, 5, 0,
8, 19, 16, -6, -27, -22, 5, 25, 24, 9, -5, -18, -22, -10, 6, 17, 19, 15, -1,
-15, -9, 14, 22, 6, 12, 14, 3, 0, 9, 16, 9, 8, 0, -21, -27, -25, -15, 7, 11, -7,
-29, -21, 0, 12, 18, 17, 6, -14, -37, -46, -29, 4, 23, 15, -2, -7, 1, 1, -7,
-16, -20, -19, -16, -14, -14, -7, 3, 3, 3, 0, -7, -15, -7, 8, 9, 3, 6, 26, 16,
-4, -4, 7, 9, 2, 7, 7, 1, -2, 5, 8, 2, 9, 12, -1, -22, -20, 0, 10, 12, 2, -6,
15, 36, 31, 2, -14, -11, -6, -7, -4, 6, 12, 11, -1, -20, -21, -6, 7, 0, -7, 0,
-2, -1, 0, -8, -10, 4, 24, 14, -18, -39, -26, 4, 21, 13, 7, 8, 3, -11, -17, -10,
-11, -15, -16, -12, -5, -2, -5, -9, -8, 0, 8, 3, -10, -19, -14, -11, -18, -14,
-3, 4, -1, 10, 24, 13, -5, -9, 4, 9, 13, 15, 7, -12, -18, 1, 0, -7, 1, 13, 16,
10, 8, 11, 14, 11, -4, -16, -12, -1, 8, 13, 16, 6, -6, -7, 13, 26, 18, 7, -8,
-22, -28, -8, 17, 24, 8, -5, -3, -2, -9, -15, -6, 9, 15, 9, 0, -4, -2, -1, -5,
-9, -5, -6, -9, -9, -5, -1, 1, 7, -2, -13, -8, -5, -8, -13, -15, -13, -9, 2, -3,
-14, -14, -11, -4, 7, 12, 8, 5, 9, 2, -11, -17, -6, -3, -14, -10, 1, 6, -3, 3,
13, 9, 13, 14, 6, -1, -6, -10, -13, -1, 17, 24, 18, 17, 21, 6, -7, -5, 6, 4, 0,
4, 4, -2, -11, -15, -10, 2, 16, 17, 6, -6, -5, 0, 0, -6, -12, -5, 14, 25, 13,
-12, -26, -23, -7, 14, 25, 19, 2, -11, -21, -28, -24, -9, 5, 3, 4, 2, -10, -11,
-7, -3, 1, 14, 19, -2, -21, -23, -11, 0, 4, 1, -6, -4, 8, 18, 13, 9, 15, 6, -3,
0, 6, 5, -3, -12, -22, -20, -3, 7, 12, 13, 7, -6, -10, 5, 22, 22, 7, -6, -20,
-29, -19, 0, 10, 7, 5, 4, 1, -1, 3, 6, -5, -11, -11, -11, -8, -2, 3, -6, -7, 4,
8, 17, 24, 20, 10, 5, 5, -2, -7, -5, 0, -4, -5, 1, -2, -8, -6, 10, 7, -11, -18,
-8, -1, -7, -2, 6, 7, -3, -5, 0, -2, -3, 1, 5, 6, -1, -10, -11, -11, -12, -11,
1, 7, -3, -13, -10, -2, -7, -8, 5, 24, 21, 7, -2, -11, -17, -18, -16, -4, 9, 11,
5, 5, 11, 7, 1, 2, 7, 12, 8, -6, -19, -16, -2, 2, 2, 8, 18, 16, 4, -6, -5, 2,
10, 20, 19, 5, -15, -20, -19, -21, -12, 7, 24, 22, 13, 2, -14, -13, -5, -4, -6,
-9, -12, -19, -20, -10, 5, 13, 17, 18, 12, 4, -2, -3, -9, -14, -12, -3, 3, 3, 0,
-4, -5, -3, 3, 6, 2, 1, 1, 0, -6, -1, 10, 12, 3, -7, -10, -12, -9, 3, 15, 22,
22, 12, -8, -21, -13, 6, 9, -5, -11, -6, 1, 1, -1, 2, 10, 16, 10, 0, -3, 0, -3,
-17, -20, -11, -1, 0, -3, -4, -5, 0, 7, 8, 7, 6, 4, -3, -9, -10, -8, -9, -9, -1,
9, 8, -1, 0, 7, 11, 6, 7, 10, 4, -7, -11, -5, 0, 1, 0, 3, 3, 3, 4, 11, 9, -4,
-6, -1, 3, 0, -2, -1, -2, -6, -16, -23, -13, 7, 19, 12, -1, -5, 0, -2, -10, -16,
-13, -4, 3, 0, -5, -9, -8, -7, -4, 1, 8, 12, 9, 0, -4, -1, 3, 2, 3, 7, 9, 5, -3,
-6, 1, 13, 20, 12, -6, -21, -21, -9, 1, -1, -9, -8, 4, 12, 8, 3, 8, 15, 11, -2,
-3, 0, -4, -10, -13, -10, -7, -1, 2, -2, 3, 9, 8, -1, -2, 7, 10, -2, -17, -18,
-9, -3, -6, -5, -6, -5, 2, 4, -2, -10, 2, 7, -2, -4, -11, -17, -10, 4, 14, 14,
20, 14, 0, 1, 11, 18, 12, 7, 4, -2, -10, -9, -1, 0, -5, -10, -6, 5, 16, 20, 9,
-2, -4, 1, -6, -17, -15, -6, -1, -4, -7, -1, 8, 13, 3, -8, -6, -4, -3, -6, -13,
-16, -8, 7, 8, 4, 8, 12, 5, -8, -9, -2, 3, -2, -5, -3, -1, 0, -8, -17, -9, 7,
19, 19, 13, 4, -3, -2, -3, -7, -9, -4, 1, 1, -2, -5, -8, -8, 3, 15, 13, 7, 4, 1,
-6, -9, -3, 1, 4, 3, 1, -7, -11, -2, 4, 1, -3, 4, 7, 2, 0, -6, -13, -16, -11,
-5, -1, 3, 6, 6, 4, 3, 5, 9, 13, 12, 5, -3, -12, -21, -23, -7, 13, 17, 6, -7,
-12, -11, -6, 2, 9, 11, 6, -3, -12, -18, -14, -1, 9, 8, 0, -4, -1, 3, 4, -5,
-17, -15, -7, 0, 1, 1, -2, -6, -1, 6, 9, 12, 12, 5, -5, -10, -4, 8, 13, 2, -14,
-19, -9, 4, 10, 15, 15, 9, -6, -11, -7, -3, 3, 9, 9, 4, -6, -13, -14, -6, 2, 3,
2, 5, 10, 4, -5, -10, -5, -4, -4, 2, 9, 6, -4, -6, -2, 0, -5, -5, 1, 5, 1, -6,
-11, -14, -17, -18, -12, -3, 2, 0, 0, 1, 2, 5, 7, 7, 2, -5, -10, -12, -7, -4,
-5, -8, 0, 13, 15, 6, -3, -4, -2, 2, 7, 12, 9, 5, 7, 2, -5, -3, 12, 23, 20, 13,
1, -11, -17, -11, 1, 10, 10, 5, -2, -7, -9, -5, -1, 1, 2, 6, 10, 8, -3, -15,
-19, -12, 0, 3, 3, 4, -2, -11, -14, -6, 4, 9, 7, -7, -18, -16, -7, 4, 8, 2, -9,
-15, -11, -6, -1, 6, 9, 8, 5, 0, -3, -4, -5, -10, -8, 3, 9, 8, 3, 1, 1, 1, 1, 4,
8, 8, 1, -8, -14, -16, -8, 3, 9, 8, 7, 5, -3, -6, -2, 4, 10, 14, 13, 2, -6, -6,
-4, -6, -5, 6, 8, 4, 1, 4, 4, 1, 2, 0, -4, -5, -7, -8, -6, 1, 6, 8, 10, 14, 12,
1, -10, -14, -9, -5, -1, 2, 3, 0, 0, 2, -3, -10, -9, -3, 0, -2, -4, -5, -6, -7,
-2, -1, -6, -6, -7, -10, -9, -5, -1, 0, 8, 11, 6, 4, 4, 1, -5, -6, -5, -3, -3,
-3, 0, 2, 1, 3, 8, 5, -6, -14, -10, -2, 3, 7, 6, 3, 0, 0, 1, 3, 9, 14, 14, 7, 6,
8, 5, 2, -1, -3, -5, -4, -2, -2, 1, 0, -7, -7, 0, 8, 10, 5, -3, -9, -4, 3, 2,
-1, -4, -3, 2, 3, -3, -9, -8, -7, -9, -7, -4, -3, -4, -2, 0, 0, 0, 0, 1, 4, 8,
9, -2, -13, -16, -11, -6, 1, 7, 8, 5, 1, 1, 1, 2, 5, 5, -1, -9, -9, -2, 5, 4, 3,
1, -2, -3, -3, -3, -3, -1, 4, 9, 14, 14, 7, -1, -7, -9, -8, -1, 4, 3, -2, -2, 4,
5, 3, 0, -4, -7, -8, -6, -8, -13, -15, -7, 2, 6, 3, 2, 3, 4, 2, 3, 5, 5, 2, 2,
1, 0, -2, -6, -8, -7, -2, 2, 5, 6, 4, -2, -4, 0, 3, 0, -5, -3, -2, -4, -2, 3, 8,
10, 7, 0, -7, -6, -4, -4, -4, -7, -7, -2, 4, 3, -3, -6, -3, 1, 0, -4, -4, 2, 6,
4, -1, -4, -5, -4, 3, 5, 5, 7, 9, 4, -2, 0, 6, 7, 1, -2, -2, -3, -4, -5, -5, -8,
-6, 0, 5, 7, 5, 2, -1, -5, -7, -2, -1, -4, -8, -5, -1, -2, 0, -1, -2, 1, 6, 7,
2, -3, -9, -14, -8, -6, -6, -2, 4, 6, 2, 3, 5, 5, 1, -4, -7, -5, -2, 1, 0, -5,
-8, -5, 3, 7, 5, 1, 3, 2, -3, -4, 1, 7, 2, 0, 1, 3, 7, 5, -2, -6, 0, 9, 11, 7,
3, 0, 0, 0, 0, -1, -2, -2, 2, 6, 4, -2, -3, -5, -9, -2, 4, 4, -3, -7, -10, -13,
-4, 3, 3, 1, -3, -7, -6, 0, 2, -4, -5, -2, 1, -2, -4, -5, -6, -4, 1, 7, 9, 7, 2,
-7, -6, 1, 1, -4, -5, -1, -1, -1, 0, 0, 1, 4, 9, 10, 9, 4, -1, -5, -3, 2, 4, 1,
-5, -5, -2, 1, 5, 11, 13, 6, 0, -2, -4, -4, -4, -6, -5, 0, 4, 2, -1, 0, 5, 5, 0,
-4, -4, -2, -2, -7, -12, -10, -3, -2, -4, -6, -6, -2, 4, 4, -1, -4, 1, 4, 5, 4,
-2, -5, -5, -3, -1, 3, 9, 6, -1, -4, 2, 11, 13, 6, -3, -6, -5, -3, -4, -5, -3,
-2, -1, -1, 1, 1, -3, -7, -5, 1, 3, -1, -6, -5, -5, -5, -2, 2, 2, 2, 8, 6, 2, 2,
-6, -11, -6, 4, 6, 3, 2, -2, -6, -5, -2, 3, 9, 11, 6, -1, -5, -5, -3, -1, 0, 0,
-2, -1, 3, 5, 2, -3, -2, 3, 2, -2, -4, -4, -6, -8, -7, 0, 7, 8, 4, 0, 1, 3, -1,
-5, -4, 1, 1, -3, -4, -5, -5, -2, 0, 1, 1, -1, -2, -2, 0, -1, -2, 2, 2, -3, -7,
-7, -5, -4, -2, -1, 2, 8, 9, 4, -3, -1, 2, 2, 0, 0, 1, -1, 1, 4, 5, 7, 6, 1, -5,
-5, 0, 4, 1, -5, -8, -8, -5, -2, 0, -2, -3, -1, 2, 5, 6, 2, -5, -8, -7, -3, 1,
0, -5, -9, -8, -2, 4, 9, 9, 4, -1, -2, 0, 1, -2, -2, 0, 2, 1, 2, 2, 0, -3, -3,
1, 3, 3, 2, 0, -3, -6, -5, -1, 1, -2, -6, -4, 0, -1, -2, -1, 2, 5, 5, 1, -5, -7,
-4, -2, -3, -3, 0, 5, 6, 5, 1, 0, 0, 0, -2, -1, 1, -2, -6, -7, -4, -4, -3, 0, 0,
-2, -3, -1, 2, 2, -1, -2, 1, 3, -3, -7, -3, 0, -1, -4, -4, 3, 11, 11, 3, -3, -4,
-4, -2, 2, 3, 0, -2, 1, 6, 10, 9, 6, 1, -2, -2, 2, 4, 1, -5, -9, -8, -3, 0, -3,
-5, -5, -1, 3, 4, 1, -2, -4, -5, -5, -1, 1, 0, -2, -5, -7, -5, 2, 6, 7, 5, 0,
-3, -3, -5, -5, -4, -3, -4, -4, 1, 4, 4, 1, -1, -1, 0, 2, 2, 0, -3, -6, -4, 0,
2, 1, -1, 0, 2, 1, 0, 1, 4, 5, 1, -4, -5, -1, 1, 1, 0, 2, 2, 1, -1, -1, 1, 4, 3,
-2, -6, -4, -1, 0, 1, 0, 0, 1, 2, 0, -3, -1, 1, -2, -6, -3, 0, -3, -2, 0, -1,
-2, 1, 6, 4, 0, -2, 1, 3, 2, -2, -2, -2, -4, -6, -4, -2, -2, 1, 7, 10, 8, 3, -2,
-7, -8, -5, -1, 1, -2, -5, -6, -6, -5, -3, 0, 1, 2, 3, 4, 3, 1, -3, -5, -4, -3,
-4, -5, -1, 1, 0, -5, -4, 1, 5, 6, 4, 1, -2, -3, -2, -4, -1, 3, 3, 2, 3, 4, 4,
4, 4, 1, -1, 0, 0, -2, -3, 0, 3, 4, 1, -3, -6, -4, 1, 4, 1, -3, -1, 2, 2, -1, 0,
0, -5, -6, -4, 0, 1, 1, 1, 1, 0, -1, 0, 1, 0, -4, -5, -4, -3, -4, -3, 1, 5, 2,
-2, -4, -2, -1, 0, 1, -1, -4, -7, -4, 2, 5, 6, 3, 1, 1, -1, -2, -1, 3, 3, -1,
-3, -2, -1, -1, -2, -4, -3, 0, 3, 5, 6, 7, 4, -2, -5, -5, -3, -3, -3, -4, -4,
-3, 0, 3, 4, 4, 4, 0, -3, -5, -4, -5, -5, -2, -2, -1, 1, 2, 0, -4, -2, 1, 4, 3,
1, 0, 2, 4, 1, -2, -2, 1, 1, -2, -1, 0, 1, 4, 5, 3, -1, -2, -3, -4, 0, 0, -2,
-1, 1, 3, 2, 1, -1, -3, -4, -1, 3, 4, 2, -1, -2, -4, -5, -3, 0, 2, 1, 0, -3, -3,
1, 0, -1, -1, 1, -5, -10, -5, -2, -1, 0, 2, 5, 5, 2, -3, -6, -4, -4, -5, -5, -4,
-3, -2, 1, 3, 2, 0, 1, 2, -1, -3, -2, 0, 1, 0, -1, 0, 1, 0, -1, 1, 3, 3, 4, 5,
5, 2, 1, -2, -5, -4, 0, 1, 0, -3, -4, -1, 2, 3, 2, 3, 1, -2, -2, -2, -3, -2, 0,
-1, -2, 1, 2, 2, 2, 1, -2, -2, 0, -1, -2, -2, 0, 0, -2, -5, -5, -1, 3, 3, -1,
-2, 0, 1, 1, 0, -2, -3, -5, -5, -2, 0, 0, -2, -1, 0, 1, 2, 2, -1, -4, -6, -5,
-3, -2, -1, -1, 0, 2, 3, 1, 1, 4, 5, 1, -1, -1, 0, -2, -4, -2, 0, 1, -1, -2, -2,
-1, 1, 2, 2, 2, -1, -3, -4, -5, -5, -2, 4, 6, 3, -1, -2, 1, 4, 4, 3, 0, -3, -2,
0, 1, 1, 2, 4, 3, 0, -3, -3, 1, 2, 1, 1, 0, 0, 0, -1, -3, -4, -4, -2, -1, -1,
-1, 0, -1, -3, -3, -2, -2, -4, -6, -5, -2, 0, 0, -1, 0, 1, 1, -2, -2, 0, 0, 0,
0, -2, -3, -1, 0, -2, -2, 2, 4, 3, 1, 0, -1, -2, -2, 1, 3, 2, -3, -6, -6, -3, 1,
4, 5, 3, 1, 0, 0, 1, 1, 1, 0, -1, 0, 0, 0, -1, 0, 2, 3, 2, -1, -2, 1, 5, 4, -1,
-5, -4, -1, 0, -1, -1, 1, 1, 1, 1, 1, -1, -3, -3, -3, -4, -3, 0, 0, -2, -3, -2,
-1, -2, -1, 0, 0, -2, -2, -1, 0, 0, 0, 0, -1, -1, 0, -2, -2, -1, 0, 1, 2, 2, -3,
-5, -3, 1, 1, 1, 0, -2, -3, -2, 0, 1, 1, 1, 0, -1, -2, -1, 2, 3, 1, -2, -2, 1,
1, -1, -2, -1, 1, 1, 1, 2, 2, -1, -3, -3, -2, 0, 0, -1, -2, 0, 2, 4, 3, 0, -4,
-4, -1, 2, 2, 1, 0, 0, -1, -2, -3, -2, 0, 0, -1, -2, -2, 0, 1, 1, 1, 2, 1, -1,
-2, -1, 1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -1, -1, -2, -3, -3, -2, -1,
-1, -1, 0, -2, -4, -4, -2, 1, 1, 0, -1, -1, -2, -2, -2, 0, 1, 1, 1, 0, 1, 2, 2,
0, -2, -3, -1, -1, -2, -2, 0, 3, 3, 3, 1, -2, -2, 0, 1, 1, 1, 1, -2, -3, -2, 0,
1, 1, -1, -2, -2, 0, 1, 0, -2, -2, -2, -1, 2, 4, 2, -2, -4, -2, 0, 0, 0, 1, 2,
3, 0, -3, -4, -2, 1, 2, 0, -3, -4, -2, 1, 0, -2, -3, -2, -1, -1, -2, -1, -1, 0,
-1, -2, -2, 0, 2, 0, -1, -1, 1, 1, 0, 0, 1, 0, -2, -2, -1, 0, 0, 1, 2, 1, 0, -1,
-2, -3, -2, 1, 1, 0, -1, -1, -1, 0, 1, 2, 1, -1, -2, -3, -3, -2, 0, 1, -1, -3,
-2, -1, 1, 0, -1, -1, -1, 0, 1, 1, 2, 3, 1, -2, -3, -1, 2, 2, -1, -2, -1, 1, 2,
3, 1, -2, -3, -3, -2, -2, -2, -1, 0, 1, -1, -3, -2, -1, 1, 2, 1, -1, -3, -3, 0,
1, 0, -1, -1, -1, -2, -1, -1, 0, 0, -1, -2, -2, -2, -2, 0, 1, 0, -2, -4, -2, 1,
3, 2, -1, -2, -2, -2, -1, 1, 1, 1, -1, -2, -3, -1, 1, 1, 1, 0, -1, -1, 0, -1,
-2, 0, 1, 2, 2, 0, 0, 1, 2, 2, 0, -1, 0, 0, 0, 0, 0, -1, -2, -2, 0, 0, -1, -2,
-2, -2, -2, -1, 0, 0, -1, -3, -4, -3, -1, 1, 1, 0, 0, 0, 0, -1, -1, 0, 1, 1, 0,
-2, -3, -2, 0, 1, 0, -2, -2, -1, 0, -1, -1, 0, 0, 0, -1, -2, -1, 1, 1, -1, -1,
0, 1, 0, 0, 1, 0, -1, -2, -2, -2, -1, 1, 1, 1, 1, 1, 1, 1, 1, 0, -1, -1, -1, -1,
-1, 0, 2, 2, 0, -1, -2, -3, -3, -2, -1, 0, -1, -1, -1, 0, 0, -2, -4, -3, -2, -1,
1, 2, 3, 1, -1, -2, -2, -1, 0, 1, 0, -1, -2, -1, 1, 2, 1, 0, -2, -2, -2, -2, -1,
-1, -1, 0, 0, -2, -2, -1, 0, -1, -1, -2, -1, 0, 1, 1, 0, -1, -2, -1, 0, 0, -1,
-2, -2, 0, 2, 3, 1, -1, -1, -2, -2, -2, -1, -1, 1, 3, 3, 2, 0, -1, -1, 0, 1, 1,
0, -1, -1, -2, -1, 1, 1, -1, -2, -1, 0, 0, 0, -1, -2, -1, 0, 0, -1, -1, 0, 1, 1,
-1, -2, -2, 0, 0, 0, -1, -1, -1, -1, -1, -2, -3, -2, 0, 0, -1, -1, 0, 0, -1, -2,
-3, -1, 0, 0, 0, 0, 0, 0, -1, -2, -2, -1, 1, 2, 1, -1, -1, 0, 1, 1, 1, 0, -1,
-1, -1, 0, 1, 1, 1, 1, 0, -1, -1, -1, 0, -1, -1, -1, 0, 1, 1, 0, 0, -1, -3, -3,
-2, -1, 0, 0, -1, -1, -1, 0, 1, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -2,
-1, -1, 0, 0, 0, 1, 0, -1, -1, -1, -1, -2, -2, -2, -1, 0, 0, 1, 1, 2, 0, -3, -3,
-2, 0, 1, 1, 0, -1, -1, 0, 1, 0, 0, -1, -1, -1, 0, 0, 1, 1, 0, -2, -1, 0, 0, 0,
0, -1, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, -1, -1, -1, 0,
1, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -2, -2, -2, -1, 0, 0, 0, -1, -2, -3,
-2, -1, -1, 0, 1, 1, 0, -2, -3, -2, 0, 0, 0, -1, -2, -1, 0, 1, 0, 0, 0, 0, -1,
-1, -2, -2, -1, 1, 1, 1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0,
-1, -1, -1, 0, 1, 0, 0, 0, 1, 1, 0, -1, -1, -1, -1, 0, 0, 0, -1, -2, -2, -1, -1,
-1, -1, -2, -2, -1, 1, 1, 0, -2, -3, -3, -2, 0, 1, 0, 0, -1, -1, -2, -2, -2, -1,
0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0,
0, 0, 0, -1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -2, -2, -1, 0, 0, 1,
1, 0, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -2, -1, 0, 0, -1, -2,
-2, -1, 0, 0, 0, 1, 1, 0, -1, -2, -1, -2, -2, -1, 0, 1, 0, 0, 0, -1, -1, -1, -1,
-1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, 0, -1, -1, 0, 0, 0, -1, -1, -1,
0, 0, 0, 0, -1, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1,
0, 0, -1, 0, -1, -1, 0, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0,
0, 0, 0, -1, -1, -1, 0, 0, -1, -1, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1,
0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, 0, -1, 0, -1, -1,
0, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, -1, -1, 0, 0, 0, -1, 0, -1, -1, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, -1, -1,
-1, -1, -1, 0, 0, 0, -1, -1, -1, 0, 0, -1, 0, 0, 0, -1, -1, 0, -1, -1, -1, -1,
-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0,
0, -1, 0, -1, -1, -1, 0, 0, 0, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
0, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1,
-1, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, 0,
-1, -1, 0, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, -1,
-1, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, 0, 0, -1, -1, 0, -1, -1, 0, -1, 0, 0, 0,
-1, -1, -1, -1, -1, -1, 0, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1,
-1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, 0, -1,
-1, -1, -1, 0, -1, 0, 0, 0, };

#endif /* RFIFTYEELEVEN_H_ */