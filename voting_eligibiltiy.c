#include<stdio.h>
void main()
{
int age;
printf("Enter the age of person:");
scanf("%d" ,&age);
if(age>=18)
printf("\nEligible to vote");
else
printf("\nNot eligible to vote");
}
