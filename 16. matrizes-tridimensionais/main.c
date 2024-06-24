#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n_slices = 2, n_rows = 2, n_cols = 3,count=0;
    
    puts("##### INICIO DA ALOCACAO  #####");
    int ***core = (int ***)calloc(n_slices, sizeof(int **));

    printf("&core (raiz na stack) = %p | core (inicio na heap) = %p",&core,core);
    for (int i = 0; i < n_slices; i++)
    {
        core[i] = (int **)calloc(n_rows, sizeof(int *)); // eixo x definido
        for (int j = 0; j < n_rows; j++)
        {
            core[i][j] = (int *)calloc(n_cols, sizeof(int)); // eixo y definido
        }
    }

    puts("\n##### FIM DA ALOCACAO  #####");

    for (int z = 0; z < n_slices; z++)
    {
        printf("\n\n&core[%d] = %p | core[%d] = %p",z,&core[z],z,core[z]);
        for (int x = 0; x < n_rows; x++)
        {
            printf("\n\n&core[%d][%d] = %p | core[%d][%d] = %p\n",z,x,&core[z][x],z,x,core[z][x]);
            for (int y = 0; y < n_cols; y++)
            {
                core[z][x][y] = count;
                count++;
                printf("\n&core[%d][%d][%d] = %p | core[%d][%d][%d] = %d",
                       z, x, y, &core[z][x][y], z, x, y, core[z][x][y]);
            }
        }
    }


    for(int z = 0; z < n_slices; z++){
        for(int x = 0; x <n_rows; x++){
                free(core[z][x]);
                printf("\ndesalocando");
            
            free(core[z]);
        }
    }
    free(core);
    printf("\ndesalocado com sucesso!");


}