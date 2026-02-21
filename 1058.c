#include <stdio.h>
#include <string.h>
//ABCDEFGIJKLMNOPQRSTUVWXYZ 65+26=91
//123456789
//ZYXW
//
void trans(char str[])
{
    int len=(int)strlen(str);
      for(int i=0;i<len;i++)
      {
        str[i]=155-str[i];
        //printf("%c",str[i]);

      }
}

int find(int arr[],char s1[],char s2[])
{
    int len1 =(int)strlen(s1);
    int k=0;
    for(int i=0;i<len1;i++)
    {
        if(s1[i]+s2[0]==155)
        {
            arr[k]=i;
            k++;
        }
    }
    return k;
}


int judge(char s1[],char s2[])
{
int len1 =(int)strlen(s1);
int len2 =(int)strlen(s2);
if(len1 < len2)
{
    return 0;
}
else if(len1 == len2)
{
    int flag=1;
    for(int i=0;i<len1;i++)
    {
        if(s1[i]+s2[i] != 155)
        {
            flag=0;
            break;
        }
    }
    return flag;
}
else if(len1>len2) //AHBICJDKELFMGN    ZYXWVUT
{   
int i=0;
int j=0;
int flag=0;
while(i<=len1 && j<=len2)
{
    if(s1[i]+s2[j]==155)
    {
        j++;
    }
    i++;
    if(j==len2)
    {
        flag=1;
    }
}
if(flag==1)
{
    return 1;
}




}
return 0;
}

int main()
{
    while(1)
    {
        char s1[100000];
        char s2[100000];
        scanf("%s",s1);
        scanf("%s",s2);
        if(strcmp(s1,"0")==0)
        {
            break;
        }
        int result = judge(s1,s2);
        
        result==1? printf("Yes\n"):printf("No\n");

    }
}