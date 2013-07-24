#include <stdio.h>
#include <algorithm>

int **a, n, m, c, f=0, i, j,l;

int main(){
	
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);	
    
	scanf("%d",&c);
	for(l=0;l<c;l++){
		f=0;
		scanf("%d%d",&n,&m);
		a = new int*[n];
		for(i=0;i<n;i++) a[i]=new int[m] ;

		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				 scanf("%d",&a[i][j]);
				 
		for(i=0;i<n-1;i++){
			for(j=0;j<m-1;j++){
				if((a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1])%4==0)
				{
					f=1;
					break;
				}
			}
			if(f)break;
		}
		
		f?printf("NO\n"):printf("YES\n");
		
		delete a;
	}	
}
