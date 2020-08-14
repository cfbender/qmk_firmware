/* Copyright 2020 cfbender
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

#define XXX KC_NO

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT_ansi( \
    K00,      K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C,    K0D,        K0E, K0F, K0G,         K0H, K0I, K0J, K0K,   \
    K10,  K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,   K1D,        K1E, K1F, K1G,         K1H, K1I, K1J, K1K,   \
    K20,   K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C,  K2D,        K2E, K2F, K2G,         K2H, K2I, K2J,        \
    K30,    K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D,                               K3H, K3I, K3J, K3K,   \
    K40,     K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B,          K4C,             K4F,              K4H, K4I, K4J,        \
    K50, K51, K52,                   K56,                K5A, K5B, K5C, K5D,        K5E, K5F, K5G,         K5H,      K5J, K5K   \
) \
{ \
    { K00, XXX, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H, K0I, K0J, K0K },\
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K },\
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, XXX },\
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, XXX, K3D, XXX, XXX, XXX, K3H, K3I, K3J, K3K },\
    { K40, XXX, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, XXX, XXX, K4F, XXX, K4H, K4I, K4J, XXX },\
    { K50, K51, K52, XXX, XXX, XXX, K56, XXX, XXX, XXX, K5A, K5B, K5C, K5D, K5E, K5F, K5G, K5H, XXX, K5J, K5K } \
}
