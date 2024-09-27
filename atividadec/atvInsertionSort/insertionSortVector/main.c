#include <stdio.h>

int main(){
    int vetor[] = {6, 4, 3, 2, 2};
    int len = sizeof(vetor)/sizeof(vetor[0]);

    printf("TAMANHO = %d\n\n",len);
}