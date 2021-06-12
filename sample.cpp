#include <array>
#include <iostream>

void f1(std::array<int, 3> c)
{
    c[0] = 5;
}

void f2(std::array<int, 3>& c)
{
    c[0] = 5;
}

int main(int argc, char* argv[])
{
    std::array<int, 3> a1 { 1, 2, 3 };
    auto b1 = a1;
    b1[0] = 4;
    for (int i : a1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::array<int, 3> a2 { 1, 2, 3 };
    auto& b2 = a2;
    b2[0] = 4;
    for (int i : a2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::array<int, 3> a3 { 1, 2, 3 };
    f1(a3);
    for (int i : a3) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::array<int, 3> a4 { 1, 2, 3 };
    f2(a4);
    for (int i : a4) {
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
