// Materi For ,sama dengan perulangan while sebelum nya,tetapi for lebih praktis karena
// for (<inisialisasi awal>; <kondisi>; <operasi akhir>) {}.Tidak seperti while yang 
// <inisialisasi awal>;
//while (<kondisi>) {
    
    //<operasi akhir>;
// intinya for lebih praktis dan singkat dibanding while

    //Contoh Kode:


#include <iostream>
using namespace std;

int main(){
    for (int sisi = 121; sisi <= 125; sisi += 1)

    cout << sisi * sisi << endl;
}


//  kode tersebut sama seperti (Versi While)
// int counter = 0;
//while (counter < 3) {
    ...
    //counter += 1;
//}