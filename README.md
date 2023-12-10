# Conversor de Temperatura (Celsius para Fahrenheit)
Este é um simples programa em C que realiza a conversão de temperatura de Celsius para Fahrenheit.
## Estrutura do Projeto
O projeto consiste em um arquivo-fonte principal (main.c) e inclui a seguinte estrutura:
### main.c
Este arquivo contém o código principal do programa. Aqui, a função temperatura é definida para realizar o cálculo de conversão e imprimir o resultado no console. A função main inicializa uma temperatura em graus Celsius (5) e uma opção (1). Se a opção for 1, a função de conversão é chamada; caso contrário, é exibida a mensagem "Erro". O programa imprime o resultado formatado no console e retorna 0.
## Como Executar
Para executar o programa, basta compilar o arquivo main.c usando um compilador C padrão, como o GCC. Em seguida, execute o arquivo compilado.

Exemplo de compilação (no terminal):
``` bash
gcc main.c -o conversor_temperatura
```
Exemplo de execução:
``` bash
./conversor_temperatura
```
## Nota
O código atual tem uma limitação: a opção de conversão está fixa em 1. Para tornar o programa mais flexível, seria necessário modificar o código para permitir que o usuário escolha diferentes opções de conversão.

Sinta-se à vontade para contribuir ou aprimorar este projeto!
