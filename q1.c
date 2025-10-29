#include <stdio.h>
int main() {
    int a[4]={85,92,78,90},b[4]={88,76,95,84},c[4]={90,85,88,92};
    float x,y,z;
    int i,s1=0,s2=0,s3=0;
    for(i=0;i<4;i++){
         s1+=a[i];s2+=b[i];s3+=c[i];
    }
    x=s1/4.0; y=s2/4.0; z=s3/4.0;
    printf("Avg1: %.2f\nAvg2: %.2f\nAvg3: %.2f\n",x,y,z);
    return 0;
}
