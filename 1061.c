#include <stdio.h>
int main()
{   int n;
    while(scanf("%d",&n)!=EOF && n!=0)
    {
        int arr[n][n];
        //初始化为0
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=0;
            }
        }
        //核心逻辑
        arr[0][0]=1;
        arr[1][0]=1,arr[1][1]=1;
        for(int i=2;i<n;i++)//外层循环
        {
            arr[i][0]=1;
            arr[i][i]=1;
            //计算中间数
            for(int j=1;j<i;j++)
            {
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                printf("%d",arr[i][j]);
                if(j!=i)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
      printf("\n");  
    }
}