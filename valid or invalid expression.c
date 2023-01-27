/*QUESTION
  Given expression is valid or Not
*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int i,p=0,k=0,r,q;
	printf("Enter a expression:");
	gets(a);
	for(i=0;i<strlen(a);i++){
	if(a[i]>'A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z'||a[i]=='+'||a[i]=='-'||a[i]=='/'||a[i]=='*'||a[i]=='('||a[i]==')'){
				if(a[i]>'A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z'){
				for(r=65,q=97;r<=90,q<=122;r++,q++){
				if(a[i+1]==r||a[i+1]==q){
					p=-1;
				break;}
			}	}
			if(a[i]=='+'||a[i]=='-'||a[i]=='/'||a[i]=='*'){
			if(a[i+1]=='+'||a[i+1]=='-'||a[i+1]=='/'||a[i+1]=='*'){
				p=-1;
				break;
				}	}
		if(a[i]=='(')
			k++;
			if(a[i]==')')
				k--;
				if(a[i]==')'){
			if(a[i-1]=='+'||a[i-1]=='-'||a[i-1]=='/'||a[i-1]=='*'){
				p=-1;
				break;}
			}	}
			else{
							p=-1;
				break;
			}	}
			if(k==0&&p==0){
			printf("valid\n");
		}
			else{
				printf("Invalid");
			}	}