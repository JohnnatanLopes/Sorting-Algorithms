#include <stdio.h>

void bubbleSortRecursivo(int *v,int n) {
    if(n < 2) {
        return;
    }

    for(int i = 0; i < n-1;i++) {
        if(v[i] > v[i+1]) {
            int aux = v[i];
            v[i] = v[i+1];
            v[i+1] = aux;
        }
    }

    bubbleSortRecursivo(v,n-1);
}


void imprimir(int *v,int tam) {
    int i;

    for(i = 0; i < tam;i++) {
        printf("%d ",v[i]);
    }
    printf("\n");
}


int main() {

    int vet[9] = {5,8,9,4,10,6,3,7,1};
    int tam = 9;

    imprimir(vet,tam);
    //bubbleSort(vet,tam)
    bubbleSortRecursivo(vet,tam);
    imprimir(vet,tam);

    return 0;

}