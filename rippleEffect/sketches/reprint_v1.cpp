#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main() {
    usleep(200000);
    printf("\033[2J\033[H");
    
    for(int i = 0; i< 4; i++){
        for(int n = 0; n<12; n++){
            for(int m = 0; m< 6; m++){
                printf("some shit ");
                usleep(20000);
            }
            printf("\n");
        }
        printf("\033[2J\033[H");
    }
    

  
    
    return 0;
}
