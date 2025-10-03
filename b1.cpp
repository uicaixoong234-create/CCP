#include <iostream>
using namespace std;

int main() {
    long long a = 123456789012345;
    float b = 3.14;

    long long* ptrA = &a;
    float* ptrB = &b;

    cout << "Địa chỉ của a: " << ptrA << endl;
    cout << "Địa chỉ của b: " << ptrB << endl;

    return 0;
}
