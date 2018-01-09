#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int t;
    scanf("%ld",&t);
    while(t--) {
        long int n;
        scanf("%ld",&n);
        long int arr[n][n],i,j,k,l,sum=0,max=0;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%ld",&arr[i][j]);
        for(i=0;i<n;i++)
            if(max<arr[n-1][i])
                max = arr[n-1][i];
        sum += max;
        //printf("%ld ",max);
        for(i=n-2;i>=0;i--) {
            long int localMax = 0;
            for(j=0;j<n;j++) {
                if(arr[i][j]<max && localMax<arr[i][j])
                    localMax = arr[i][j];
            }
            if(!localMax)
                break;
            //printf("%ld ",localMax);
            sum += localMax;
            max = localMax;
        }
        if(i<0){
            printf("%ld\n",sum);
        } else {
            printf("-1\n");
        }
    }   
    return 0;
}
