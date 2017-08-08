#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--) {
		int h[20000]={0};
		int n;
		scanf("%d",&n);
		int i,a[n],j,k,l;
		for(i=0;i<n;i++) {
			scanf("%d",&a[i]);
			h[a[i]]++;
		}
		for(i=1;i<=7;i++)
		if(h[i]==0)
		break;
		if(i!=8) {
			printf("no\n");
			continue;
		}
		for(i=0,j=n-1;i<j;i++,j--) {
			if(a[i]!=a[j])
			break;
			if(a[i]<1||a[i]>7)
			break;
			if(a[j]<1||a[i]>7)
			break;
			if((i!=0&&a[i]<a[i-1]))
			break;
			if((j!=n-1&&a[j]<a[j+1]))
			break;
		}
		if(i==j) {
		if(a[i]<=7&&a[i]>=1)
		printf("yes\n");
		else
		printf("no\n");
		}else if(j<i)
		printf("yes\n");
			else
			printf("no\n");
	}
	// your code goes here
	return 0;
}
