#include<stdio.h>

extern int number1 = 10;
extern int number2 = 3;
extern int multiple2Values();

void main() {
    printf("Begin call function main() in extern_main.c\n");

    int result = multiple2Values();
    printf("** Result is %d\n", result);
}
