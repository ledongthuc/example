#include <stdio.h>

int main() {
    int myMark = 9;
    

    printf("My mark is %d\n", myMark);

    switch(myMark) {
        case 10:
            printf("My rewards include a PSP\n");
        case 9:
            printf("My rewards include a bicycle\n");
        case 8:
            printf("My rewards include a T-shirt\n");
        default:
            printf("My rewards include a IceCream\n");
    }
}
