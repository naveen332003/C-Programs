/*QUESTION:
At a fun fair, a street vendor is selling different colours of balloons. 
He sells N number of different colours of balloons (B[]). 
The task is to find the colour (odd) of the balloon which is present odd number of times in the bunch of balloons.

Note: If there is more than one colour which is odd in number, then the first colour in the array which is present odd number of times is displayed. 
The colours of the balloons can all be either upper case or lower case in the array. 
If all the inputs are even in number, display the message “All are even”.

Example :

7  -> Value of N
[r,g,b,b,g,y,y]  -> B[] Elements B[0] to B[N-1], where each input element is sepārated by ṉew line.
Output :

r -> [r,g,b,b,g,y,y]  -> “r” colour balloon is present odd number of times in the bunch.
Explanation:
From the input array above:

r: 1 balloon 
g: 2 balloons
b:  2 balloons
y : 2 balloons
Hence , r is only the balloon which is odd in number.
*/
#include<stdio.h>
int main(){
	int flag=1,N,k,i,j,cout=0,t=0,o=0,u=0;
	printf("Enter no.of element:");
	scanf("%d",&N);
	char b[N],tem[N],du[N]; 
	for(k=0;k<N;k++){
    	scanf("%s",&b[k]);
	}
	for(i=0;i<N;i++){
		cout=0;
		for(j=0;j<N;j++){
			if(b[i]==b[j]){
			cout++;
			}
		}
		if(cout%2!=0){
		tem[t++]=b[i];
		flag=0;
	}
	}
	du[u++]=tem[0];
	for(i=0;i<t;i++){
		for(j=0;j<u;j++){
			o=0;
			if(du[j]==tem[i])
		o++;
	}
	if(o==0)
		du[u++]=tem[i];
	}
	if(flag==0){
	for(i=0;i<u;i++)
	   printf("\n%c",du[i]);
   }
  else{
  printf("All are even");
}
}