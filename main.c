#include <stdio.h>

int a,b[6];

int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  scanf("%d",&a);
	
  b[0]=a/100000;
  b[1]=a/10000%10;
  b[2]=a/1000%10;
  b[3]=a/100%10;
  b[4]=a/10%10;
  b[5]=a%10;

  if(b[0]+b[1]+b[2]==b[3]+b[4]+b[5])printf("%s","YES");
  else printf("%s","NO");

}
