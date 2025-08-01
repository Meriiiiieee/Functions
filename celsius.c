#include <stdio.h>

float fahrenheit(float celsius) {
	return ((celsius * 9/5) + 32);
}
int main() {
	float celsius = 0;

	printf("Enter the celsius : ");
	scanf("%f", &celsius);

	float result = fahrenheit(celsius);
	printf("Temperature in fahrenheit %f", result);
	return 0;
}
