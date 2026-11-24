#include <iostream>
#include <cstdint>
#include <cstdlib>

using namespace std;

int global1[128];
int global2[128];

void printDistance(const char* name, int* a, int* b) {
    uintptr_t last = reinterpret_cast<uintptr_t>(&a[127]);
    uintptr_t first = reinterpret_cast<uintptr_t>(&b[0]);

    uintptr_t distance = last > first
        ? last - first
        : first - last;

    cout << name << endl;
    cout << "Последний элемент первого массива: "
         << &a[127] << endl;
    cout << "Первый элемент второго массива: "
         << &b[0] << endl;
    cout << "Расстояние: " << distance << " байт" << endl;
    cout << "-----------------------------" << endl;
}

int main() {
    static int static1[128];
    static int static2[128];

    int stack1[128];
    int stack2[128];

    int* heap1 = new int[128];
    int* heap2 = new int[128];

    printDistance("Глобальные массивы:", global1, global2);
    printDistance("Статические массивы:", static1, static2);
    printDistance("Массивы на стеке:", stack1, stack2);
    printDistance("Массивы в куче:", heap1, heap2);

    delete[] heap1;
    delete[] heap2;

    return 0;
}