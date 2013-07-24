#include <stdio.h>
#include <algorithm>
int a[5000],b[5000],n;
long long f[5000];

static int cmp(const void *pa, const void *pb)
{
	long a = * (long *) pa, b = * (long *) pb;
	return a - b;
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){scanf("%d",&a[i]);b[i]=a[i];}
	std::qsort(b,n,sizeof(long),cmp);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			f[j]+=abs(a[i]-b[j]);
			f[j]=j&&f[j-1]<f[j]?f[j-1]:f[j];
		}
	}	
	printf("%I64d\n",f[n-1]);
}
