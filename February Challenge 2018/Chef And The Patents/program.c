#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void findCount(long int k,char str[k],long int *even,long int *odd) {
    long int i,c1=0,c2=0;
    for(i=0;i<k;i++) {
        if(str[i]=='E')
            c1++;
        else
            c2++;
    }
    *even = c1;
    *odd = c2;
}
int main() {
    long int t;
    scanf("%ld",&t);
    while(t--) {
        long int i,n,m,x,k,eveco=0,oddco=0,completed=0,curWorking=0;
        scanf("%ld %ld %ld %ld",&n,&m,&x,&k);
        char str[k];
        scanf("%s",str);
        findCount(k,str,&eveco,&oddco);
        for(i=1;i<=m;i++) {
            curWorking = (i%2)?(oddco<x?oddco:x):(eveco<x?eveco:x);
            completed += curWorking;
            (i%2)?(oddco-=curWorking):(eveco-=curWorking);
            //printf("Month = %ld: worked:%ld Completed:%ld EvenLeft=%ld OddLeft=%ld\n",i,curWorking,completed,eveco,oddco);
            if(n<=completed)
                break;
        }
        (n<=completed)?printf("yes\n"):printf("no\n");
    }
    return 0;
}
