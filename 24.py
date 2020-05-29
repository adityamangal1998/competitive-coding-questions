t  = int(input())
while t!=0:
    n = int(input())
    a = list(map(int,input().split()))
    a.insert(0,0)
    sum_a = sum(a)
    q = int(input())
    q1 = list(map(int,input().split()))
    q2 = list(map(int,input().split()))
    for i in range(0,q):
        u = q1[i]-1
        v = q2[i]
        if u==0:
            sum = ((sum_a*(v//n) + a[v%n]) - (sum_a*(u//n) + a[u%n]))%1000000007
        else:
            sum = ((sum_a*(v//n) + a[v%n]) - (sum_a*(u//n) + a[u%n+1]))%1000000007
        print(sum)
    t = t - 1
