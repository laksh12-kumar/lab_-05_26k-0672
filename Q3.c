#include <stdio.h>

int main(){
    int age,oxygenlevel,heartrate;
    printf("Enter the age:\n");
    scanf("%d",&age);
    printf("Enter the oxygen level:\n");
    scanf("%d",&oxygenlevel);
    printf("Enter the heart rate:\n");
    scanf("%d",&heartrate);
    if(oxygenlevel<90){
        printf("Critical:Immediate attention\n");
    }else if(heartrate>130 || heartrate<40){
        printf("Critical:Cardiac alert\n");
    }else if(age>=65 && oxygenlevel<95){
        printf("High priority");
    }else if(age<=5 && oxygenlevel>110){
        printf("High priority");
    }else if(oxygenlevel<97){
        printf("Medium priority");
    }else{
        printf("Low priority");
    } 
    return 0;
}