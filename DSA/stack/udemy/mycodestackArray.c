#include<stdio.h>
#include<stdlib.h>

struct stack{
int top;
int size;
int *s;
};

void create(struct stack *st){
printf("enter the size");
scanf("%d",&st->size);
st->top=-1;
st->s= (int *)malloc(st->size*sizeof(int));
}

void push(struct stack *st,int x){
if(st->top==st->size-1){
printf("stack overflow");
}else{
st->top++;
st->s[st->top]=x;
}
}


void display(struct stack *st){
int i;
for(i=st->top;i>=0;i--){
printf("%d",st->s[i]);
}
}

int pop(struct stack *st){
int x=-1;
if(st->top==-1){
printf("\nstack underflow");
}else{
x=st->s[st->top];
st->top--;
}
return x;
}




int main(){
struct stack st;
create(&st);
push(&st,1);
push(&st,1);
push(&st,1);
push(&st,1);
display(&st);
printf("\n");
pop(&st);
display(&st);
}
