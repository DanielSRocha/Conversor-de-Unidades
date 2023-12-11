#include <stdio.h>

float Fcelsius(float celsius) {
    float calculo = (celsius * 1.8) + 32;
    printf("%2.f", calculo);
    return calculo;
}

float Ffahrenheit(float fahrenheit) {
    float calculo = (fahrenheit - 32) / 1.8;
    printf("%2.f", calculo);
    return calculo;
}

int main(void) {
    float celsius = 5;
    float fahrenheit = 50;
    int opção = 1;

    if(opção == 1) {
        float resultado = Fcelsius(celsius);
    } else if(opção == 2) {
        float resultado = Ffahrenheit(fahrenheit);
    }

    return 0;
}