#include <stdio.h>
int main()
{ double a,b,sum_a,sum_b,sum_c,sum_d;
    printf ("Please Input Any Number:");
scanf (" %lf",&a);
printf ("Please Input Any Number:");
scanf (" %lf",&b);
sum_a= a+b;
sum_b= a-b;
sum_c= a*b;
sum_d= a/b;

printf ("Addition Result is %0.2lf\n",sum_a);
printf ("Subtraction Result is %0.2lf\n",sum_b);
printf ("Multiplication Result is %0.2lf\n",sum_c);
printf ("Division Result is %0.2lf\n",sum_d);
return 0;
}