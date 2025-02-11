#include <stdio.h>
#include <stdlib.h>

int particiona(int *v,int inicio,int fim) {
    int pivo = (v[inicio] + v[fim] + v[(inicio+fim)/2]) / 3;
    while (inicio < fim) {
        while (inicio < fim && v[inicio] <= pivo) {
            inicio = inicio + 1;
        }
        while (inicio < fim && v[fim] > pivo) {
            fim = fim - 1;
        }
        int aux = v[inicio];
        v[inicio] = v[fim];
        v[fim] = aux;
    }
    return inicio;
}

void quickSort(int *v,int inicio,int fim) {
    if(inicio < fim) {
        int pos = particiona(v,inicio,fim);
        quickSort(v,inicio,pos-1);
        quickSort(v,pos,fim);
    }
}

void imprimir(int *v,int tam) {
    for(int i = 0;i <= tam;i++) {
        printf("%d ",v[i]);
    }
    printf("\n");
}

int main() {


    int vetor[10] = {21,5,9,11,52,23,72,10,8,1};

    // Vetor Ordenado
    quickSort(vetor,0,9);
    imprimir(vetor,9);

    return 0;
}