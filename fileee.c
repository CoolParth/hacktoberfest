#include<stdio.h>
int main()
{
int arr[100] , N , noi[100000] , noj[100000] , i , rem , sum , j ,ans=0;

scanf("%d",&N);

for(i = 0;i < N;i++)

scanf("%d%d",&noi[i],&noj[i]);

for(i = 0;i < N;i++)

  {

     for(i = noi[i];i <= noj[i];i++)
       {
            sum = 0;
         for(j = 2;j <= i/2;j++)

            {
    
                 rem = i % j;

                    if(rem == 0)
                         sum++;

            }
             if(sum == 0 && i != 1) 
             ans = ans + i;
       }
  printf("%d",ans);
 }
return 0;
}
