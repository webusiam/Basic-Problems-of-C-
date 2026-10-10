#include<stdio.h>
int Factorial(int N){
int Fact=1;
for(int i=1;i<=N;i++)
{
    Fact=Fact*i;
}
return Fact;
}
int main(){
int b;
scanf("%d",&b);
printf("%d",Factorial(b));
return 0;
}

