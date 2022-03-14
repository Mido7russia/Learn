/*
Amin Assaid
Lab , sec.a
January 13, 2022
ASCII art of Dr. Yampolskiy
*/

#include<stdio.h>

void main(){
	
	/* the variabls */
		float amount;
float USD = 1.00;
float GBP = 0.74;
float CAD = 1.25;
float EUR = 0.88;
float AUD = 1.39;
float SDN = 437.50;
	
	/* user input for amount */
	
	printf("Enter amount to exchange : ");
	scanf("%f",&amount);
	
	/* the currency type */
	
	printf("\n\n\t USD\t GBP\t  CAD\t EUR\t AUD\t SDN\t");
	printf("\n\n USD %.2f\t %.2f",USD,USD*USD);
	printf("\t %.2f\t %.2f",USD,USD*AUD);
	printf("\t %.2f\t %.2f",USD,USD*SDN);	
	printf("\n\n GBP %.2f\t %.2f",GBP,GBP*GBP);
	printf("\t %.2f\t %.2f",GBP,GBP*AUD);
	printf("\t %.2f\t %.2f",GBP,GBP*SDN);
	printf("\n\n CAD %.2f\t %.2f",CAD,CAD*CAD);
	printf("\t %.2f\t %.2f",CAD,CAD*AUD);
	printf("\t %.2f\t %.2f",CAD,CAD*SDN);
	printf("\n\n EUR %.2f\t %.2f",EUR,EUR*EUR);
	printf("\t %.2f\t %.2f",EUR,EUR*AUD);
	printf("\t %.2f\t %.2f",EUR,EUR*SDN);
	printf("\n\n AUD %.2f\t %.2f",AUD,AUD*AUD);
	printf("\t %.2f\t %.2f",AUD,AUD*SDN);
	printf("\t %.2f\t %.2f",AUD,AUD*EUR);
	printf("\n\n SDN %.2f\t %.2f",SDN,SDN*SDN);
	printf("\t %.2f\t %.2f",SDN,SDN*AUD);
	printf("\t %.2f\t %.2f",SDN,SDN*EUR);
		}
