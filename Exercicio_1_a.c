#include <stdio.h>

int Digitos(int N) {

    static int conta_digitos = 1;

    if (N >= 10) {

        N = N/10;

        conta_digitos ++;

        Digitos(N);
    }
    else {
        return conta_digitos;
    }

    return conta_digitos;

}

int main() {

    int input_numero;

    printf("Digite um numero inteiro: ");

    scanf("%d", &input_numero);

    printf("Resultado: %d", Digitos(input_numero));
}