#include<stdio.h>
int main()
{
int N , i , j , k , Q , temp = 0 ,x;
long long int arr[1000000];
long long int num[1000000] ={0};
scanf("%lld%lld",&N,&Q);
     for(x = 0;x < N;x++)
         scanf("%lld",&arr[x]);
     for(x = 0;x < Q;x++)
           {
                scanf("%lld%lld%lld",&i,&j,&k);
                num[i] = num[i] + k;
                num[j+1] = num[j+1] - k;
                
           }
           
for(x = 0;x < N;x++)
{
temp = temp + num[x];
arr[x] = arr[x] + temp;
printf("%lld",arr[x]);
}


return 0;
}






