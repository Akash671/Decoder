n=int(input())
s=list(map(str,input().split()[:n]))
p="Nemo"
c=0
for i in s:
    if i==p:
        c+=1
        print(c)
        break
    else:
        c+=1


