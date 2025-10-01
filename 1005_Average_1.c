#include <stdio.h> // header file 
 
int main() // main function [ execution starts from here]
{ // main function starts
 
    float A,B; // declaring variables 
    scanf("%f\n %f\n", &A,&B); // to read the integer value from data type
    float average = (A*3.5+B*7.5)/(3.5+7.5); //calculation the average
    printf("MEDIA = %.5f\n", average);// printf is called to show output
 
    return 0;
}// main functin ends