 #include<stdio.h>
 int main(){
 int N,Fact=1;
 scanf("%d",&N);
for(int i=1;i<=N;i++)
{
    Fact=Fact*i;
}
printf("Fact=%d",Fact);
return 0;
 }
