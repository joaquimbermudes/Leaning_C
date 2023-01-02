#include <stdio.h>

int lenWord(char* word){
    int len = 0;
    while (word[len] != NULL){
        len = len + 1;
    }

    return len;
}

int main(void){

    char word[10] = "Hello";

    int len = lenWord(word);

    printf("The length of the word is %d\n", len);

    return 0;

}