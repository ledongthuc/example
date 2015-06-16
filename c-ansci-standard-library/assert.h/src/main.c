#include <assert.h>

/*
 * main.c
 *
 *  Created on: Jun 16, 2015
 *      Author: chp
 *
 *  Use to example assert library
 */

int main() {
	assert(10 < 11); 	// pass.
	assert(10 == 10); 	// pass.
	assert(10 > 11);	// fail and through error to standard screen.
}
