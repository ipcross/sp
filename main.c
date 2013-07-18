#include <stdio.h>
#include <algorithm>

using namespace std;

long *a, *b,n;

static int cmp(const void *pa, const void *pb)
{
	long a = * (long *) pa, b = * (long *) pb;
	return a - b;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int i;
    long count=1, maxval, max=0, val;
    
    scanf ("%ld", &n);
    
    a = new long[n];
    b = new long[n];
    
    for(i=0;i<n;i++)
    {
		scanf ("%ld", &a[i]);
		b[i]=a[i];
	}
    qsort(a,n,sizeof(long),cmp);
    
    maxval=a[0];val=a[0];
    
    for(i=1;i<n;i++)
    {
		if(a[i]==val)	count++;
		else
		{
			if(max<count)
			{
				max=count;
				maxval=val;
			}
			count=1;
			val=a[i];
		}
	}
		if(max<count)
		{
			max=count;
			maxval=val;
		}	
	
	for(i=0;i<n;i++)
		if(b[i]!=maxval) printf("%ld ", b[i]);

	for(i=0;i<max;i++)  printf("%ld ", maxval);

		
    return 0;
}
