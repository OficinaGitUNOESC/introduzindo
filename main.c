#include <stdio.h>

int funcao(){
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

    return 0;
}

int main()

{
    int coluna =0, line = 0;
    int men = 2;


    
    
        do{
            printf(" | ");

            if (coluna == 2){
                printf("  Digite 1 para ler o arquivo e 0 para sair..          *");
            }

            while (line < 19) {
                if ( (coluna >0 && coluna <4) && (line >0 && line <= 18) || coluna == 2 )
                    printf("   ");
                else {
                    printf(" * ");
                }
                line ++;
            }

           // printf(" |");
            printf("\n");
            coluna ++;
            line = 0;
        }while (coluna < 5);
	       scanf("%i",&men);

           if(men == 1){
            funcao();
           }

        printf("\n");
	return 0;
}
