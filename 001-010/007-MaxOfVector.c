#include <stdio.h>

int Max(int vector[], int length){
    int M = vector[0];

    for (int i = 0; i < length; i++){
        if (M < vector[i]){
            M = vector[i];
        }
    }

    return M;
}

int main(void){
    int V[20] = {1, 5, 9, 3, 5, 7, 4, 5, 6, 2, 8, 10, 0, 4};

    printf("%d\n", Max(V, 20));

    return 0;
}