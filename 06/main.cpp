#include <iostream>

long long foo(long long a, long long b) {
    if (a == 0)
        return 0;
    else {
        long long x, y;
        std::cout << "Enter a=" << a << ", b=" << b << std::endl;
        std::cout << "Ptrs " << &a << ' ' << &b << ' ' << &x << ' ' << &y << std::endl;
        x = a * b;
        y = foo(a - 1, b + 1);
        return x + y;
    }
}

int main() {
    foo(5, 5);
    return 0;
}