#include <stdio.h>
int f(int x){static int s=0;s+=x;return s;}
int main(void){int n,a=0;scanf("%d",&n);if(n<1||n>10){printf("NG");return 0;}for(int i=1;i<=n;i++){a=f(i*2);}printf("%d",a);return 0;}
