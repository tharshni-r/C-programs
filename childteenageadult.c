#include <stdio.h>
int main()
{
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if(age<13)
    printf("child");
    else if(age>=13 && age<=19)
    printf("teenage");
    else
    printf("adult");
    return 0;
}