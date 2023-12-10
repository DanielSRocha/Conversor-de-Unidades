#include <stdio.h>

float temperatura(int opção, float celsius) {
    float calculo = (celsius * 1.8) + 32;
    printf("%2.f", calculo);
    return calculo;
}

int main(void) {
    float celsius = 5;
    int opção = 1;

    if(opção == 1) {
        float resultado = temperatura(opção, celsius);
    } else {
        printf("Erro");
    }

    return 0;
}