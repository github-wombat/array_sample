Imports System

Module Program
    Sub Main(args As String())
        Dim a() As Integer = {1,2,3}
        Dim b = a
        b(0) = 4
        Console.WriteLine(String.Join(",",a))

        f(a)
        Console.WriteLine(String.Join(",",a))

        Dim d() As Integer = {1,2}
        Dim e() = {d,d}
        d(0) = 3
        For Each i in e
            Console.WriteLine(String.Join(",",i))
        Next

    End Sub

    Sub f(c As Integer())
        c(0) = 5
    End Sub
End Module
