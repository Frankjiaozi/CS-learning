#include <stdio.h>
//贪心算法

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}


void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int main()
{
    while(1)
    {
        int n;
        int win=0;
        int count=0;
    scanf("%d",&n);
    if(n==0)
    {
        break;
    }
    int y_speed[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&y_speed[i]);
    }
    int o_speed[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&o_speed[i]);
    }
//排序
sort(y_speed,n);
sort(o_speed,n);

    int *y_left=&y_speed[0];
    int *y_right=&y_speed[n-1];
    int *o_left=&o_speed[0];
    int *o_right=&o_speed[n-1];
    while(1)
    {
        if(count==n)
        {
            break;  
        }
    if(*y_left > *o_left)//如果渊子最慢马 快于 敌人最慢马
    {
        win++;
        y_left++;
        o_left++;
        count++;
    }
    else//渊子最慢马慢于敌人最慢马
    {
        if(*y_right>*o_right)//最快马更快
        {
            o_right--;
            y_right--;
            count++;
            win++;
        }
        else//用最慢马消耗
        {
           y_left++;
           o_right--;
           count++;

        }
    }
    }
    if(win>(n/2))
    {
        printf("YES\n");
    }
    else printf("NO\n");

    

    }
    
}