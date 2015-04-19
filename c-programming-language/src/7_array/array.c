#include<stdio.h>

void printStudentId();

int studentIds[5]  = {10, 3, 7, 8, 9};

void main() {
    printStudentId();
    studentIds[3] = 2;
    printStudentId();

    return;
}

void printStudentId() {
    int index;    
    for(index = 0; index < 5; index++) {
        printf("%d ", studentIds[index]);
    }
    printf("\n");
}
