#include<stdio.h>

int main() {
    //variableType variableName;
    int variable1 = -10;
    unsigned int  variable2 = 15;
    float variable7 = 3.5f;
    double variable8 = 2e10;
    long double variable9 = 5.5;
    char variable10 = 'c';

    printf("print value of %%d and %%i: %d, %i\n", variable1, variable2);
    printf("print value of %%u: %u, %u\n", variable1, variable2);
    printf("print value of %%o, %%x, %%X: %o, %x, %X\n", variable1, variable1, variable1);
    printf("print value of %%f, %%F, %%e, %%E, %%g and %%G: %f, %F, %e, %E, %g, %G\n", variable7, variable7, variable7, variable7, variable7, variable8);
    printf("print value of %%c, %%s: %c, %s\n", variable10, "message");
}
