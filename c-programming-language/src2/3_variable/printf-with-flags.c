#include <stdio.h>

int main() {
    int variable1 = -10;
    unsigned int  variable2 = 15;
    int variable11 = 0x7;

    printf("Value of %%10d: %10d\n", 1);
    printf("Value of %%-10d: %-10d\n", 2);
    printf("Value of %%+d and %%+d: %+d and %+d\n", variable1, variable2);
    printf("Value of %% d and %% d: % d and % d\n", variable1, variable2); 
    printf("Value of %%#g and %%#x: %#g and %#x\n", variable2, variable11); 
}
