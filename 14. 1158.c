#include<stdio.h>
int main(){
int N;
scanf("%d",&N);
while(N--)
{
    int x,y;
    scanf("%d %d",&x,&y);
    int sum=0;
    if(x%2==0){x++;}

        for(int i=1;i<=y;i++)
        {
            sum=sum+x;
            x=x+2;
        }

  printf("%d\n",sum);
}
return 0;
}
