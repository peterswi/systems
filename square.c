/* design a code in which the user inputs the numbers 1 through 16 in any order and then they are placed in a square and then summed.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
	printf("Please enter the integers 1 through 16 in any order: \n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
	printf("\n %d %d %d %d \n %d %d %d %d \n %d %d %d %d \n %d %d %d %d \n\n", a, b, c, d, e, f, g, h, i, j, k, l , m, n, o, p);
	int row_sum1, row_sum2,row_sum3, row_sum4, col_sum1,col_sum2, col_sum3, col_sum4, 		diag_sum1, diag_sum2;
	row_sum1= a + b + c + d;
	row_sum2= e + f + g + h;
	row_sum3= i+ j +k + l;
	row_sum4= m + n + o +p;
	col_sum1= a + e + i +m;
	col_sum2= b + f + j + n;
	col_sum3 = c + g + k + o;
	col_sum4= d + h + l + p;
	diag_sum1= a + f + k + p;
	diag_sum2= d+ g +j +m;
	printf("Row sums: %d %d %d %d \n", row_sum1, row_sum2, row_sum3, row_sum4);
	printf("Column sums: %d %d %d %d \n", col_sum1, col_sum2, col_sum3, col_sum4);
	printf("Diagonal sums: %d %d \n", diag_sum1, diag_sum2);
	}
