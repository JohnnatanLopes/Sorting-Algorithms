#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *v,int tam) {
    int i,j;

    for(i = 1;i < tam;i++) {
        int aux, j = i;
        aux = v[j];
        while(j > 0 && aux < v[j-1]) {
            v[j] = v[j-1];
            j--;
        }
        v[j] = aux;
    }
}

void insertionSortRercusivo(int *v,int fim,int tam) {

    if(fim >= tam){
        return;
    }

    int aux,j = fim;
    aux = v[j];
    while(j > 0 && aux < v[j-1]) {
        v[j] = v[j-1];
        j--;
    }
    v[j] = aux;

    insertionSortRercusivo(v,fim+1,tam);
}

void imprimir(int *vetor,int tamanho) {
    int i;

    for(int i = 0; i < tamanho;i++) {
        printf("%d ",vetor[i]);
    }
}

int main() {

    int vetor[5] = {1,8,2,3,5};
    int vetor2[5] = {2,9,7,5,4};
    
    printf("Vetor não ordenado!! \n");
    imprimir(vetor,5);

    printf("\nVetor ordenado!! \n");
    insertionSort(vetor,5);
    imprimir(vetor,5);

    printf("\nVetor ordenado recursivo!! \n");
    insertionSortRercusivo(vetor2,1,5);
    imprimir(vetor2,5);

    return 0;
}