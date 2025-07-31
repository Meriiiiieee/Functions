#include <stdio.h>
#include <stdbool.h>

bool is_prime(int number) {

    if(number <=1){
       printf("Number is not prime: ");
       return false;
    }

    for (int i = 2; i * i <=  number; i++) {
        if (number % i == 0) {
           printf("Number is not prime: ");
           return false;
        }
    }
    printf("Number is prime");
    return true;
}

int main () {
    int number = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

      is_prime(number);
      return 0;
}      
