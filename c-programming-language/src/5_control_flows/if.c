#include <stdio.h>

int main() {
    int myMoney = 5;
    int yourMoney = 10;

    printf("My money is %d$\n", myMoney);
    if(myMoney > 7)
        printf("I have money to buy Icecream");

    printf("Your money is %d$\n", yourMoney);
    if(yourMoney > 7) {
        printf("You have money to buy Icecream\n");
        printf("And can I borrow you %d$\n", (yourMoney - 7));
    }
}
