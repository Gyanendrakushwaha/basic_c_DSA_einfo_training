#include<stdio.h>

struct point{
int x,y;

};
struct point sum(struct point p1,struct point p2){
struct point temp;
temp.x=p1.x+p2.x;
temp.y=p1.y+p2.y;

return temp;

}
void main(){
struct point p1,p2,p3;
p1.x=10;
p1.y=20;

p2.x=5;
p2.y=5;

p3=sum(p1,p2);

printf("%d %d",p3.x,p3.y);
}
