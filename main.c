#include <stdio.h>
#include <math.h>

char a[100];
int count=0,sum=0;

int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  
  scanf("%s",&a);

  for(int i=0;i<100;i++)
  {
	if(a[i]=='0')
		sum++;
	else
	{
		if(count<sum)count=sum;
		sum=0;
	}
  } 
  
  printf("%d",count);

  return 0;
}
