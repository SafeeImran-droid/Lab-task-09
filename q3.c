#include <stdio.h>
int main() {
    int img[4][4]={{1,0,1,0},{0,1,0,1},{1,1,0,0},{0,0,1,1}};
    int inv[4][4],i,j,w=0;
    printf("Orig\tInvert\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            inv[i][j]=!img[i][j];
            if(img[i][j]==1) w++;
            printf("%d ",img[i][j]);
        }
        printf("\t");
        for(j=0;j<4;j++) printf("%d ",inv[i][j]);
        printf("\n");
    }
    printf("White: %d\n",w);
    return 0;
}
