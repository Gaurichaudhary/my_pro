#include <stdio.h>
#include<string.h>

int main()
{
    char a[100] ;
    int l;
    scanf("%s",a);
    l=strlen(a);
    a[l]='.';
    printf("%s",a);

    return 0;
}
