#include <stdio.h>
#define MAXNUMBER 100

int MinBlockNum,PageNum,LackNum,LackPageNum; //最小物理块数,页面数,缺页次数,缺页数
double LackPageRate; //缺页率
int PageOrder[MAXNUMBER]; //页面调度序列
int PageDisCount[MAXNUMBER];
int LRUtime[MAXNUMBER];
int VirtualQueue[MAXNUMBER];

void Enter();
void initial();
void display();
void FIFO();

void main(){
    Enter();
    initial();
    FIFO();
}

void Enter(){
    printf("Please input minblocknum: \n");
    scanf("%d",&MinBlockNum);
    printf("Please input pagenum: \n");
    scanf("%d",&PageNum);
    printf("Please input pageorder: \n");
    for(int i = 0 ; i < PageNum ; i++){
        scanf("%d",&PageOrder[i]);
    }
}

void initial(){
    
}
