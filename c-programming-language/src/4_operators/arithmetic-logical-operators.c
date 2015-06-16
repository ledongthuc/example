#include <stdio.h>

int main() {
   
    printf("Value of (1 > 0) && (10 < 12): %d\n", ((1 > 0) && (10 < 12)));
    printf("Value of (1 > 0) || (10 > 12): %d\n", ((1 > 0) || (10 > 12)));
    printf("Value of !((1 > 0) && (10 < 12)): %d\n", !(((1 > 0) && (10 < 12))));
    printf("Value of !((1 > 0) || (10 > 12)): %d\n", !(((1 > 0) || (10 > 12))));

    return 0;
}
