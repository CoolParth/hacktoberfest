#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
bool mark[1000010];
int n[1000010],m[1000010],k[1000010],new[1000010];
long long int ans[1000010];
int main(){
	memset(mark,true,sizeof(mark));
	mark[1] = false;
	mark[0] = false;
	int T , i , j , p ,v,l=0;
	long long int sum = 0;
	scanf("%d",&T);
	for(i = 0;i < T;i++)
	{
		scanf("%d%d",&n[i],&m[i]);
	}
	int max =1000000;
	for(p = 2;p <= max;p++)
	{
		if(mark[p] == true)
		{  
			for(i = p*2;i <= max;i = i + p)
			{
				mark[i] = false;
			}

		}

	}
	for(i = 2;i <= max;i++)
	{
		if( mark[i] == true)
		{  
			ans[i] = i;
		}
	}
	for(i = 2;i <= max;i++) ans[i] = ans[i] + ans[i-1];
/*
	for(i = 0;i < T;i++)
	{
		for(j = 0;j < l;j++)
		{    
			if((new[j] >= n[i])&&(new[j] <= m[i]))
			{

				sum = sum +new[j];
			}
		}
		printf("%lld\n",sum);
		sum = 0;
	}
*/
	for (i = 0 ;i < T ; i++ ) {  
		long long int temp = ans[m[i]];
		if ( n[i] > 0 ) 
			temp = temp - ans[n[i]-1];
		printf("%lld\n",temp);
	}
	return 0;
}
