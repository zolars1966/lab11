#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

int main() {
    std::vector<double> a{13.1, 1.32, 5.1, 12.6, 1.0, 13.2, 1.9, 5.8};

    std::sort(a.begin(), a.end(), [](double x, double y) {
        double ix = std::floor(x), iy = std::floor(y);
        if (ix != iy) return ix < iy;
        return (x - ix) > (y - iy);
    });

    for (double x : a) std::cout << x << ' ';
    std::cout << '\n';

    return 0;
}
