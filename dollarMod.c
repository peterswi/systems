#include <stdio.h>
#include <stdlib.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);


int main(int argc, char **argv){
	printf("Please enter a US $ amount:");
	int amount;
	scanf("%d", &amount);
	int twenties, tens,fives, ones;
	pay_amount(amount, &twenties, &tens, &fives, &ones);
	printf("You can use %d $20's, %d $10's, %d $5's, and %d $1's \n", twenties, tens, fives, ones);
return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){


	*twenties = dollars/ 20;
	dollars = dollars - (*twenties *20);
	*tens = dollars/10;
	dollars = dollars - (*tens *10);
	*fives = dollars/5;
	dollars = dollars - (*fives*5);
	*ones =dollars;

}
