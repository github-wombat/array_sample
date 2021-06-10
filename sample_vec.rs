fn f1(mut c: Vec<i32>) {
    c[0] = 5;
}

fn f2(c: &mut Vec<i32>) {
    c[0] = 5;
}

fn main() {
    let mut a = vec![1,2,3];
/*
    let mut b = a;      // move
    b[0] = 4;
    println!("{:?}",a); // <- error
*/

    let b = &mut a;     // borrowing
    b[0] = 4;
    println!("{:?}",a);

 /*
    f1(a);               // move
    println!("{:?}",a); // <- error
 */

    f2(&mut a);
    println!("{:?}",a);

 /*
    let d = vec![1,2];
    let mut e = vec![d,d];  // move <- error
    e[0][0] = 3;
    println!("{:?}",e);
*/
}
