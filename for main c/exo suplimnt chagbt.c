#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*using the method for the guessing number :  : */
int main(void) {
    int guess,secret;
    
    srand(time(NULL));
    
    secret=rand()%30+1;
    
    printf("the value guess : \n");
    
    scanf("%d",&guess);
    
    while (guess!=secret){
    
        if (guess<secret) {
            printf("the guess is lower \n");
        }
        else {
            printf("the guess is heigher \n");
        }
        scanf("%d",&guess);
    }
    printf("the value givving is %d \n",guess);


        }

