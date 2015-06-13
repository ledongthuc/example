#include <stdio.h> 

double usdToVND(double usdValue);

double usdToVnRate = 21000;

int main() {
    double usd =  5;
    printf("Current USD to VND rate: %.1f\n", usdToVnRate);
    double vnd = usdToVND(usd);
    printf("%.1f USD is %.1f VND\n", usd, vnd);
}

double usdToVND(double usdValue) {
    int usdResult = usdValue * usdToVnRate;
    return usdResult;
}
