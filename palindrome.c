/*QUESTION:
  Check the number is palindrome or not
*/
#include<stdio.h>
int main(){
	int n=0,temp=0;
	int a=0,sum=0;
	scanf("%d",&n);
		temp=n;
	while(n>0){
	a=n%10;
	sum=sum+a;
	n=n/10;
	sum=sum*10;
}
sum=sum/10;
if(sum==temp){
	printf("The number is palidrome");
}
else{
printf("The number is not palidrome");
}
printf("\n%d",sum);
return 0;
}