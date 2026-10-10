#include<stdio.h>
int main(){
int n,a[100],even;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);}

    for(int i=0;i<n;i++)
{

    if(a[i]%2==0)
        {even=a[i];
        printf("Even=%d\n",even);
        }

}

return 0;
}

