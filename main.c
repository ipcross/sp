#include <stdio.h>

int a[1200][1200], n, m, i, j, count=0, min_h[1200], max_w[1200], val;

int main(){
	
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);	
    
	scanf("%d%d",&n,&m);
	
	for ( i= 0; i<n; i++ ) 
		for ( j= 0; j<m; j++ ) scanf("%d",&a[i][j]);
	
	for ( i= 0; i<n; i++ ) {
		val= a[i][0];
		for ( j= 1; j<m; j++ ) 
			if ( a[i][j]<val ) val= a[i][j];
		min_h[i]= val;
	}
 
	for ( j= 0; j<m; j++ ) {
		val= a[0][j];
		for ( i= 1; i<n; i++ )
			if ( a[i][j]>val )val= a[i][j]; 
		max_w[j]= val;
	}
 
	for ( i= 0; i<n; i++ ) 
		for ( j= 0; j<m; j++ ) 
			if ( a[i][j] == max_w[j] && a[i][j] == min_h[i] ) count++;

	printf("%d",count);
	
	return 0;
}


 
 


