#include <stdio.h>// header file 
 
int main()// main function [execution starts from here  
{// main function starts 
 
    float A,B,C;
    scanf("%f %f %f", &A, &B, &C);
    // TRIANGLE = 0.5*base*hight
    printf("TRIANGULO: %.3lf\n", 0.5 * A * C);
    // CIRCLE = pi*r*r
    printf("CIRCULO: %.3lf\n", 3.14159 * C * C);
    // TRAPEZIO = (A+B)*hight/2
    printf("TRAPEZIO: %.3lf\n", (A + B) * C / 2);
    // QUADRADO = b*b
    printf("QUADRADO: %.3lf\n", B * B);
    // RETANGULO = a*b
    printf("RETANGULO: %.3lf\n", A * B);
 
    return 0;
}// main function ends