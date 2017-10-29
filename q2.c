#include<stdio.h>
#include<math.h>
int main()
{
	long long int T,X,Y,M,a,b,c,p,m;
	long long int arr[1000000];
	
	scanf("%lld",&T);
	
	for (a=0;a<T;a++)
{	scanf ("%lld %lld %lld",&X,&Y,&M);
	p=X%M;
	m=(p*X)%M;
	if (Y%2==0)
		c=pow(m, Y/2);
	else 
		c=pow(m,Y/2)*m;
	//c=pow(p, Y);	
	arr[a]=c%M;
}	

	for (a=0;a<T;a++)
	printf("%lld ",arr[a]);

	printf("\n");
return 0;
}
