#include <stdio.h>
#include <string.h>
int main()
{
    char c;
    printf("enter the character:");
    scanf("%c",&c);
    if(strchr("aeiouAEIOU",c))
    printf("vowel");
    else
    printf("consonant");
    return 0;
}