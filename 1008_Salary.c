#include <stdio.h>  // header file 
 
int main() // Main function [execution starts from here] 
{ // Main function starts here 
 
    int x,y;
    double z,s;
    scanf("%d %d %lf", &x, &y, &z);
    printf("NUMBER = %d\n", x);
    s = (y*z);
    printf("SALARY = U$ %.2f\n", s);
 
    return 0;
} // Main function ends 