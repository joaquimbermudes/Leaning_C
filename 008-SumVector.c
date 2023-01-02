#include <stdio.h>

int Sum(int vector[], int length){
    int S = 0;
    for (int i = 0; i < length; i++){
        S = S + vector[i];
    }

    return S;
}

int main(void){
    int V[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d\n", Sum(V, 11));

    return 0;
}