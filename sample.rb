def f(c)
    c[0] = 5
end

a = [1,2,3]
b = a
b[0] = 4
p a

f(a)
p a

d = [1,2]
e = [d,d]
e[0][0] = 3
p e
