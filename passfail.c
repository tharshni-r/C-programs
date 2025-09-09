#include <stdio.h>
int main()
{
    int mark;
    printf("enter your mark:");
    scanf("%d",&mark);
    if (mark>=40)
    printf("passed the exam");
    else
    printf("failed the exam");
    return 0;
}