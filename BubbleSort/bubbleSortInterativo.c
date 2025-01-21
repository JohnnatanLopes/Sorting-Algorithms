#include <stdio.h>

int main() {

    int arr[5] = {9,5,8,1,2};
    int tam = 5;

    printf("========== Elementos não Ordenados ==========\n");
    for(int i = 0; i < tam;i++) {
        printf("%d ",arr[i]);
    }

    for(int j = 0;j < tam;j++) {
        for(int i = 0;i < tam-1;i++) {
            if(arr[i] > arr[i+1]) {
                int aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
            }
        }
    }

    printf("\n========== Elementos Ordenados ==============\n");
    for(int i = 0; i < tam;i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}