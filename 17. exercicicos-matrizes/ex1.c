/* Codifique uma função para 
- Alocar uma matriz dinâmica 3d
- Imprimir seus elementos e endereços de memória
- Adicionar um escalar a matriz
- Desalocar a matriz atribuindo NULL ao ponteiro */
#include <stdlib.h>
#include <stdio.h>

void main(){
// tamanho da matriz 3 de profundidade, 3 linhas e 3 colunas (3x3x3=27)
    int size_z = 3, size_x = 3, size_y = 3;
// alocar o ponteiro
    int ***cube =(int***)calloc(size_x,sizeof(int **));
    
    printf("\n#### ENDERECO RAIZ ####\n&cube = %p | cube = %p",&cube,cube);

    for(int i = 0; i < size_x; i++){
// alocar as linhas
        cube[i] = (int **)calloc(size_y,sizeof(int*));
        for(int j = 0; j < size_y; j++){
// alocar as colunas
            cube[i][j] = (int *)calloc(size_y,sizeof(int));
        }
    }

    printf("\n\n#### ENDERECOS E VALORES DAS PROFUNDIDADES ####");
    for(int z = 0; z < size_z; z++){
        printf("\n&cube[%d] = %p | cube[%d] = %p",z,&cube[z],z,cube[z]);
    }
    printf("\n\n#### ENDERECOS E VALORES DAS LINHAS ####");
    for(int z = 0; z < size_z; z++){
        for(int x = 0; x < size_x; x++){
        printf("\n&cube[%d][%d] = %p | cube[%d][%d] = %p",z,x,&cube[z][x],z,x,cube[z][x]);
        }
    }
    printf("\n\n#### ENDERECOS E VALORES DAS COLUNAS ####");
    for(int z = 0; z < size_z; z++){
        for(int x = 0; x < size_x; x++){
            for(int y = 0; y < size_y; y++){
            printf("\n&cube[%d][%d][%d] = %p | cube[%d][%d][%d] = %d",z,x,y,&cube[z][x][y],z,x,y,cube[z][x][y]);
            }
        }
    }


    printf("\n\n#### ADICIONANDO O ESCALAR A MATRIZ ####");
    int count = 1;
    for(int z = 0; z < size_z; z++){
        for(int x = 0; x < size_x; x++){
            for(int y = 0; y < size_y; y++){
            cube[z][x][y] = count;
            count++;
            printf("\n&cube[%d][%d][%d] = %p | cube[%d][%d][%d] = %d",z,x,y,&cube[z][x][y],z,x,y,cube[z][x][y]);
            }
        }
    }
    
    printf("\n\n#### DESALOCANDO A MATRIZ ####");
    for(int z = 0; z < size_z; z++){
        for(int x = 0; x < size_x; x++){
            free(cube[z][x]);

        }
        free(cube[z]);
    }
    free(cube);
    cube = NULL;
    printf("\nDesalocado com sucesso!");
}