/*QUESTION:
  Change number into mixed fraction
*/ 
#include<stdio.h>
#include<string.h>
int main(){
	char p[100];
	int N=0,i=0,s=0,len,u=1;
	printf("Enter a number:");
	scanf("%s",p);
	len=strlen(p);
	while(i<len){
	if(p[i]==46){
	while(i<len-1){
		i++;
		s=s+p[i]-48;
		s=s*10;
	u=u*10;
	}
		break;
}
N=N+p[i]-48;
		N=N*10;
i++;
}
s=s/10;
N=N/10;
 if(s%5==0){
 	s=s/5;
 	u=u/5;
 }
 else if(s%4==0){
 		s=s/4;
 	u=u/4;
 }else if(s%2==0){
 		s=s/2;
 	u=u/2;
 }
printf("%d %d/%d",N,s,u);
}