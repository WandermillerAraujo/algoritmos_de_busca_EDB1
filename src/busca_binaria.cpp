#include "busca.h"

int busca(int array[], int tamanho, int chave)
{
    int inicio=0, fim=tamanho-1, meio;
    // o meio tem que ficar dentro do while, pois, se ficar fora, ele não vai ser alterado para as condicionais
    while(inicio <= fim){
        meio = (inicio+fim)/2;
        if(chave < array[meio]){
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