#include <stdio.h>

int main(){
	int n,p;
	int f[n]={1,2},i;
	while(~scanf("%d",&n))
	{
		
		for(i=2;i<n;i++)
			f[i] = f[i-2]+f[i-1];
		for(i=0; i<n;i++)
			printf("%10d",f[i]);
		if(i%5==0)
		{
			printf("\n");
		}
	}
	
			
	
	
	return 0;
}
