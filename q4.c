#include <stdio.h>
int main() {
    int s[3][3]={{1,0,1},{0,0,1},{1,1,0}};
    int i,j,c=0;
    printf("Available seats:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(s[i][j]==0){
                c++;
                printf("Row %d Seat %d\n",i+1,j+1);
            }
        }
    }
    printf("Total: %d\n",c);
    return 0;
}
