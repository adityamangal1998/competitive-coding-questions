n,q = list(map(int,input().split()))
a = list(map(int,input().split()))
for i in range(q):
    m = list(map(int,input().split()))
    if m[0] == 1:
        if (a[m[1]-1]==1):
            a[m[1]-1]=0
        else:
            a[m[1]-1]=1
    else:
        s = a[m[2]-1]
        if s==1:
            print("ODD")
        else:
            print("EVEN")
