#include <stdio.h>
#include <stdlib.h>

#define ERRO 1

    typedef struct{
        int ID;
        char Nome[50];
        int Idade;

    } Pessoa;

    int main(){
        
        FILE *fp;
        Pessoa X[10];
        char Cabcealho[100];

        fp = fopen("dados.csv", "r");  //r: (read) leitura

        if (fp == NULL){
            printf("ERRO: o arquivo não pode ser aberto!\n");
            exit(ERRO);
        }
        
        fscanf(fp, "%s", Cabcealho);

        fscanf(fp, "%d;%[^;];%d", &X[0].ID, &X[0].Nome, &X[0].Idade);
        fscanf(fp, "%d;%[^;];%d", &X[1].ID, &X[1].Nome, &X[1].Idade);
        fscanf(fp, "%d;%[^;];%d", &X[2].ID, &X[2].Nome, &X[2].Idade);

        for( int i = 0; i < 3; i++)
            printf("%d\t%s\t%d\n", X[i].ID, X[i].Nome, X[i].Idade);
       
        float Media = 0.0;


        fclose(fp);
        return 0;

    }


