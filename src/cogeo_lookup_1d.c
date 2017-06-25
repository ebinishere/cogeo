/*************************************************************************************************
 * srv.c -- Module routines
 *
 * Author: Ebin Baby
 *
 * Copyright: 2011 - Ebin Baby
 *
 * Warning: Nil
 *
 * Algorithm: Service Libraries
 *
 *************************************************************************************************/

#include "cogeo.h"

FLOAT cogeo_lookup_1d(FLOAT input, cogeo_lookup_1d_t* table);
{
	UINT8 index;
	FLOAT val;

	for(index=1; (index<(table->axispoints) && (index<(COGEO_AXISPOINTS_MAX)); index++)
	{
		/* Find the interval, monotonously increasing expected */
		if( input > (table->xdata[index-1]) &&
			input < (table->xdata[index]) )
			
			break;
		
	}

    /* y = (y2 - y1)(x - x1)/(x2 - x1) + y1 */
	val = (table->ydata[index+1] - table->ydata[index]);
	val = val / (table->xdata[index+1] - table->xdata[index]);

	return(((slope * (input - table->xdata[index]))) + table->ydata[index]);

}
