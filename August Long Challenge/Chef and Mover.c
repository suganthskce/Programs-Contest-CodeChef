#include <stdio.h>

int main(void) {
	long long int t;
	scanf("%lld",&t);
	while(t--) {
		long long int n,d,sum=0,dif=0,i,j,k,l;
		scanf("%lld %lld",&n,&d);
		long long int a[n];
		for(i=0;i<n;i++) {
			scanf("%lld",&a[i]);
			sum+=a[i];
		}
		if(sum%n!=0) {
			printf("-1\n");
			continue;
		}
		l=sum/n;
		for(i=0;i<d;i++) {
            sum=0;
            for(j=i;j<n;j+=d)
                sum+=a[j];
            if(sum%l!=0)
                break;
        }
        long long int mi;
        if(i!=d)
            printf("-1\n");
        else {
             for(i=0;i<n;i++) {
                 if(a[i]!=l) {
                     if(a[i]<l) {
                         k=l-a[i];
                         for(j=i+d;j<n&&k;j+=d) {
                             if(a[j]>l){
                                 mi=k<a[j]-l?k:a[j]-l;
                                 k-=mi;
                                 a[j]-=mi;
                                 dif+=((j-i)/d)*mi;
                             }
                         }
                     } else {
                         k=a[i]-l;
                         for(j=i+d;j<n&&k;j+=d) {
                             if(a[j]>l){
                                 mi=k<l-a[j]?k:l-a[j];
                                 k-=mi;
                                 a[j]+=mi;
                                 dif+=((j-i)/d)*mi;
                             }
                         }
                     }
                 }
             }
             printf("%lld\n",dif);
        }  
	}
	return 0;
}
