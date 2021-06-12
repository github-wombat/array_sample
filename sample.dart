void f(List<int> c) {
    c[0] = 5;
}

void main() {
    var a = [1,2,3];
    var b = a;
    b[0] = 4;
    print('a = $a');

    f(a);
    print('a = $a');

    var d = [1,2];
    var e = [d,d];
    e[0][0] = 3;
    print('e = $e');
}
