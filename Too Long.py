x= int(input())
l=[None]*x
for i in range (0,x):
    l[i]=input()
for i in range (0,x):
    y=l[i]
    d=len(y)
    if d<=10:
        print(y)
    else:
        a=y[0]
        b=y[d-1]
        c=str(len(y)-2)
        print(a+c+b)