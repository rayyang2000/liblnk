/*
 * Python object definition of the liblnk file attribute flags
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

#if !defined( _PYLNK_FILE_ATTRIBUTE_FLAGS_H )
#define _PYLNK_FILE_ATTRIBUTE_FLAGS_H

#include <common.h>
#include <types.h>

#include "pylnk_liblnk.h"
#include "pylnk_python.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct pylnk_file_attribute_flags pylnk_file_attribute_flags_t;

struct pylnk_file_attribute_flags
{
	/* Python object initialization
	 */
	PyObject_HEAD
};

extern PyTypeObject pylnk_file_attribute_flags_type_object;

int pylnk_file_attribute_flags_init_type(
     PyTypeObject *type_object );

PyObject *pylnk_file_attribute_flags_new(
           void );

int pylnk_file_attribute_flags_init(
     pylnk_file_attribute_flags_t *pylnk_file_attribute_flags );

void pylnk_file_attribute_flags_free(
      pylnk_file_attribute_flags_t *pylnk_file_attribute_flags );

#if defined( __cplusplus )
}
#endif

#endif

