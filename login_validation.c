#include<stdio.h>
void main()
{
int user_id , password;
printf("Enter the user ID and password:");
scanf("%d %d" ,&user_id ,&password);
if(user_id == 101)
{
   if(password==4321)
    {
     printf("Login successful");
    }
    else 
    {
    printf("incorrect password");
    }
 }
 else
 {
 printf("Incorrect user id");
 }
 }    
