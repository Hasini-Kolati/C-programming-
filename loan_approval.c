#include<stdio.h>
void main()
{
int age , credit_score , income;
printf("Enter the age:");
scanf("%d" ,&age);
printf("\nEnter the income:");
scanf("%d" ,&income);
printf("\nEnter the credit score");
scanf("%d" ,&credit_score);
 if(age>21&&age<60)
 {
     if(income>=25000)
     {
         if(credit_score>=700)
            { 
            printf("\nLoan is approved");
            }
         else
         {
            printf("loan rejected: credit score is below 700");
         }
         }
    else
     {
     printf("loan rejected: income is below is 25000");
     }
     }
     
else
{
printf("loan rejected: age is not in 21 and 60");
}      
}  
