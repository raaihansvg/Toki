//Pak Dengklek memiliki sebuah kandang bebek seluas 12 meter persegi.
//Setiap bulannya, Pak Dengklek ingin membeli sebuah kandang baru. Karena bebek-bebeknya terus berkembang biak, Pak Dengklek ingin agar setiap kandang baru yang dibeli berukuran 
//7 meter persegi lebih luas daripada kandang sebelumnya.
//Setelah 10 bulan berlalu, berapakah total luas kandang yang dimiliki Pak Dengklek? Lengkapilah program di sebelah kanan agar mengeluarkan total yang dimaksud


#include <iostream>
using namespace std;

int main (){
    int Luas_kandang = 12;
    int Bulan = 0;
    int Total_Luas_Kandang = Luas_kandang;

    while ( Bulan < 10){
        Luas_kandang += 7;
        Total_Luas_Kandang += Luas_kandang;
        
        Bulan += 1;


        
    }
    cout << Total_Luas_Kandang << endl;
    
}