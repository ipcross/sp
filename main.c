#include <stdio.h>
#include <math.h>

int a[3],b[3];
double r;

int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  
  scanf("%ld%ld%ld%ld%ld%ld",&a[0],&a[1],&a[2],&b[0],&b[1],&b[2]);
	
  r=sqrt(pow(a[0]-b[0],2)+pow(a[1]-b[1],2));

  if(a[2]+b[2]>=r && a[2]+r>=b[2] && r+b[2]>=a[2])printf("%s","YES");
  else printf("%s","NO");

}
