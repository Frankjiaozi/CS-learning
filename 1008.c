#include <stdio.h>
#include <string.h>
char re_str1[100]="ECFAJKLBDGHIVWZYMNOPQRSTUX";
char re_str2[100]="erwqtyghbnuiopsjkdlfazxcvm";



int main()
{
    while(1)
    {
        char input_str[100000];
        scanf("%[^\n]",input_str);
        getchar();
        if(strcmp(input_str,"#")==0)
        {
            break;
        }
        int len=(int)strlen(input_str);
        for(int i=0;i<len;i++)
        {
            if(input_str[i]>='A' && input_str[i]<='Z')
            {
                printf("%c",re_str1[input_str[i]-'A']);
            }
            else if (input_str[i]>='a' && input_str[i]<='z')
            {
              printf("%c",re_str2[input_str[i]-'a']);
            }
            else if(input_str[i]==' ')
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}