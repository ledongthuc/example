#include <stdio.h> 

void printLocalVariable();

int main() {
    int numberone = 1;
    printf("Function main, before invoke print, variable = %d\n", numberone);
    printLocalVariable();
    printf("Function main, before invoke print, variable = %d\n", numberone);    
}

void printLocalVariable() {
    int numberone = 2;
    printf("Function printLocalVariable, variable = %d\n", numberone);
}
