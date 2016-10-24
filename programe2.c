#include <stdio.h>

int main(void) {
	int a;
	printf("\n Enter the number:");
	scanf("\n%d",&a);
	if(a==0||(a%2==0))
    printf("\n The given number is even");
    else
    printf("\n The given number is odd");
	return 0;
}
