#include<stdio.h>

int main() {
	int x;
	
	printf("Please enter value of x: ");
	scanf("%d", &x);
	
	x >= 100 ? printf("x is greater or equal to 100") : printf("x is less than 100");
	
	return 0;
}
