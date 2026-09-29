#include <stdio.h>

int main () {
    int vehicletype,hours,membership,fee=0;
    float discount=0,finalfee=0;
    printf("Enter the vehicle type:\n1=Car\n2=Bike\n3=Truck\n");
    scanf("%d",&vehicletype);
    if(vehicletype!=1 && vehicletype!=2 && vehicletype!=3){
        printf("Invalid Vehicle!");
        return 0;
    }
    printf("Enter the hour parked:\n");
    scanf("%d",&hours);
    if(hours<1 && hours>24){
        printf("Invalid Duration!");
        return 0;
    }
    printf("Enter the membership status:\n1=Member\n2=Non-member\n");
    scanf("%d",&membership);    
    if(vehicletype==2){
        fee=20*hours;
    }else if(vehicletype==1){
        if(hours<=2){
            fee=50;
        }else{
            fee=50+30*(hours-2);
        }
    }else if(vehicletype==3){
        if(hours<=3){
            fee=100;
        }else{
            fee=100+50*(hours-3);
        }
    }finalfee=fee;
    if(membership==1 && fee>200){
        discount=finalfee*0.15;
        finalfee=finalfee-discount;
    }else{
        finalfee=finalfee+fee;
    }
    printf("=========Final Bill===========");
    printf("Your final fee is:%.2f",finalfee);
    return 0;
}