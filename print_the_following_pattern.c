#include<stdio.h>
int main()
{ 
    int n;
    scanf("%d",&n); 
    int i,j; 
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<n-1;j++)
        { 
            printf("%d",j); 
            
        } 
        for(j=1;j<=n-3;j++) 
        {
            printf("%d",j);
            } 
            printf("
");
            }
    
}