#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned int)time(NULL));
    int e = rand() % 20;
    printf("e = %d \n",e);
    if(e < 10){
        printf("eは10未満です");
    }

}