#include <stdio.h> 

int congHaiSo(int soThu1, int soThu2);
int nhanHaiSo(int soThu1, int soThu2);

int main() { 
    int number1 = 10;
    int number2 = 30;
    
    int resultOfCongHaiSo = congHaiSo(number1, number2);
    printf("Ket qua cua CongHaiSo: %d\n", resultOfCongHaiSo);

    printf("Ket qua cua CongHaiSo: %d\n", nhanHaiSo(number1, number2));
}

int congHaiSo(int soThu1, int soThu2) {
    int ketQua = soThu1 + soThu2;
    return ketQua;
}

int nhanHaiSo(int soThu1, int soThu2) {
    int ketQua = soThu1 * soThu2;
    return ketQua;
}
