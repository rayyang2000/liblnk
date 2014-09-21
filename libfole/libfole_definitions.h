/*
 * The internal definitions
 *
 * Copyright (C) 2008-2014, Joachim Metz <joachim.metz@gmail.com>
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

#if !defined( LIBFOLE_INTERNAL_DEFINITIONS_H )
#define LIBFOLE_INTERNAL_DEFINITIONS_H

#include <common.h>
#include <types.h>

/* Define HAVE_LOCAL_LIBFOLE for local use of libfole
 */
#if !defined( HAVE_LOCAL_LIBFOLE )
#include <libfole/definitions.h>

/* The definitions in <libfole/definitions.h> are copied here
 * for local use of libfole
 */
#else
#include <byte_stream.h>

#define LIBFOLE_VERSION			20130217

/* The libfole version string
 *  */
#define LIBFOLE_VERSION_STRING		"20130217"

/* The endian definitions
 */
#define LIBFOLE_ENDIAN_BIG		_BYTE_STREAM_ENDIAN_BIG
#define LIBFOLE_ENDIAN_LITTLE		_BYTE_STREAM_ENDIAN_LITTLE

#endif

/* OLE property variant type definitions
 */
#define VT_EMPTY			0x0000
#define VT_NULL				0x0001
#define VT_I2				0x0002
#define VT_I4				0x0003
#define VT_R4				0x0004
#define VT_R8				0x0005
#define VT_CY				0x0006
#define VT_DATE				0x0007
#define VT_BSTR				0x0008
#define VT_DISPATCH			0x0009
#define VT_ERROR			0x000a
#define VT_BOOL				0x000b
#define VT_VARIANT			0x000c
#define VT_UNKNOWN			0x000d
#define VT_DECIMAL			0x000e

#define VT_I1				0x0010
#define VT_UI1				0x0011
#define VT_UI2				0x0012
#define VT_UI4				0x0013
#define VT_I8				0x0014
#define VT_UI8				0x0015
#define VT_INT				0x0016
#define VT_UINT				0x0017
#define VT_VOID				0x0018
#define VT_HRESULT			0x0019
#define VT_PTR				0x001a
#define VT_SAFEARRAY			0x001b
#define VT_CARRAY			0x001c
#define VT_USERDEFINED			0x001d
#define VT_LPSTR			0x001e
#define VT_LPWSTR			0x001f

#define VT_FILETIME			0x0040
#define VT_BLOB				0x0041
#define VT_STREAM			0x0042
#define VT_STORAGE			0x0043
#define VT_STREAMED_OBJECT		0x0044
#define VT_STORED_OBJECT		0x0045
#define VT_BLOB_OBJECT			0x0046
#define VT_CF				0x0047
#define VT_CLSID			0x0048
#define VT_VERSIONED_STREAM		0x0049

/* OLE property variant type flags
 */
#define	VT_VECTOR			0x1000
#define	VT_ARRAY			0x2000
#define	VT_BYREF			0x4000
#define	VT_RESERVED			0x8000

/* OLE vector property variant type definitions
 */

#endif

