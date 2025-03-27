
#include <stdio.h>

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define linhas 10
#define colunas 10


int main(){
  int tabuleiro [linhas][colunas]={0};
  int navio1[3]={1,2,3},navio2[3]={5,6,7};
  int navio3[4]={0,1,2,3},navio4[4]={6,7,8,9};

//navio horizontal e vertical
    for (int i =0;i<3;i++)
    {
        tabuleiro[navio1[i]][7] = 3;
        tabuleiro[8][navio2[i]]= 3;
    }
//navio diagonal       
    for (int i = 0; i < 4; i++)
    {
        int j = navio3[i];
        tabuleiro[navio3[i]][j] = 3;    
    }

//navio diagonal
    int j = 1;
    for (int i = 0; i < 4; i++)
    {       
        tabuleiro[navio4[i]][j] = 3;
        j++;
    }

//impressão
    for(int i = 0 ; i<linhas ; i++){
        for (int j = 0 ; j<colunas;j++)
        {     
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
  
    return 0;
}    