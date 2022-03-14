/*
Amin Assaid
Lab3, sec.a
2, 17, 2022
ASCII art of Dr. Yampolskiy
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct {
	char FirstName [100];
	char LastName [100];
	float PhoneNumber [100];
} phone;
int main ()
{ int numOfphone =10, first, last, number, choice;
phone * arrayOfphone = malloc (numOfphone * sizeof(phone));

printf("\n\t\t\tPhone Book Menue" );
printf("\n\n\t\(1)\tAdd Friend");
printf("\n\t\(2)\tDelete Friend");
printf("\n\t\(3)\tShow Phone Book");
if (choice==1)
		{ printf("please enter the first name: "); scanf("%d", &first);
		
		 printf("please enter the last name: "); scanf("%d", &last);}

phone *temp;
int newCount = 100;
temp = realloc(arrayOfphone , sizeof(phone));
if (temp == NULL) 
	printf("\n\n Reallocation failed. out of memory!!\n");
else
	arrayOfphone =temp;
free(arrayOfphone);
return 0;	
}

