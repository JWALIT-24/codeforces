#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,s,m;
        scanf("%d %d %d",&n,&s,&m);
        int l[n],u[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d %d",&l[i],&u[i]);
        }
         int f=0;
        for(int i=0;i<n;i++)
        {
           if(u[i]-l[i-1]>=s){
            f=1;
           printf("YES\n");
           break;
           }
          
        }

         if(f==0)
           {
             if(m-l[n-1]>=s || u[0]>=s)
             printf("YES\n");
           }
           else
           printf("NO\n");

     

    }
}