#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d)
{
    int ans=0;
    if(a>=b)
    {
        if(a>=c)
        {
            if(a>=d)
            {ans = a;}
            else 
            {
                 ans=d;
            }
        }
        else if(c>=d)
        {
            ans = c;
        }
        else 
            {
                 ans=d;
            }
    }
    else if(b>=c)
    {
        if(b>=d)
        {
            ans = b;
        }
        else 
            {
                 ans=d;
            }
    }
    else if(c>=d)
    {
        ans = c;
    }
    else {
    ans = d;
    }
    return ans;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
