//Maximum element in an array
#include<stdio.h>
void main(){
	int max,n;
	printf("Enter how many element:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Enter a element:");
			scanf("%d",&a[i]);					
	}
   for(int j=0;j<n-2;j++){
   	for(int k=j+1;k<n-1;k++){
   		if(a[j]>a[k]){
   			max=a[j];
   		}  
	   }
   }
   printf("Maximum element in an array is :%d",max);
}