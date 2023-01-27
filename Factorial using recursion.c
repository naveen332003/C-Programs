//factorial using recursion
#include<stdio.h>
int factorial(int fact);
void main(){
	int n,j;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n==0){
		printf("The factorial is 1");
	}
	else{
		j=factorial(n);
	    printf("%d",j);
	}
}
	int factorial(int fact){
		int i=1;
		if(fact>1){
	  i=fact*factorial(fact-1);
	  return i;
    }
}
