//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/charged-up-array-f35a5e23/
#include<stdio.h>
#include<math.h>
 
int main() {
    long long int t;
    scanf("%lld", &t);
    long long int sum,n,val,num;
    for(long long int i=0;i<t;i++)
    {
        scanf("%lld",&n);
        if(n>=64)
        {
            for(long long int j=0;j<n;j++)
            {
                scanf("%lld",&num);
            }
            printf("0\n");
            continue;
        }
        sum=0;
        val=(pow(2,n)/2);
        for(long long int j=0;j<n;j++)
        {
            scanf("%lld",&num);
            if(num>=val){
                sum=sum%1000000007 + num%1000000007;
            }
        }
        printf("%lld\n",sum%1000000007);
    }
}
