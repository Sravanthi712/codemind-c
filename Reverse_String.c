#include<stdio.h>

int main()
{
    char s1[100];
    scanf("%[^
]s",s1);
    int i,j,t,len=0;
    for(i=0;s1[i]!=0;i++)
    {
        len=len+1;
    }
    i=0;
    j=len-1;
    while(i<j)
    {
        t=s1[j];
        s1[j]=s1[i];
        s1[i]=t;
        i++;
        j--;
    }
    printf("%s",s1);
}