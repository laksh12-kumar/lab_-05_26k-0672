#include <stdio.h>

int main (){
    int stream,S,C,A,interest,B,P,Ch,Acc,M,L,H,Psy;
    printf("Enter the stream:\n1=Science\n2=Commerce\n3=Arts\n");
    scanf("%d",&stream);
    switch(stream){
        case 1:printf("Enter your interested subject:\n1=Biology\n2=Physics\n3=Chemistry\n");
        scanf("%d",&interest);
        switch(interest){
            case 1:printf("Are you interested in medicine:(1=Yes/0=No)\n");
            scanf("%d",&B);
            switch(B){
                case 0:printf("Recommended: MBBS\n");
                break;
                case 1:printf("Recommended: Biotechnology\n");
                break;
                default:printf("Invalid choice!");
            }
            break;
            case 2:printf("Are you interested in enginering:(1=Yes/2=No)");
            scanf("%d",&P);
            switch(P){
                case 0:printf("Recommended:Computer Science\n");
                break;
                case 1:printf("Recommended:Civil Enginering\n");
                break;
                default:printf("Invalid choice!");
            }
            break;
            case 3:printf("Are you interested in Organic chemistry");
            scanf("%d",&Ch);
            switch(Ch){
                case 0:printf("Recommended:Inorganic Chemist\n");
                break;
                case 1:printf("Recommended:Organic Chemist\n");
                break;
                default:printf("Invalid choice!");
            }
            break;
        }
        break;
         case 2:printf("Enter your interested subject:\n1=Accounting\n2=Marketing\n");
        scanf("%d",&interest);
        switch(interest){
            case 1:printf("Are you interested in Financial Accounting :(1=Yes/0=No)\n");
            scanf("%d",&Acc);
            switch(Acc){
                case 0:printf("Recommended: Managment Accountant\n");
                break;
                case 1:printf("Recommended: Financial Accountant\n");
                break;
                default:printf("Invalid choice!");
            }
            break;
            case 2:printf("Are you interested in Digital Marketing:(1=Yes/2=No)");
            scanf("%d",&M);
            switch(M){
                case 0:printf("Recommended:Social Media Marketing\n");
                break;
                case 1:printf("Recommended:Digital Marketing\n");
                break;
                default:printf("Invalid choice!");
            }
            break;
            
        }
        break;
        case 3:printf("Enter your interested subject:\n1=Literature\n2=History\n3=Psychology\n");
        scanf("%d",&interest);
        switch(interest){
            case 1:printf("Are you interested in English Literature :(1=Yes/0=No)\n");
            scanf("%d",&L);
            switch(L){
                case 0:printf("Recommended: World Literature\n");
                break;
                case 1:printf("Recommended: English Literature\n");
                break;
                default:printf("Invalid choice!");
            }
            break;
            case 2:printf("Are you interested in Ancient History :(1=Yes/2=No)");
            scanf("%d",&H);
            switch(H){
                case 0:printf("Recommended:Modern History\n");
                break;
                case 1:printf("Recommended:Ancient History\n");
                break;
                default:printf("Invalid choice!");
            }
            break;
            case 3:printf("Are you interested in Clinical Psychology(1=Yes/0=No):\n");
            scanf("%d",&Psy);
            switch(Psy){
                case 0:printf("Recommended:Educational Psychologist\n");
                break;
                case 1:printf("Recommended:Clinical Psychologist\n");
                break;
                default:printf("Invalid choice!");
            }
            break;
        }
        break;
}
return 0;
}