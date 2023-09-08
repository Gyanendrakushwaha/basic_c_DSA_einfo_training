#include<stdio.h>

void main(){

int x,y,ans=1;
scanf("%d %d",&x,&y);
for(int i=1;i<=y;i++){
ans=x*ans;
}
printf("%d",ans);
}
