/*
Amin Assaid
Lab3, sec.a
January 29, 2022
ASCII art of Dr. Yampolskiy
*/

#include<stdio.h>
int main ()
  {
	int a, b, sum, subtraction, multiplication, number, choice, remainder, dividend, divisor, Modulus, n, i, flag=1, fact=1;
	do
	{
	
	printf("\n\t1. Addition. \n\t2. subtraction. \n\t3. Multiplcation. \n\t4. Divistion. \n\t5. Modulus. \n\t6. Test if Prime. \n\t7. Exit. \n\n");
	printf("Please choose an option: ");
	scanf("%d",&choice);

	
	if (choice==1)
		{ printf("please enter the two numbers: "); scanf("%d", &a);
 scanf("%d", &b);
		// caculating sum
		sum = a + b;
		printf("%d + %d = %d", a, b, sum);}
		
		
		//else if (choice==2)
		else
		if (choice==2)
		{printf("please enter the two numbers:"); scanf("%d", &a); scanf("%d", &b);
		// caculation subtracion
		subtraction = a-b, b-a;
		printf("%d-%d = %d", a, b, subtraction);}
		
		
		//else if (choice==3)
		else if (choice==3) {
		
		printf("please enter the two numbers:"); scanf("%d", &a); scanf("%d", &b);
		// caculation multiplication
		multiplication = a*b;
		printf("%d*%d = %d", a, b, multiplication);
		
	}
		//else if (choice==4)
	 	 else if(choice==4)
	 	{ printf("please enter the diviend:"); scanf("%d", &dividend);
	 	printf("please enter the divisor:"); scanf("%d", &divisor);
	 	remainder = dividend % divisor;
	 	 if (remainder == 0)
	 		{
			 printf("%d is divisible by %d \n", dividend, divisor);
	 		printf("%d * %d = %d \n", dividend/ divisor, divisor, dividend);}
	 		else
	 		{
	 		printf("\n%d is not divisible by %d \n", dividend, divisor);
			 printf("Remainder is %d \n", remainder);}
		}
		
		//else if (choice==5)
		else if(choice==5)
		{ printf("please enter the two number:"); scanf("%d%d", &a, &b);
		printf("%d Modulus %d = %d\n", a,b, (a%b));}
		
		//else if (choice==6)
		else if(choice==6)
		{ printf(" please enter a number: \n"); scanf("%d", &n);
		for(i = 2; i <= n /2; i++)
		{if(n %i ==0) { flag = 1; break; }}
		
		 if ( flag ==1 )
		 { printf("%d is a prime number",n);}
		 else
		 { printf("d is not a prime number", n);}
		}
		
		//else if (choice==7)
		else if(choice==7)
		{ printf(" please enter a number for facturing \n"); scanf("%d", &n);
		for(i = 2; i <= n /2; i++)
		{if(n %i ==0) { flag = 1; break; }}
		
		 if ( flag ==1 )
		 { printf("%d is a prime number",n);}
		 else
		 { printf("d is not a prime number", n);}
		}
		
		
		//else if (choice==0
		else
		{ printf("Exiting..");}		
}
		while (choice != 0);
		return 0;}
	
