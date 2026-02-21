#include <stdio.h>
int n,m,t;
int arr[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
int count=0;
int step;

//错误的dfs,应该用BFS
int  min_arr(int arr[],int n)
{   int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;

}



void dfs(int y,int x,char maze[][n],int path[],int step)
{
    //终止条件
    if(y<0 || x<0 || y>=m || x>=n || maze[y][x]=='*' || maze[y][x]=='u')
    {
        return;
    }
    if(maze[y][x]=='P')
    {
        path[count]=step;
        count++;
        return;
    }
    maze[y][x]='u';

    for(int i=0;i<4;i++)
    {
        int new_y=y+arr[i][1];
        int new_x=x+arr[i][0];
        dfs(new_y,new_x,maze,path,step+1);        

    }

    maze[y][x]='.';

    return;
}



int main()
{
    while(1)
    {
        int path[10000];
        step=0;
    n=0,m=0,t=0,count=0;
     scanf("%d %d %d",&n,&m,&t);//n是长，m是高，t是天数
     if(n==0 || m==0 || t==0)
     {
        break;
     }
     getchar();
     char maze[m][n];
    int s_x,s_y;

     for(int i=0;i<m;i++)
     {
        for(int j=0;j<n;j++)
        {
            scanf("%c",&maze[i][j]);
            if(maze[i][j]=='S')
            {
                s_y=i;
                s_x=j;
            }
        }
        getchar(); 
     }

    //输入完成
    dfs(s_y,s_x,maze,path,step);
     
    if(count==0)
    {
        printf("NO\n");
        continue;
    }

if(count!=0)
{
    int result=min_arr(path,count);
    if(result<=t)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
}
}