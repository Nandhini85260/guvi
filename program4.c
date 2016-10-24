#include<stdio.h>
int main()
{
    char ch;
    printf("\n Enter the character:");
    scanf("\n %c",&ch);
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    printf("\n %c is alphabet",ch);
    else
    printf("\n %c is not alphabet",ch);
    return 0;
}
