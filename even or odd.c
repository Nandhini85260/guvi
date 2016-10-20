#include <stdio.h>

int main(void) {
	int n;
	printf("\n Even or Odd");
	printf("\n Enter the number:");
	scanf("%d",&n);
	if(n%2==0)
	printf("\n %d is even Number",n);
	else
	printf("\n %d is odd number",n);
	return 0;
}

