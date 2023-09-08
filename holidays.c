#include<stdio.h>
int main(){

long int n,date,holidays=0,total=0;
printf("enterthe total extra holidays");
scanf("%ld",&n);

while(n--){
printf("enter dates");
scanf("%ld",&date);


if(date!=6 && date != 7 && date!=13 && date !=14 && date !=20 && date!=21 && date!=27 && date!=28){
holidays++;
}


}

total=8+holidays;





printf("total holidays %ld",total);








}
