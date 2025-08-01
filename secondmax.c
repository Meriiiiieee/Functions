#include <stdio.h>
#define SIZE 5

int SecondMax(int arr[], int size) {
	int max = 0;
	int secondmax = 0;

       
	if (arr[0] > arr[1]) {
		max = arr[0];
		secondmax = arr[1];
	} else {
		max = arr[1];
		secondmax = arr[0];
	}

	for (int i = 2; i<SIZE; i++) {
		if ( arr[i] > max) {
			secondmax = max;
			max = arr[i];
		} else if ( arr[i]> secondmax &&  arr[i] != max) {
		           secondmax = arr[i];
		}
	} 
        return secondmax;
}	


	int main () {
		int arr[SIZE];

		printf("Enter the elements: ");
		for (int i = 0; i< SIZE; i++) {
			scanf("%d", &arr[i]);
		}	
	      
	      int result = SecondMax(arr, SIZE);
              printf("Second maximum number %d", result);
	      return 0;
	}
