#include<stdio.h>

int main() {
	int num;
	
	printf("Please enter any value: ");
	scanf("%d", &num);
	
	if (num % 2 == 0) {
		printf("%d is even number", num);
	} else {
		printf("%d is odd number", num);
	}
	
	return 0;	
}
