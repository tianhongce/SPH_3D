/** File:		sph_type.h
** Author:		Dongli Zhang
** Contact:	dongli.zhang0129@gmail.com
**
** Copyright (C) Dongli Zhang 2013
**
** This program is free software;  you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY;  without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
** the GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program;  if not, write to the Free Software
** Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

#ifndef __SPHTYPE_H__
#define __SPHTYPE_H__

typedef unsigned int uint;

struct float3
{
	float x;
	float y;
	float z;
};

struct int3
{
	int x;
	int y;
	int z;
};

struct uint3
{
	uint x;
	uint y;
	uint z;
};

#endif
