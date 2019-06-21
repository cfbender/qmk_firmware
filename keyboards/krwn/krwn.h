#pragma once

#include "quantum.h"

#define LAYOUT_krwn( \
    K00,  K01,  K02,  K03,  K04,  K05,  K06,  K07,  K08,  K09,  K0A,  K0B,  K0C,  K0D,  K0E,  K0F,  K0G,  K0H, \
    K10,  K11,  K12,  K13,  K14,  K15,  K16,  K17,  K18,  K19,  K1A,  K1B,  K1C,  K1D,  K1E,  K1F,  K1H, \
    K20,  K21,  K22,  K23,  K24,  K25,  K26,  K27,  K28,  K29,  K2A,  K2B,  K2C,  K2D,  K2E, K2H, \
    K30,  K31,  K32,  K33,  K34,  K35,  K36,  K37,  K38,  K39,  K3A,  K3B,  K3C,  K3D,  K3G, K3H, \
    K40,  K41,  K42,  K43,  K44,  K47,  K4C,  K4F,  K4G, K4H \
) {  \
    {K00,  K01,  K02,  K03,  K04,  K05,  K06,  K07,  K08,  K09,  K0A,  K0B,  K0C,  K0D,  K0E,  K0F,  K0G,  K0H},    \
    {K10,  K11,  K12,  K13,  K14,  K15,  K16,  K17,  K18,  K19,  K1A,  K1B,  K1C,  K1D,  K1E,  K1F, KC_NO, K1H},        \
    {K20,  K21,  K22,  K23,  K24,  K25,  K26,  K27,  K28,  K29,  K2A,  K2B,  K2C,  K2D,  K2E,   KC_NO, KC_NO, K2H},      \
    {K30,  K31,  K32,  K33,  K34,  K35,  K36,  K37,  K38,  K39,  K3A,  K3B,  K3C,  K3D,  KC_NO,  KC_NO, K3G, K3H},          \
    {K40,  K41,  K42,  K43,  K44,  KC_NO, KC_NO, K47, KC_NO, KC_NO, KC_NO, KC_NO, K4C, KC_NO, KC_NO,  K4F,  K4G, K4H}        \
}
