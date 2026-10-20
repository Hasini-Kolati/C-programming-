#include<stdio.h>
void main()
{
float amount=0,final_amount=0,delivery=0 , discount=0;
int membership;
printf("Enter the amount of the customer:");
scanf("%f" ,&amount);
printf("\nEnter the membership type(1 for premiere and 0 for regular customer):");
scanf("%d" ,&membership);
if(amount>=500)
{
delivery =0;

    if(membership==1)
    {
     discount= amount*10/100;
    }
 }    
else
{
delivery = 50;
}
final_amount = amount-discount+delivery;
printf("The final amount by the customer is %.3f" ,final_amount);
}
