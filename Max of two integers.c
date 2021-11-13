#include <stdio.h>
int max (int x,int y)
{
    if (x>y)
    return x;
    else 
    return y;
}
int main()
{
    int a, b, ans;
    printf("a");
    scanf("%d %d", &a, &b);
    ans=max(a,b);
    printf("ans %d", ans);
    return 0;
}
