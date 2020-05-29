n,k = list(map(str,input().split()))
n = int(n[-1])
k = int(k)
if (k==0):
    k=1
elif k==1:
    k=1
elif k==2:
    k=2
elif k==3:
    k=3
elif k>=4:
    k=4    
    
if(n==1):
    print(1)
elif (n==2):
    print(str(n**k)[-1])
