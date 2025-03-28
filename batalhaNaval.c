
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define linhas 10
#define colunas 10


int main(){
  int tabuleiro [linhas][colunas]={0};
  int navio1[3]={1,2,3},navio2[3]={5,6,7};
  int navio3[4]={0,1,2,3},navio4[4]={6,7,8,9};
  int triangulo [5][5] = {0},cruz[3][3]={0}, octaedro[5][5]={0};
  

//cria navio horizontal e vertical
    for (int i =0;i<3;i++)
    {
        tabuleiro[navio1[i]][7] = 3;
        tabuleiro[8][navio2[i]]= 3;
    }

//cria navio diagonal       
    for (int i = 0; i < 4; i++)
    {
        int j = navio3[i];
        tabuleiro[navio3[i]][j] = 3;    
    }

//cria navio diagonal
    int j = 4;
    for (int i = 0; i < 4; i++)
    {       
        tabuleiro[navio4[i]][j] = 3;
        j--;
    }

//impressão tabuleiro
    for(int i = 0 ; i<linhas ; i++){
        for (int j = 0 ; j<colunas;j++)
        {     
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

//cria a matriz trinagulo
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==2)
            {
                triangulo[i][j]=5;
            }
            else if (i==1 && j<=3 && j>=1)
            {
                triangulo[i][j] = 5;
            }else{       
            
                triangulo[0][2] = 5;
            }
        }
    }

printf("\n");

//imprmir matriz trinagulo
    for(int i = 0 ; i < 5 ; i++){
        for (int j = 0 ; j < 5 ; j++)
        {     
            printf("%d ", triangulo[i][j]);
        }
        printf("\n");
    }
    
//cria a matriz cruz
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i==1){           
                cruz[i][j]=5;    
              }else if(j==1){                
                cruz[i][j]=5;           
            }
        }      
    }

printf("\n");    

//imprmir a matriz cruz
    for(int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < 3 ; j++)
        {     
        printf("%d ", cruz[i][j]);
        }
        printf("\n");
        }

//cria a matriz octaedro
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        if(i==2){
            octaedro[i][j]=5;
        }else if (j==2)
        {
            octaedro[i][j]=5;
        }
        if(i==1 && j>0 && j<4){
            octaedro[i][j]=5;
        }else if (i==3 && j>0 && j<4)
        {
            octaedro[i][j]=5;
        }       
    }
}

printf("\n");

//imprmir matriz octaedro
for(int i = 0 ; i < 5 ; i++){
    for (int j = 0 ; j < 5 ; j++)
    {     
        printf("%d ", octaedro[i][j]);
    }
    printf("\n");
}

//colocar matriz triangulo na matriz tabuleiro
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++){
        if(triangulo[i][j]==5){
        tabuleiro[i+3][j+5]=5;
        }
    }
    }
    
//colocar matriz cruz na matriz tabuleiro
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++){
        if(cruz[i][j]==5){
        tabuleiro[i][j+1]=5;
        }
    }
    }

//colocar matriz octaedro na matriz tabuleiro
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++){
        if(octaedro[i][j]==5){
        tabuleiro[i+5][j]=5;
        }
    }
    }

printf("\n");
        
//impressão matriz final
    for(int i = 0 ; i<linhas ; i++){
        for (int j = 0 ; j<colunas;j++)
        {     
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}    