#include <stdio.h>
#include <math.h>

int main(void){

    int candidate = 100;
    int prime = 0;
    for (int i = 2; i < sqrt(candidate); ++i){
        if (candidate % i == 0){
            printf("Not is prime.");
            prime = 1;
            break;
        }
    }

    if (prime == 0){
        printf("Is prime.");
    }

    return 0;
}