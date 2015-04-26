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
