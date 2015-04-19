#include <stdio.h>

int main() {
    int myMark = 9;
    

    printf("My mark is %d\n", myMark);

    switch(myMark) {
        case 10:
            printf("My rewards is a PSP\n");
            break;
        case 9:
            printf("My rewards is a bicycle\n");
            break;
        case 8:
            printf("My rewards is a T-shirt\n");
            break;
        default:
            printf("My rewards is a IceCream\n");
    }
}
