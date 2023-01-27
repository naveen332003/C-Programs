#include<stdio.h>
int main(){
	int a[100],b[100],c[100];
	int temp,i,j,n,m,t=0,r=0,e=0;
	printf("Enter n:");
	scanf("%d",&n);
	printf("\nEnter m:");
	scanf("%d",&m);
	for(i=1;i<m+1;i++){
		if(m%i==0)
			a[t++]=i;
}
for(i=1;i<n+1;i++){
		if(n%i==0)
			b[r++]=i;
	}
	for(i=0;i<t;i++){
		for(j=0;j<r;j++){
			if(a[i]==b[j])
				c[e++]=a[i];
		}
	}
	if(e==0)
	temp=1;
	temp=c[0];
	for(i=0;i<e;i++){
		if(c[i]<c[i+1])
			temp=c[i+1];
	}
	printf("GCD(n,m)=%d",temp);
}