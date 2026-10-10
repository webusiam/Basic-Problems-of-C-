#include<stdio.h>
int main(){
int year;
scanf("%d",&year);
if(year%400==0 || year%100!=0 && year%4==0)
{
    printf("leap Year\n");
}
else printf("Not Leap Year\n");
return 0;
}
