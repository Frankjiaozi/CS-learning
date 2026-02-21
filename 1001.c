#include <stdio.h>
typedef struct TEST
{
    double time;
    double value;
    double avr_value;
}TEST;

void swap(TEST *p1,TEST *p2)
{
    TEST temp= *p1;
    *p1 = *p2;
    *p2 = temp;
}
void sort(TEST arr[],int m)
{
    for(int i=0;i<m-1;i++)
    {
        for(int j=0;j<m-1-i;j++)
        {
            if(arr[j].avr_value<arr[j+1].avr_value)
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
        double total_value=0;
        int m;
        double n;
    scanf("%d %lf",&m,&n);//表示有m张试卷，还剩下n的时间
    if(m==0 && n==0)
    {
        break;
    }
    TEST exam_list[m];
    //输入试卷数据
    for(int i=0;i<m;i++)
    {
        scanf("%lf %lf",&exam_list[i].time,&exam_list[i].value);
        exam_list[i].avr_value = exam_list[i].value / exam_list[i].time;
    }
    sort(exam_list,m);
    int count=0;
    while(1)
    {
        if(count >m-1)
        {
            break;
        }
        int temp=n-exam_list[count].time;
        if(temp>0)
        {
            n-=exam_list[count].time;
            total_value+=exam_list[count].value;
            count++;

        }
        else
        {
            total_value+=n * exam_list[count].value /exam_list[count].time;
            break;
        }
        
    }
    printf("%.2lf\n",total_value);
    }
    
}