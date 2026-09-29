#include <stdio.h>

int main(){
    int accuracy,confidence,dataset,role,statusflags;
    float modelScore;
    printf("Enter the acuuracy(0-100): ");
    scanf("%d",&accuracy);
    printf("\nEnter the Confidence score(0-100): ");
    scanf("%d",&confidence);
    printf("\nEnter the dataset size(number of samples): ");
    scanf("%d",&dataset);
    printf("\nEnter the user role(1=Intern,2=Engineer,3=Admin): ");
    scanf("%d",&role);
    printf("\nEnter the status flags:");
    scanf("%d",&statusflags);
    modelScore = (accuracy * 0.5) + (confidence * 0.3) + ((dataset / 1000.0 < 10 ? dataset / 1000.0 : 10) * 2);
    printf("Model Score: %.2f\n", modelScore);
    if (statusflags & 8){
       printf("Rejected: model deprecated\n");
}
    else if (!(statusflags & 1)){
       printf("Rejected: not trained\n");
}
    else if (!(statusflags & 2)){
       printf("Rejected: not validated\n");
}
    else if (!(statusflags & 4)){
       printf("Pending: awaiting approval\n");
}
    else if (accuracy < 70 || confidence < 60){
       printf("Rejected: performance too low\n");
}
    else if (dataset < 5000){
       printf("Rejected: dataset too small\n");
}
    else if (role == 1){
       printf("Denied: interns cannot deploy\n");
}
    else if (role == 2 && modelScore < 80){
       printf("Denied: engineer needs higher score\n");
}
    else{
       printf("Approved for deployment\n");
}
    printf("Size of accuracy: %zu bytes\n", sizeof(accuracy));
    printf("Size of confidence: %zu bytes\n", sizeof(confidence));
    printf("Size of datasetSize: %zu bytes\n", sizeof(dataset));
    printf("Size of role: %zu bytes\n", sizeof(role));
    printf("Size of status: %zu bytes\n", sizeof(statusflags));
    printf("Size of modelScore: %zu bytes\n", sizeof(modelScore)); 
    float average = (accuracy + confidence) / 2.0;

    if(modelScore > average){
       printf("Model score is above the average of accuracy and confidence.\n");
}
    else{
       printf("Model score is not above the average of accuracy and confidence.\n");
}
return 0;
}