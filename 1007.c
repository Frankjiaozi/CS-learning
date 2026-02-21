#include <stdio.h>

int f(int n)
{   
    int result=0;
    if(n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }
    result=f(n-1)+f(n-2);
    return result;
}


int main()
{
    int n;
    while(1)
    {
        int result=0;
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        result = f(n);
        printf("%d\n",result);
    }
}