#include<stdio.h>

int arr[8][8];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        int r,c;
        scanf("%d %d",&r,&c);
        --r;
        --c;
        for(int i=0;i<8;++i){
            arr[i][c] = 1;
            arr[r][i] = 1;
        }
        int tmpr = r;
        int tmpc = c;
        while(tmpr >= 0 && tmpc >= 0){
            --tmpr;
            --tmpc;
            arr[tmpr][tmpc] = 1;
        }
        tmpr = r;
        tmpc = c;
        while(tmpr >= 0 && tmpc < 8){
            --tmpr;
            ++tmpc;
            arr[tmpr][tmpc] = 1;
        }
        tmpr = r;
        tmpc = c;
        while(tmpr < 8 && tmpc < 8){
            ++tmpr;
            ++tmpc;
            arr[tmpr][tmpc] = 1;
        }
        tmpr = r;
        tmpc = c;
        while(tmpr < 8 && tmpc >= 0){
            ++tmpr;
            --tmpc;
            arr[tmpr][tmpc] = 1;
        }
    }
    
    int cnt = 0;
    for(int i=0;i<8;++i){
        for(int j=0;j<8;++j){
            if(!arr[i][j])
                ++cnt;
        }
        printf("\n");
    }
    printf("%d",cnt);
}