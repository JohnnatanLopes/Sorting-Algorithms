#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *v,int tam) {
    int i,j,menor;
    for(i = 0; i < tam;i++) {
        menor = i;
        for(j = i+1;j < tam;j++) {
            if(v[j] < v[menor]) {
                menor = j;
            }
        }
        int aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
    }
}

void selectionSortRecursivo(int *v,int inicio,int tam) {

    if(inicio >= tam) {
        return;
    }

    int j,menor;

    menor = inicio;
    for(j = inicio + 1; j < tam;j++) {
        if(v[j] < v[menor]) {
            menor = j;
        }
    }
    int aux = v[inicio];
    v[inicio] = v[menor];
    v[menor] = aux;

    selectionSortRecursivo(v, inicio+1,tam);

}

void imprimir(int *vetor,int tamanho) {
    int i;

    for(int i = 0; i < tamanho;i++) {
        printf("%d ",vetor[i]);
    }
}

int main() {

    int vetor[5] = {8,2,7,4,1};

    printf("Vetor ordenado!!! ");
    imprimir(vetor,5);

    printf("\nVetor não ordenado!!! ");
    //selectionSort(vetor,5);
    selectionSortRecursivo(vetor,0,5);
    imprimir(vetor,5);

    return 0;
}