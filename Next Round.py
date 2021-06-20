x=input()
n,k=x.split()
n=int(n)
k=int(k)
y=input()
l=[None]*n
ct=0
l=y.split()
for i in l:
    if int(i)>k:
        ct=ct+1
print(ct)