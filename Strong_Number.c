#include<stdio.h>

int main()
{
    int n,i,temp,r,fac,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        fac=1;
        r=n%10;
        for(i=r;i>=1;i--)
        {
            fac=fac*i;
        }
        sum=sum+fac;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}