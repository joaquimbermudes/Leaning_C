#include <stdio.h>

int Fib(int number){
    if (number == 1 || number == 2){
        return 1;
    }

    return Fib(number - 1) + Fib(number - 2);
}

int main(void){
    printf("%i\n", Fib(100));

    return 0;
}