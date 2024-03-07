#include<stdio.h>
int main()
{
    long long sum=0;
    int a,n=0;
    a=0;
    while(1)
    {
        scanf("%d",&a);
        if(a==-1)break;
        else {
            sum+=a;n++;
        }
    }
    printf("%lld/%d = %lld",sum,n,sum/n);
    return 0;
}