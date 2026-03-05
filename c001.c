#include <stdio.h>

int main(){

    int i=0,j=0;
    //1. v모양 만들어보기!!
    for(j=0;j<5;j++){
        for(i=0;i<10;i++){
            //j => 0 i=0 9
            //j => 1 i=1 8
            //j => 2 i=2 7
            if(i == j || i == 9 -j){
                printf("*");
            } else {
                printf("-");
            }
            if(i==9){
                printf("\n");
            }
        }
    }


    return 0;
}