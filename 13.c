 #include<stdio.h>
 int main(){
 int N,rev=0,digit;
 scanf("%d",&N);
 while(N!=0){
digit=N%10;
 rev=rev*10+digit;
 N=N/10;
 }
 printf("%d",rev);
 return 0;

 }
