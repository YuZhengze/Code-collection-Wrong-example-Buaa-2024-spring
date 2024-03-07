#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(b==0){printf("ERROR. The divisor is ZERO");return 0;}
    else printf("%d div %d = %d",a,b,a/b);
    return 0;
}