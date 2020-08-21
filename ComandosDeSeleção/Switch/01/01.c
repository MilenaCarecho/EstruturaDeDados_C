/*
Escreva um programa em que o usuário insira um número
qualquer. Se o número digitado for um da tabela abaixo, o
programa deve retornar os caracteres indicados, senão, o
programa deve retornar o caractere 0 (zero). Utilize o comando
switch.
Entrada Retorno
1       A
2       B
3       C
4       D
*/
#include <stdlib.h>
int main (){
    int numeroEntrada;

    printf("Insira um numero:");
    scanf("%i", &numeroEntrada);

    switch (numeroEntrada){
    case 1:
        printf("A");
    break;
    case 2:
        printf("B");
    break;
    case 3:
        printf("C");
    break;
    case 4:
        printf("D");
    break;
    default:
        printf("Sem retorno");
    break;
    }
}
