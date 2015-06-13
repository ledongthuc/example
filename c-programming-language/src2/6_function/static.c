#include <stdio.h> 

void printLocalVariable();
void printStaticLocalVariable();

int main() {
    printLocalVariable();
    printLocalVariable();
    printStaticLocalVariable();
    printStaticLocalVariable();
    printLocalVariable();
    printStaticLocalVariable();
}

void printLocalVariable() {
    int numberone = 2;
    printf("Function printLocalVariable, variable = %d\n", numberone);
}

void printStaticLocalVariable() {
    static int numberone = 2;
    printf("Function printStaticLocalVariable, variable = %d\n", numberone);
    numberone = numberone + 5;
}
