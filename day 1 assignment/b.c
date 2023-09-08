#include<stdio.h>
int main(){
int distance;
printf("Enter the distance bw cities");
scanf("%d",&distance);

float in,m,ft,cm;
 in=distance*39370.1;
 m=distance*1000;
 ft=distance*3280.84;
cm =distance*100000;

printf(" distance in inches is %f \n",in);
printf(" distance in meter is %f \n",m);
printf(" distance in feet is %f \n",ft);
printf(" distance in centimeter is %f \n",cm);

}
