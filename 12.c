#include<stdio.h>
int main(){
int N,D,sum=0;
scanf("%d",&N);
while(N!=0){
D=N%10;
N=N/10;
sum=sum+D;}
printf("%d",sum);
return 0;
}

