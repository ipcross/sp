#include <stdio.h>
#include <math.h>

int N,res=0,*a;

void recur(int t)
{
	int i,max=0,poz=0;
	if(t==N) return;
	for(i=t;i<N;i++)
		if(a[i]>max)
		{
			max=a[i];
			poz=i;
		}
	res=res+(poz-t+1)*max;
	recur(poz+1);
}

int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  
  scanf("%d",&N);
  
  a=new int[N];
  
  for(int i=0;i<N;i++) scanf("%d",&a[i]);

  recur(0);

  printf("%d",res);

  return 0;
}
