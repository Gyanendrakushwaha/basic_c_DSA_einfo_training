#include<stdio.h>
#include<stdlib.h>

struct stack{
int top;
int size;
char *s;
};

void create(struct stack *st){
printf("enter the size");
scanf("%d",&st->size);
st->top=-1;
st->s= (char *)malloc(st->size*sizeof(char));
}

void push(struct stack *st,char x){
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
printf("%c",st->s[i]);
}
}

char pop(struct stack *st){
char  x;
if(st->top==-1){
printf("\nstack underflow");
}else{
x=st->s[st->top];
st->top--;
}
return x;
}

void reverse(struct stack *st){
int arr[st->size];
for(int i=0;i<st->size;i++){
arr[i]=pop(st);
}

for(int i=0;i<st->size;i++){
push(st,arr[i]);
}
}


int main(){
struct stack st;
create(&st);
push(&st,'a');
push(&st,'b');
push(&st,'c');
push(&st,'d');
display(&st);
printf("\n");
//pop(&st);
//display(&st);
reverse(&st);
display(&st);
}

