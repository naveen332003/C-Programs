#include<stdio.h>
#include<string.h>
void main(){
	char a[50],b[50];
	int i,l=0;
	printf("Enter word 1:");
	gets(a);
	printf("\nEnter word 2:");
	gets(b);
	if(strlen(a)==strlen(b)){
		for(i=0;a[i]==b[i]&& a[i]!='\0';i++)
		l++;
		if(l==strlen(a))
		printf("\nsame");
		else
		printf("\nnot same");
	}
	else
	printf("\nnot same");
}