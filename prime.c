/*QUESTION:
  PRIME NUMBER
*/ 
#include<stdio.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				k=1;
			}
			}
			if(k!=1){
			printf("\n%d",i);
			}
		k=0;
	}
	return 0;
}