function f(c)
  c[1] = 5
end

a = {1,2,3}
b = a
b[1] = 4
print(table.concat(a," "))

f(a)
print(table.concat(a," "))

d = {1,2}
e = {d,d}
e[1][1] = 3
print(table.concat(e[1]," "))
print(table.concat(e[2]," "))
