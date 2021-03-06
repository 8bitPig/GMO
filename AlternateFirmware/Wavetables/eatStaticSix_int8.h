#ifndef EATSTATICSIX_H_
#define EATSTATICSIX_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define EATSTATICSIX_NUM_CELLS 8350
#define EATSTATICSIX_SAMPLERATE 16384
 
const int8_t __attribute__((section(".progmem.data"))) EATSTATICSIX_DATA [] =
{4, 42, 81, 108, 113, 95, 51, -8, -80, -121, -121, -121, -122, -118, -60, 37,
113, 122, 119, 122, 118, 124, 94, -12, -109, -123, -121, -121, -122, -120, -124,
-70, 58, 121, 120, 120, 120, 120, 120, 119, 50, -73, -123, -121, -121, -122,
-120, -123, -111, -31, 66, 120, 120, 120, 121, 120, 119, 69, 4, -48, -84, -100,
-97, -80, -55, -31, -13, -7, -12, -27, -45, -59, -62, -51, -24, 16, 62, 107,
122, 119, 122, 112, 60, -9, -83, -124, -119, -123, -119, -125, -89, -4, 84, 124,
118, 122, 119, 122, 116, 53, -50, -116, -123, -120, -123, -120, -123, -115, -47,
60, 119, 121, 120, 121, 120, 120, 121, 64, -38, -112, -123, -120, -122, -121,
-121, -123, -86, -9, 55, 111, 121, 120, 121, 120, 122, 104, 65, 29, -6, -37,
-63, -85, -102, -115, -121, -121, -111, -93, -63, -26, 17, 59, 100, 121, 120,
120, 120, 98, 55, 10, -38, -78, -110, -121, -121, -118, -96, -64, -26, 12, 47,
76, 95, 103, 100, 87, 65, 38, 9, -19, -42, -59, -68, -71, -66, -57, -45, -32,
-20, -9, 1, 10, 19, 28, 38, 49, 59, 67, 71, 68, 59, 41, 17, -13, -44, -74, -98,
-113, -118, -111, -93, -66, -32, 5, 42, 75, 104, 120, 120, 120, 121, 104, 69,
25, -25, -79, -120, -121, -121, -122, -121, -121, -73, 0, 78, 122, 119, 121,
121, 119, 123, 82, -9, -96, -125, -119, -123, -120, -121, -122, -75, 30, 109,
123, 119, 122, 119, 121, 120, 69, -40, -115, -123, -120, -122, -121, -121, -123,
-74, 30, 110, 122, 119, 121, 121, 119, 123, 81, -10, -94, -125, -119, -122,
-121, -121, -122, -87, -12, 53, 110, 121, 120, 120, 121, 115, 73, 29, -14, -47,
-71, -82, -84, -78, -66, -52, -39, -28, -21, -16, -12, -7, 0, 12, 29, 49, 70,
88, 98, 97, 81, 51, 9, -38, -87, -119, -122, -121, -123, -108, -55, 4, 66, 115,
121, 120, 120, 122, 102, 40, -20, -84, -120, -121, -121, -121, -119, -79, -23,
31, 79, 113, 121, 120, 110, 76, 37, -4, -39, -65, -76, -73, -58, -35, -8, 16,
34, 41, 38, 25, 4, -18, -40, -55, -62, -58, -45, -24, 2, 29, 53, 73, 85, 88, 83,
68, 47, 20, -11, -41, -70, -93, -109, -116, -111, -96, -70, -36, 4, 45, 82, 112,
121, 120, 121, 104, 70, 30, -13, -52, -84, -106, -117, -115, -104, -83, -56,
-26, 5, 33, 56, 71, 77, 76, 66, 51, 33, 15, -2, -15, -24, -30, -31, -30, -28,
-24, -20, -16, -11, -6, -1, 5, 10, 14, 17, 18, 18, 17, 15, 12, 9, 5, -1, -8,
-17, -27, -37, -45, -49, -48, -39, -24, -2, 23, 50, 73, 89, 95, 89, 72, 45, 10,
-27, -62, -91, -109, -114, -106, -85, -55, -19, 18, 52, 78, 94, 99, 91, 73, 47,
15, -18, -49, -72, -86, -87, -76, -52, -20, 17, 53, 82, 100, 102, 88, 59, 19,
-28, -72, -110, -122, -121, -121, -94, -45, 10, 68, 114, 121, 120, 121, 120, 87,
26, -31, -90, -120, -122, -120, -123, -107, -65, -21, 21, 54, 76, 87, 88, 81,
69, 56, 44, 34, 26, 19, 10, -2, -18, -38, -61, -84, -105, -118, -121, -110, -84,
-45, 4, 59, 109, 122, 119, 121, 119, 121, 86, 22, -40, -101, -123, -120, -122,
-120, -123, -109, -59, -4, 48, 95, 121, 120, 121, 120, 120, 93, 50, 4, -43, -85,
-117, -122, -121, -122, -118, -86, -40, 10, 59, 104, 121, 120, 120, 121, 99, 51,
1, -50, -93, -120, -121, -122, -118, -90, -49, -5, 38, 74, 99, 110, 108, 92, 65,
31, -4, -36, -61, -76, -80, -73, -57, -33, -8, 17, 38, 52, 57, 54, 44, 29, 11,
-8, -24, -36, -44, -46, -43, -35, -25, -13, 1, 14, 25, 35, 42, 45, 44, 39, 30,
18, 4, -12, -27, -41, -53, -60, -62, -58, -47, -31, -10, 13, 36, 56, 69, 75, 72,
61, 43, 21, -1, -22, -37, -47, -49, -47, -40, -32, -24, -18, -15, -15, -15, -16,
-15, -11, -3, 10, 25, 43, 60, 74, 81, 81, 72, 55, 29, -2, -35, -67, -95, -115,
-122, -121, -108, -83, -51, -12, 28, 66, 99, 119, 120, 120, 120, 101, 65, 25,
-19, -61, -98, -120, -121, -122, -118, -91, -53, -9, 34, 73, 103, 119, 120, 107,
79, 41, -4, -49, -87, -115, -122, -119, -96, -58, -9, 42, 92, 120, 120, 120,
122, 105, 55, -1, -60, -111, -123, -121, -122, -121, -121, -85, -26, 29, 84,
118, 120, 120, 120, 121, 113, 73, 29, -16, -58, -94, -118, -122, -121, -121,
-103, -73, -39, -3, 30, 59, 79, 91, 93, 88, 74, 56, 36, 15, -4, -21, -33, -42,
-47, -49, -48, -45, -41, -35, -28, -21, -12, -1, 10, 23, 35, 47, 55, 60, 60, 53,
40, 21, -1, -24, -46, -64, -76, -79, -74, -61, -42, -18, 7, 31, 51, 67, 77, 80,
76, 67, 52, 31, 8, -19, -45, -70, -91, -106, -112, -109, -94, -68, -33, 9, 54,
99, 122, 119, 121, 119, 122, 96, 37, -24, -94, -123, -121, -121, -122, -120,
-124, -90, -12, 72, 121, 120, 120, 121, 119, 123, 106, 31, -64, -120, -122,
-120, -123, -119, -125, -89, -7, 75, 121, 119, 121, 119, 122, 95, 23, -44, -106,
-122, -121, -121, -122, -91, -26, 36, 100, 122, 120, 120, 121, 108, 49, -15,
-81, -121, -121, -122, -120, -123, -96, -37, 21, 77, 115, 121, 120, 121, 117,
86, 41, -3, -45, -78, -101, -111, -109, -94, -70, -40, -9, 21, 46, 62, 70, 68,
57, 40, 20, -1, -19, -33, -42, -45, -43, -35, -24, -11, 3, 17, 29, 39, 47, 50,
49, 43, 31, 15, -5, -27, -50, -71, -86, -94, -91, -78, -54, -21, 18, 57, 92,
117, 120, 121, 113, 82, 43, -2, -45, -83, -111, -122, -121, -111, -86, -55, -20,
12, 39, 58, 68, 69, 62, 51, 36, 23, 11, 4, 1, 2, 5, 8, 10, 10, 5, -5, -17, -33,
-48, -62, -71, -74, -69, -56, -35, -8, 22, 53, 81, 101, 112, 110, 97, 72, 38,
-1, -39, -73, -98, -110, -110, -96, -71, -39, -5, 27, 52, 67, 71, 65, 50, 29, 6,
-15, -31, -40, -40, -33, -18, 0, 19, 37, 49, 54, 50, 39, 20, -3, -27, -50, -67,
-77, -78, -69, -53, -30, -5, 21, 44, 61, 71, 74, 69, 58, 42, 23, 4, -14, -29,
-40, -46, -49, -48, -44, -38, -31, -22, -13, -3, 6, 15, 24, 31, 37, 42, 44, 43,
39, 32, 21, 7, -9, -26, -42, -55, -63, -66, -61, -50, -33, -12, 11, 34, 52, 65,
71, 69, 59, 42, 21, -2, -24, -43, -57, -64, -64, -57, -44, -26, -6, 14, 32, 46,
55, 58, 55, 47, 35, 18, 0, -20, -38, -54, -66, -72, -72, -65, -52, -32, -8, 20,
48, 75, 97, 111, 115, 108, 87, 55, 12, -34, -83, -119, -121, -121, -121, -122,
-100, -43, 15, 79, 119, 120, 120, 120, 121, 115, 66, 3, -58, -112, -122, -121,
-121, -121, -119, -81, -23, 32, 86, 119, 121, 120, 121, 118, 85, 37, -12, -59,
-98, -121, -121, -122, -119, -94, -55, -13, 32, 71, 105, 121, 120, 121, 107, 73,
32, -13, -56, -92, -118, -121, -122, -111, -81, -45, -5, 33, 66, 88, 99, 99, 89,
71, 48, 23, 0, -21, -36, -47, -52, -53, -50, -45, -39, -31, -22, -13, -4, 6, 15,
25, 33, 39, 43, 43, 40, 33, 22, 8, -7, -22, -35, -45, -49, -49, -43, -32, -18,
-3, 12, 25, 35, 41, 43, 41, 36, 28, 18, 6, -6, -19, -31, -41, -49, -53, -52,
-44, -31, -14, 7, 27, 45, 58, 64, 62, 52, 37, 18, -2, -20, -34, -43, -45, -43,
-37, -29, -21, -13, -7, -3, -1, 1, 4, 7, 13, 20, 27, 35, 40, 43, 42, 36, 26, 12,
-5, -24, -43, -58, -69, -74, -71, -61, -44, -21, 5, 32, 56, 75, 86, 87, 78, 60,
34, 5, -24, -50, -70, -80, -81, -72, -55, -33, -10, 13, 32, 46, 54, 57, 54, 48,
39, 28, 15, 2, -12, -27, -40, -51, -59, -62, -60, -50, -35, -15, 8, 30, 49, 63,
68, 65, 55, 39, 19, 0, -16, -27, -32, -30, -25, -17, -10, -6, -7, -13, -22, -33,
-42, -47, -45, -34, -16, 9, 37, 64, 86, 99, 101, 90, 67, 35, -2, -41, -75, -101,
-115, -115, -101, -75, -41, -4, 33, 63, 83, 91, 86, 70, 45, 17, -11, -34, -50,
-55, -50, -36, -16, 6, 25, 38, 43, 38, 24, 5, -17, -37, -52, -58, -55, -43, -24,
-1, 23, 43, 56, 62, 58, 47, 29, 8, -12, -30, -42, -47, -46, -39, -27, -12, 2,
15, 24, 29, 29, 25, 17, 8, -3, -13, -21, -26, -27, -25, -20, -12, -2, 8, 18, 26,
31, 33, 32, 26, 18, 7, -5, -17, -27, -35, -41, -42, -40, -35, -26, -16, -3, 11,
25, 38, 48, 55, 57, 54, 45, 31, 12, -10, -33, -54, -70, -79, -80, -71, -53, -29,
-1, 28, 54, 73, 84, 85, 76, 58, 35, 8, -19, -42, -60, -71, -74, -69, -58, -41,
-21, 0, 20, 38, 50, 57, 58, 53, 43, 28, 11, -7, -23, -37, -46, -50, -48, -41,
-30, -15, 2, 18, 32, 42, 47, 45, 37, 24, 8, -9, -25, -36, -42, -42, -37, -26,
-14, -1, 10, 18, 21, 20, 15, 10, 5, 2, 2, 6, 12, 19, 25, 28, 27, 20, 8, -8, -27,
-46, -62, -73, -75, -69, -54, -31, -3, 26, 55, 78, 93, 98, 93, 78, 55, 27, -2,
-30, -53, -69, -78, -79, -73, -62, -48, -32, -17, -4, 7, 15, 22, 29, 36, 44, 52,
59, 64, 66, 61, 50, 30, 4, -26, -58, -88, -110, -121, -119, -104, -74, -35, 11,
55, 94, 119, 120, 121, 115, 87, 50, 8, -32, -68, -96, -114, -121, -117, -102,
-79, -50, -16, 18, 53, 82, 106, 119, 121, 116, 97, 68, 31, -9, -50, -85, -113,
-122, -121, -119, -99, -69, -34, 3, 37, 67, 89, 103, 108, 105, 93, 75, 52, 25,
-4, -31, -57, -77, -92, -99, -98, -89, -74, -53, -28, -2, 24, 48, 69, 84, 93,
95, 90, 77, 58, 33, 5, -25, -53, -78, -95, -104, -103, -92, -71, -43, -10, 25,
56, 82, 98, 103, 95, 75, 46, 11, -24, -56, -79, -90, -88, -73, -47, -14, 20, 51,
74, 85, 82, 65, 38, 5, -30, -61, -84, -95, -92, -76, -50, -17, 18, 51, 77, 93,
96, 88, 69, 42, 11, -20, -47, -68, -80, -82, -75, -60, -39, -16, 8, 29, 46, 56,
59, 56, 47, 33, 16, -1, -17, -29, -38, -41, -40, -35, -27, -17, -7, 3, 13, 21,
26, 30, 31, 30, 25, 18, 9, -2, -14, -24, -32, -36, -37, -34, -27, -17, -6, 5,
16, 24, 30, 32, 33, 31, 27, 21, 13, 4, -6, -16, -27, -37, -44, -48, -46, -40,
-27, -9, 11, 33, 51, 65, 70, 66, 52, 30, 2, -28, -54, -74, -84, -82, -69, -45,
-16, 16, 45, 67, 80, 83, 74, 57, 33, 7, -19, -42, -59, -69, -71, -67, -56, -40,
-21, -1, 19, 38, 52, 62, 65, 62, 52, 37, 18, -4, -25, -43, -56, -63, -61, -53,
-38, -20, 1, 20, 37, 47, 51, 48, 39, 24, 6, -12, -29, -41, -47, -46, -39, -25,
-7, 13, 32, 48, 57, 59, 52, 38, 16, -9, -35, -58, -75, -83, -81, -68, -46, -18,
14, 43, 68, 85, 91, 87, 73, 52, 26, -1, -26, -47, -61, -69, -69, -64, -54, -40,
-26, -11, 3, 15, 24, 31, 36, 38, 38, 36, 32, 27, 21, 14, 6, -3, -11, -18, -25,
-29, -32, -32, -30, -26, -20, -12, -4, 4, 10, 16, 19, 20, 19, 17, 13, 8, 3, -2,
-5, -7, -8, -6, -2, 2, 7, 12, 15, 16, 13, 8, 0, -10, -21, -30, -37, -41, -41,
-36, -28, -16, -1, 14, 30, 45, 56, 64, 65, 61, 49, 32, 10, -15, -39, -60, -75,
-82, -81, -72, -55, -34, -9, 15, 37, 54, 65, 70, 68, 61, 48, 33, 15, -3, -21,
-36, -48, -55, -58, -56, -49, -37, -22, -5, 13, 30, 45, 55, 60, 59, 51, 36, 17,
-6, -29, -49, -65, -73, -72, -63, -46, -23, 2, 27, 49, 66, 74, 75, 68, 54, 34,
12, -12, -33, -51, -63, -68, -67, -59, -46, -30, -11, 7, 23, 36, 45, 49, 48, 43,
34, 23, 11, -1, -12, -20, -25, -27, -25, -21, -15, -9, -3, 2, 4, 4, 2, -1, -5,
-8, -9, -8, -5, 0, 7, 13, 19, 22, 22, 19, 13, 4, -5, -15, -23, -27, -27, -24,
-16, -7, 4, 13, 21, 25, 25, 20, 13, 2, -9, -19, -27, -32, -31, -25, -15, -2, 13,
27, 38, 44, 44, 37, 25, 8, -11, -29, -45, -55, -57, -53, -41, -24, -3, 17, 35,
47, 53, 52, 45, 33, 19, 3, -10, -21, -28, -31, -31, -29, -26, -23, -20, -17,
-13, -9, -2, 7, 17, 27, 37, 44, 46, 43, 33, 18, 0, -20, -38, -52, -60, -60, -52,
-38, -19, 2, 22, 38, 47, 50, 47, 39, 27, 15, 3, -6, -12, -16, -17, -18, -20,
-22, -25, -29, -31, -32, -29, -21, -10, 5, 21, 36, 48, 56, 57, 51, 40, 24, 6,
-13, -30, -42, -50, -52, -49, -41, -30, -18, -6, 5, 14, 20, 23, 23, 22, 21, 19,
18, 16, 15, 14, 12, 8, 3, -4, -12, -20, -28, -34, -37, -37, -33, -25, -14, -1,
12, 24, 33, 39, 40, 36, 28, 18, 6, -6, -15, -21, -23, -22, -18, -12, -7, -3, -2,
-3, -6, -10, -13, -14, -11, -4, 6, 17, 29, 37, 40, 37, 28, 12, -7, -27, -44,
-55, -58, -51, -36, -15, 10, 34, 53, 65, 67, 59, 42, 19, -7, -32, -53, -67, -73,
-70, -59, -42, -21, 1, 23, 42, 56, 64, 66, 62, 52, 38, 20, 2, -17, -33, -45,
-54, -57, -56, -50, -41, -28, -14, 2, 18, 33, 44, 52, 54, 51, 41, 27, 9, -11,
-30, -45, -54, -56, -50, -37, -19, 1, 21, 36, 47, 50, 47, 38, 24, 8, -8, -23,
-33, -40, -41, -38, -31, -22, -12, -2, 7, 15, 20, 24, 25, 25, 24, 21, 17, 11, 5,
-2, -10, -18, -24, -28, -30, -28, -24, -16, -7, 4, 14, 23, 30, 32, 30, 24, 13,
0, -13, -25, -31, -32, -27, -17, -3, 11, 22, 26, 23, 12, -2, -18, -28, -32, -24,
-7, 19, 45, 67, 78, 71, 47, 6, -44, -98, -122, -121, -121, -120, -75, 1, 84,
124, 118, 122, 118, 123, 113, 40, -70, -123, -121, -121, -122, -121, -123, -110,
-14, 97, 123, 119, 121, 121, 120, 122, 107, 10, -99, -123, -121, -121, -122,
-120, -124, -106, -21, 77, 122, 120, 120, 121, 119, 123, 96, 31, -26, -72, -101,
-114, -113, -102, -87, -72, -60, -52, -48, -42, -34, -19, 4, 34, 68, 103, 121,
120, 121, 115, 77, 20, -41, -102, -123, -121, -122, -122, -116, -56, 19, 94,
124, 118, 123, 118, 124, 91, 11, -78, -123, -121, -121, -122, -120, -125, -87,
5, 96, 123, 120, 120, 121, 119, 123, 105, 21, -78, -124, -120, -122, -120, -122,
-120, -123, -74, 8, 82, 122, 119, 121, 120, 121, 120, 118, 75, 24, -24, -68,
-106, -123, -120, -122, -121, -122, -117, -85, -41, 6, 54, 99, 122, 119, 121,
119, 121, 93, 45, -5, -53, -95, -120, -121, -121, -121, -101, -64, -24, 18, 54,
84, 103, 111, 107, 92, 68, 39, 7, -23, -49, -68, -79, -82, -78, -67, -53, -36,
-18, -1, 15, 29, 42, 53, 62, 68, 72, 70, 64, 52, 33, 9, -18, -47, -74, -98,
-113, -119, -113, -97, -71, -37, 0, 40, 76, 109, 121, 120, 120, 121, 112, 77,
32, -17, -71, -115, -123, -120, -123, -119, -124, -99, -34, 39, 106, 123, 119,
122, 119, 122, 114, 52, -38, -109, -124, -119, -123, -119, -124, -113, -46, 54,
115, 122, 118, 122, 118, 123, 111, 38, -66, -120, -122, -120, -123, -120, -123,
-114, -45, 57, 117, 121, 120, 121, 120, 121, 120, 62, -31, -106, -124, -120,
-122, -121, -121, -122, -82, -5, 62, 116, 120, 120, 120, 120, 120, 88, 38, -7,
-48, -79, -98, -107, -105, -97, -82, -65, -46, -29, -12, 3, 18, 33, 50, 65, 80,
91, 96, 92, 78, 52, 17, -24, -66, -104, -123, -120, -123, -116, -82, -30, 23,
80, 117, 121, 120, 121, 118, 82, 23, -32, -89, -120, -122, -121, -123, -113,
-70, -18, 32, 77, 109, 121, 120, 110, 80, 46, 8, -25, -51, -65, -68, -61, -46,
-27, -9, 6, 14, 14, 9, -2, -14, -26, -33, -34, -28, -16, 2, 22, 42, 60, 73, 78,
76, 65, 47, 22, -6, -36, -65, -89, -106, -115, -113, -100, -77, -45, -7, 34, 72,
106, 121, 120, 121, 118, 93, 53, 11, -33, -72, -104, -121, -121, -122, -113,
-87, -56, -20, 14, 46, 71, 88, 96, 94, 84, 67, 47, 25, 3, -15, -30, -41, -47,
-49, -47, -43, -37, -29, -20, -10, -1, 8, 15, 21, 25, 26, 26, 24, 20, 16, 10, 3,
-5, -14, -23, -31, -37, -41, -40, -34, -22, -5, 15, 37, 56, 72, 80, 79, 68, 47,
19, -13, -46, -75, -97, -109, -108, -96, -73, -41, -6, 30, 62, 86, 100, 103, 94,
75, 48, 16, -16, -45, -67, -79, -80, -70, -49, -21, 10, 39, 61, 74, 74, 61, 36,
3, -33, -67, -94, -108, -107, -90, -58, -16, 31, 78, 114, 122, 119, 122, 104,
60, 8, -44, -93, -120, -122, -121, -122, -103, -63, -21, 20, 55, 81, 97, 103,
100, 90, 75, 58, 40, 22, 3, -16, -35, -55, -75, -93, -107, -115, -113, -102,
-78, -44, 0, 47, 96, 121, 120, 121, 120, 122, 108, 54, -6, -69, -117, -122,
-121, -122, -120, -123, -103, -48, 9, 64, 110, 122, 119, 121, 119, 121, 93, 46,
-5, -54, -98, -121, -121, -121, -122, -116, -79, -32, 19, 66, 107, 122, 120,
121, 118, 89, 42, -5, -53, -92, -119, -121, -122, -115, -85, -47, -5, 36, 71,
95, 107, 105, 91, 67, 37, 5, -26, -51, -67, -73, -69, -57, -39, -17, 5, 24, 38,
44, 44, 38, 27, 12, -3, -17, -28, -36, -38, -36, -30, -20, -8, 4, 17, 28, 36,
42, 43, 40, 33, 22, 9, -6, -22, -36, -48, -56, -60, -58, -49, -36, -17, 4, 26,
46, 62, 71, 74, 68, 55, 37, 15, -7, -27, -43, -54, -58, -57, -52, -45, -36, -27,
-18, -11, -5, 1, 8, 17, 26, 37, 49, 60, 68, 72, 70, 62, 45, 23, -4, -34, -64,
-90, -111, -121, -121, -113, -92, -61, -25, 16, 56, 93, 118, 121, 120, 121, 118,
90, 50, 5, -40, -82, -115, -122, -121, -122, -119, -91, -50, -6, 38, 75, 104,
119, 120, 107, 81, 45, 5, -35, -69, -93, -103, -97, -77, -44, -5, 38, 76, 105,
120, 119, 102, 70, 27, -23, -72, -114, -122, -121, -121, -122, -106, -57, -4,
51, 101, 123, 119, 122, 119, 122, 109, 65, 16, -33, -77, -114, -122, -121, -121,
-122, -112, -77, -39, 2, 39, 72, 95, 109, 113, 107, 93, 72, 48, 22, -3, -25,
-44, -57, -66, -69, -68, -64, -55, -45, -32, -18, -3, 12, 27, 41, 53, 61, 66,
65, 59, 47, 30, 9, -13, -36, -55, -70, -78, -78, -71, -56, -36, -12, 13, 37, 57,
71, 80, 81, 75, 62, 43, 20, -6, -33, -59, -81, -97, -106, -105, -95, -73, -44,
-6, 35, 77, 112, 122, 120, 121, 121, 108, 59, 5, -57, -111, -123, -120, -122,
-121, -122, -116, -59, 16, 92, 122, 120, 120, 121, 119, 123, 95, 16, -67, -120,
-121, -121, -122, -120, -124, -91, -16, 53, 111, 121, 120, 120, 121, 95, 37,
-19, -71, -109, -123, -121, -110, -70, -25, 28, 74, 112, 120, 121, 112, 76, 28,
-25, -77, -116, -122, -120, -122, -115, -76, -24, 27, 77, 113, 122, 119, 121,
116, 85, 42, 0, -42, -76, -101, -112, -113, -101, -80, -52, -21, 9, 35, 54, 65,
67, 62, 49, 33, 15, -3, -18, -28, -34, -35, -31, -24, -13, -1, 11, 22, 31, 37,
39, 36, 29, 17, 1, -17, -37, -55, -69, -78, -79, -71, -53, -28, 4, 38, 70, 97,
115, 121, 114, 94, 64, 25, -16, -56, -90, -114, -122, -121, -112, -87, -57, -23,
10, 39, 62, 76, 82, 80, 72, 59, 45, 31, 18, 8, 0, -6, -10, -15, -20, -27, -35,
-44, -53, -60, -65, -65, -60, -48, -30, -7, 20, 47, 73, 94, 107, 110, 103, 84,
57, 23, -14, -50, -81, -102, -113, -111, -98, -75, -45, -13, 17, 43, 60, 68, 67,
58, 43, 26, 8, -7, -17, -21, -19, -13, -2, 9, 19, 26, 28, 24, 14, 0, -18, -35,
-51, -62, -67, -64, -54, -37, -16, 7, 30, 51, 66, 74, 76, 70, 58, 42, 22, 2,
-17, -34, -47, -56, -60, -59, -55, -47, -37, -24, -11, 2, 15, 26, 36, 44, 49,
51, 50, 46, 38, 26, 12, -4, -21, -37, -51, -61, -65, -64, -57, -44, -26, -5, 17,
38, 54, 65, 69, 66, 56, 40, 20, -2, -23, -41, -54, -62, -62, -56, -44, -27, -9,
10, 27, 41, 50, 54, 52, 44, 32, 16, -2, -21, -38, -52, -61, -65, -63, -54, -39,
-18, 6, 32, 56, 78, 94, 102, 99, 86, 61, 29, -12, -52, -94, -120, -122, -121,
-122, -113, -74, -22, 31, 87, 120, 120, 121, 120, 122, 107, 55, -2, -58, -108,
-123, -121, -122, -121, -118, -78, -26, 26, 75, 112, 122, 119, 121, 115, 84, 40,
-5, -50, -85, -114, -121, -122, -114, -88, -53, -13, 28, 65, 96, 115, 121, 115,
95, 65, 27, -13, -52, -85, -108, -119, -116, -101, -76, -43, -6, 29, 60, 82, 95,
98, 91, 76, 55, 31, 6, -16, -36, -50, -60, -64, -63, -59, -51, -40, -28, -15,
-1, 12, 25, 35, 44, 49, 51, 49, 43, 33, 20, 5, -10, -25, -37, -45, -49, -48,
-42, -32, -19, -5, 10, 22, 32, 39, 42, 40, 35, 27, 17, 5, -8, -21, -33, -42,
-47, -49, -45, -36, -23, -6, 12, 29, 44, 54, 58, 55, 46, 33, 16, -2, -18, -32,
-41, -46, -46, -43, -36, -28, -20, -12, -4, 3, 9, 15, 21, 27, 33, 37, 40, 41,
39, 34, 24, 12, -3, -20, -36, -51, -63, -69, -70, -64, -51, -33, -10, 15, 39,
60, 75, 83, 82, 72, 55, 31, 5, -22, -46, -64, -74, -75, -69, -55, -37, -16, 5,
24, 39, 49, 55, 55, 50, 41, 30, 16, 0, -15, -30, -43, -53, -58, -59, -53, -42,
-27, -7, 13, 33, 49, 60, 64, 62, 53, 39, 22, 4, -11, -23, -31, -34, -34, -31,
-28, -26, -25, -26, -29, -31, -31, -28, -20, -7, 11, 31, 52, 70, 83, 88, 84, 70,
47, 18, -15, -48, -77, -97, -108, -106, -93, -70, -41, -7, 25, 53, 72, 82, 81,
71, 53, 31, 8, -12, -27, -36, -37, -31, -20, -8, 4, 12, 16, 13, 6, -6, -19, -30,
-38, -40, -36, -26, -11, 6, 24, 39, 48, 52, 49, 40, 26, 10, -7, -22, -33, -40,
-41, -37, -28, -18, -6, 5, 13, 19, 21, 20, 16, 9, 2, -6, -12, -16, -18, -16,
-13, -7, 1, 9, 16, 22, 26, 26, 24, 19, 11, 2, -9, -19, -28, -34, -38, -39, -36,
-30, -21, -9, 4, 17, 30, 41, 49, 53, 53, 47, 36, 21, 3, -17, -37, -54, -67, -72,
-71, -61, -45, -23, 2, 27, 49, 66, 75, 76, 68, 53, 33, 10, -14, -36, -53, -64,
-68, -66, -56, -42, -24, -4, 15, 32, 45, 53, 55, 52, 43, 30, 15, -2, -18, -31,
-40, -45, -45, -39, -30, -17, -3, 12, 24, 33, 37, 36, 31, 21, 9, -5, -17, -26,
-32, -33, -30, -23, -14, -4, 5, 11, 16, 17, 16, 14, 12, 11, 11, 12, 14, 16, 16,
15, 11, 3, -8, -21, -35, -47, -57, -61, -59, -50, -35, -14, 10, 35, 58, 76, 87,
89, 83, 68, 47, 21, -6, -32, -54, -71, -81, -84, -80, -70, -56, -39, -22, -5,
11, 25, 37, 48, 56, 63, 68, 69, 68, 61, 49, 32, 10, -16, -44, -71, -93, -108,
-113, -106, -88, -60, -24, 15, 53, 86, 110, 120, 120, 107, 82, 50, 13, -24, -58,
-86, -104, -113, -110, -98, -77, -49, -16, 18, 51, 79, 101, 114, 116, 107, 87,
59, 24, -13, -50, -82, -107, -120, -122, -115, -95, -67, -34, 1, 36, 66, 89,
105, 111, 109, 97, 78, 54, 25, -5, -34, -61, -82, -96, -103, -102, -92, -76,
-53, -27, 0, 28, 53, 74, 90, 98, 98, 91, 76, 55, 29, 0, -29, -57, -80, -95,
-103, -101, -89, -69, -42, -11, 21, 50, 73, 88, 93, 87, 72, 48, 20, -10, -36,
-57, -68, -69, -61, -43, -21, 4, 27, 45, 54, 53, 43, 26, 3, -21, -43, -59, -67,
-65, -53, -34, -9, 17, 42, 62, 75, 78, 73, 58, 37, 12, -14, -38, -56, -68, -72,
-69, -58, -41, -22, -1, 18, 35, 46, 52, 52, 46, 35, 22, 8, -7, -19, -28, -34,
-35, -33, -28, -20, -11, -2, 8, 16, 22, 26, 28, 27, 23, 16, 7, -2, -12, -21,
-27, -31, -32, -29, -23, -15, -6, 4, 14, 22, 27, 31, 31, 30, 26, 19, 11, 2, -8,
-19, -28, -36, -41, -43, -40, -32, -20, -4, 13, 30, 44, 54, 56, 52, 40, 22, 1,
-22, -42, -57, -64, -63, -53, -36, -14, 10, 32, 50, 61, 65, 60, 48, 30, 9, -12,
-31, -47, -57, -61, -59, -51, -38, -21, -3, 16, 33, 46, 55, 59, 56, 48, 35, 18,
-1, -19, -35, -47, -54, -54, -48, -37, -23, -6, 10, 25, 35, 40, 40, 34, 24, 11,
-3, -16, -26, -31, -32, -27, -18, -6, 8, 22, 33, 40, 40, 35, 23, 7, -12, -31,
-47, -59, -64, -61, -50, -33, -10, 15, 38, 58, 71, 77, 74, 64, 47, 25, 2, -21,
-40, -55, -65, -68, -66, -58, -46, -32, -17, -2, 13, 25, 35, 42, 46, 47, 45, 40,
34, 25, 16, 5, -5, -15, -24, -31, -36, -38, -38, -35, -30, -23, -15, -6, 2, 10,
17, 21, 24, 24, 23, 19, 15, 10, 5, 1, -2, -4, -4, -4, -2, 1, 3, 4, 3, 1, -3, -9,
-15, -22, -28, -31, -32, -30, -25, -16, -5, 7, 21, 34, 45, 54, 58, 57, 50, 39,
22, 2, -19, -39, -57, -69, -75, -74, -66, -51, -32, -11, 12, 32, 49, 61, 67, 67,
62, 51, 37, 20, 2, -16, -32, -45, -53, -57, -56, -50, -40, -26, -9, 7, 24, 37,
47, 52, 51, 44, 32, 16, -2, -21, -37, -50, -57, -57, -50, -37, -20, 1, 21, 39,
53, 61, 63, 58, 47, 31, 12, -8, -27, -44, -55, -62, -62, -56, -46, -32, -15, 2,
18, 31, 41, 47, 48, 45, 38, 29, 18, 6, -5, -14, -21, -25, -26, -25, -22, -18,
-13, -9, -6, -3, -2, -2, -2, -2, -1, 1, 4, 8, 12, 16, 19, 20, 19, 15, 10, 2, -5,
-13, -18, -22, -22, -20, -15, -8, -1, 6, 12, 16, 16, 14, 9, 2, -5, -12, -17,
-20, -20, -16, -9, 1, 11, 20, 28, 31, 31, 26, 16, 4, -10, -24, -35, -42, -44,
-40, -32, -19, -4, 12, 25, 36, 42, 43, 39, 31, 20, 9, -3, -13, -22, -27, -30,
-31, -30, -28, -24, -19, -13, -6, 2, 11, 20, 29, 36, 40, 40, 35, 26, 14, -1,
-17, -31, -42, -48, -49, -43, -33, -19, -3, 12, 26, 35, 40, 40, 36, 29, 20, 10,
1, -6, -13, -18, -22, -25, -28, -30, -31, -30, -27, -21, -13, -2, 11, 24, 36,
44, 49, 49, 44, 34, 21, 6, -10, -25, -37, -45, -48, -47, -42, -34, -23, -12, -1,
8, 16, 22, 26, 28, 28, 27, 25, 23, 19, 15, 10, 4, -2, -10, -17, -25, -31, -34,
-36, -34, -30, -22, -12, -1, 11, 21, 29, 34, 36, 34, 28, 20, 11, 1, -7, -14,
-18, -19, -19, -17, -15, -12, -11, -10, -10, -10, -9, -7, -2, 4, 12, 19, 26, 31,
31, 27, 19, 7, -7, -21, -32, -40, -42, -37, -27, -12, 5, 21, 35, 44, 46, 41, 30,
15, -3, -21, -37, -48, -54, -53, -46, -34, -18, -1, 17, 33, 46, 55, 58, 55, 48,
36, 21, 4, -12, -28, -40, -49, -54, -54, -50, -42, -31, -17, -1, 14, 28, 39, 46,
49, 47, 39, 28, 13, -3, -18, -30, -39, -41, -39, -31, -19, -5, 8, 21, 29, 34,
33, 28, 20, 9, -3, -14, -23, -29, -32, -31, -27, -21, -14, -5, 3, 11, 17, 22,
25, 26, 25, 22, 18, 12, 5, -2, -9, -16, -22, -26, -27, -26, -22, -16, -8, 0, 9,
17, 22, 24, 23, 19, 12, 3, -6, -14, -19, -20, -17, -12, -4, 4, 9, 11, 10, 4, -3,
-10, -14, -13, -7, 5, 19, 33, 43, 45, 36, 17, -11, -44, -77, -101, -113, -107,
-82, -38, 16, 79, 121, 119, 122, 119, 123, 99, 24, -68, -122, -121, -121, -122,
-120, -123, -109, -22, 90, 123, 120, 120, 121, 120, 121, 116, 38, -79, -123,
-121, -121, -121, -122, -121, -122, -65, 34, 107, 123, 119, 121, 120, 121, 120,
85, 26, -21, -63, -90, -108, -114, -114, -107, -99, -87, -73, -57, -37, -12, 16,
46, 76, 103, 119, 120, 119, 100, 66, 23, -26, -71, -110, -122, -121, -121, -97,
-51, 1, 55, 102, 122, 119, 122, 113, 69, 10, -53, -110, -123, -120, -122, -120,
-121, -71, 3, 83, 122, 120, 121, 121, 120, 122, 106, 29, -59, -120, -121, -122,
-121, -122, -120, -124, -98, -22, 50, 112, 121, 121, 120, 121, 119, 122, 107,
57, 4, -46, -92, -121, -121, -121, -122, -121, -122, -99, -56, -11, 36, 78, 113,
121, 120, 120, 120, 99, 59, 18, -25, -62, -93, -112, -119, -113, -97, -71, -40,
-6, 26, 54, 75, 87, 89, 82, 67, 45, 21, -4, -28, -47, -61, -68, -69, -64, -54,
-41, -25, -8, 9, 25, 39, 52, 61, 67, 69, 66, 57, 44, 25, 2, -22, -47, -70, -89,
-101, -104, -98, -84, -61, -32, 2, 36, 69, 97, 117, 121, 120, 119, 100, 68, 29,
-16, -60, -104, -122, -121, -122, -121, -121, -90, -35, 21, 80, 119, 120, 121,
120, 121, 110, 54, -8, -74, -119, -121, -122, -121, -123, -108, -48, 17, 85,
122, 119, 122, 119, 123, 104, 41, -29, -97, -124, -120, -123, -120, -123, -111,
-50, 20, 91, 123, 119, 121, 120, 121, 118, 71, 2, -63, -116, -122, -121, -122,
-121, -122, -91, -33, 21, 73, 113, 121, 120, 120, 120, 99, 61, 23, -14, -46,
-71, -88, -97, -97, -91, -79, -64, -46, -27, -7, 13, 33, 52, 68, 81, 89, 91, 84,
68, 45, 15, -19, -53, -83, -105, -116, -114, -98, -70, -33, 8, 49, 85, 110, 121,
118, 101, 70, 32, -11, -52, -86, -109, -119, -114, -95, -66, -30, 7, 42, 70, 88,
95, 90, 75, 53, 28, 2, -19, -35, -45, -47, -43, -36, -27, -18, -12, -8, -8, -10,
-14, -16, -17, -15, -8, 1, 14, 28, 42, 53, 61, 63, 60, 50, 34, 14, -10, -35,
-58, -78, -93, -99, -97, -86, -66, -39, -7, 27, 60, 88, 109, 119, 119, 108, 85,
55, 20, -17, -51, -81, -102, -114, -116, -107, -89, -64, -35, -4, 26, 51, 71,
83, 87, 84, 74, 60, 42, 22, 3, -14, -29, -40, -47, -50, -50, -47, -40, -32, -23,
-13, -3, 7, 14, 21, 25, 27, 27, 25, 21, 16, 9, 1, -7, -15, -22, -28, -30, -29,
-24, -14, -2, 13, 29, 43, 53, 58, 56, 47, 32, 11, -14, -38, -60, -77, -87, -88,
-79, -62, -39, -11, 17, 44, 65, 80, 86, 83, 71, 52, 29, 4, -20, -39, -53, -58,
-55, -44, -28, -8, 11, 27, 37, 39, 33, 19, -1, -23, -44, -61, -70, -68, -56,
-35, -6, 27, 59, 85, 103, 109, 101, 81, 51, 14, -25, -62, -91, -109, -116, -110,
-92, -67, -36, -4, 27, 53, 72, 84, 89, 87, 79, 66, 50, 31, 11, -11, -33, -54,
-73, -89, -100, -104, -100, -87, -64, -34, 3, 42, 80, 113, 121, 120, 120, 120,
96, 52, 5, -45, -91, -121, -121, -122, -120, -123, -104, -61, -15, 33, 75, 111,
121, 120, 121, 120, 98, 61, 20, -22, -60, -93, -115, -122, -120, -106, -79, -45,
-7, 32, 66, 92, 107, 109, 99, 77, 47, 12, -23, -56, -81, -96, -100, -93, -75,
-50, -20, 11, 39, 62, 76, 80, 76, 63, 44, 21, -2, -22, -38, -48, -50, -47, -38,
-25, -11, 2, 14, 21, 25, 24, 19, 12, 3, -6, -14, -20, -23, -23, -20, -14, -6, 3,
12, 21, 28, 32, 34, 32, 26, 18, 8, -5, -17, -29, -39, -46, -49, -47, -41, -30,
-16, 1, 19, 35, 48, 57, 60, 57, 48, 35, 19, 2, -15, -30, -41, -49, -52, -51,
-48, -42, -34, -25, -16, -7, 3, 13, 23, 34, 44, 53, 60, 64, 64, 59, 49, 34, 14,
-10, -35, -59, -81, -97, -106, -106, -98, -81, -56, -25, 9, 44, 76, 102, 119,
120, 121, 111, 87, 55, 18, -20, -57, -88, -111, -121, -121, -113, -91, -62, -28,
7, 40, 67, 85, 93, 89, 76, 54, 27, -1, -27, -47, -59, -60, -51, -34, -10, 16,
41, 61, 73, 74, 64, 43, 14, -19, -53, -84, -108, -120, -120, -108, -83, -49, -9,
34, 73, 108, 121, 120, 120, 121, 106, 71, 32, -10, -50, -85, -112, -122, -121,
-122, -113, -88, -57, -23, 11, 42, 68, 87, 97, 100, 94, 81, 63, 42, 19, -3, -23,
-40, -54, -62, -66, -66, -61, -53, -42, -28, -13, 3, 19, 33, 45, 54, 59, 60, 55,
45, 32, 14, -4, -23, -40, -54, -62, -64, -61, -51, -37, -19, 1, 21, 38, 52, 62,
65, 63, 55, 41, 23, 2, -21, -42, -61, -76, -84, -84, -76, -60, -37, -8, 25, 57,
86, 108, 120, 120, 111, 86, 52, 9, -37, -83, -118, -121, -122, -121, -123, -107,
-58, -3, 55, 107, 122, 119, 121, 119, 122, 97, 39, -19, -78, -118, -122, -121,
-121, -122, -98, -48, 0, 48, 83, 107, 113, 105, 83, 52, 17, -18, -47, -65, -72,
-66, -49, -23, 7, 36, 60, 75, 79, 69, 49, 20, -14, -49, -78, -99, -109, -105,
-89, -63, -29, 8, 45, 76, 99, 111, 112, 101, 80, 52, 20, -12, -42, -65, -82,
-89, -87, -77, -60, -39, -17, 5, 23, 37, 45, 48, 45, 37, 27, 16, 4, -5, -13,
-17, -18, -16, -11, -5, 3, 10, 16, 21, 22, 21, 16, 7, -4, -17, -31, -43, -53,
-58, -58, -51, -38, -19, 5, 30, 54, 74, 88, 94, 90, 77, 55, 28, -3, -35, -62,
-84, -98, -102, -97, -83, -62, -38, -11, 14, 36, 54, 65, 71, 71, 66, 58, 47, 36,
24, 13, 2, -8, -17, -27, -36, -44, -52, -58, -62, -63, -60, -53, -40, -24, -3,
19, 42, 63, 80, 90, 94, 89, 75, 55, 29, 0, -29, -55, -75, -87, -91, -86, -73,
-55, -32, -9, 13, 30, 43, 49, 49, 45, 37, 27, 17, 9, 3, 0, 0, 2, 5, 8, 10, 9, 5,
-2, -11, -22, -33, -43, -50, -52, -49, -42, -30, -14, 4, 22, 38, 52, 60, 64, 62,
55, 44, 29, 13, -4, -20, -34, -44, -51, -54, -54, -49, -42, -32, -20, -8, 5, 17,
28, 37, 43, 47, 47, 44, 38, 28, 16, 2, -12, -26, -39, -48, -53, -54, -49, -40,
-27, -11, 6, 22, 36, 47, 53, 53, 48, 38, 25, 9, -7, -22, -34, -43, -46, -45,
-39, -29, -17, -3, 10, 22, 31, 37, 38, 35, 28, 17, 5, -9, -22, -33, -42, -46,
-46, -40, -30, -15, 2, 21, 40, 57, 69, 75, 74, 64, 47, 23, -6, -37, -67, -92,
-108, -115, -109, -92, -64, -28, 11, 52, 87, 114, 121, 120, 118, 96, 61, 21,
-22, -61, -94, -116, -122, -120, -106, -78, -45, -7, 30, 63, 87, 102, 105, 96,
77, 50, 19, -13, -43, -67, -83, -90, -86, -73, -52, -26, 3, 31, 56, 74, 84, 84,
75, 57, 33, 5, -24, -49, -69, -82, -85, -79, -65, -45, -20, 5, 30, 50, 64, 72,
73, 67, 55, 39, 21, 3, -15, -30, -42, -51, -55, -55, -52, -45, -36, -24, -12, 1,
14, 25, 35, 42, 45, 45, 42, 35, 25, 14, 1, -11, -22, -31, -37, -38, -36, -31,
-23, -13, -3, 8, 17, 24, 28, 30, 28, 24, 17, 8, -1, -11, -21, -29, -34, -36,
-34, -28, -20, -8, 5, 18, 29, 37, 42, 42, 38, 29, 19, 6, -6, -18, -27, -33, -37,
-37, -35, -31, -25, -18, -11, -3, 5, 12, 19, 26, 31, 35, 37, 37, 35, 30, 21, 11,
-2, -15, -29, -41, -50, -56, -57, -54, -45, -31, -14, 4, 23, 40, 54, 62, 64, 60,
50, 34, 16, -3, -22, -37, -48, -54, -54, -48, -38, -25, -11, 4, 17, 28, 36, 39,
39, 36, 29, 19, 8, -4, -17, -28, -37, -42, -44, -42, -35, -24, -11, 4, 19, 32,
42, 47, 48, 44, 36, 26, 14, 2, -9, -18, -24, -29, -31, -32, -33, -33, -33, -32,
-30, -27, -21, -12, 0, 14, 29, 44, 57, 66, 70, 67, 57, 41, 19, -5, -29, -51,
-69, -80, -82, -77, -65, -46, -24, 0, 22, 39, 52, 57, 56, 50, 39, 26, 12, 0, -8,
-14, -15, -14, -11, -7, -4, -3, -4, -8, -13, -19, -24, -27, -27, -24, -17, -7,
4, 15, 26, 33, 37, 37, 33, 25, 15, 4, -7, -16, -23, -27, -27, -24, -19, -13, -6,
0, 5, 8, 10, 9, 7, 4, 0, -3, -6, -8, -7, -6, -3, 2, 6, 11, 15, 17, 18, 17, 13,
8, 1, -6, -13, -20, -26, -29, -30, -29, -25, -18, -10, 0, 10, 21, 30, 37, 41,
41, 38, 31, 20, 7, -8, -23, -36, -47, -53, -54, -49, -39, -25, -8, 10, 26, 40,
50, 54, 52, 45, 33, 18, 2, -14, -29, -40, -46, -48, -45, -38, -27, -14, 0, 14,
25, 33, 38, 39, 35, 29, 19, 8, -3, -14, -22, -28, -31, -30, -25, -18, -10, 0, 9,
16, 20, 22, 20, 16, 10, 2, -6, -12, -17, -19, -19, -17, -12, -7, -2, 3, 7, 10,
12, 12, 13, 13, 13, 13, 13, 13, 12, 9, 4, -2, -10, -19, -29, -37, -43, -45, -44,
-37, -26, -12, 5, 23, 40, 54, 64, 68, 66, 57, 44, 26, 7, -14, -33, -48, -60,
-67, -68, -65, -57, -46, -33, -18, -3, 12, 26, 38, 49, 57, 63, 65, 63, 58, 47,
32, 14, -7, -30, -51, -69, -82, -87, -85, -75, -57, -33, -6, 22, 48, 69, 82, 87,
84, 71, 53, 29, 3, -23, -46, -64, -76, -80, -77, -66, -49, -28, -3, 22, 45, 64,
78, 84, 82, 72, 54, 31, 5, -22, -48, -69, -84, -91, -90, -81, -64, -42, -17, 9,
34, 56, 73, 84, 87, 84, 74, 58, 38, 15, -9, -32, -53, -68, -79, -83, -80, -71,
-57, -39, -17, 5, 27, 47, 62, 73, 78, 77, 69, 55, 37, 16, -7, -30, -50, -65,
-75, -78, -74, -63, -46, -25, -3, 19, 39, 54, 62, 64, 58, 46, 30, 12, -6, -21,
-33, -38, -38, -32, -21, -9, 4, 15, 22, 24, 21, 13, 2, -11, -23, -33, -38, -39,
-33, -23, -9, 8, 24, 38, 48, 52, 51, 45, 33, 18, 1, -16, -31, -42, -48, -50,
-47, -39, -28, -14, -1, 12, 23, 30, 34, 34, 30, 24, 15, 6, -3, -11, -17, -20,
-22, -21, -18, -13, -7, -1, 5, 11, 15, 17, 18, 16, 13, 8, 1, -5, -11, -17, -20,
-22, -21, -19, -14, -8, -1, 6, 12, 17, 21, 23, 23, 21, 18, 12, 5, -3, -11, -18,
-25, -29, -31, -30, -25, -18, -8, 4, 15, 25, 33, 36, 35, 29, 20, 7, -7, -20,
-31, -38, -39, -36, -28, -16, -2, 12, 25, 34, 39, 39, 34, 25, 14, 0, -13, -25,
-34, -40, -41, -39, -32, -22, -10, 3, 15, 26, 35, 40, 41, 38, 31, 21, 9, -4,
-16, -26, -33, -37, -36, -31, -24, -14, -4, 6, 15, 20, 23, 22, 19, 13, 5, -2,
-9, -13, -15, -14, -10, -4, 3, 11, 17, 21, 22, 20, 14, 4, -7, -18, -29, -37,
-41, -41, -35, -25, -12, 4, 20, 34, 45, 51, 53, 49, 40, 27, 12, -4, -19, -32,
-42, -49, -51, -49, -44, -36, -26, -14, -2, 10, 20, 29, 35, 39, 40, 39, 36, 30,
23, 14, 5, -4, -13, -21, -27, -31, -33, -33, -31, -27, -21, -14, -7, 0, 7, 12,
16, 19, 20, 19, 18, 15, 12, 9, 6, 3, 1, 0, 0, -1, -1, -2, -3, -5, -8, -12, -15,
-19, -22, -24, -24, -23, -19, -12, -4, 5, 15, 25, 33, 40, 44, 44, 40, 33, 22, 8,
-7, -22, -36, -47, -54, -56, -53, -46, -34, -20, -5, 11, 25, 37, 45, 50, 50, 45,
38, 27, 15, 1, -12, -23, -33, -39, -42, -41, -36, -28, -18, -6, 5, 16, 25, 31,
33, 31, 26, 17, 7, -5, -17, -26, -32, -35, -33, -27, -17, -6, 7, 19, 30, 37, 41,
40, 35, 27, 15, 2, -11, -24, -34, -41, -44, -44, -39, -32, -22, -10, 2, 13, 22,
29, 34, 35, 33, 29, 23, 16, 8, 0, -7, -12, -16, -18, -19, -18, -17, -15, -13,
-11, -9, -7, -5, -3, -1, 2, 5, 8, 11, 14, 15, 16, 15, 13, 10, 5, 0, -5, -10,
-13, -14, -14, -12, -9, -5, -1, 2, 5, 6, 6, 4, 2, -2, -6, -8, -10, -10, -8, -4,
1, 6, 12, 16, 19, 19, 16, 11, 4, -4, -12, -20, -25, -27, -27, -23, -16, -8, 2,
11, 18, 24, 27, 27, 24, 19, 13, 5, -2, -9, -15, -19, -22, -24, -24, -22, -19,
-15, -9, -3, 4, 12, 19, 24, 28, 29, 27, 22, 14, 5, -5, -15, -23, -29, -31, -30,
-26, -19, -10, -1, 8, 16, 21, 24, 25, 23, 19, 14, 8, 3, -3, -9, -14, -18, -21,
-24, -25, -25, -23, -18, -12, -4, 5, 14, 23, 30, 34, 36, 34, 29, 21, 12, 1, -10,
-19, -27, -32, -35, -34, -31, -26, -19, -11, -4, 4, 10, 15, 19, 22, 24, 24, 23,
21, 18, 14, 8, 2, -4, -11, -17, -22, -26, -28, -28, -26, -21, -15, -7, 1, 9, 16,
21, 24, 25, 23, 20, 15, 9, 3, -2, -6, -10, -12, -13, -14, -14, -13, -13, -12,
-11, -9, -6, -2, 2, 8, 13, 17, 20, 21, 19, 14, 8, 0, -9, -16, -21, -24, -23,
-18, -11, -2, 7, 15, 21, 24, 23, 19, 12, 2, -8, -18, -26, -31, -33, -31, -25,
-17, -7, 5, 16, 26, 33, 38, 39, 37, 31, 22, 12, 0, -11, -22, -30, -36, -40, -40,
-36, -30, -22, -12, -1, 10, 19, 27, 31, 33, 31, 25, 18, 9, -1, -10, -17, -21,
-22, -20, -15, -9, -2, 5, 11, 15, 17, 16, 12, 7, 1, -5, -11, -16, -19, -20, -20,
-17, -13, -8, -3, 3, 8, 13, 16, 18, 19, 19, 17, 13, 9, 4, -2, -7, -12, -16, -18,
-19, -18, -15, -10, -5, 0, 6, 10, 12, 13, 12, 9, 5, 1, -4, -7, -8, -8, -6, -4,
-1, 2, 2, 2, 0, -2, -4, -5, -4, 0, 6, 13, 19, 23, 22, 17, 6, -10, -28, -45, -58,
-65, -61, -48, -24, 6, 41, 74, 100, 116, 117, 102, 71, 29, -21, -73, -116, -122,
-121, -121, -122, -101, -43, 17, 82, 120, 120, 121, 120, 121, 116, 67, 2, -62,
-114, -122, -121, -122, -121, -122, -90, -35, 18, 67, 105, 121, 120, 121, 118,
96, 65, 34, 3, -24, -47, -65, -77, -84, -86, -84, -76, -65, -49, -30, -7, 16,
40, 61, 77, 86, 87, 78, 60, 36, 8, -21, -47, -66, -77, -76, -65, -45, -18, 11,
39, 61, 74, 77, 67, 46, 16, -18, -53, -83, -104, -113, -108, -89, -57, -16, 30,
75, 113, 121, 120, 120, 121, 98, 50, -1, -53, -101, -123, -120, -122, -120,
-123, -105, -61, -14, 34, 76, 111, 121, 120, 120, 121, 112, 82, 48, 11, -25,
-59, -86, -107, -119, -121, -113, -97, -73, -44, -12, 20, 49, 73, 89, 96, 94,
83, 65, 41, 15, -11, -35, -54, -66, -71, -69, -59, -45, -26, -6, 13, 30, 43, 50,
52, 48, 40, 28, 13, -2, -16, -28, -37, -43, -44, -42, -36, -28, -17, -5, 7, 19,
30, 40, 47, 50, 50, 46, 38, 26, 11, -7, -25, -42, -57, -68, -73, -73, -67, -54,
-36, -15, 9, 33, 56, 74, 87, 93, 91, 82, 64, 40, 11, -20, -51, -78, -98, -109,
-110, -100, -79, -50, -15, 22, 56, 85, 104, 111, 105, 87, 59, 24, -14, -50, -79,
-99, -106, -100, -81, -51, -16, 23, 58, 87, 105, 110, 100, 79, 46, 8, -33, -70,
-100, -118, -122, -113, -91, -58, -18, 24, 63, 96, 117, 121, 119, 102, 72, 36,
-4, -42, -76, -100, -113, -114, -104, -82, -54, -21, 12, 42, 67, 83, 91, 90, 80,
64, 44, 21, -2, -23, -41, -54, -63, -67, -66, -60, -51, -39, -25, -9, 8, 24, 40,
52, 61, 66, 64, 57, 43, 25, 4, -19, -40, -57, -68, -72, -68, -56, -37, -14, 10,
33, 53, 65, 70, 66, 53, 35, 12, -12, -34, -52, -64, -67, -63, -52, -35, -15, 6,
25, 40, 50, 54, 52, 44, 33, 21, 8, -4, -14, -20, -24, -25, -24, -23, -21, -19,
-18, -18, -17, -16, -14, -11, -5, 2, 11, 20, 29, 37, 43, 46, 44, 39, 30, 17, 1,
-16, -32, -48, -60, -67, -70, -66, -56, -40, -21, 2, 24, 46, 63, 76, 81, 79, 71,
55, 35, 12, -12, -34, -53, -68, -76, -77, -72, -61, -46, -27, -7, 12, 29, 43,
53, 57, 58, 53, 45, 35, 23, 10, -2, -13, -23, -30, -34, -36, -36, -33, -29, -23,
-16, -9, -2, 5, 10, 14, 17, 18, 18, 16, 12, 8, 3, -3, -8, -12, -15, -15, -13,
-8, -2, 6, 15, 24, 30, 34, 34, 30, 22, 10, -4, -19, -34, -46, -55, -58, -57,
-49, -37, -22, -4, 14, 30, 43, 51, 55, 53, 46, 35, 22, 8, -6, -17, -24, -28,
-27, -22, -14, -6, 2, 7, 10, 8, 3, -5, -16, -26, -34, -39, -39, -33, -22, -7,
11, 30, 47, 60, 67, 66, 58, 44, 25, 2, -21, -41, -57, -67, -71, -67, -57, -43,
-25, -6, 13, 30, 43, 53, 58, 59, 55, 48, 38, 24, 9, -8, -25, -41, -56, -66, -73,
-73, -67, -55, -37, -14, 11, 37, 61, 81, 93, 97, 92, 78, 56, 28, -3, -34, -62,
-84, -99, -104, -100, -87, -66, -40, -11, 19, 46, 68, 84, 91, 90, 80, 64, 42,
16, -9, -33, -53, -67, -73, -72, -63, -48, -28, -6, 16, 35, 50, 58, 59, 52, 40,
23, 4, -16, -33, -46, -54, -56, -51, -41, -27, -10, 7, 22, 34, 42, 45, 43, 36,
27, 15, 3, -7, -16, -21, -24, -23, -20, -15, -9, -3, 2, 5, 7, 7, 5, 2, -2, -5,
-9, -10, -11, -10, -8, -4, 0, 5, 10, 14, 18, 19, 19, 17, 13, 8, 2, -6, -13, -19,
-24, -27, -28, -26, -21, -15, -6, 3, 12, 20, 26, 30, 31, 29, 25, 18, 10, 1, -8,
-15, -22, -26, -29, -30, -29, -26, -22, -17, -12, -5, 2, 9, 16, 23, 29, 34, 37,
38, 36, 31, 24, 14, 2, -11, -24, -36, -46, -53, -56, -54, -49, -39, -26, -10, 7,
23, 38, 50, 58, 61, 59, 52, 40, 26, 9, -8, -24, -37, -47, -53, -53, -49, -41,
-29, -16, -2, 11, 21, 28, 32, 31, 27, 20, 12, 3, -5, -10, -13, -13, -10, -4, 3,
10, 16, 20, 22, 19, 14, 5, -5, -17, -27, -36, -42, -45, -43, -36, -26, -13, 1,
16, 30, 41, 48, 52, 51, 46, 38, 26, 12, -2, -16, -28, -38, -44, -46, -45, -41,
-33, -23, -13, -2, 9, 18, 24, 29, 31, 30, 27, 23, 17, 10, 3, -3, -9, -14, -18,
-20, -21, -20, -18, -15, -11, -6, -1, 4, 8, 12, 15, 16, 16, 15, 12, 8, 4, -1,
-6, -10, -13, -15, -16, -15, -12, -9, -5, 0, 4, 8, 11, 13, 14, 13, 11, 8, 4, -1,
-6, -10, -14, -17, -18, -17, -15, -11, -6, 0, 7, 13, 18, 21, 23, 22, 19, 13, 6,
-2, -10, -17, -23, -27, -29, -27, -23, -16, -8, 1, 10, 17, 23, 26, 27, 25, 20,
13, 5, -3, -10, -16, -20, -21, -20, -17, -13, -7, -2, 3, 7, 9, 10, 9, 7, 5, 2,
-1, -3, -4, -5, -4, -2, 0, 2, 4, 5, 6, 5, 4, 2, -1, -3, -6, -8, -9, -9, -8, -7,
-4, -2, 1, 3, 5, 6, 7, 7, 6, 4, 3, 1, -1, -2, -3, -4, -4, -4, -4, -3, -2, -2,
-1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, };

#endif /* EATSTATICSIX_H_ */
