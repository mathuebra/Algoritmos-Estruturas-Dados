#include <stdio.h>

void dec2bin(int dec) {

    //if (dec == 0) printf("0");
    if (dec >= 1) 
    {
        dec2bin(dec/2);

        printf("%d", dec%2);
    }
}

int main() {

    int input_decimal;

    printf("Digite um numero inteiro: ");
    scanf("%d", &input_decimal);

    printf("Resultado: ");
    dec2bin(input_decimal);
}