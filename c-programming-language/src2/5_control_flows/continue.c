#include <stdio.h>

int main() {
    int counter;
    for(counter = 1; counter < 7; counter++) {
        if(counter == 3) {
            printf("We call continue and you won't see counter = 3\n");
            continue;
        }
        
        printf("Number of counter: %d\n", counter);        
    }
}
