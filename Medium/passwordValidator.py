for _ in range(int(input())):
   s=str(input())
   n=len(s)
   UP="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
   LO="abcdefghijklmnopqrstuvwxyz"
   num="01234567689"
   f1,f2,f3=0,0,0
   if(n>=6 and n<=20):
     for i in s:
        if i in UP:
          f1=1
        if i in LO:
            f2=1
        if i in num:
              f3=1
     if f1==1 and f2==1 and f3==1:
        print("True")
     else:
        print("False")
        
   else:
     print("False")
