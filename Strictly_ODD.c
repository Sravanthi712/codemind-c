#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            if(i%2!=1)
            {
         printf("False") ;
             return 0;   
            }
        }
    }
    
    
        printf("True");
    return 0;
} 
    
    
    
