/*QUESTION:
  CONVERT THE NUMBER INTO DECIMAL TO BINARY
  AND ALSO NUMBER DIGIT IN BINARY NUMBER 
   */
#include<stdio.h>
void main(){
	int n,i,count=0;
	printf("Enter a number to convert:");
	scanf("%d",&n);
	int a[10];
	for(i=0;n>=1;i++){
	   a[i]=n%2;
	   	n=n/2;
}
	for(i=i-1;i>=0;i--){
		printf("%d",a[i]);
	    count++;
		}
		printf("\nNumber of digits in the binary value: %d",count);                                                 
}