#include<stdio.h>
void main()
{
char x;
printf("Enter the charcter:");
scanf("%c" ,&x);
if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
printf("%c is a vowel" ,x);
else 
printf("%c is not a vowel", x);
}
