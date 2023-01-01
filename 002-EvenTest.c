#include <stdio.h>
#include <stdbool.h>

bool even(int number){
    if (number % 2 == 0){
        return true;
    }else{
        return false;
    }
}

int main(void){
    char even_5 = even(5);
    char even_6 = even(6);

    printf("The number 5 is even? %s\n", even_5 ? "True":"False");
    printf("The number 6 is even? %s\n", even_6 ? "True":"False");
    
    return 0;
}