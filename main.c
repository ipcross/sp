#include <stdio.h>
#include <math.h>

int N,a=0,b=0;

int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  
  scanf("%d",&N);
	
  int *mas = new int[N];
  for(int i=0;i<N;i++)
  {
	  scanf("%d",&mas[i]);
	  if(mas[i]==1)a++;
	  else b++;
  }
  
  if(a<=b)printf("%d",a);
  else printf("%d",b);
  
  return 0;
}
