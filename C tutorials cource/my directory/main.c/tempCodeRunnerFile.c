#include<stdio.h>
void main()
{
    int i=2;
    xyz:
    printf("%d\t",i);
    i=i+2;
    printf("%d\n",i);
    i=i+4;
    if(i<=20)
    {
        goto xyz;
        printf("%d,\t");
    }
}