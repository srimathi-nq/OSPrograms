#include <stdio.h>
void run(int w){
    int m[]={200,350,600},r[]={180,320,90},i,j,p,s=0,f=0;
    printf("\n%s\n",w==1?"BEST FIT":"WORST FIT");
    for(i=0;i<3;i++){p=-1;
        for(j=0;j<3;j++)
            if(m[j]>=r[i]&&(p<0||(w==1?m[j]<m[p]:m[j]>m[p])))p=j;
        if(p<0){printf("Camera %d: Failed\n",i+1);f++;}
        else {m[p]-=r[i];printf("Camera %d: MEM%d, Remaining=%d MB\n",i+1,p+1,m[p]);s++;}
    }
    printf("Successful=%d, Failed=%d\n",s,f);
}
int main(){printf("Best Fit vs Worst Fit: CCTV Buffer Allocation\n");run(1);run(2);return 0;}
