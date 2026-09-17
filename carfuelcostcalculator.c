#include <stdio.h>
int main(){
int  distance;
int mileage;
float petrolPrice;
float fuelconsumed;
float fuelcost;
printf("How many kms did you drive\n");
scanf("%d", &distance);
printf("What is your car mileage\n");
scanf("%d", &mileage);
printf("What is the petrol price per litre\n");
scanf("%f", &petrolPrice);
fuelconsumed = (float)distance / mileage;
fuelcost = fuelconsumed * petrolPrice;
printf("fuelconsumed:%.2f\n" , fuelconsumed);
printf("fuelcost:%.2f\n" , fuelcost);
return 0;
}