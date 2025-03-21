#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int N = 1000000;  //Tamanho do vetor a ser criado.
    int *V = (int *)malloc(N*sizeof(int));  // Aloca uma memória exclusiva para guardar o V
    int i;

    srand(time(NULL)); // É para estabelecer "pontos de partida" diferentes para o rand()-

    for(i=0; i <N; i++) V[i] = rand();
    for(i=0; i < N; i++) 
        printf("%d\t", V[i]);

    return 0;
}
