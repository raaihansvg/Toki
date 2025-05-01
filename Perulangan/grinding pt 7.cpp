//Pak Dengklek memiliki sebuah kandang bebek seluas 
//12 meter persegi.

//Setiap bulannya, Pak Dengklek ingin membeli sebuah kandang baru. Karena bebek-bebeknya terus berkembang biak, Pak Dengklek ingin agar setiap kandang baru yang dibeli berukuran 
//7 meter persegi lebih luas daripada kandang sebelumnya.

//Karena ukuran peternakan Pak Dengklek terbatas, Pak Dengklek akan berhenti membeli kandang baru apabila total luas seluruh kandang yang dimilikinya sudah lebih besar dari 

//800 meter persegi.
//Berapakah total banyaknya kandang Pak Dengklek pada akhirnya? Lengkapilah program di sebelah kanan agar mengeluarkan total tersebut.


//Jawaban

#include <iostream>
using namespace std;

int main(){

    int luas_kandang = 12;
    int total_kandang = 1;
    int total_luas_kandang = luas_kandang;

    while (total_luas_kandang <= 800)
    {
        luas_kandang += 7;
        total_luas_kandang += luas_kandang;
        total_kandang += 1;
    }
    cout << total_kandang << endl;
}