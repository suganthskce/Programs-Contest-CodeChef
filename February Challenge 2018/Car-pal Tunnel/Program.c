#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int t;
    scanf("%ld",&t);
    while(t--) {
        long int i,j,k,l,n,c,d,s;
        scanf("%ld",&n);
        long int a[n],max;
        for(i=0;i<n;i++)
            scanf("%ld",&a[i]);
        scanf("%ld %ld %ld",&c,&d,&s);
        max = a[0];
        for(i=1;i<n;i++)
            if(max<a[i])
                max = a[i];
        printf("%0.9lf\n",(double)max*(c-1));
    }
    return 0;
}
