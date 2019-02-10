/* we are going to convert the calculator.java file to c*/
#include <stdio.h>
#include <stdlib.h>

int takesNoArgs(char op);
double process0p(double amt, char op, double val);
double processPlus(double amt, double val);
double processMinus(double amt, double val);
double processTimes(double amt, double val);
double processDivide(double amt, double val);
double processPrint(double amt);
double processClear();

int main(int argc, char **argv){
	double amt =0.0;
	char op;
	double val;

	printf("Welcome to the CSCI2271 calculator.\n");
	while(1){
	int ic = getchar();
	if (ic < 0) {
		break;
		}
	op = (char) ic;
	if (op == 'Q')
		break;
	else if (takesNoArgs(op)){
		val = 0;
		amt = process0p(amt, op, val);
		int trash1 = getchar();
		}

	else {
		scanf("%lf", &val);
		amt = process0p(amt, op, val);
		int trash2 = getchar();
		}
	}
	printf("Goodbye!\n");
}

int takesNoArgs(char op){
	int ret=0;
	if (op == 'C' || op == '=') ret =1;
	return ret;
	}

double process0p(double amt, char op, double val){
	if (op == '+'){
	//	printf("amt:%f val:%f",amt, val);
		return processPlus(amt, val);
		}
	else if (op == '-'){
	//*	printf("min");
		return processMinus(amt, val);
		}
	else if (op == '*'){
//*	printf("timess");
		return processTimes(amt, val);
		}
	else if (op =='/'){
	//*	printf("div");
		return processDivide(amt, val);
		}
	else if (op == '='){
	//*	printf("equals");
		return processPrint(amt);
		}
	else if (op == 'C'){
	//*	printf("clear");
		return processClear();
		}
	else {
		printf("Bad Operator\n");
		return (amt);
		}
	}

double processPlus(double amt, double val){
	return (amt + val);
	}

double processMinus(double amt, double val){
	return (amt - val);
	}

double processTimes(double amt, double val){
	return (amt * val);
	}

double processDivide(double amt, double val){
	return (amt / val);
	}

double processPrint(double amt){
	printf("%lf\n", amt);
	return (amt);
	}

double processClear(){
	return 0;
	}
