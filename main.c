#include <stdio.h>
#include <math.h>

long N,count;

int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  
  scanf("%ld",&N);
  
  if(N==0) printf("%ld",1);
  if(N>0)printf("%ld",N*(1+N)/2);
  if(N<0) 
  {
	  count=2-N;
	  printf("%ld",count*(3-count)/2);
  }
  return 0;
}
