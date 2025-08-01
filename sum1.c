#include <stdio.h>
 
int sum( int number) {
	int result = 0;
	while (number > 0) {
		result += number % 10;
		number /= 10;
	}
		return result;	
	} 
           
int main () {

	int number = 0;

	printf("Enter the number: ");
	scanf("%d", &number);

	printf("%d" , sum(number));
	return 0;
}	
