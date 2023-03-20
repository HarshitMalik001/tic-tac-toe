#include <stdio.h>
void tktk(int tk[][3]){
    printf("c→ 1   2   3\n");
    printf("r\n");
    for(int i = 0 ; i<3 ; i++){
        if (i ==0){
            printf("↓    |   |\n");
        }
        else{
            printf("     |   |\n");
        }
        for (int j = 0 ; j< 3 ; j++){
            if(j==0){
                printf("%d  ",i+1);
                printf("%d |",tk[i][j]);
            }
            else if(j == 1){
                printf(" %d |",tk[i][j]);
            }
            else if (j==2){
                printf(" %d\n",tk[i][j]);
            }
        }
        if (i != 2){
            printf("  ___|___|___\n");
        }
        else if (i==2){
            printf("     |   |\n");
        }
    }
    }

int main() {
    int tk[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    printf("%d",tk[0][0]);
    tktk(tk);
}
