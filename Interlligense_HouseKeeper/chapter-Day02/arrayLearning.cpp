#include "static/arrayLearning.h"
#include <iostream>
using namespace std;

void test1(){
    int arr[] = {1,2,3,4,5,7,8,7,8,6};
    int* p = arr;
    cout<<*(p+1)<<endl;
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
}

void bubbleSort( int arr[] , int arrLength ){
    for (int i = 0; i < arrLength; i++) {
        for (int j = i+1; j < arrLength; j++) {
            if (arr[i]<arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < arrLength; ++i) {
        cout<<arr[i]<<endl;
    }
}

void maxNumOfArray(){
    int arrLength;
    cout<<"Please input the length of array..."<<endl;
    cin>>arrLength;
    int arr[arrLength];
    cout<<"Please input the elements of array..."<<endl;
    for (int i = 0; i < arrLength; ++i) {
        printf("The %d element is :",i);
        cin>>arr[i];
    }
    cout<<"The elements by sorted :"<<endl;
    bubbleSort(arr , arrLength);
}

void arrayLearning(){
    //maxNumOfArray();
    test1();
}



