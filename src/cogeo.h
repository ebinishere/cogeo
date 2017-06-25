/*************************************************************************************************
 * cogeo.h -- Module includes
 *
 * Author: Ebin Baby
 *
 * Copyright: 2017 - Ebin Baby
 *
 *************************************************************************************************/

#include <GenericTypeDefs.h>

#ifndef COGEO_H_INCLUDED
#define COGEO_H_INCLUDED

#define 		COGEO_AXISPOINTS_MAX		10

struct cogeo_lookup_1d_s
{
	UINT8	axispoints;	// Axis points
	FLOAT*	xdata;	    // X-Axis points
	FLOAT*	ydata;	    // Y-Axis points
};
typedef struct cogeo_lookup_1d_s cogeo_lookup_1d_t;

FLOAT cogeo_lookup_1d(FLOAT input, cogeo_lookup_1d_t* table);

#ifdef DEBUG
    //	Debug define here
#endif

#ifdef RELEASE
    //	Release define here
#endif

#endif // COGEO_H_INCLUDED
