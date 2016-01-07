/*
 * Python object definition of the liblnk data flags
 *
 * Copyright (C) 2009-2016, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _PYLNK_DATA_FLAGS_H )
#define _PYLNK_DATA_FLAGS_H

#include <common.h>
#include <types.h>

#include "pylnk_liblnk.h"
#include "pylnk_python.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct pylnk_data_flags pylnk_data_flags_t;

struct pylnk_data_flags
{
	/* Python object initialization
	 */
	PyObject_HEAD
};

extern PyTypeObject pylnk_data_flags_type_object;

int pylnk_data_flags_init_type(
     PyTypeObject *type_object );

PyObject *pylnk_data_flags_new(
           void );

int pylnk_data_flags_init(
     pylnk_data_flags_t *pylnk_data_flags );

void pylnk_data_flags_free(
      pylnk_data_flags_t *pylnk_data_flags );

#if defined( __cplusplus )
}
#endif

#endif

