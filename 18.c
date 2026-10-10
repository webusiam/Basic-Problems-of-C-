#include<stdio.h>
int findmax(int a, int b, int c){
    int max;
    max=a;
    if(b>max)max=b;
    if(c>max)max=c;
    return max;}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",findmax(a,b,c));
    return 0;

}
