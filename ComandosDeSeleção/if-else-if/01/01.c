/*
Escreva um programa em que o usuário insira um número
qualquer. Se o número digitado for um da tabela abaixo, o
programa deve retornar os caracteres indicados, senão, o
programa deve retornar o caractere 0 (zero). Utilize if-else-if.

Entrada Retorno
1       A
2       B
3       C
4       D
*/
#include <stdio.h>
int main (){
   int numeroEntrada;

   printf("Insira um numero: ");
   scanf("%i", &numeroEntrada);

   if (numeroEntrada == 1){
     printf("A");
   } else if (numeroEntrada == 2){
     printf("B");
   } else if (numeroEntrada == 3) {
     printf("C");
   } else if (numeroEntrada == 4) {
     printf("D");
   } else
   printf("Numero invalido");

}
