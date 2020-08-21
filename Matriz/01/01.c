#include <stdio.h>
#include <stdlib.h>

int main (){
    int valor01[5], valor02[5];
    int i = 0, j = 0;

    for (i = 0; i < 5; i++){
        printf("\nInforme o valor do elemento %d do vetor 1:", i + 1);
        scanf("%d", &valor01[i]);
    }

    for (j = 0; j < 5; j++){
        printf("\nInforme o valor do elemento %d do vetor 2:", j + 1);
        scanf("%d", &valor02[j]);
    }

    printf("Vetor 01\n");
    printf(" %d \n %d \n %d \n %d \n %d", valor01[0],valor01[1], valor01[2], valor01[3], valor01[4]);

    printf("\nVetor 02\n");
    printf(" %d \n %d \n %d \n %d \n %d", valor02[0],valor02[1], valor02[2], valor02[3], valor02[4]);


    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if(valor01[i]==valor02[j]){
                printf("\nValores iguais na posicao: %d e %d\n", i + 1, j + 1);
            }
        }
    }
    system("pause");
}
