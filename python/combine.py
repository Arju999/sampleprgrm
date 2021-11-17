x=input("enter the first string : ")
y=input("enter the second string : ")
a=x[0:2]
x=x.replace(x[0:2],y[0:2])
y=y.replace(y[0:2],a)
print(x,y)

