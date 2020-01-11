//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/monk-and-operations/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
long long int rmax,cmax,a[1000][1000],v1,v2,v3,v4;
int N,M;
 
 
long int absolute(long long int a)
{
    if(a<0)
        return 0-a;
    else
        return a;
}
 
long long int the_rows(){
    long long int max=0,max1,max2,max3;
    for(int i=0;i<N;i++){
        max1=0;
        max2=0;
        max3=0;
        for(int j=0;j<M;j++){
            max1+=absolute(a[i][j]+v1);
            max2+=absolute(v2);
            max3+=absolute(a[i][j]);
        }
        if(max1>=max2 && max1>=max3)max+=max1;
        else if (max2>=max1 && max2>=max3)max+=max2;
        else max+=max3;
    }
    return max;
}
long long int the_columns(){
    long long int max=0,max1,max2,max3;
    for(int i=0;i<M;i++){
        max1=0;
        max2=0;
        max3=0;
        for(int j=0;j<N;j++){
            max1+=absolute(a[j][i]+v3);
            max2+=absolute(v4);
            max3+=absolute(a[j][i]);
        }
        if(max1>=max2 && max1>=max3)max+=max1;
        else if (max2>=max1 && max2>=max3)max+=max2;
        else max+=max3;
    }
    return max;
}
 
int main()
{
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            long long int temp;
            scanf("%lli",&temp);
            a[i][j]=temp;
        }
    }
    scanf("%lli %lli %lli %lli",&v1,&v2,&v3,&v4);
    rmax=the_rows();
    cmax=the_columns();
    if(rmax>cmax){
        printf("%lli",rmax);
    }else printf("%lli",cmax);
    return 0;
}
