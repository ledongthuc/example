#include <stdio.h> 

void printLocalVariable();
int numberone = 5;

int main() {
    printf("Function main, before invoke print, variable = %d\n", numberone);
    printLocalVariable();
    printf("Function main, before invoke print, variable = %d\n", numberone);    
}

void printLocalVariable() {
    int numberone = 2;
    printf("Function printLocalVariable, variable = %d\n", numberone);
}
