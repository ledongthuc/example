objects = main.o console.o toilet.o

home : $(objects)
	cc -o home $(objects)

$(objects) : console.h
main.o : toilet.h
clean :
	rm home $(objects)
