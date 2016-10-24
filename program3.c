#include<stdio.h>
int main()
{
    char ch;
    printf("\n Enter the character:");
    scanf("\n %c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    printf("\n %c is vowels",ch);
    else
    printf("\n %c is consonant",ch);
    return 0;
}
