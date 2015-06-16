#include<stdio.h>

extern int number1;
extern int number2;

extern int multiple2Values() {
    printf("Begin call function multiple2Values() in extern_math.c\n");
    return number1 * number2;
}
