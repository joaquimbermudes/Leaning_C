#include <stdio.h>

float Derivative(float (*f)(float), float x){

    return (f(x + 0.000001) - f(x - 0.000001))/0.000002;

}


int main(void){
    float f(float x){

        return x*x + x;
    
    }

    printf("%f", Derivative(*f, 1));

    return 0;
}