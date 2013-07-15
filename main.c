#include <stdio.h>
#include <algorithm>

using namespace std;
long *a, i, n, s=1;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    scanf ("%ld", &n);
    a=new long[n];
    
    for (i = 0; i < n; i++) 
      scanf ("%ld", &a[i]);

    sort(a, a + n);
    for (i = 0; i < n ; i++) {
		if(a[i] <= s)
			 s += a[i];
		else 
			break;
       
    }

    printf ("%ld", s);
    
    return 0;
}
