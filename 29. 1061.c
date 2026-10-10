#include<stdio.h>
int main(){
int d1,h1,m1,s1,start,end,diff;
int d2,h2,m2,s2;
char ch[10];
scanf("%s %d",ch,&d1);
scanf("%d : %d : %d",&h1,&m1,&s1);
scanf("%s %d",ch,&d2);
scanf("%d : %d : %d",&h2,&m2,&s2);
start=d1*86400+h1*3600+m1*60+s1;
end=d2*86400+h2*3600+m2*60+s2;
diff=end-start;
printf("%d dia(s)\n",diff/86400);
diff=diff%86400;
printf("%d hora(s)\n",diff/3600);
diff=diff%3600;
printf("%d minuto(s)\n",diff/60);
diff=diff%60;

printf("%d segundo(s)",diff);
return 0;
}
