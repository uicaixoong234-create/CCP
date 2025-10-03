#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    float ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    float* p = ar;
    float* maxPtr = p;
    float* minPtr = p;
    for (int i = 0; i < n; i++) {
        if (*(p + i) > *maxPtr)
            maxPtr = p + i;
        if (*(p + i) < *minPtr)
            minPtr = p + i;
    }
    float temp = *maxPtr;
    *maxPtr = *minPtr;
    *minPtr = temp;
    cout << "Mang sau khi trao doi:\n";
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";

    return 0;
}
