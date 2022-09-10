#include<stdio.h>

int queen[100][2];

int isOK(int i,int j,int qi,int qj){
    if(i==qi) return 0;
    if(j==qj) return 0;
    if(i-qi==qj-j) return 0;
    if(i-qi==j-qj) return 0;
    return 1;
}

int main(){
    int n,cnt = 0;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d %d",&queen[i][0],&queen[i][1]);
    }
    for(int i=0;i<8;++i){
        for(int j=0;j<8;++j){
            int f = 1;
            for(int k=0;k<n;++k){
                if(!isOK(i,j,queen[k][0]-1,queen[k][1]-1)){
                    f = 0;
                    break;
                }
            }
            if(f){
                ++cnt;
            }
        }
    }
    printf("%d",cnt);
}