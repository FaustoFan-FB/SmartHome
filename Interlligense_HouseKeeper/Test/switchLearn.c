#include <stdio.h>

void main(){
    int score;
    printf("Please input a score...");
    scanf("%d",&score);

    switch (score/10){
        case 6:
            printf("Grade D");
            break;
        case 7:
            printf("Grade C");
        
        default:
            break;
    }



}