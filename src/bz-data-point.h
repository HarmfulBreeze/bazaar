/* bz-data-point.h
 *
 * Copyright 2025 Adam Masciola
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#pragma once

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define BZ_TYPE_DATA_POINT (bz_data_point_get_type ())
G_DECLARE_FINAL_TYPE (BzDataPoint, bz_data_point, BZ, DATA_POINT, GObject)

BzDataPoint *
bz_data_point_new (void);

double
bz_data_point_get_independent (BzDataPoint *self);

double
bz_data_point_get_dependent (BzDataPoint *self);

const char *
bz_data_point_get_label (BzDataPoint *self);

void
bz_data_point_set_independent (BzDataPoint *self,
    double independent);

void
bz_data_point_set_dependent (BzDataPoint *self,
    double dependent);

void
bz_data_point_set_label (BzDataPoint *self,
    const char *label);

G_END_DECLS

/* End of bz-data-point.h */
