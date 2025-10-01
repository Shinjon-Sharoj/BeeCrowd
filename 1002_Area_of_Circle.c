#include <stdio.h>// header file 
 
int main() // main function [execution starts from here]
{ 
    double R;// declaration of variables
    scanf("%lf\n", &R);//to read the input of float data type
    double area= (3.14159*R*R);// calculation of area 
    printf("A=%.4lf\n", area);//output the area 
    
 
    return 0;
} // main function ends 