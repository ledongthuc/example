# Make's notes

Make overview
> Tool for compiling excuable file automatically.
> Give commands for compile.
> Determines what is changed in large program need to be recompiled.
> GNU
> Richard Stallman and Roland McGrath.
> Use for all programming language.
> Make use makefile as program that describes what and how will be described.
> After creating makefile, type "make" to excute.
> Make base on database and last-modification.

Introduction to makefiles
> Structure of makefile
>> Makefile consists of rules with folliwng structure
``` Makefile
    target ... : prerequisites ...
        recipe
        ...
        ...
```
>> Target is file that you want to generate to. Target can also be the name of action like "clean". Simpler, it's target of a rule.
>> Prerequisites is files that you need to complete the target. Some target need greater than one prerequisite.
>> Recipe is commands or action what act to complete target. We should put 'Tab' at prefix of receipe. To complete a target, a rule can consist many recipes.
>> In a makefile, we have many rules.
``` Makefile
    target ... : prerequisites ...
        recipe
        ...
        ...

    target ... : prerequisites ...
        recipe
        ...
        ...
```

> Simple makefile
>> After beginning details, we discover a simple makefile example. \
>> We need to build an application named 'office' that need link object file of 'main.o' 'editor.o', 'command.o' and 'layout.o'. We have 4 source file main.c, editor.c, command.c, laout.c and 2 header file common.h and buffer.h. common.h is used in three source file and buffer.h is used in editor.c.
``` Makefile
    office : main.o command.o layout.o editor.o
        cc -o office main.o command.o layout.o editor.o
    
    main.o : main.c
        cc -c main.c

    command.o : command.c common.h
        cc -c command.c

    editor.o : editor.c common.h buffer.h
        cc -c editor.c

    layout.o : layout.c common.h
        cc -c layout.c

    clean :
        rm main.o command.o layout.o editor.o office
```

> type 'make' to generate office application and 'make clean' to delete object file and excuable file.

> How make read makefiles
> Variable
> Automatic detect
> More automatic
> Simple clean
