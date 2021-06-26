stack=[]
for _ in range(int(input())):
   op=list(map(str,input().split()))
   if(op[0]=="PUSH"):
      stack.append(op[1])
   elif op[0]=="PEEK":
      n=len(stack)
      print(stack[n-1])
   elif op[0]=="POP":
      stack.remove(stack[len(stack)-1])
print(stack)
         
