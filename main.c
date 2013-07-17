#include <stdio.h>
#include <algorithm>

using namespace std;

long n;
long *a;

static int cmp(const void *pa, const void *pb)
{
	long a = * (long *) pa, b = * (long *) pb;
	return a - b;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int i, j;
    
    scanf ("%ld", &n);
    
    a = new long[n];
	
    for (i = 0; i < n ; i++) 
			scanf ("%ld", &a[i]);
    
    qsort(a,n,sizeof(long),cmp);
    
    for (i = 0; i < n ; i++)
	   printf("%ld ", a[i]);

    return 0;
}
