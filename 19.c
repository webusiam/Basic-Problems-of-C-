#include<stdio.h>
int sumDigits(int N){
int sum=0,digit;
while(N!=0){
    digit=N%10;
    sum=sum+digit;
    N=N/10;
}
return sum;
}
int main(){
int N;
scanf("%d",&N);
printf("sum=%d",sumDigits(N));
return 0;

}
