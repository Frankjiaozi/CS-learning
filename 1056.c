#include <stdio.h>
#define N 7

void sort(float arr[])
{
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                float temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{   int flag=1;
    while(1)
    {
        float arr[N];
        char name[100];
        for(int i=0;i<N;i++)
    {
        if(scanf("%f",&arr[i])==EOF)
        {
            flag=0;
            break;
        }
    }
    if(!flag)
    {
        break;
    }
    scanf("%s",name);

    sort(arr);
    float sum=0.0;
    for(int i=1;i<N-1;i++)
    {
        sum+=arr[i];
    }
     printf("%s ",name);
    printf("%.2f\n",sum/(N-2));
    
    }
    
}