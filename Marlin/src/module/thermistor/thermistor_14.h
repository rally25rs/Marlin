/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// beta25 = 4092 K, R25 = 50 kOhm, Pull-up = 4.7 kOhm, "TDK NTC B57540G 8403"
// Datasheet: https://www.tdk-electronics.tdk.com.cn/inf/50/db/ntc_09/Glass_enc_Sensors__B57540__G540__G1540.pdf
// Generated using Marlin 2.0 Thermistor Table Generator https://www.thingiverse.com/thing:3300383
const short temptable_13[][2] PROGMEM = {
  { OV(  6.07),  350 },
  { OV(  6.43),  345 },
  { OV(  6.84),  340 },
  { OV(  7.27),  335 },
  { OV(  7.74),  330 },
  { OV(  8.26),  325 },
  { OV(  8.80),  320 },
  { OV(  9.40),  315 },
  { OV( 10.05),  310 },
  { OV( 10.76),  305 },
  { OV( 14.17),  300 },
  { OV( 15.13),  295 },
  { OV( 16.16),  290 },
  { OV( 17.28),  285 },
  { OV( 18.50),  280 },
  { OV( 19.83),  275 },
  { OV( 21.28),  270 },
  { OV( 22.86),  265 },
  { OV( 24.59),  260 },
  { OV( 26.48),  255 },
  { OV( 28.55),  250 },
  { OV( 30.82),  245 },
  { OV( 33.31),  240 },
  { OV( 36.05),  235 },
  { OV( 39.06),  230 },
  { OV( 42.38),  225 },
  { OV( 46.03),  220 },
  { OV( 50.07),  215 },
  { OV( 54.53),  210 },
  { OV( 59.46),  205 },
  { OV( 64.92),  200 },
  { OV( 70.96),  195 },
  { OV( 77.67),  190 },
  { OV( 85.10),  185 },
  { OV( 93.36),  180 },
  { OV(102.52),  175 },
  { OV(112.69),  170 },
  { OV(123.97),  165 },
  { OV(136.49),  160 },
  { OV(150.38),  155 },
  { OV(165.76),  150 },
  { OV(182.76),  145 },
  { OV(201.52),  140 },
  { OV(222.18),  135 },
  { OV(244.86),  130 },
  { OV(269.64),  125 },
  { OV(296.62),  120 },
  { OV(325.83),  115 },
  { OV(357.26),  110 },
  { OV(390.83),  105 },
  { OV(426.40),  100 },
  { OV(463.75),  95 },
  { OV(502.59),  90 },
  { OV(542.53),  85 },
  { OV(583.08),  80 },
  { OV(623.77),  75 },
  { OV(664.04),  70 },
  { OV(703.33),  65 },
  { OV(741.12),  60 },
  { OV(776.94),  55 },
  { OV(810.38),  50 },
  { OV(841.15),  45 },
  { OV(869.05),  40 },
  { OV(893.99),  35 },
  { OV(915.98),  30 },
  { OV(935.10),  25 },
  { OV(951.52),  20 },
  { OV(965.45),  15 },
  { OV(977.11),  10 },
  { OV(986.78),  5 },
  { OV(994.69),  0 },
  { OV(1001.06), -5 },
  { OV(1006.17), -10 },
  { OV(1010.22), -15 },
  { OV(1013.40), -20 },
  { OV(1015.86), -25 },
  { OV(1017.76), -30 }
};
