#include "static/gradeOfScore.h"
#include <iostream>

void gradeOfScore(){
    int score;
    std::cout<<"Please input a score..."<<std::endl;
    while(1){
        std::cin>>score;

        if (score < 60 ) {std::cout<<"Grad Poor , you need rebuild..."<<std::endl;}
        if (60 <= score && score < 70 ) {std::cout<<"Grad D"<<std::endl;}
        if (70 <= score && score < 80 ) {std::cout<<"Grad C"<<std::endl;}
        if (80 <= score && score < 90 ) {std::cout<<"Grad B"<<std::endl;}
        if (90 <= score && score < 100 ) {std::cout<<"Grad A"<<std::endl;}
        if (score == 100) {std::cout<<"Grad SSS , you are amazing!!!"<<std::endl;}
    }
}