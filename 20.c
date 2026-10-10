#include<stdio.h>
int reverseNumber(int N){
int rev=0,digit;
while(N!=0){
    digit=N%10;
    rev=rev*10+digit;
    N=N/10;
}
return rev;
}
int main(){
int N;
scanf("%d",&N);
printf("%d",reverseNumber(N));
return 0;
}
