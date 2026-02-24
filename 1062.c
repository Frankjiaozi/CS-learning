#include <stdio.h>
int main()
{
    int n;
    int temp=1;
    int arr[100];
        for(int i=0;i<=30;i++)
        {
            arr[i]=temp;
            temp=(temp+1)*2;
        }
    while (scanf("%d",&n)!=EOF)
    {
        printf("%d\n",arr[n-1]);
    }
}