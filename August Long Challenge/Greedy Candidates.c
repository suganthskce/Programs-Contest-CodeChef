#include <stdio.h>

int main(void) {
	long long int t;
    scanf("%lld",&t);
    while(t--) {
        long long int  n,m,cdwj=0,tosal=0,nocomp=0,pos;
        scanf("%lld %lld",&n,&m);
        long long int i,j,k,l,minSalaryCand[n],offerSalary[m][2],hash[10000]={0};
        char str[n][m];
        for(i=0;i<n;i++) 
            scanf("%lld",&minSalaryCand[i]);
        for(i=0;i<m;i++)
            scanf("%lld %lld",&offerSalary[i][0],&offerSalary[i][1]);
        for(i=0;i<n;i++) {
            //printf("Candidate %lld =>\nCan Apply for : ",i+1);
            long long int maxss=0;
            pos=-1;
            scanf("%s",str[i]);
            for(j=0;j<m;j++) {
                if(str[i][j]=='1' && offerSalary[j][0]>=minSalaryCand[i] && offerSalary[j][1]>=1) {
                    //printf("%lld ",j+1);
                    if(maxss<offerSalary[j][0]) {
                        pos=j;
                        maxss=offerSalary[j][0];
                    }
                        
                    /*cdwj++;
                    offerSalary[j][1]--;
                    tosal+=offerSalary[j][0];*/
                }
            }
            //printf("\nSelected = %lld\n",pos+1);
            if(pos!=-1) {
                if(hash[pos]==0) {
                    hash[pos]++;
                    nocomp++;
                }
                offerSalary[pos][1]--;
                tosal+=offerSalary[pos][0];
                cdwj++;
            } 
        }
        printf("%lld %lld %lld\n",cdwj,tosal,m-nocomp);
    }
	return 0;
}
