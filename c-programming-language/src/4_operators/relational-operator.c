#include <stdio.h>

int main() {
    int number1 = 10;
    int number2 = 5;
    int number3 = 10;

    printf("Value of number1 == number2: %d\n", number1 == number2);
    printf("Value of number1 == number3: %d\n", number1 == number3);
    printf("Value of number1 == number3: %d\n", number1 == number3);
    printf("Value of number1 != number2: %d\n", number1 != number2);
    printf("Value of number1 != number3: %d\n", number1 != number3);
    printf("Value of number1 > number2: %d\n", number1 > number2);
    printf("Value of number1 > number3: %d\n", number1 > number3);
    printf("Value of number2 < number3: %d\n", number2 < number3);
    printf("Value of number3 < number2: %d\n", number3 < number2);
    printf("Value of number1 >= number2: %d\n", number1 >= number2);
    printf("Value of number1 >= number3: %d\n", number1 >= number3);
    printf("Value of number2 <= number3: %d\n", number2 <= number3);
    printf("Value of number1 <= number3: %d\n", number1 <= number3);


}
