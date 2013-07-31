#include <stdio.h>
#include <math.h>
int main(){
    int i,max,n,p=0;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);	
 	scanf("%d",&n);
	max=n;
	p=log2(n)+1;
	for(i=0;i<p-1;i++){
		n=n<<1;
		if(n/(1<<p))n=n&((1<<p)-1)|1;
		else n=n&((1<<p)-1);
		if(max<n)max=n;}
	printf("%d",max);
	return 0;
}


 
 
