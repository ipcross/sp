#include <stdio.h>
#include <string.h>

char s[300];

int main(){
	
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);	
    
	gets(s);
	int i,l=-1;
	
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]>=48 && s[i]<=57){
			if(s[i]-47>l)l=s[i]-47;
		}
		else {
			if(s[i]>=65 && s[i]<=90){
				if(s[i]-54>l)l=s[i]-54;
			}
			else{
				printf("%d",-1);
				return 0;
			}
		}
	}
	
	if(l==1)l++;
	printf("%d", l);
	return 0;
}


 
 


