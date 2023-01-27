/*QUESTION:
  Remove a unbalanced parentheses
*/  
#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int b[100],i,j,k=0;
	printf("Enter a expression:");
	gets(a);
	for(i=0;i<strlen(a);i++){
		if(a[i]=='(')
			b[k++]=i;
		if(k==0&&a[i]==')')
			a[i]=' ';
			if(a[i]==')')
				k--;
}
if(k>0){
	for(i=0;i<k;i++)
	    a[b[i]]=' ';
}
printf("Balanced expression is: %s",a);
}