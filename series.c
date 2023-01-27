/*QUESTION:
  Calculate the sum of the series[x-x^3+x^5+......]
*/
#include<stdio.h>
#include<math.h>
int main(){
	int n,j,sum=0,x,y=1;
	printf("Enter number of times:");
	scanf("%d",&n);
	printf("\nEnter number to be performed:");
	scanf("%d",&x);
	for(j=1;j<=n;j=j+2){
		
		sum=sum+pow(x,y);
		y=y+2;
		if(j==n&&n%2!=0){
			break;
		}
	    	sum=sum-pow(x,y);
		y=y+2;
	}
	printf("\nsum=%d",sum);
}