#include <stdio.h>

int main(){
    int time,motion,lightlevel,room,cooking;
    printf("====MENU====\n");
    printf("1=Living Room\n2=Bedroom\n3=Kitchen\n");
    scanf("%d",&room);
    printf("Enter the time(0-23):\n");
    scanf("%d",&time);
    printf("Enter the motion(1/0):\n");
    scanf("%d",&motion);
    printf("Enter the light level(0-100):\n");
    scanf("%d",&lightlevel);
    if(room==1 || room==2){
        if(time>=6 && time<18 && motion==1){
            printf("Day mode:Lights ON");
        }
        else if(time>=18 && time<23 && motion==1){
            printf("Evening mode: Dim Lights");
        }
        else if(time>=23 && time<6 && motion==1 ){
            printf("Night mode:Lights OFF");
        }else if(motion==0){
            printf("Away mode:all off");
        }
    }
    if(room==3){
        printf("Enter the cooking mode(0/1):\n");
        scanf("%d",&cooking);
        if(time>=6 && time<18  && motion==1){
            printf("Day mode:Lights ON\n");
            if(cooking==1){
                printf("Exhaust fan ON");
            }
        }
        else if(time>=18 && time<23 && motion==1){
            printf("Evening mode: Dim Lights\n");
            if(cooking==1){
                printf("Exhaust fan ON");
            }
        }
        else if(time>=23 && time<6 && (motion==1)){
            printf("Night mode:Lights OFF");
        }else if(motion==0){
            printf("Away mode:all off");
        }
    }
    return 0;

}