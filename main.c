#include <stdio.h>

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 
	int w,h,n,a[112][112],i,j,x1,y1,x2,y2,c=0,f;
    
    scanf ("%d%d%d", &w,&h,&n);

	for(f=0;f<n;f++)
	{
		scanf ("%d%d%d%d", &x1,&y1,&x2,&y2);
		for(i=x1;i<x2;i++)
			for(j=y1;j<y2;j++)
				a[i][j]=1;
	}
	
	for(i=0;i<h;i++)
		for(j=0;j<w;j++) 
			if(a[i][j])c++;
	printf("%d", w*h-c);
	
    return 0;
}
