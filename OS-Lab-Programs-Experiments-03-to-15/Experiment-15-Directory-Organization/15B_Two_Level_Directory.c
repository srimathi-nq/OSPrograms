#include <stdio.h>
#include <sys/stat.h>
int main() {
    char s[20],f[20],d[80],p[120]; FILE *x;
    mkdir("EV_Records",0777);
    printf("Input: EV303 F03 Cable_Damaged\n");
    sscanf("EV303 F03 Cable_Damaged","%19s %19s %79s",s,f,d);
    snprintf(p,sizeof(p),"EV_Records/%s",s); mkdir(p,0777);
    snprintf(p,sizeof(p),"EV_Records/%s/maintenance.txt",s);
    x=fopen(p,"a"); fprintf(x,"%s %s\n",f,d); fclose(x);
    x=fopen(p,"r"); printf("Records for %s:\n",s);
    while(fgets(d,sizeof(d),x)) printf("%s",d);
    fclose(x); return 0;
}
