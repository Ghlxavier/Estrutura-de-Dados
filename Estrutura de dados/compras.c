#include <stdio.h>
#include <stdlib.h>

#define ERRO 1

    typedef struct{
        char Produto[50];
        int Quantidade;
        float Valor;

    } Lista;

    int main(){
        
        FILE *fp;  //FILE: ABRIR UM ARQUIVO *
        Lista X[10];
        float soma;

        fp = fopen("lista.csv", "r");  //r: (read) leitura

        if (fp == NULL){
            printf("ERRO: o arquivo nao pode ser aberto!\n");
            exit(ERRO);
        }
        

        fscanf(fp, "%s %d %f", &X[0].Produto, &X[0].Quantidade, &X[0].Valor);
        fscanf(fp, "%s %d %f", &X[1].Produto, &X[1].Quantidade, &X[1].Valor);
        fscanf(fp, "%s %d %f", &X[2].Produto, &X[2].Quantidade, &X[2].Valor);
        fscanf(fp, "%s %d %f", &X[3].Produto, &X[3].Quantidade, &X[3].Valor);

        for( int i = 0; i < 4; i++){
            printf("%s\t%d\t%.2f\n", X[i].Produto, X[i].Quantidade, X[i].Valor);
       
        }

        for(int i = 0; i < 4; i++){
            float mult;
            mult = X[i].Quantidade * X[i].Valor;
            soma += mult;
            printf("%d) %s: %d * %.2f = %.2f\n", i + 1, X[i].Produto, X[i].Quantidade, X[i].Valor, mult); 
        }

        printf("\nO valor da compra e R$%.2f", soma);

        fclose(fp);
        return 0;

    }


