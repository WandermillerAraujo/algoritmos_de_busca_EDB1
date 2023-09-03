#include "busca.h"

int busca(int array[], int tamanho, int chave)
{
    /*for(int i = 0; i < tamanho; ++i)
    {
        if(array[i] == chave)
        {
            return i;
        }
    }
    return -1; forma simples que eiji fez */
    
    int posicao=0;
    do {
        if(chave == array[posicao]){
            return posicao;
        }
        else if(chave < array[posicao]){
            return -1;
        }
        posicao++;
    } while (posicao < tamanho);
    return -1; // forma mais completa do slide da aula
}