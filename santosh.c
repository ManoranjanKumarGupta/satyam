#include<stdio.h>

int main()
{
   int age=0;
   printf("Enter the age number i will predict which class you are studing\n");
   
   scanf("%d",&age);
   if(age<14)
   {
   	printf("You have not completed 10th exam");
   }
   else if((age>=14) && (age<=17))
   {
   	printf("You have completed 10th");
   }
   else if((age>17) && (age<=19))
   {
	
   	printf("You have completed 12th exam");
   }
   else
   {
	
   	printf("you have done gradution or pursuing gradution");

   }
   return 0; 
}




