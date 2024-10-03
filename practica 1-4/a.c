#include <stdio.h>

int main()
{
        int a[10];
        int i;
        char *cp;
        int *ip;
        double *dp;
        long long *llp;
        long double *ld;

        cp=(char *)a;
        ip=(int *)a;
        dp=(double *)a;
        llp=(long long *)a;
        ld=(long double *)a;

        for(i=0;i<10;i++)
                a[i]=0x11ffffff;

        for(i=0;i<10;i++,cp++)
                printf("%d %x %d\n",i,cp,*cp);

        for(i=0;i<10;i++,ip++)
                printf("%d %x %d\n",i,ip,*ip);

        for(i=0;i<10;i++,dp++)
                printf("%d %x %f\n",i,dp,*dp);
                
        printf("long long\n");
        for(i=0;i<10;i++,llp++)
                printf("%d %x %f\n",i,llp,*llp);

        printf("long double\n");
        for(i=0;i<10;i++,ld++)
                printf("%d %x %f\n",i,ld,*ld);
}