//factorial using non recursion........
#include<stdio.h>
void main(){
int n,fact=1;
printf("Enter the number:");
scanf("%d",&n);
if(n==0){
	printf("The factorial is 1");
}
if(n==1){
		printf("The factorial is 1");
}
else
for(int i=n;i>1;i--){
	fact=n*fact;
	n--;
}
	printf("The factorial is %d",fact);

}
