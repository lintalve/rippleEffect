#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int pixel_time_interval;
int row_time_interval;
int number_of_pixels;
int number_of_scans;


int main() {
    printf("enter pixel time interval in msec\n");
    scanf("%i", &pixel_time_interval);
    printf("enter row time interval in msec\n");
    scanf("%i", &row_time_interval);
    printf("enter number of pixels\n");
    scanf("%i", &number_of_pixels);
    printf("enter number of scans\n");
    scanf("%i", &number_of_scans);
    
    usleep(200000);
    printf("\033[2J\033[H");
    
    for(int i = 0; i< number_of_scans; i++){
        for(int n = 0; n<12; n++){
            for(int m = 0; m < 36; m++){
                printf("0");
                usleep(pixel_time_interval);
            }
            printf("\n");
            usleep(row_time_interval);
        }
        printf("\033[2J\033[H");
    }
    

  
    
    return 0;
}
