#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        
        int c = n / 10;
        int d = n % 10;
        printf("%d\n", (c + d));
    }
    return 0;
}
