//Setelah memiliki kandang-kandang bebek yang sangat luas, Pak Dengklek memiliki resolusi tahun baru yakni membeli bebek.
//Setiap hari, dimulai pada tanggal 1 Januari 2024 sampai seterusnya, Pak Dengklek akan melakukan hal berikut:
//Membeli seekor bebek jantan.
//membeli t ekor bebek betina, dengan 
//t adalah tanggal hari ini.
//Pak Dengklek akan terus membeli bebek setiap harinya, sampai banyaknya bebek betina lebih dari 
//10 kali lipat banyaknya bebek jantan.
//Pada tanggal berapakah pertama kalinya Pak Dengklek tidak perlu membeli bebek lagi? Lengkapilah program di sebelah kanan agar mengeluarkan tanggal yang diminta.

#include <iostream>
using namespace std;

int main (){
    int jantan = 0,betina = 0;
    int tanggal = 1;

    while (betina <= 10 * jantan){ 
        jantan += 1;
        betina += tanggal;
        tanggal += 1;
        
    }
    cout << tanggal << endl;
}