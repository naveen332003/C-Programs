/*QUESTION:
  DATE1:04/04/2010
  DATE2:16/11/2031
  DAYS=7887
  CONSTRINT:
  EACH MONTH HAS 30 DAYS
 */ 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,day=0;
	int temp;
	char a[11],b[11];
  int c[8],d[8];
  printf("Enter a 1st date:");
  gets(a);
  printf("\nEnter a 2nd date:");
  gets(b);
    c[0]=((int)a[0])-48;
  d[0]=((int)b[0])-48;
  c[1]=((int)a[1])-48;
  d[1]=((int)b[1])-48;
  c[2]=((int)a[3])-48;
  d[2]=((int)b[3])-48;
  c[3]=((int)a[4])-48;
  d[3]=((int)b[4])-48;
  c[4]=((int)a[6])-48;
  d[4]=((int)b[6])-48;
  c[5]=((int)a[7])-48;
  d[5]=((int)b[7])-48;
  c[6]=((int)a[8])-48;
  d[6]=((int)b[8])-48;
  c[7]=((int)a[9])-48;
  d[7]=((int)b[9])-48;
  day=day+abs(((c[0]*10)+c[1])-((d[0]*10)+d[1]));
  day=day+abs(((c[2]*10)+c[3])-((d[2]*10)+d[3]))*30;
  day=day+abs(((c[4]*1000)+(c[5]*100)+(c[6]*10)+c[7])-((d[4]*1000)+(d[5]*100)+(d[6]*10)+d[7]))*365;
  printf("%d\n",day);
}