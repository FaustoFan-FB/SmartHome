#include <stdio.h>

void bubbleSort(int *p , int len){
    for(int i = 0 ; i < len ; i++){
        for(int j = i+1 ; j < len ; j++){
            if(*(p+i) < *(p+j)){
                int temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
    for(int i = 0 ; i<len ; i++){
        printf("%d ",*(p+i));
    }
    printf("\n");
}

void countOfChar(char *arr){
    int numCount,letterCount;
    int i = 0;
    while(*(arr+i) != '\0'){
        if((*(arr+i)>'0')&&(*(arr+i)<'9')){
            numCount++;
        }
        if((*(arr+i)>65 && *(arr+i)<91) || (*(arr+i)>97 && *(arr+i)<123)){
            letterCount++;
        }
        i++;
    }
    printf("numCount = %d , letterCount = %d",numCount,letterCount);

}

void main(){
    int arr1[10] = {2,3,5,6,77,55,99,34,56,34};
    bubbleSort(arr1,10);
    
    char arr2[5];
    printf("Please input char array...\n");
    gets(arr2);
    countOfChar(arr2);
}