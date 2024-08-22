#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[4],su=0;
        for(int i=0;i<4;i++)
        {
            scanf("%d",&a[i]);
        }

        if(a[0]>a[2] && a[1]>=a[3] || a[0]>=a[2] && a[1]>a[3])
        su++;
        if(a[0]>a[3] && a[1]>=a[2] || a[0]>=a[3] && a[1]>a[2])
        su++;
        
        printf("%d\n",2*su);
    }
}