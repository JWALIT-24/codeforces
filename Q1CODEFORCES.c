#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a=0,b=0,c=0,d=0;
        scanf("%d",&n);
        char arr[4*n];
        for(int i=0;i<(4*n);i++)
        {
            scanf(" %c",&arr[i]);
        }

       for(int i=0;i<(4*n);i++)
       {
          if(arr[i]=='A')
          a++;
          else if(arr[i]=='B')
          b++;
          else if(arr[i]=='C')
          c++;
          else if(arr[i]=='D')
          d++;
       }

       int sum=0;

       if(a>n)
       a=n;
       else if(b>n)
       b=n;
       else if(c>n)
       c=n;
       else if(d>n)
       d=n;
       
       sum=(a+b+c+d);
       printf("%d",sum);
       
    }
}