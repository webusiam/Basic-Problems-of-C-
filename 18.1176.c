#include<stdio.h>
int main(){
long long i,j,f,N;
scanf("%lld",&N);
for(i=1;i<=N;i++){
 scanf("%lld",&f);
 long long a=0,b=1,c=0;
 if(f==0){
    c=0;
 }
 else if(f==1){
    c=1;
 }
 else{
        for(j=2;j<=f;j++){
    c=a+b;
    a=b;
    b=c;
 }
 }
    printf("Fib(%lld)=%lld\n",f,c);
}
return 0;
}


