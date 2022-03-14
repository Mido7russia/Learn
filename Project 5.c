/*
Amin Assaid
Lab3, sec.a
2, 1, 2022
ASCII art of Dr. Yampolskiy
*/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char name[100]; char age[100]; char color[100]; char things[100];
	printf("what is your name?"); scanf("%s", name);
	printf("How old are you?"); scanf("%s", age);
	printf("What is your favorite color?"); scanf("%s", color);
	printf("What do you have?"); scanf("%s", things);
	
	char *card[6] = {"Car", "Gold", "Sofa", "House", "Smart phone", "Bike"};
	
	srand(time(0));
	int randChoice = rand() % 6;
	printf("Hello %s, you are %s, years old, and you have %s %s, and you like %s, also you want to have %s, you love to blay with %s with your friend, and one day you want to buy new %s, then you want to change one of your %s,  !\n", name, age, color, things, card[randChoice]);
	
	return 0;
}

