#include<stdio.h>
int isPrime( int N){
   int count=0,Prime;
for(int i=1;i<=N;i++)
{
    if(N%i==0)
    {
        count++;
    }
}
    if(count==2)
        Prime=1;
    else Prime=0;
    return Prime;}
int main(){
    int N;
    scanf("%d",&N);
if(isPrime(N))
{
    printf("Prime\n");

}
else {printf("not Prime\n");}

return 0;

}

