#include<stdio.h>
int main(){
int sum=0,a[100],n;
double avg;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    sum=sum+a[i];
}
avg=(double)sum/n;
printf("sum=%d\n",sum);
printf("Average=%.2lf\n",avg);
return 0;


}
