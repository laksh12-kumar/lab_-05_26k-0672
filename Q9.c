#include <stdio.h>

int main(){
    int permission;
    printf("Enter the permission: ");
    scanf("%d",&permission);
    if(permission & 16){
        printf("Full acess: admin\n");
    }else if((permission & 8)&&(permission & 2)){
        printf("Acess:delete and write\n");
    }else if((permission & 4)&& !(permission & 2)){
        printf("Acess:execute only\n");
    }else if((permission & 1)&& !(permission & 2)&& !(permission & 4)){
        printf("Acess:read-only\n");
    }else if(!(permission & 1) && !(permission & 2) &&!(permission & 4) && !(permission & 8) && !(permission & 16)){
        printf("Acess denied\n");
    }else{
        printf("Acess:custom permissions\n");
    }
    if(permission & 1){
        printf("Read detected\n");
    }if(permission & 2){
        printf("Write detected\n");
    }if(permission & 4){
        printf("Execute detected\n");
    }if(permission & 8){
        printf("Delete detected\n");
    }if(permission & 16){
        printf("Admin detected\n");
    }
return 0;
} 