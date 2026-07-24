//Simple Interest Programming

#include <stdio.h>

int main()
{        int p=0;
         float r=0;
         int t=0;
         float si=0;
         printf("enter the value of p:");
         scanf("%d", &p);
         printf("enter the value of r:");
         scanf("%f", &r);
         printf("enter the value of t:");
         scanf("%d", &t);
         si = ( p*r*t )/100;
         printf("the result = %f", si);
return 0;
}

