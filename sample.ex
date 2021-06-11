defmodule Sample do
    def f(x) do
        List.replace_at(x,0,5)
    end
end

a = [1,2,3]
# b = a
# b[0] = 3 # <- Error
b = List.replace_at(a,0,4)
IO.inspect a
IO.inspect b

c = Sample.f(a)
IO.inspect a
IO.inspect c

d = [1,2]
e = [List.replace_at(d,0,3),d]
IO.inspect e
