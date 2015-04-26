#include <stdio.h>
#include "console.h"

void printMain() {
    printWithPlace("Main");
}

void printToilet() {
    printWithPlace("Toilet");
}

void printWithPlace(char* place) {
    printf("Prin from: %s\n", place);
}
