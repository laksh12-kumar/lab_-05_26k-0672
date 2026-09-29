#include<stdio.h>

int main(){
    int marks,familyincome;
    float attendence;
    printf("Enter your marks:\n");
    scanf("%d",&marks);
    printf("Enter attendence percentage\n");
    scanf("%f",&attendence);
    printf("Enter your family income:\n");
    scanf("%d",&familyincome);
    if(marks<50){
        printf("Not eligible:marks too low");
        return 0;
    }else if(attendence<75){
        printf("Not eligible:too low attendence");
        return 0;
    }else if(familyincome>80000){
        printf("Not eligible:income too high");
        return 0;
    }else if(marks>=90 && attendence>=90){
        printf("Full Scholarship\n");
        printf("Scholar Type:Full Scholarship\n");
    }else if(marks>=75 && attendence>=85){
        printf("Half Scholarship\n");
        printf("scholarship Type:Half Scholarship\n");
    }else{
        printf("Quater Scholarship\n");
        printf("Scholarship Type:Quater Scholarship\n");
    }
    
}