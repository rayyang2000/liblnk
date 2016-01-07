/*
 * Known folder location functions
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

#if !defined( _LIBLNK_KNOWN_FOLDER_LOCATION_H )
#define _LIBLNK_KNOWN_FOLDER_LOCATION_H

#include <common.h>
#include <types.h>

#include "liblnk_data_block.h"
#include "liblnk_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct liblnk_known_folder_location liblnk_known_folder_location_t;

struct liblnk_known_folder_location
{
	/* The folder identifier
	 */
	uint8_t folder_identifier[ 16 ];

	/* The first child segment offset
	 */
	uint32_t first_child_segment_offset;
};

int liblnk_known_folder_location_initialize(
     liblnk_known_folder_location_t **known_folder_location,
     libcerror_error_t **error );

int liblnk_known_folder_location_free(
     liblnk_known_folder_location_t **known_folder_location,
     libcerror_error_t **error );

int liblnk_known_folder_location_read(
     liblnk_known_folder_location_t *known_folder_location,
     liblnk_data_block_t *data_block,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif

