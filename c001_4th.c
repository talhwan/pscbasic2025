#include <stdio.h>

int main(){
    int i=0,j=0,l=0;
    for(l=0;l<3;l++){
        for(j=0;j<5;j++){
            for(i=0;i<10;i++){
                //파트별로 다르네요!
                if(l == 0){
                    if(i == j || i == 9 - j){
                        printf("*");
                    } else {
                        printf("-");
                    }
                } else if(l==1){
                    printf("*");
                } else if(l==2){
                    if(i >= j && i <= 9 - j){
                        printf("*");
                    } else {
                        printf("-");
                    }
                }
                if(i == 9){
                    printf("\n");
                }
            }
        }
    }
    


    return 0;
}