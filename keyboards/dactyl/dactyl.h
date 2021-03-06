#ifndef DACTYL_H
#define DACTYL_H

#include "config.h"

#include "quantum.h"

#define KEYMAP_6x6( \
		l11, l12, l13, l14, l15, l16, \
		l21, l22, l23, l24, l25, l26, \
		l31, l32, l33, l34, l35, l36, \
		l41, l42, l43, l44, l45, l46, \
		l51, l52, l53, l54, l55,      \
												l66, l65, \
													  	l64, \
										l61, l62, l63, \
		r11, r12, r13, r14, r15, r16, \
		r21, r22, r23, r24, r25, r26, \
		r31, r32, r33, r34, r35, r36, \
		r41, r42, r43, r44, r45, r46, \
		     r52, r53, r54, r55, r56,  \
        r62, r61, \
        r63, \
		r64, r65, r66  \
	) \
	{ \
		{ l11, l12, l13, l14, l15, l16 }, \
		{ l21, l22, l23, l24, l25, l26 }, \
		{ l31, l32, l33, l34, l35, l36 }, \
		{ l41, l42, l43, l44, l45, l46 }, \
		{ l51, l52, l53, l54, l55, KC_NO }, \
		{ l61, l62, l63, l64, l65, l66 }, \
		{ r11, r12, r13, r14, r15, r16 }, \
		{ r21, r22, r23, r24, r25, r26 }, \
		{ r31, r32, r33, r34, r35, r36 }, \
		{ r41, r42, r43, r44, r45, r46 }, \
		{ KC_NO, r52, r53, r54, r55, r56 }, \
		{ r61, r62, r63, r64, r65, r66 } \
	}

#endif
