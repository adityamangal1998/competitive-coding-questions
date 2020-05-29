n,m = list(map(int,input().split()))
a = list(map(int,input().split()))
b = list(map(int,input().split()))
c = []
time = 0
a.sort()
b.sort()
if (b[len(b)-1]<a[len(a)-1]):
    print(-1)
else:
    for i in range(n):
        for j in range(1,m+1):
            print(a)
            if len(a)==0:
                break
            elif b[m-j]>=a[len(a)-1]:
                a.pop()
            else:
                c.append(a[len(a)-1])
                a.pop()
        time = time+1
        if len(a)==0 and len(c)==0:
            break
        while(len(c)!=0):
             a.append(c[len(c)-1])
             c.pop()


    print(time+i)        
