fn f1(mut c: [i32;3]) {
    c[0] = 5;
}

fn f2(c: &mut [i32]) {
    c[0] = 5;
}

fn main() {
    let mut a = [1,2,3];
    let mut b = a;  // copy
    b[0] = 4;
    println!("{:?}",a);

    let b = &mut a; // borrowing
    b[0] = 4;
    println!("{:?}",a);

    f1(a);
    println!("{:?}",a);

    f2(&mut a);
    println!("{:?}",a);

    let d = [1,2];
    let mut e = [d,d];  // copy
    e[0][0] = 3;
    println!("{:?}",e);
}
