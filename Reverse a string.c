/*QUESTION
  Reverse a string
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,len,temp;
	printf("Enter a string:");
	gets(a);
	len=strlen(a);
	for(i=0;i<len/2;i++)
	{
		temp=a[i];
		a[i]=a[len-i-1];
		a[len-i-1]=temp;
	}
	printf("%s",a);
}