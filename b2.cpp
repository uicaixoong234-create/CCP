#include <iostream>
using namespace std;

void attack(int* atk1, int* def1, int* atk2, int* def2) {
    *def1 -= *atk2;
    *def2 -= *atk1;

    if (*def1 < 0) *def1 = 0;
    if (*def2 < 0) *def2 = 0;
}

int main() {
    int atk1 = 35, def1 = 120;
    int atk2 = 50, def2 = 100;

    attack(&atk1, &def1, &atk2, &def2);

    cout << "Sau khi giao tranh: "<<endl;
    cout << "Quái 1 - ATK: " << atk1 << ", DEF: " << def1 << endl;
    cout << "Quái 2 - ATK: " << atk2 << ", DEF: " << def2 << endl;

    return 0;
}
