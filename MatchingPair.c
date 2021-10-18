#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,c=0,ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]!=0)
        for(j=i+1;j<n;j++)
        {
            
            if(ar[i]==ar[j])
            {
                c++;
                ar[j]=0;
               
                break;
            }
        }
    }
  
    printf("%d",c);
    
    return 0;
}
