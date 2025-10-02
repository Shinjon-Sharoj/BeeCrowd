#include <stdio.h> // header file 
 
int main() // main function [execution starts from here] 
{ // main function starts 
 
    double A,B,C, avg; // variable declaration 
    scanf("%lf %lf %lf", &A, &B, &C); // to read the input of integer data type
    avg=(A*2 + B*3 + C*5)/(2+3+5);
    printf("MEDIA = %.1lf\n", avg); // printf is called to show output

    return 0;
} // main function ends 