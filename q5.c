#include <stdio.h>
int main() {
    int t[4][4]={{12,15,10,9},{11,8,12,13},{14,13,9,7},{16,11,10,8}};
    int i,j;
    printf("Cold spots:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            int v=t[i][j],ok=1;
            if(i>0 && t[i-1][j]<=v) ok=0;
            if(i<3 && t[i+1][j]<=v) ok=0;
            if(j>0 && t[i][j-1]<=v) ok=0;
            if(j<3 && t[i][j+1]<=v) ok=0;
            if(ok) printf("Row %d Col %d Temp %d\n",i+1,j+1,v);
        }
    }
    return 0;
}
