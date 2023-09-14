#include "busca.h"

int busca(int array[], int tamanho, int chave)
{
    int inicio = 0, fim = tamanho-1;

    while (inicio<=fim){
        int meio = (inicio+fim)/2;
        
        if (chave < array[meio]){
            fim = meio-1;
        }
        else if(chave > array[meio]){
            inicio = meio+1;
        }
        else {
            return meio;
        }
    }
    return -1;
}