#include <stdio.h>
#include <stdbool.h>


int isAlpha(char c) {
	if (( c>= 'A' && c<='Z') || (c>='a' && c<='z')) {
		return true;
	} else {
	    return false;
          }
}

int main() {
    char c = 0;

    printf("Enter the symbol: ");
    scanf(" %c", &c);
  
   printf("%d", isAlpha(c));
 return 0;
} 
