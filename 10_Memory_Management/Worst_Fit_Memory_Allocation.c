#include <stdio.h>
int main() {
    int m[]={200,350,600},r[]={180,320,90},i,j,p;
    printf("Worst Fit Memory Allocation\n");
    for(i=0;i<3;i++){
        p=-1;
        for(j=0;j<3;j++)
            if(m[j]>=r[i]&&(p<0||m[j]>m[p]))p=j;
        if(p<0)printf("Camera %d: Failed\n",i+1);
        else {m[p]-=r[i];printf("Camera %d: MEM%d, Remaining=%d MB\n",i+1,p+1,m[p]);}
    }
    return 0;
}
