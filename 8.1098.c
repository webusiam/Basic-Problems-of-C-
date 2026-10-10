#include<stdio.h>
int main(){
int i,j;
for(i=0;i<=10;i++){
 for(j=1;j<=3;j++)
 {
     if(i==0)
        printf("I=0 J=%d\n",j);
 else if(i==5 || i==10)
    printf("I=%d J=%d\n",i/5,i/5+j);
 else printf("I=%.1lf J=%.1lf\n",i/5.0,i/5.0+j);
 }
}
return 0;

}
