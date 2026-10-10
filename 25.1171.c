#include<stdio.h>
int main(){
int a,N,temp,count=0;
scanf("%d",&N);
while(N--){
        int a;
    scanf("%d",&a);
temp=a;
if(temp==a){
    count++;
}
}
printf("%d aparece %d vez(es)\n",a,count);
return 0;
}
