
   
#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,s,sq,r,l,c;
    scanf("%d",&n);
    m=n;
    l=n;
    c=0;
    while(m>0)
    {
        r=m%10;
        m/=10;
        c++;
    }
    s=0;
    while(l>0)
    {
        r=l%10;
        l/=10;
        sq=pow(r,c);
        c--;
        s+=sq;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

