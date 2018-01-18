#include<stdio.h>
#include<string.h>
int main()
{
    char str[100000];
    int i,length = 0;
    scanf("%s",str);
    length = strlen(str);
    if(length<=100000)
    for(i=length-1;i>=0;i--)
    {
            printf("%c",str[i]);
    }
    
    return  0;
}
