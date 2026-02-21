#include <stdio.h>
#include <string.h>

void find(int arr[],char s1[],char s2[])
{
    int len1 =(int)strlen(s1);
    int k=0;
    for(int i=0;i<len1;i++)
    {
        if(s1[i]+s2[0]==155)
        {
            arr[k]=i;
            printf("%d ",arr[k]);
            k++;
        }
    }
}
void trans(char str[])
{
    int len=(int)strlen(str);
      for(int i=0;i<len;i++)
      {
        str[i]=155-str[i];
        
        
      }
}

int main()
{   

    char s1[100]="BDEAFAGH";
    char s2[100]="ZCYGFHJ";
    trans(s2);
   printf("%s",s2);
   

}