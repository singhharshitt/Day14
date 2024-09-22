#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;
    *ptr = 42;

    cout << "Value of dynamically allocated integer: " << *ptr << endl;
    cout << "Address of dynamically allocated memory: " << ptr << endl;

    delete ptr;
    ptr = nullptr;

    return 0;
}
