#include "static/controlStatement.h"
#include <iostream>
using namespace std;

void controlStatement(){
    int num;
    cout<<"Please input a num..."<<endl;
    cin>>num;
    for(int i = 0 ; i < num ; i++){
        for (int j = 0; j < i+1; ++j) {
            printf("* ");
        }
        cout<<endl;
    }
}