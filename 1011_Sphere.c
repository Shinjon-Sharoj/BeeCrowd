#include <stdio.h> // Header File 
 
int main() // Main function [execution starts from here] 
{ // Main function starts 
 
    double r, pi=3.14159, vol=0 ; // variable declaration
    scanf("%lf", &r); // to read the input from data type
    vol=(double)4/(double)3 * pi * (r*r*r); // formula 
    printf("VOLUME = %.3lf\n", vol); // printf is called to show output
 
    return 0;
} // Main function starts 