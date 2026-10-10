#include<stdio.h>
#include<string.h>
int main(){
int N;
scanf("%d",&N);
while(N--){
    char a[51];
    char b[51];
    int i=0,j=0;
      scanf("%50s %50s",a,b);
    while(a[i]!='\0' && b[i]!='\0'){
    printf("%c%c",a[i],b[i]);
    i++;
    }
    while(a[i]!='\0')
    {
        printf("%c",a[i]);
        i++;
    }
    while(b[i]!='\0')
  {
      printf("%c",b[i]);
      i++;
  }

printf("\n");
}return 0;
}
