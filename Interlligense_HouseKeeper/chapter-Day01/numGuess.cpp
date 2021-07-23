#include "static/numGuess.h"
#include <ctime>
#include <iostream>

void numGuess(){
    std::cout << "Game Start" << std::endl;
    std::cout <<"Please input a num" << "\n"<< std::endl;
    srand(time(NULL));
    int num = rand()%100;
    int randNum;
    while(1){
        std::cin>>randNum;
        if (randNum>num) std::cout<<"BIG"<<std::endl;
        else{
            std::cout<<"SMALL"<<std::endl;
        }
        if (randNum == num){
            std::cout<<"BINGO,Congratulation!!!You get the number!!!"<<std::endl;
            break;
        }
    }
}
