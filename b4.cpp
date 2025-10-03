#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    if (n <= 0) {
        cout << "So luong phai lon hon 0.\n";
        return 1;
    }

    float* arr = new float[n];

    cout << "Nhap " << n << " so thuc:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                float temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Mang sau khi sap xep tang dan:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
