#include <stdio.h>

int main()

{
    int coluna =0, line = 0;


    FILE *arq;
    char Linha[100];
    char *result;
    int i;

  //   Abre um arquivo TEXTO para LEITURA
    arq = fopen("ArqTeste.txt", "rt");

    if (arq == NULL)  // Se houve erro na abertura
    {
       printf("Problemas na abertura do arquivo\n");
       return;
    }

    i = 1;
    while (!feof(arq))
    {
          // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler
            printf("Linha %d : %s",i,Linha);
        i++;
    }
    fclose(arq);


    printf("\n");
        do{
            printf(" | ");

            while (line < 8) {
                if ( (coluna >0 && coluna <4) && (line >1 && line <6) )
                    printf("   ");
                else {
                    printf(" * ");
                }
                line ++;
            }

            printf(" |");
            printf("\n");
            coluna ++;
            line = 0;
        }while (coluna < 5);
	
        printf("\n");
	return 0;
}
