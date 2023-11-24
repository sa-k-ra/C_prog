#include <stdio.h>

int main(){
    int i;
    for(i=1;i<=25;i++){
        if(i % 3 == 0){
            printf("%d\n",i);
        }
    }
    while(i<50){
        i ++;
        if(i % 3 == 0){
            printf("%d\n",i);
        }
    }
}