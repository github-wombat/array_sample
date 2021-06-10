def f(c):
    c[0] = 5

a = [1,2,3]
b = a
b[0] = 4
print(a)

f(a)
print(a)

d = [1,2]
e = [d,d]
e[0][0] = 3
print(e)
