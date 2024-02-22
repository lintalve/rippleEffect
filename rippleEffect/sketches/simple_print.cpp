#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

  
int main() {
    // Escape sequence to clear the screen and move the cursor to the top-left corner
    
    
    
    for(int i = 0; i< 12; i++){
        printf("some shit ");
        usleep(200000);
        //printf("\033[2J\033[H");
    }

    
    return 0;
}
