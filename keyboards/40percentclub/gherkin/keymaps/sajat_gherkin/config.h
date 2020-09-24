#pragma once
#define TAPPING_TERM 175
// place overrides here
/* Make layout upside down = USB port on left side */
#undef MATRIX_ROW_PINS
#undef MATRIX_COL_PINS
#define MATRIX_ROW_PINS { B6, B2, B3, B1, F7 }
#define MATRIX_COL_PINS { D0, D4, C6, D7, E6, B4 }
//#define UNICODE_SELECTED_MODES UC_WINC, UC_WIN
#define COMBO_COUNT 8
#define COMBO_TERM 70
