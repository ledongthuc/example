#include <stdio.h>

int main() {
   int number;
   number = 5;
   int result1 = number++;
   number = 5;
   int result2 = ++number; 
   printf("Value of number++ is %d\n", result1 );
   printf("Value of ++number is %d\n", result2 );

}
