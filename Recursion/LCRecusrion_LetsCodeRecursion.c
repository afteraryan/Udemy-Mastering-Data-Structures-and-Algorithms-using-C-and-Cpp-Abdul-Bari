#include<stdio.h>
void funheadrecursion( int n)
{
    if ( n>0 )
    {
        printf("%d ",n);
        funheadrecursion( n-1);
    }
}
void funtailrecursion( int n)
{
    if ( n>0 )
    {
        funtailrecursion( n-1);
        printf("%d ",n);
        
    }
}
int main()
{
    int x = 3;
    funheadrecursion(x);
    funtailrecursion(x);
    return 0;
}