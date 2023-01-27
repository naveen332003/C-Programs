/*QUESTION:
  MATRIX MULTIPLICATION
*/
#include<stdio.h>
void main(){
	int n,u,i,j;
     printf("Enter number of row in A:");
     scanf("%d",&n);
     printf("Enter number of column in A:");
     scanf("%d",&u);
     	int a[n][u];
     for(i=0;i<n;i++){
     	for(j=0;j<u;j++){
            scanf("%d",&a[i][j]);
     		}
	 }
	 int c,d,x,y;
      printf("Enter number of row in B:");
     scanf("%d",&c);
     printf("Enter number of column in B:");
     scanf("%d",&d);
     int b[c][d];
     for(x=0;x<c;x++){
     	for(y=0;y<d;y++){
            scanf("%d",&b[x][y]);
     		}
	 }
	 int I[n][d];
	 if(u==c){
	 	printf("The Matrix multiplication is\n");
	 	             for(int p=0;p<n;p++){
	 		for(int q=0; (q<d);q++){
	 			I[p][q]=0;
	 			for(int r=0;r<u;r++){
				I[p][q]=I[p][q]+a[p][r]*b[r][q];
			}
					printf(" \t%d",I[p][q]);
						}
					printf("\n");
			}
		 }	
		 else
		 printf("Matirx multiplication is not possible........");
}
		 