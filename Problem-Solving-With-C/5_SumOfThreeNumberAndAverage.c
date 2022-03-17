#include<stdio.h>

int main ()
{

int a,b,c,sum;
double average ;
printf("Enter three number :: ");
scanf("%d %d %d",&a,&b,&c);

sum = a + b + c;
average = sum/3 ;

printf ("The sum is :: %d and the average is :: %.2lf ",sum,average);    // .2 is identifing the value after the point


}