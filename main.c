#include <stdio.h>
#include <algorithm>

using namespace std;

int n;
double *a, s;

static int cmp(const void *pa, const void *pb)
{
	double a = * (double *) pa, b = * (double *) pb;
	return a - b;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int i, j;
    
    scanf ("%d", &n);
    
    a = new double[n];
	
    for (i = 0; i < n ; i++) 
			scanf ("%lf", &a[i]);
			
    scanf ("%lf", &s);
    
    qsort(a,n,sizeof(double),cmp);
    
    for (i = 0; i < n ; i++)
    { 
		if(a[i]>s) s = ( s + a[i] ) / 2;
    }
    
    printf("%.6lf", s);

    return 0;
}
