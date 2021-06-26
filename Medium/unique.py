n=int(input())
a=list(map(str,input().split()[:n]))

ans=""
for i in a:
  a.remove(i)
  if i not in a:
     print(i,end=" ")
     #break
