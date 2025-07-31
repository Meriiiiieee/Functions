#include <stdio.h>

int degree(int a, int b) {
    int result = 1;

    if ( b == 0) {
        result = 1;
    }

    if (b > 0) {
      for ( int i = 0; i<b; i++) {
         result *= a;
      }
    }

    return result;
}

int main () {
    int a = 0;
    int b = 0;
    
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("%d power of %d = %d", a, b, degree(a,b));
     
    return 0;
}    

