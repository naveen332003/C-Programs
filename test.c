/*Eg1:
input:a1b10
output:abbbbbbbbbb
Eg2:
input:b3c6d15
output:bbbccccccddddddddddddddd
*/
#include<stdio.h>
#include<string.h>
int main(){
	char str[100],c[100];
	int in[100],p,i,j,t=0,k=0,o=0;
	printf("Enter a sequence:");
	gets(str);
	p=strlen(str);
	for(i=0;i<p;){
	while(str[i]>='a'&&str[i]<='z'){
			c[o++]=str[i];   //array used to store character
			i++;
	}
t=0;
			while(str[i]>='0'&&str[i]<='9'){
			t=t+(str[i]-48);
			t=t*10;
			i++;
		}
		in[k++]=t/10;   //array used to store integer number
}
for(i=0;i<k;i++){
	for(j=0;j<in[i];j++){
	printf("%c",c[i]);
	}
}}
