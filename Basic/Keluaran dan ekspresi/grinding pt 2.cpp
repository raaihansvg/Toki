#include <iostream> // untuk menggunakan cout dan endl
#include <string>   // untuk menggunakan string
using namespace std;

int main() {
    int tanggal,tahun;
    tanggal = 20;
    tahun = 2014;


    // jangan lupa bahwa string perlu diapit dengan kutip dua
    string bulan = "Februari"; 

    // cetak kata sandi
    cout << tahun+10 << "-" << bulan << "-" << tanggal+7<< endl;
}

