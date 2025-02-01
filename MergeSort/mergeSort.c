#include <stdio.h>

int tamanho = 9;

void merge_sort(int vetor[],int ini,int fim) {
    int meio,i,j,k,aux[tamanho];

    if(ini < fim) {
        meio = (ini+fim) / 2;
        merge_sort(vetor,ini,meio);
        merge_sort(vetor,meio + 1,fim);

        // faz o merge ordenando os elementos
        i = ini;
        j = meio+1;
        k = ini;

        while(i <= meio && j <= fim) {
            if(vetor[i] < vetor[j]) {
                aux[k] = vetor[i];
                i++;
            }
            else {
                aux[k] = vetor[j];
                j++;
            }
            k++;
        }

        while(i <= meio) {
            aux[k] = vetor[i];
            i++;
            k++;
        }

        while(j <= fim) {
            aux[k] = vetor[j];
            j++;
            k++;
        }

        for(int i = ini;i <= fim;i++) {
            vetor[i] = aux[i];
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