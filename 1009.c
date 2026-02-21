#include <stdio.h>

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
            if(arr[j]<arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int main()
{ 
    int m;
    scanf("%d",&m);  
for(int i=0;i<m;i++)
    {
       int n;
        int arr[100000];
        int compare[100000];
        int k=0;
      scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    //对数组进行排序
    sort(arr,n);
    int p1=0;
    int p2=0;
    int count=0;
    while(p2<=n-1 && p1<=n-1) // 1 1 1 2 2 3 3 3 3 3
    {   
        
        if(arr[p2]==arr[p1])
        {
              p2++;
              count++;
              if(p2==n-1)
              {
                compare[k]=++count;
              }
        }
        else
        {
            p1=p2;
            compare[k]=count;
            k++;
            count=0;
        }
    }
    sort(compare,k);
    printf("%d\n",compare[0]);
    }
}