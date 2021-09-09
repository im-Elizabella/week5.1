#include<stdio.h>
int main ()
{
    int x,y;
    int n;
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        for(y=1;y<=n-x;y++)
        {
            printf(" ");
        }
        for(y=1;y<=2*x-1;y++)
        {
            printf("*");
        }    
       printf("\n");    
    }
    return 0;
}