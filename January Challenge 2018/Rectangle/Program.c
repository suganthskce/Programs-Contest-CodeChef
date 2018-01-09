#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int t;
    scanf("%ld",&t);
    while(t--) {
        long int a,b,c,d;
        scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
        if(!(a^b^c^d)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }   
    return 0;
}
