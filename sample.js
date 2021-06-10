function f(c) {
    c[0] = 5;
}

let a = [1, 2, 3];
let b = a;
b[0] = 4;
console.log(a);

f(a);
console.log(a);

let d = [1, 2];
let e = [d, d];
e[0][0] = 3;
console.log(e);
