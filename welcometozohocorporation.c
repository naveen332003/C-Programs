/*Question:
Save the string “WELCOMETOZOHOCORPORATION” in a two dimensional array and search for substring
 like “too” in the two dimensional string both from left to right and from top to bottom.

w	e	L	C	O
M	E	T	O	Z
O	H	O	C	O
R	P	O	R	A
T	I	O	n	  

And print the start and ending index as

Start index : <1,2>

End index: <3, 2>
*/
#include<stdio.h>
void main(){
	int i,j,c=0,flag=0;
	char a[5][5];
	char b[]="WELCOMETOZOHOCORPORATION";
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i!=5||j!=5)
			a[i][j]=b[c++];
		}
	}
	for(i=0;i<5;i++){
		printf("\n");
		for(j=0;j<5;j++){
			printf("%c     ",a[i][j]);
		}
	}
	printf("\nLeft to Right search:");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(a[i][j]=='T'){
				if(a[i][j+1]=='O'){
					if(a[i][j+2]=='O'){
							printf("\nStart index:%d,%d",i,j);
                         	printf("\nEnd index:%d,%d",i,j+2);
						flag=1;
						break;
					}
				}
			}
		}
	}
	if(flag!=1){
    printf("\nStart index:Not found");
	printf("\nEnd index:Not found");	
}
	printf("\nTop to Bottom search:");
	flag=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(a[j][i]=='T'){
				if(a[j+1][i]=='O'){
					if(a[j+2][i]=='O'){
							printf("\nStart index:%d,%d",i,j);
                        	printf("\nEnd index:%d,%d",i,j+2);
						flag=1;
						break;
					}
				}
			}
		}
	}
	if(flag!=1){
    printf("\nStart index:Not found");
	printf("\nEnd index:Not found");	
}
}