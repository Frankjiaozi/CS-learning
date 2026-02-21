#include <stdio.h>
//Ì°ÐÄËã·¨
int main()
{
    while(1)
    {
    int n,m;
    scanf("%d %d",&m,&n);
    if(n==0 || m==0)
    {
        break;
    }
    int x,y;
    x=(n-m*2)/2;
    y=m*2-n/2;
    if(n%2!=0 || x<0 || y<0)
    {
        printf("Error\n");
    }
    else{
    printf("%d %d\n",y,x);
    }

    }
    

}