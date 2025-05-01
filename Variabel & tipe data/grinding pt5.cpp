// Pak Dengklek memiliki sebuah kandang bebek seluas 12 meter persegi.
//Setiap bulannya, Pak Dengklek ingin membeli sebuah kandang baru. Karena bebek-bebeknya terus berkembang biak, Pak Dengklek ingin agar setiap kandang baru yang dibeli berukuran 
//7 meter persegi lebih luas daripada kandang sebelumnya.
//Buatlah program yang mengeluarkan ukuran luas kandang-kandang (dalam meter persegi) sesuai urutan pembelian yang harus dilakukan, satu baris untuk setiap kandang, untuk tiga bulan ke depan, dengan format:

#include <iostream>
using namespace std;

int main (){
    int luas_kandang = 12;
    int total_bulan = 1; // soal meminta perulangan bulan sebanyak 3 kali,dan dimulai dari bulan 1

    while (total_bulan <= 3){
         luas_kandang += 7;

        cout << total_bulan << ":" << luas_kandang << endl;

         total_bulan += 1;
        
    }
    
}