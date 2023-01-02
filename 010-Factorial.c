#include <stdio.h>

int Factorial(int n){
    if (n == 0){
        return 1;
    }

    int Facto = 1;

    for (int i = 1; i <= n; i++){
        Facto = Facto * i;
    }

    return Facto;
}


int main(void){
    printf("%d\n", Factorial(5));

    return 0;
}