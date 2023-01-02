#include <stdio.h>

int main(void){
    int i;
    int fib1 = 1;
    int fib2 = 1;
    int fib;
    printf("How many Fibonacci numbers would you like see?\n");
    int num;
    scanf("%i", &num);
    printf("OK, %d\n", num);

    for(i = 1; i <= num; ++i){
        printf("%i\n", fib1);

        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }

    return 0;
}