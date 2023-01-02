#include <stdio.h>

float Integral(float (*f)(float), float LimInf, float LimSup){
    
    float Interval = (LimSup - LimInf)/1000;

    float IntegralReturn = 0;

    for (int i = 1; i  <= 1000; ++i){
        IntegralReturn = IntegralReturn + f(LimInf + i * Interval)*Interval;
    }

    return IntegralReturn;

}

int main(void){
    float function(float x){
        return 2*x*x + 5;
    }

    float I = Integral(function, 0, 2);

    printf("%f", I);

    return 0;

}