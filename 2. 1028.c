#include<stdio.h>
int main(){
int N,a,b,temp;
scanf("%d",&N);
while(N--){
scanf("%d %d ",&a,&b);
while(b!=0){
    temp=b;
    b=a%b;
    a=temp;
}
printf("%d\n",a);
}
return 0;
}
