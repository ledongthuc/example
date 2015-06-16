# Assert.h

Assert.h is one of standard library in C. It's provide way to verify assumtions. If assumtion is fail, it's print a diagnostic message.

```c
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
```
*Output:*

> a.out: ../main.c:15: main: Assertion `10 > 11' failed.
