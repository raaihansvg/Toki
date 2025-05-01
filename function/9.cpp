#include <iostream>
using namespace std;

void tukar(int & a, int & b) {
    int simpan = a;
    a = b;
    b = simpan;
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    int p = 10, q = 20, r = 30;
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;

    tukar(p, q);
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;

    tukar(q, r);
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;
}
