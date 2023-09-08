#include<stdio.h>
void main(){
int check=1;
float mainprofit=0,mainloss=0,totalcost=0;

while(check){

printf("welcome to shares\n");
float cost;
printf("enter the cost");
scanf("%f",&cost);


float quantity;
printf("enter the quantity");
scanf("%f",&quantity);


float selling;
printf("enter the selling price of shares");
scanf("%f",&selling);

totalcost=totalcost+cost*quantity;


float profit=0,loss=0;
if(selling-cost>0){
profit=(selling-cost)*quantity;
}
if(selling-cost<0){
loss=(selling-cost)*quantity;
}

printf("do you wnt to continue");
scanf("%d",&check);

mainprofit=mainprofit+profit;
mainloss=mainloss+loss;

}
printf("total profit %f",mainprofit);
printf("total loss %f",mainloss);

float net =mainprofit+mainloss;
printf("f",net);
float percentage=(net/totalcost)*100;

printf("%f",percentage);


}

