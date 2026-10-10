#include<stdio.h>
int main(){
int n, array[100];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&array[i]);
    for(int i=0;i<n;i++)
        printf("%d\n",array[i]);
}
return 0;
}



