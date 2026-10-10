#include<stdio.h>
int main(){
int N;
   double x;
scanf("%d",&N);
while(N--){
int count=0;
scanf("%lf",&x);
while(x>1){
    x=x/2;
    count++;
}
printf("%d dias\n",count);
}
return 0;
}
