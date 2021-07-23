#include "static/opration.h"
#include <iostream>

using namespace std;

int strLen(char arr[]){
    int i = 0;
    while(arr[i]!=NULL){
        i++;
    }
    return i;
}

void  strCopy(char arr1[] , char arr2[]){
    int len = strLen(arr2);
    for(int i =0 ; i < len ; i++){
        arr1[i] = arr2[i];
    }
}

void caseChange(char arr[]){
    for (int i = 0; i < strLen(arr); ++i) {
        if (arr[i] < 97){
            arr[i] += 32;
        }else{
            arr[i] -= 32;
        }
    }
}

struct strOpration{
    int (*strLen) (char []);
    void (*strCopy) (char [] , char []);
    void (*caseChange) (char []);
};
void init( strOpration *data){
    data->strCopy = strCopy;
    data->strLen = strLen;
    data->caseChange = caseChange;
}

void  testOpration(){
    strOpration operation;
    init(&operation);
    char arr1[ ] = "Hello\0";
    char arr2[ ] = "World\0";

    int arr1Len = operation.strLen(arr1);
    cout<<"\nArray1 length :"<<arr1Len<<endl;

    operation.strCopy(arr1,arr2);
    puts(arr1);
    puts(arr2);

    operation.caseChange(arr1);
    puts(arr1);


}





