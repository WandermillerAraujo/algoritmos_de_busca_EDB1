#include "busca.h"

int busca(int array[], int tamanho, int chave){
    return busca_binaria(array, chave, 0, tamanho-1);
}

int busca_binaria(int array[], int chave, int inicio, int fim){
    int meio = (inicio+fim)/2;

    if (inicio > fim){
        return -1;
    }
    if (chave < array[meio]){
        return busca_binaria(array, chave, inicio, meio-1);
    }
    else if (chave > array[meio]){
        return busca_binaria(array, chave, meio+1, fim);
    }
    else {
        return meio;
    }
}