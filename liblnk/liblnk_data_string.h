/*
 * Data string functions
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

#if !defined( _LIBLNK_DATA_STRING_H )
#define _LIBLNK_DATA_STRING_H

#include <common.h>
#include <types.h>

#include "liblnk_io_handle.h"
#include "liblnk_libbfio.h"
#include "liblnk_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct liblnk_data_string liblnk_data_string_t;

struct liblnk_data_string
{
	/* Value to indicate if the string data is in Unicode (UTF-16 little-endian)
	 */
	uint8_t is_unicode;

	/* The data
	 */
	uint8_t *data;

	/* The data size
	 */
	size_t data_size;
};

int liblnk_data_string_initialize(
     liblnk_data_string_t **data_string,
     libcerror_error_t **error );

int liblnk_data_string_free(
     liblnk_data_string_t **data_string,
     libcerror_error_t **error );

ssize_t liblnk_data_string_read(
         liblnk_data_string_t *data_string,
         liblnk_io_handle_t *io_handle,
         libbfio_handle_t *data_string_io_handle,
         off64_t data_string_offset,
         libcerror_error_t **error );

int liblnk_data_string_get_utf8_string_size(
     liblnk_data_string_t *data_string,
     int ascii_codepage,
     size_t *utf8_string_size,
     libcerror_error_t **error );

int liblnk_data_string_get_utf8_string(
     liblnk_data_string_t *data_string,
     int ascii_codepage,
     uint8_t *utf8_string,
     size_t utf8_string_size,
     libcerror_error_t **error );

int liblnk_data_string_get_utf16_string_size(
     liblnk_data_string_t *data_string,
     int ascii_codepage,
     size_t *utf16_string_size,
     libcerror_error_t **error );

int liblnk_data_string_get_utf16_string(
     liblnk_data_string_t *data_string,
     int ascii_codepage,
     uint16_t *utf16_string,
     size_t utf16_string_size,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif

