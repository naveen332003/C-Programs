/*QUESTION:
  NUMBER SYSTEM USING 3 AND 4
  EXAMPLE:
   3,4,33,34,43,44,333,343,334,344,433,434,443,444.................
*/
#include<stdio.h>
void main(){
	int n,j=0,i,k=2,y;
	int a[]={3,4};
	printf("Enter nth number:");
	scanf("%d",&n);
	int b[1000],c[1000];
	b[0]=3;
	b[1]=4;
	if(n<=2){
		for(i=0;i!=n;i++){
		printf("%d",a[i]);
		if(n==2&&i==0)printf(",");
	}
}
	if(n>2){
		for(i=0;i<2;i++){
			printf("%d",a[i]);
			printf(",");
		}
		for(y=0;y<n-1;y++){
			for(i=0;i<k;i++){
				c[j++]=(b[i]*10)+3;
				c[j++]=(b[i]*10)+4;
			}	
			for(i=0;i<j;i++){
		printf("%d",c[i]);
		if(y!=n-2||i!=j-1)printf(",");
		    }   k=j;
		   j=0;
			for(i=0;i<sizeof(c)/sizeof(c[0]);i++){
				b[i]=c[i];
    }}}}