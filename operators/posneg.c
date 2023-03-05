#include<stdio.h>

int main() {
	int a;
	
	printf("Please enter any value: ");
	scanf("%d", &a);
	
	a >= 0 ? printf("%d is positive number", a) : printf("%d is negative number", a);
	
	return 0;
}
