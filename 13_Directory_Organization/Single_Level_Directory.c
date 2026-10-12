#include <stdio.h>
#include <sys/stat.h>
int main() {
    char s[20],f[20],d[80],x[120]; FILE *p;
    mkdir("EV_Records",0777);
    printf("Input: EV303 F03 Cable_Damaged\n");
    sscanf("EV303 F03 Cable_Damaged","%19s %19s %79s",s,f,d);
    p=fopen("EV_Records/maintenance.txt","a");
    fprintf(p,"%s %s %s\n",s,f,d); fclose(p);
    p=fopen("EV_Records/maintenance.txt","r");
    puts("All Maintenance Records:");
    while(fgets(x,sizeof(x),p)) printf("%s",x);
    fclose(p); return 0;
}
