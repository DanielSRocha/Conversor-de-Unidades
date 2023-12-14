#include <stdio.h>

float temperatura(int opção1, float celcius, float fahrenheit) {
    if(opção1 == 1) {
        float resultado1 = (celcius * 1.8) + 32;

        printf("O valor de %.2fC em F é:%.2f\n\n\n\n", celcius, resultado1); 
    } else if(opção1 == 2) {
        float resultado2 = (fahrenheit - 32) / 1.8;

        printf("O valor de %.2fF em C é:%.2f\n\n\n\n", fahrenheit, resultado2);
    }
}

int main(void) {

    int opção = 1;
    float celcius, fahrenheit;

    while(opção != 0) {
        printf("*****CONVERSOR DE UNIDADES*****\n\n");

        printf("[1] Temperaturas\n");

        printf("opção: ");
        scanf("%d", &opção);

        switch (opção) {
            case 0:
                printf("\n\nObrigado Por utulizar o Conversor de Unidades!!");
                break;

            case 1:
                int opção1;

                printf("\n[1] Celcius para Fahrenheit\n");
                printf("[2] Fahrenheit para Celcius");

                printf("\nopção: ");
                scanf("%d", &opção1);
                
                if(opção1 == 1) {

                    printf("\nDigite o valor em Celcius: ");
                    scanf("%f", &celcius);

                    celcius = temperatura(opção1, celcius, fahrenheit);
                
                } else if(opção1 == 2){

                    printf("Digite o valor em Fahrenheit: ");
                    scanf("%f", &fahrenheit);

                    fahrenheit = temperatura(opção1, celcius, fahrenheit);
                } else {
                    printf("Opção invalida!!\n\n\n\n");
                }
        }
    }
}