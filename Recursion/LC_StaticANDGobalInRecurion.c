#include<stdio.h>

int fun1(int n)
{
    if(n>0)
    {
        return (fun1(n-1)+n);
    }
    return 0;
}

int fun2(int n) //Static Variable
{
    static int x=0;
    if(n>0)
    {
        x++;
        return (fun2(n-1)+x);
    }
    return 0;
}

int y=0;        //Global Variable for fun3()
int fun3(int n) //Global Variable
{

    if(n>0)
    {
        y++;
        return (fun3(n-1)+y);
    }
    return 0;
}

void main()
{
    int r;
    r = fun1(5);
    printf("fun1(5): %d\n",r);
    r = fun1(5);
    printf("fun1(5): %d\n",r);
    r = fun2(5);
    printf("\nfun2(5): %d\n",r);
    r = fun2(5);        
    printf("fun2(5): %d\n",r);
    r = fun3(5);
    printf("\nfun3(5): %d\n",r);
    r = fun3(5);        
    printf("fun3(5): %d\n",r);

}



//Result and working of fun2() and fun3() are same.
//When fun3() is called 2nd time, value of y = 5 so the result changes.
//When fun2() is called 2nd time, value of x = 5 since it is a local BUT Static variable...
//...Therefore the result remains the changes.

//Result remains same in fun1() is case of multiple calls, because everything is happening...
//...in Local and Normal (NON-Static) (Static hota tab bhi same hi result aata) variables.