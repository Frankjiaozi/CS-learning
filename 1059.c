#include <stdio.h>

int sum(int arr[],int pos)
{   int result=0;
    for(int i=pos;i>=0;i--)
    {
        result+=arr[i];
    }
    return result;
}


int sumback(int arr[],int pos)
{   int result=0;
    for(int i=0;i<=pos;i++)
    {
        result+=arr[i];
    }
    return result;
}

void revert_arr(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)//1 2 3 4 5 6
    {
        int temp=arr[2*n-1-i];
        arr[2*n-1-i] = arr[i];
        arr[i]=temp;
    }
}



int main()
{
    while(1)
    {
        int n;
        int count = 0;
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        int ar_m[2*n];
        int ar_fm[2*n];
        int arr[2*n];
        for(int i=0;i<2*n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int temp=0;
        for(int i=0;i<2*n;i++)
        {
            temp+=arr[i];
            ar_m[i]=temp;
        }
        temp=0;
        int k=0;
        for(int i=2*n-1;i>=0;i--)
        {
            temp+=arr[i];
            ar_fm[k]=temp;
            k++;
        }
        //printf("\n");
        //revert_arr(ar_fm,n);
        //3,9,11,15,20,22     
        //22,19,13,11,7,2
        int p_m=0;
        int p_fm=0;
        while(p_m<=2*n && p_fm<=2*n)
        {
            if(ar_fm[p_fm] == ar_m[p_m])
            {
                count++;
                p_fm++;
                p_m++;
            }
            else if(ar_fm[p_fm]>ar_m[p_m])
            {
                p_m++;
            }
            else if(ar_fm[p_fm]<ar_m[p_m])
            {
                p_fm++;
            }
        }

        printf("%d\n",count);

    }
}
