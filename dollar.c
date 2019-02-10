#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	printf("Please enter a US $ amount:");
	int amount;
	scanf("%d", &amount);
	int twenty;
	int ten;
	int five;
	int one;

	twenty = amount/ 20;
	amount = amount - (twenty *20);
	ten = amount/10;
	amount = amount - (ten *10);
	five = amount/5;
	amount = amount - (five*5);
	one =amount;
	printf("You can use %d $20's, %d $10's, %d $5's, and %d $1's \n", twenty, ten, five, one);
return 0;
}
