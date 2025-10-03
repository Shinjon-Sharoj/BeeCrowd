#include <stdio.h>
 
int main()
{
 
    char name[50];
    double a,b,c,d;
    scanf("%s %lf %lf", name, &a,&b);
    c=b*0.15;
    d=a+c;
    printf("TOTAL = R$ %.2lf\n", d);
 
    return 0;
}