#include <stdio.h>
#include<string.h>
int main(void) {
	int t;
    scanf("%d",&t);
    while(t--) {
        char str1[1000],str2[1000],ans='B';
        scanf("%s %s",str1,str2);
        int h1[26]={0},h2[26]={0},l1=strlen(str1),i,j,k,l;
        for(i=0;i<l1;i++) {
            h1[str1[i]-'a']++;
            h2[str2[i]-'a']++;
        }
        int flag1=1,flag2=0,flag3=0;
        for(i=0;i<26;i++) {
            if(h2[i]!=0&&h1[i]==0)
                flag1=0;
            if(h1[i]!=0&&h2[i]==0)
                flag2=1;
            if(h1[i]>=2&&h2[i]==0)
                flag3=1;
        }
        if(flag1&&flag2)
            ans='A';
        if(flag3)
            ans='A';
        printf("%c\n",ans);
    }
	return 0;
}
