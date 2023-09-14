#include "busca.h"

int busca(int array[], int tamanho, int chave)
{

    for (int i=0; i<tamanho; i++){
        if(chave == array[i]){
            return i;
        } 
   }
   return -1; 

    
}