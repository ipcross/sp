#include <stdio.h>

long a[3],tmp;

int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  scanf("%ld%ld%ld",&a[0],&a[1],&a[2]);

  if(a[2]==a[0]*a[1])printf("%s","YES");
  else printf("%s","NO");

}
