#include<stdio.h>
int q[5];
int n=5;
int f=-1;
int r=-1;

///////////////////////////////////       	this  furnction  is to insert	from  end.
void enqueue(int q[],int data){
//for overflow condition  //both normal and circular case
if(f==0 && r==n-1 || (r==f-1)){
printf("overflow");
return;
}else{

//for first element  //normal case
if(f==-1){
f=0;
}
// if r is at last  //circular case
if(r==n-1){
r=0;

}else{

r=r+1;
}
//another approach
//r=(r+1)%n;
q[r]=data;
}

}
//////////////     this function is to delete from front (f)
int dequeue(int q[]){
int y;
//check underflow
if(f==-1){
printf("queue underflow");
return 0;
}else{
y=q[f];
//limiting 

//normal case
if(f==r){
f=r=-1;
}else{
f=(f+1)%n;
}
}
return y;
}

////////////////////////////////////////                   new       function           -          insert at front function(f).
void insertAtFront(int q[],int data){
//oveflow
if((f==0 && r==n-1) || (r==f-1))
{
printf("overflow");
}else{
//normal case of first initialization
if(f==-1){
f=0;
r=0;
}else{
if(f==0){
f=n-1;
}else{
f=f-1;
}
}
}
q[f]=data;
printf("\n%d is inserted at f= %d ",data,f);
}

//////////////////////////////////////////////////////  new     function 	deleter from  r(back)
void deleteBack(){
// case 1 -empty   -single time run
if(f==-1){
printf("empty");
}
else{
	int data=q[f];
	//case 2 - if queue if having single element. - single time run
	if(f==r)
		{
		f=-1;
		r=-1;
		}
	else {
	//case 3 - if  f>r and r is at 0	-  single time run
		if(r==0){
			r=n-1;
			}
	//case 4 - normal deletion  - multiple time  run.
		else{
			r=r-1;
			}
		}
}
//printf("\n%d is inserted at f= %d ",data,f);
}
//////display  function
void display(int q[]){
if(f==-1){
printf("empty");
return;
}
//normal display case
else if(r>f){

for(int i=f;i<=r;i++){
printf("%d ",q[i]);
}
}
//for cicular case
else{
for(int i=f;i<n;i++){
printf("%d",q[i]);
}
for(int i=0;i<=r;i++){
printf("%d",q[i]);
}

}
}

int main(){
/*
enqueue(q,1);
enqueue(q,2);  //r
enqueue(q,3);
enqueue(q,4);  //f
enqueue(q,5);
display(q);
*/

/*
dequeue(q);
dequeue(q);
dequeue(q);
enqueue(q,8);
enqueue(q,9);
display(q);
*/
insertAtFront(q,1);
insertAtFront(q,2);
insertAtFront(q,3);
insertAtFront(q,4);
insertAtFront(q,5);

display(q);
}
