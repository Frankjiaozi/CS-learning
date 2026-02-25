
#include <stdio.h>
int main()
{
    int arr[5]={6,28,496,8128,33550336};

    int m,n;
    while(1)
    {   int flag=0;
        // ‰»Î
        scanf("%d %d",&m,&n);
        if(m == 0 && n== 0)
        {
            break;
        }
        //////////////
        int first=0;
        for(int i=0;i<5;i++)
        {
            if(arr[i]>=m && arr[i]<=n)
            {   
                if(first==0)
                {
                    printf("%d",arr[i]);
                    flag=1;
                    first=1;
                }
                else
                {
                    printf(" %d",arr[i]);
                    flag=1;
                }
                
            }
        }
        if(flag==0) printf("No");
        printf("\n");



    }
}


