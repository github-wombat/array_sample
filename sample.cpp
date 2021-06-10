#include <array>
#include <iostream>

void f1(std::array<int, 3> c)
{
    c[0] = 4;
}

void f2(std::array<int, 3>& c)
{
    c[0] = 4;
}

int main(int argc, char* argv[])
{
    std::array<int, 3> a { 1, 2, 3 };
    auto b = a;
    b[0] = 4;
    for (int i : a) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    f1(a);
    for (int i : a) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    f2(a);
    for (int i : a) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::array<int, 2> d { 1, 2 };
    std::array<std::array<int, 2>, 2> e = { d, d };
    e[0][0] = 3;
    for (auto i : e) {
        for (auto j : i) {
            std::cout << j << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
