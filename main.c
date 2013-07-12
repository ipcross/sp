#include <stdio.h>
#include <math.h>

int N,M,i,a[100000],x;

int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  
  scanf("%d%d",&N,&M);

  for(i=0;i<N;i++)
  {
	scanf("%d",&x);
	a[x]=1;
  }
  for(i=0;i<M;i++) 
  {
	  scanf("%d",&x);
	  if(a[x]==1) a[x]=2;
  }
  for(i=0;i<100000;i++) 
	if(a[i]==2)printf("%d ",i);

  return 0;
}
