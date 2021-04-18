""" author : @akash kumar """

n=int(input())
a=list(map(str,input().split()[:n]))
s=[]
A="abcdefghijklmnopqrstuvwxyz"
B="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
for i in range(len(A)):
    for j in range(n):
        if A[i]==a[j] or B[i]==a[j]:
            s.append(a[j])
for i in s:
    print(i,end=" ")
#print(a)
