#pragma once

#include "dactyl_manuform.h"

#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif

#ifndef FLIP_HALF
#define LAYOUT( \
	L00, L01, L02, L03, L04,                     R00, R01, R02, R03, R04, \
	L10, L11, L12, L13, L14,                     R10, R11, R12, R13, R14, \
	L20, L21, L22, L23, L24,                     R20, R21, R22, R23, R24, \
	     L31, L32,                                         R32, R33,      \
                       L33, L34,                     R30, R31,                \
                                 L42,L44, R40, R41,                         \
                                   L41,L43, R42, R43                          \
	)\
	{\
		{ L00, L01, L02, L03, L04 }, \
		{ L10, L11, L12, L13, L14 }, \
		{ L20, L21, L22, L23, L24 }, \
		{ KC_NO, L31, L32, L33, L34 }, \
		{ KC_NO, L41, L42, L43, L44 }, \
\
		{ R00, R01, R02, R03, R04 },    \
		{ R10, R11, R12, R13, R14 },    \
		{ R20, R21, R22, R23, R24 },    \
		{ R30, R31, R32, R33, KC_NO},  \
		{ R40, R41, R42, R43, KC_NO }  \
	}
#else



#define LAYOUT( \
	L00, L01, L02, L03, L04,                     R00, R01, R02, R03, R04, \
	L10, L11, L12, L13, L14,                     R10, R11, R12, R13, R14, \
	L20, L21, L22, L23, L24,                     R20, R21, R22, R23, R24, \
	     L31, L32,                                         R32, R33,      \
                       L33, L34,                     R30, R31,                \
                                 L44, L43, R41, R40,                          \
                                 L42, L41, R43, R42                           \
	) \
	{ \
	{ R00, R01, R02, R03, R04 },    \
		{ R10, R11, R12, R13, R14 },    \
		{ R20, R21, R22, R23, R24 },    \
		{ R30, R31, R32, R33, KC_NO},  \
		{ R40, R41, R42, R43, KC_NO },  \
\
		{ L00, L01, L02, L03, L04 }, \
		{ L10, L11, L12, L13, L14 }, \
		{ L20, L21, L22, L23, L24 }, \
		{ KC_NO, L31, L32, L33, L34 }, \
		{ KC_NO, L41, L42, L43, L44 }  \
\
	}
#endif

