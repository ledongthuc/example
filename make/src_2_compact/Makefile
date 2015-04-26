objects = main.o console.o toilet.o

home : $(objects)
	cc -o home $(objects)

main.o : console.h toilet.h
toilet.o : console.h
console.o :
clean :
	rm home $(objects)
