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
    {       if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='O'&&str[i]!='I'&&str[i]!='U'){
            printf("%c",str[i]);}
    }
    
    return  0;
}
