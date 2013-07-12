#include <stdio.h>
#include <math.h>

int N,a=30000,b=0,x;

int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  
  scanf("%d",&N);

  for(int i=0;i<N;i++)
  {
	  scanf("%d",&x);
	  if(x<a)a=x;
	  if(x>b) b=x;
  }
  
  printf("%d %d",a,b);

  return 0;
}
