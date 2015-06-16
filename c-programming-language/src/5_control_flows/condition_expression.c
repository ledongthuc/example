#include <stdio.h>

int main() {
    int myMoney = 5;
    (myMoney > 7) ? printf("I have money to buy Icecream\n") : printf("I don't have money to buy Icecream\n");
    
    int yourMoney = 3;
    myMoney = (yourMoney > 0) ? (myMoney + yourMoney) : myMoney;
    printf("My money at this time: %d\n", myMoney);
}
