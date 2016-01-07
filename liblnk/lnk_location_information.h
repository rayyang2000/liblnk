/*
 * The location information definition of a Windows Shortcut File (LNK)
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

#if !defined( _LNK_LOCATION_INFORMATION_H )
#define _LNK_LOCATION_INFORMATION_H

#include <common.h>
#include <types.h>

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct lnk_location_information lnk_location_information_t;

struct lnk_location_information
{
	/* The size of the location information header
	 * Consists of 4 bytes
	 */
	uint8_t header_size[ 4 ];

	/* The location flags
	 * Consists of 4 bytes
	 */
	uint8_t location_flags[ 4 ];

	/* The offset of the volume information
	 * Consists of 4 bytes
	 */
	uint8_t volume_information_offset[ 4 ];

	/* The offset of the local path
	 * Consists of 4 bytes
	 */
	uint8_t local_path_offset[ 4 ];

	/* The offset of the network share information
	 * Consists of 4 bytes
	 */
	uint8_t network_share_information_offset[ 4 ];

	/* The offset of the common path
	 * Consists of 4 bytes
	 */
	uint8_t common_path_offset[ 4 ];

	/* The following values are only available if the header size > 28
	 */

	/* The offset of the unicode local path
	 * Consists of 4 bytes
	 */
	uint8_t unicode_local_path_offset[ 4 ];

	/* The following values are only available if the header size > 32
	 */

	/* The offset of the unicode common path
	 * Consists of 4 bytes
	 */
	uint8_t unicode_common_path_offset[ 4 ];
};

typedef struct lnk_volume_information lnk_volume_information_t;

struct lnk_volume_information
{
	/* The size of the volume information
	 * Consists of 4 bytes
	 */
	uint8_t size[ 4 ];

	/* The drive type
	 * Consists of 4 bytes
	 */
	uint8_t drive_type[ 4 ];

	/* The drive serial number
	 * Consists of 4 bytes
	 */
	uint8_t drive_serial_number[ 4 ];

	/* The offset of the volume label
	 * Consists of 4 bytes
	 */
	uint8_t volume_label_offset[ 4 ];

	/* The following values are only available if the volume label offset > 16
	 */

	/* The offset of the unicode volume label
	 * Consists of 4 bytes
	 */
	uint8_t unicode_volume_label_offset[ 4 ];
};

typedef struct lnk_network_share_information lnk_network_share_information_t;

struct lnk_network_share_information
{
	/* The size of the network share information
	 * Consists of 4 bytes
	 */
	uint8_t size[ 4 ];

	/* The network share type
	 * Consists of 4 bytes
	 */
	uint8_t network_share_type[ 4 ];

	/* The offset of the network share name
	 * Consists of 4 bytes
	 */
	uint8_t network_share_name_offset[ 4 ];

	/* The offset of the device name
	 * Consists of 4 bytes
	 */
	uint8_t device_name_offset[ 4 ];

	/* The network provide type
	 * Consists of 4 bytes
	 */
	uint8_t network_provider_type[ 4 ];

	/* The following values are only available if the network share name offset > 20
	 */

	/* The offset of the unicode network share name
	 * Consists of 4 bytes
	 */
	uint8_t unicode_network_share_name_offset[ 4 ];

	/* The offset of the unicode device name
	 * Consists of 4 bytes
	 */
	uint8_t unicode_device_name_offset[ 4 ];
};

#if defined( __cplusplus )
}
#endif

#endif

