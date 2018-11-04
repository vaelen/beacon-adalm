/*
	Copyright 2018, Andrew C. Young <andrew@vaelen.org>

    This file is part of Adalm-Beacon

    Adalm-Beacon is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Adalm-Beacon is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Adalm-Beacon.  If not, see <https://www.gnu.org/licenses/>.

*/

#include "../config.h"

#include <assert.h>
#include <stdio.h>
#include <math.h>
#include <complex.h>

#define PI 3.14159265

double generate_signal(int freq, double amplitude, long samp_rate, complex *iq, int iq_len, double start);
void write_iq(FILE *out, complex *iq, int iq_len);