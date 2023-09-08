#include<stdio.h>
int main(){


int accno[10]={100,101,102,103,104,105,106,107,108,109};

int pass[10]={0,1,2,3,4,5,6,7,8,9};
int balance[10]={0,0,0,0,0,0,0,0,0,0};

printf("ask acc no");
int checkacc,checkpass,cont=1;
scanf("%d",&checkacc);
printf("ask pass no");
scanf("%d",&checkpass);

//check index
int index;
for(int i=0;i<10;i++){
if(accno[i]==checkacc && pass[i]==checkpass){
index=i;
printf("password verified %d\n",index);
printf("balance is %d\n",balance[index]);
}
}

while(cont){
printf("press 1 for balance \n press 2 for deposite \n press 3 for withdrawl\n");
int press,amount=0;

scanf("%d",&press);

switch(press){
case 1: printf("balance is %d\n",balance[index]);
	break;

case 2:printf("enter amount to deposite\n");
	scanf("%d",&amount);
	balance[index]=balance[index]+amount;
	printf("new balance is %d\n",balance[index]);
	amount=0;
	break;

case 3:printf("enter amount to withdrawl\n");
	scanf("%d",&amount);
	if(balance[index]<amount){
	printf("your acc does have enough balance\n");
	}else{
	balance[index]=balance[index]-amount;
	printf("new balance is %d\n",balance[index]);
	amount=0;
	}
	break;

default: printf("wrong input");
	break;
}

printf("do you want to continue press 0 for no and 1 for yes\n");
scanf("%d",&cont);

}
}
