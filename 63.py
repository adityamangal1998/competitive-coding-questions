n = int(input())
a = []
max = ""
for i in range(n):
    p = input()
    if len(p)>len(max):
        max = p
    a.append(p)
a.sort(key=len)
count=0
for i in a:
    if i in max:
        count = count+1
        
if count==n:
    print("YES")
    for i in a:
        print(i)
else:
    print("NO")
