#include<stdio.h>
int main(){
int n,max,min,a[100];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    max=min=a[0];
    for(int i=1;i<n;i++){
    if(a[i]>max) max=a[i];
    if(a[i]<min) min=a[i];
}}
printf("Largest=%d\n",max);
printf("Smallest=%d\n",min);
return 0;
}
