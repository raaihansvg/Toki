#include <iostream>
using namespace std;

int tambah_empat(int a) {
    return a + 4;
}

int kali_dua(int a) {
    return a * 2;
}

int main() {
    int a = 3;
    cout << kali_dua(tambah_empat(a) + a) << endl;
}