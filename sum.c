#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main () {
    int a = 0;
    int b = 0;

    printf("ENter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);
   
    int result = sum(a, b);
    printf("The result is %d", result);

    return 0;
    }
