// count.c  Count the number of lines and chars in the input.

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main() {
  int lineCount = 0;
  int numLines = 0;
  int numChars = 0;
  int numWords = 0;
  int wasChar = 0;
  double avgWordLength = 0;
  int wordChars = 0;
  printf("Enter text.  Use an empty line to stop.\n");
  
  while (1) {
      int ic = getchar();
      if (ic < 0)    //EOF encountered
          break;
      char c = (char) ic;
      if (c == '\n' && lineCount == 0) //Empty line
          break; 
      numChars ++;
      if (c == '\n') {
          numLines ++;
          lineCount = 0;}
      if (isspace(c)==0){
	  wasChar=1;
	  wordChars ++;	}
      if (c == ' '){
	  if (wasChar==1){	
	  wasChar=0;
          numWords++;}}

      if (c== '\n' && wasChar==1){
	  wasChar=0;
	  numWords++;}
      else
          lineCount ++;

  }
  double words = numWords;
  double chars = wordChars;
  avgWordLength = chars / words;
  printf("Your text has %d lines and %d characters.\n", numLines, numChars);
  printf("Your text has %d words and %.2lf average word length.\n", numWords,   avgWordLength);
  
}
