#include <stdio.h>
#include "dataType.h"

void printDataType(void){
    /* Hay más tipos de datos que estos, estos son los primitivos
     * Los datos pueden ser signed o unsigned. En caso de no explicitarlo se interpreta como signed.
     * Rangos:
     *      signed --> -2^(n-1) a 2^(n-1)-1 (complemento a 2)
     *      unsigned --> 0 a 2^(n)-1 
     */


    //Char --> 8bits --> -128 a 127
    //Imprime la representación en ascii 
    char character = 64;
    printf("Variable tipo char: %d \n",character);

    //Unsigned char --> 8bits --> 0 a 255
    //Imprime la representación en ascii 
    unsigned char ucharacter = 126;
    printf("Variable de tipo unsigned char: %c \n",ucharacter);

    //int --> 16 bits --> -32768 a 32767
    int integer = 12;
    printf("Variable tipo int: %d \n",integer);

    //unsigned int --> 16 bits --> 0 a 65535

    //long --> 32 bits --> -2147483648 a 2147483647

    //unsigned long --> 32 bits --> 0 a 4294967295
}