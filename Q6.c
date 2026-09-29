#include <stdio.h>

int main () {
    int category,G,Q,C,F,D;
    printf("Select the category:\n1=Greeting\n2=Query\n3=Complaint\n4=Feedback\n");
    scanf("%d",&category);
    switch(category){
        case 1: printf("1=Morning\n2=Evening\n");
                scanf("%d",&G);
                switch(G){
                    case 1: printf("Good Moring! How can i help you?\n");
                    break;
                    case 2: printf("Good evening! How can I help you?\n");
                    break;
                    default: printf("Invalid choice!");
                }
        break;
        case 2: printf("\n1=Product\n2=Billing\n3=Technical\n");
                scanf("%d",&Q);
                switch(Q){
                    case 1: printf("\nHow can I help you with the product?\n");
                    break;
                    case 2: printf("\nHow can I help you with the billing?\n");
                    break;
                    case 3: printf("\nHow can I help you with the technical?\n");
                    break;
                    default: printf("Invalid choice!");
                } 
        break;      
        case 3: printf("1=Delivery\n2=Quality\n");
                scanf("%d",&C);
                switch(C){
                    case 1: printf("Is your order delayed(1=Yes/0=No)\n");
                            scanf("%d",&D);
                            switch(D){
                                case 0: printf("Sorry for delivery issue!\n");
                                break;
                                case 1: printf("Sorry for delayed delivery\n");
                                break;
                                default: printf("Invalid choice!");
                            }
                    break;
                    case 2: printf("Sorry for serving bad quality!\n");
                    break;
                    default: printf("Invalid choice!");
                } 
        break;
        case 4: printf("1=Positive\n2=Negative\n");
                scanf("%d",&F);
                switch(F){
                    case 1: printf("Thank you for your feedback!\n");
                    break;
                    case 2: printf("Thank you for your feedback! \nWe will improve it.\n");
                    break;
                    default: printf("Invalid choice!");
                }
        break;        
    }
    return 0;
}