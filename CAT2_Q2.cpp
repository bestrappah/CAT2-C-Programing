//2dimension array
//Author:Peter Paul Munyaka
//Reg NO:CT101/G/24684/24
//DATE:7/11/2024
#include <stdio.h>
int main() {
	int i,j;
	int scores[2][3] = {{65, 92, 85}, {72, 59, 67}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("scores[%d][%d]=%d\n",i,j,scores[i][j]);
        }
        
    }

    return 0;
}