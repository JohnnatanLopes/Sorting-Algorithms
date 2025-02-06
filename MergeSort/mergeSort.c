#include <stdio.h>

int tamanho = 9;

void merge_sort(int array[], int inicio, int fim) {
    int meio, esquerdo, direito,k, aux[tamanho];

    if (inicio < fim) {
        meio = (inicio + fim) / 2;
        merge_sort(array, inicio, meio);
        merge_sort(array, meio + 1, fim);

        // Faz o merge ordenando os elementos
        esquerdo = inicio;
        direito = meio + 1;
        k = inicio;

        while (esquerdo <= meio && direito <= fim) {
            if (array[esquerdo] < array[direito]) {
                aux[k] = array[esquerdo];
                esquerdo++;
            } else {
                aux[k] = array[direito];
                direito++;
            }
            k++;
        }

        // Adiciona os elementos restantes da metade esquerda
        while (esquerdo <= meio) {
            aux[k] = array[esquerdo];
            esquerdo++;
            k++;
        }

        // Adiciona os elementos restantes da metade direita
        while (direito <= fim) {
            aux[k] = array[direito];
            direito++;
            k++;
        }

        // Copia os elementos ordenados de volta para o array original
        for (int i = inicio; i <= fim; i++) {
            array[i] = aux[i];
        }
    }
}

void imprimir(int *vetor) {
    int i;

    for(int i = 0; i < tamanho;i++) {
        printf("%d ",vetor[i]);
    }
}

int main() {

    int vetor[9] = {5,7,21,1,8,2,20,8,39};

    printf("Vetor não ordenado: ");
    imprimir(vetor);

    printf("\nVetor ordenado: ");
    merge_sort(vetor,0,tamanho-1);
    imprimir(vetor);
    return 0;
}