#include<stdio.h>
int main(){
int i,n,a[100],count=0,New;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
scanf("%d",&New);
for(int i=0;i<n;i++){
if(New==a[i])
{
    count++;
}
}
printf("Occured=%d",count);
return 0;
}
