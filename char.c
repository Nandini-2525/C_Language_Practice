#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the char: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("The char is in upper case");
    }
    else if (ch>='a' && ch<='z')
    {
        printf("the char is in lower case.");
    }
    else if (ch>='1' && ch<='9')
    {
        printf("the char is digits.");
    }
    else
    {
        printf("The char is Special character.");
    }
    
    return 0;
}