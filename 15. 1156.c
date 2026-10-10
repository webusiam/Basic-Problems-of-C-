#include<stdio.h>
int main(){
double sum=0;
int N=1,D=1;
while(N<=39){
sum=sum+(double)N/D;
N=N+2;
D=D*2;
}
printf("%.2lf\n",sum);
return 0;
}
