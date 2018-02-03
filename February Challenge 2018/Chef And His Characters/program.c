#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int matches(char ch) {
    if(ch =='c' || ch =='h' || ch=='e' || ch=='f')
        return 1;
    return 0;
}
int notequal(char a,char b,char c,char d) {
    if(a!=b&&a!=c&&a!=d)
        if(b!=c&&b!=d)
            if(c!=d)
                return 1;
    return 0;
}
int main() {
    long int t;
    scanf("%ld",&t);
    while(t--) {
        char str[2000000];    
        scanf("%s",str);
        long int i,l=strlen(str),k,count=0;
        for(i=0;i<l-3;i++) {
            if(matches(str[i]) &&matches(str[i+1]) &&matches(str[i+2]) &&matches(str[i+3]) ) {
                if(notequal(str[i],str[i+1],str[i+2],str[i+3]))
                    count++;
            }
        }
        if(!count) {
            printf("normal\n");
        } else {
            printf("lovely %ld\n",count);
        }
    }
    return 0;
}
