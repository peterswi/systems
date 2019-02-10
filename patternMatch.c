//Will Peters
//Systems HW3

#include <stdio.h>
#include <ctype.h>
int readline(int* text, int maxChar);
int* findmatch(int* pattern, int* text, int lenPattern, int lenText);
void printmessage(int* position, int* text, int lenPattern, int lenText);

int main() {
   int text[40], pattern[40], *position;
   int textlen, patternlen;

   printf("Enter text: ");
   textlen = readline(text, 40);
   printf("Enter pattern: ");
   patternlen = readline(pattern, 40);
   position = findmatch(pattern, text, patternlen, textlen);
   printmessage(position, text, patternlen, textlen);
}

int readline(int* text, int maxChar){
	int counter=0;
	int i;
	for(i=0; i< maxChar; i++){
		int c = getchar();
		
		if (isspace(c)){
			break;}
		if (c<0){break;}
		text[i] =c;
		counter++;
	}
	return counter;
}

int* findmatch(int* pattern, int* text, int lenPattern, int lenText){
	int i,j;
	int* position =NULL;
	if (lenPattern>lenText){
		position= NULL;
		return position;}
	int iterations = lenText-lenPattern;
	for(i=0; i< iterations+1;i++){
		j=0;	

		while (i+j < lenText){
			if(pattern[j]==text[i+j]){
				j++;
				}
			else if((pattern[j])==63){//63 is the ? ASCII code
				j++;}
			else{
				break;}	
			if(j==lenPattern){
				position = text + i;
							}	
		}
	}
	return position;	
}

void printmessage(int* position, int* text, int lenPattern, int lenText){
	if (position == NULL){
		printf("Better luck next time!\n");}
	else{
	int *point= position + lenPattern;
	int *endtext= text + lenText;
	printf("The pattern was found at char %d.", position-text +1);
	printf("The remaining chars are: ");
	for(point; point<endtext; point++){
		position+=1;
		putchar(*point); }

	}
	printf("\nPeace fam\n");
}
