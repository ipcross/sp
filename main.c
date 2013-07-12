#include <stdio.h>
#include <math.h>

int s=0,p=0,x,y;

int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  
  scanf("%d%d",&s,&p);

  for(int x=0;x<=1000;x++)
  {
	y=s-x;
	if(x*y==p && x<=y)printf("%d %d",x,y);
  } 
  
  return 0;
}
