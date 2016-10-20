#include<stdio.h>
int main()
{
    int a;
    printf("\n Check the Number");
    printf("\n Enter the number:");
    scanf("\n %d",&a);
    if(a>0)
    {
        printf("\n %d is Positive",a);
    }
    else if(a<0)
    {
        printf("\n %d is Negative",a);
    }
    else if(a=0)
    {
        printf("\n zero");
    }
}
