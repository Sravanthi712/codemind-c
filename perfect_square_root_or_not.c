#include<stdio.h>
#include<math.h>
int main()
{
    int ivar,n;
    float fvar;
    scanf("%d",&n);
    fvar=sqrt((double)n);
    ivar=fvar;
    if(ivar==fvar)
    {
        printf("True");
        
        
    }
    else
    {
        printf("False");
    }
}