/*QUESTION:
  Triangle pattern using number
*/
#include<stdio.h>
int main(){
	int i=0,j=0,k=0,z=1,n;
	printf("Enter no of row:");
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		for(j=n;j>i-1;j--){
		printf("   ");
		}
			for(k=1;k<i+z;k++){
				printf("%d  ",k);
			}
				z=z+1;
	printf("\n");
}
	return 0;
}