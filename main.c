#include <stdio.h>
#include <string.h>

int n;
char s[1100],t[1010];

int main(){
	
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);	

 	scanf("%d",&n);
	int i,j,sum=0;
	
	for(i=0;i<n;i++)
	{
		sum=0;
		scanf("%s",&s);
		
		while(strlen(s)%3){
			t[0]='0';
			t[1]='\0';
			strcat(t,s);
			strcpy(s,t);
		}
		
		for(j=0;j<strlen(s)/3;j++)
			sum=sum+s[3*j]*4+s[3*j+1]*2+s[3*j+2];
		
		if(sum%7)printf("No\n");
		else printf("Yes\n");
	}
	
	return 0;
}


 
 


