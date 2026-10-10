
#include<stdio.h>
int main(){
int N,temp,rev=0,digit;
scanf("%d",&N);
temp=N;
while(N!=0){
    digit=N%10;
    rev=rev*10+digit;
    N=N/10;
}
if(temp==rev)
{
    printf("Palindrome\n");
}
    else printf("Not Palindrome\n");
return 0;
}
