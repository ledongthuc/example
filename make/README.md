# Make's notes

## Example 1: Simple
Simple make file.
``` makefile
home : main.o console.o toilet.o
	cc -o home main.o console.o toilet.o
main.o : main.c console.h toilet.h
	cc -c main.c
toilet.o : toilet.c console.h
	cc -c toilet.c
console.o : console.c
	cc -c console.c
clean :
	rm home main.o console.o toilet.o
```

## Example 2: Compact
Make auto know what source file to build object file.
``` makefile
objects = main.o console.o toilet.o

home : $(objects)
	cc -o home $(objects)

main.o : console.h toilet.h
toilet.o : console.h
console.o :
clean :
	rm home $(objects)
```

## Example 3: More Compact
More compact, we only need to define prerequisites to build object files.
``` makefile
objects = main.o console.o toilet.o

home : $(objects)
	cc -o home $(objects)

$(objects) : console.h
main.o : toilet.h
clean :
	rm home $(objects)
```

## Example 4: Include another makefile
Makefile structure allows include another one
Makefile
``` makefile
test1 : test2
	echo "create test1" > test1

include Makefile2

clean :
	rm test1 test2
```

Makefile
``` makefile
test2 : 
	echo "create test2" > test2
```

## Example 5: Two makefile with same target
Makefile allows more makefile with same target (different behaviors)
``` makefile
text1: 
	echo content1 > text1

text2: force
	@$(MAKE) -f Makefile2 $@

force: ;

clear: 
	rm text1 text2
```

Makefile
``` makefile
text2: 
	echo content2 > text1
```
