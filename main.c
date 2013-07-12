#include <stdio.h>
#include <math.h>

int N, i;

int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  
  scanf("%d",&N);

  int *a = new int[N];
  
  for(i=0;i<N;i++) scanf("%d",&a[i]);
	
  for(i=N-1;i>=0;i--)printf("%d ",a[i]);

  return 0;
}
