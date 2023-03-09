#include <stdio.h>

int mult(int base, int exp) 
{
    static int resultado = 1;
    
    if (exp != 0) {
        resultado = resultado * base;

        exp --;

        mult(base, exp);
    }

    return resultado;

}
int main()
{
    int input_base, input_exp;

    printf("Digite a base e o expoente inteiros: ");
    scanf("%d %d", &input_base, &input_exp);

    printf("Resultado: %d", mult(input_base, input_exp));
}
