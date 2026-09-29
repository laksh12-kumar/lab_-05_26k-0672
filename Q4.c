#include<stdio.h>

int main(){
    int cardstatus,pin,accountbalance=0,withdrawammount;
    printf("Enter the card status:\n1=valid\n0=blocked\n");
    scanf("%d",&cardstatus);
    if(cardstatus==0){
        printf("Card Blocked Contact Bank");
        return 0;
    }
    printf("Enter the PIN:\n");
    scanf("%d",&pin);
    if(pin!=123){
        printf("Invalid PIN!");
        return 0;
    }
    printf("Enter the balance:\n");
    scanf("%d",&accountbalance);
    printf("Enter withdrawl ammount:\n");
    scanf("%d",&withdrawammount);
    if(withdrawammount<=0){
        printf("Invalid amount!");
    }else if(withdrawammount > accountbalance){
        printf("Insufficient Balance!");
    }else if(withdrawammount>25000){
        printf("Daily limit exceeded");
    }else if(accountbalance - withdrawammount<1000){
        printf("Minimum balance must be maintained");
    }else{
        printf("Here is your cash\n");
        printf("Thank you");
    }
    return 0;
}