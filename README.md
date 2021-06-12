# 配列と参照

## Python
- https://ja.wikipedia.org/wiki/Python
- [sample.py](sample.py)
```
$ python3 sample.py
[4, 2, 3]
[5, 2, 3]
[[3, 2], [3, 2]]
```

## JavaScript
- https://ja.wikipedia.org/wiki/JavaScript
- [sample.js](sample.js)
```
$ node sample.js
[ 4, 2, 3 ]
[ 5, 2, 3 ]
[ [ 3, 2 ], [ 3, 2 ] ]
```


## Ruby
- https://ja.wikipedia.org/wiki/Ruby
- [sample.rb](sample.rb)
```
$ ruby sample.rb
[4, 2, 3]
[5, 2, 3]
[[3, 2], [3, 2]]
```

## C言語
- https://ja.wikipedia.org/wiki/C%E8%A8%80%E8%AA%9E
- [sample.c](sample.c)
```
$ gcc -o sample sample.c
$ ./sample
4 2 3
5 2 3
3 2 3 2
```

## C++
- https://ja.wikipedia.org/wiki/C%2B%2B
- [sample.cpp](sample.cpp)
```
$ g++ -o sample sample.cpp
$ ./sample
1 2 3
4 2 3
1 2 3
5 2 3
3 2 1 2
```

## Java
- https://ja.wikipedia.org/wiki/Java
- [Sample.java](Sample.java)
```
$ javac Sample.java
$ java Sample
[4, 2, 3]
[5, 2, 3]
[3, 2][3, 2]
```

## C#
- https://ja.wikipedia.org/wiki/C_Sharp
- [sample_cs](sample_cs/Program.cs)
```
$ dotnet build
$ dotnet run
[4,2,3]
[5,2,3]
[3,2] [3,2]
```

## Visual Basic .NET
- https://ja.wikipedia.org/wiki/Visual_Basic_.NET
- [sample_vb](sample_vb/Program.vb)
```
$ dotnet build
$ dotnet run
[4,2,3]
[5,2,3]
[3,2] [3,2]
```

## Go言語
- https://ja.wikipedia.org/wiki/Go_(%E3%83%97%E3%83%AD%E3%82%B0%E3%83%A9%E3%83%9F%E3%83%B3%E3%82%B0%E8%A8%80%E8%AA%9E)
- [sample.go](sample.go)
```
$ go build sample.go
$ ./sample
[4 2 3]
[5 2 3]
[[3 2] [3 2]]
```

## Rust (参考)
- https://ja.wikipedia.org/wiki/Rust_(%E3%83%97%E3%83%AD%E3%82%B0%E3%83%A9%E3%83%9F%E3%83%B3%E3%82%B0%E8%A8%80%E8%AA%9E)
- [sample.rs](sample.rs)
```
$ rustc sample.rs
$ ./sample
[1, 2, 3]
[4, 2, 3]
[4, 2, 3]
[5, 2, 3]
[[3, 2], [1, 2]]
```
- [sample_vec.rs](sample_vec.rs)
```
$ rustc sample_vec.rs
$ ./sample_vec
[4, 2, 3]
[5, 2, 3]
```

## VBA for Excel (参考)
- [sample.xls](sample.xls)
```basic
Option Explicit

Sub Sample()
    Dim a() As Variant
    Dim b() As Variant

    a = Array(1, 2, 3)
    b = a
    b(0) = 4
    MsgBox Join(a)

    Dim d() As Variant
    Dim e() As Variant

    d = Array(1, 2)
    e = Array(d, d)
    e(0)(0) = 3
    MsgBox Join(e(0))
    MsgBox Join(e(1))
End Sub
```
```
1 2 3
3 2
1 2
```
- https://ja.wikipedia.org/wiki/Visual_Basic_for_Applications

## OpenOffice Basic (参考)
- [sample.ods](sample.ods)
```basic
Sub Main
    Dim a() As Integer
    Dim b() As Integer
    a = Array(1,2,3)
    b = a
    b(0) = 4
    MsgBox Join(a)


    Dim d() As Integer
    Dim e() As Integer
    d = Array(1,2)
    e = Array(d,d)
    e(0)(0) = 3
    MsgBox Join(e(0))
    MsgBox Join(e(1))
End Sub
```
```
4 2 3
3 2
3 2
```
- https://en.wikipedia.org/wiki/OpenOffice_Basic

## Elixir
- https://ja.wikipedia.org/wiki/Elixir_(%E3%83%97%E3%83%AD%E3%82%B0%E3%83%A9%E3%83%9F%E3%83%B3%E3%82%B0%E8%A8%80%E8%AA%9E)
- [sample.ex](sample.ex)
```
$ elixir sample.ex
[1, 2, 3]
[4, 2, 3]
[1, 2, 3]
[5, 2, 3]
[[3, 2], [1, 2]]
```

## Erlang
- https://ja.wikipedia.org/wiki/Erlang
- [sample.erl](sample.erl)
```
$ escript sample.erl
[4,2,3]
[5,2,3]
[[3,2],[1,2]]
```

## Dart
- https://ja.wikipedia.org/wiki/Dart
- [sample.dart](sample.dart)
```
$ dart sample.dart
a = [4, 2, 3]
a = [5, 2, 3]
e = [[3, 2], [3, 2]]
```

## PHP
- https://ja.wikipedia.org/wiki/PHP_(%E3%83%97%E3%83%AD%E3%82%B0%E3%83%A9%E3%83%9F%E3%83%B3%E3%82%B0%E8%A8%80%E8%AA%9E)
- [sample.php](sample.php)
```
$ php sample.php
Array
(
    [0] => 1
    [1] => 2
    [2] => 3
)
Array
(
    [0] => 4
    [1] => 2
    [2] => 3
)
Array
(
    [0] => 1
    [1] => 2
    [2] => 3
)
Array
(
    [0] => 5
    [1] => 2
    [2] => 3
)
Array
(
    [0] => Array
        (
            [0] => 3
            [1] => 2
        )

    [1] => Array
        (
            [0] => 1
            [1] => 2
        )

)
Array
(
    [0] => Array
        (
            [0] => 3
            [1] => 2
        )

    [1] => Array
        (
            [0] => 3
            [1] => 2
        )

)
```
