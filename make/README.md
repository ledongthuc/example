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


