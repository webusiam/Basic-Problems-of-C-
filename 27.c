#include<stdio.h>
int main(){
int i,n,array[100];
scanf("%d",&n);
for(int i=0;i<n;i++)
    scanf("%d",&array[i]);
for( int i=n-1;i>=0;i--)
    printf("%d\n",array[i]);

return 0;


}
