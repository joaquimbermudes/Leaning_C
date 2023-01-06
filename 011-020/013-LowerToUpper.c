#include <stdio.h>

char Upper(char letter){

    char * lower[27] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "x", "y", "w", "z"};
    char * upper[27] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "X", "Y", "W", "Z"};

    for (int i = 0; i < 27; ++i){
        if (letter == *lower[i]){
           return *upper[i];
        }
    }

    return letter;
}

int main(void){

    char letter = 'G';

    char up =  Upper(letter);

    printf("%c\n" ,up);

    return 0;
}