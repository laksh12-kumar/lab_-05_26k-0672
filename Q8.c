#include <stdio.h>

int main(){
    int permission;
    printf("Enter the permission: ");
    scanf("%d",&permission);
    if(permission & 4){
        printf("Access granted: full control");
    }else if((permission & 1)&&(permission & 2)){
        printf("Access granted: read and write");
    }else if(permission & 1){
        printf("Access granted: read-only");
    }else{
        printf("Access denied");
    }
    return 0;
}