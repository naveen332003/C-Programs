/*QUESTION:
  Reverse a sentence
*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int b[100],c[100];
	int i,j=0,count,len,k=0,t,index;
	printf("Enter a sentence:");
	gets(a);
	len=strlen(a);
	for(i=len-1;i>0;i--){
		count=0;
		while(a[i]!=' '&&i>0){
			count++;
			i--;
		}
	    if(a[i]==' '){
	    	b[j++]=count;
	    	c[k++]=i;
		}
}
for(i=0;i<k;i++){
	count=b[i];
	index=c[i]+1;
	for(j=0;j<count;j++){
		printf("%c",a[index++]);
	}
	printf(" ");
}
for(i=0;i<c[k-1];i++)
      printf("%c",a[i]);	 
}

