#include <stdio.h>

float Fcelsius(float celsius) {
    float calculo = (celsius * 1.8) + 32;
    printf("%.2f\n", calculo); ///colocar /n nas duas funçoes para ficar bonito no menu
    return calculo;
}

float Ffahrenheit(float fahrenheit) {
    float calculo = (fahrenheit - 32) / 1.8;
    printf("%.2f\n", calculo); ///colocar /n nas duas funçoes para ficar bonito no menu
    return calculo;
}

int main(void) {
    int opção;

    while(opção != 4) {
        printf("\n*****CONVERSOR DE UNIDADES*****\n\n");
    
        printf("[1] Temperaturas\n");
        printf("[2] Comprimento\n");
        printf("[3] Tempo\n");
        printf("[4] Sair\n");
        printf("opção: ");
        scanf("%d", &opção);

        switch(opção) {
            case 1:
                printf("\n\n[1] Celsius para fahrenheit\n");
                printf("[2] Fahrenheit para celsius\n");
                int opçãoTemperatura;
                printf("opção: ");
                scanf("%d", &opçãoTemperatura);

                if(opçãoTemperatura == 1) {
                    float celsius;
                    printf("\nDigite o valor em Celsius: ");
                    scanf("%f", &celsius);
                    float result1 = Fcelsius(celsius);
                } else if(opçãoTemperatura == 2) {
                    float fahrenheit;
                    printf("\nDigite o valor em Fahrenheit: ");
                    scanf("%f", &fahrenheit);
                    float result2 = Ffahrenheit(fahrenheit);
                } else{
                    printf("Opção Invalida!");
                }
            
            case 2:
        }
    }
}