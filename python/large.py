a=int(input("enter three numbers :"))
b=int(input(""))
c=int(input(""))
if (a>b and a>c):
    print("a is greater than b&c",a)
elif (b>a and b>c):
    print("b is greater than a&c",b)
elif (c>a and c>b):
    print("c is greater than a&b",c)
elif(a==b and a>c):
    print("a&b is greater than c",a)
