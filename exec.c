#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//COMPILAR: gcc ./teste.c -o ./teste 
//COMPILAR COM MATH.H: gcc ./teste.c -o ./bibobubop -lm
//RUN: ./teste

int main(int argc, char** argv)
{
    if (argc < 2) {
        printf("%s <arquivo>", argv[0]);
        return 0;
    }
    // printf("-> ARGC %x \n", argc);
    // printf("-> ARGV[0] %x \n", argv[0]);
    
    char batata[] = "gcc ";
    strcat(batata, argv[1]);
    strcat(batata, ".c -o ");
    strcat(batata, argv[1]);
    system(batata);
    printf("\nCOMANDO EXECUTADO: %s\n", batata);
    system(argv[1]);
    return 0;
}