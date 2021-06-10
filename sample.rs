fn f(c: &mut [i32]) {
    c[0] = 5;
}

fn main() {
    let mut a = [1,2,3];
    let b = &mut a;
    b[0] = 4;
    println!("{:?}",a);

    f(&mut a);
    println!("{:?}",a);

    let d = [1,2];
    let mut e = [d,d];
    e[0][0] = 3;
    println!("{:?}",e);
}
