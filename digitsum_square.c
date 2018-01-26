#include<stdio.h>
int main()
{
int n,r,s=0;
scanf("%d",&n);
if(n>=1&&n<=10000000000000000){
    while(n>0){
        r=n%10;
        s=s+(r*r);
        n=n/10;}
    }
printf("%d",s);
return 0;}
