#include "busca.h"

int busca(int array[], int tamanho, int chave)
{

    if (tamanho <= 0) {
        return -1; // Se chegamos ao final do array sem encontrar a chave, retornamos -1
    }
    if (array[tamanho-1] == chave) {
        return tamanho-1; // Encontramos a chave, retornamos o índice
    }

    return busca(array, tamanho-1, chave);
}