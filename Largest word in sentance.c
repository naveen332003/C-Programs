/*QUESTION:
  LARGEST WORD IN A SENTANCE
*/
#include<stdio.h>
#include<string.h>
int main()
{int i,c1=0,count=0,u,lar=0,len;
char a[100];
printf("Enter a string:");
gets(a);
len=strlen(a);
for(i=0;i<len;i++){
	count=0;
	while(a[i]!=32&&i<len){
		count++;
		i++;
	}
	if(lar<count){
	u=i;
	lar=count;
}
}
for(i=u-lar;i<u;i++){
	printf("%c",a[i]);
}
}