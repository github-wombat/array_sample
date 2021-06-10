package main

import "fmt"

func main() {
    a := []int{1,2,3}
    b := a
    b[0] = 4
    fmt.Printf("%v\n",a)

    f(a)
    fmt.Printf("%v\n",a)

    d := []int{1,2}
    e := [][]int{d,d}
    e[0][0] = 3
    fmt.Printf("%v\n",e)
}

func f(c []int) {
    c[0] = 5
}
