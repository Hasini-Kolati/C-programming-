#include<stdio.h>
void main ()
{
float BMI=0 , H ,W;
printf("Enter the height in metres and weight in kgs:");
scanf("%f %f", &H ,&W);
BMI = W/(H*H);
if(BMI<18.5)
printf("BMI is %.2f and the person is UNDERWEIGHT",BMI);
else if(BMI>=18.5&&BMI<25)
printf("BMI is %.2f and the person is NORMAL" ,BMI);
else if(BMI>=25&&BMI<30)
printf("BMI is %.2f and the person is OVERWEIGHT" ,BMI);
else
printf("BMI is %.2f and the person in OBESE" , BMI);
}
