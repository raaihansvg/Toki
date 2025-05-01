// Pak Dengklek memiliki kandang-kandang persegi, dengan panjang sisinya adalah setiap bilangan bulat antara 121 sampai dengan 125 (inklusif). 
// Ia ingin menjual satu (atau lebih) kandang yang memenuhi syarat berikut:
// - Panjang sisinya kelipatan 2, namun  
// - Panjang sisinya bukan kelipatan 3.
// Apakah ada kandang yang dijual? Lengkapilah program di sebelah kanan, agar mengeluarkan sebuah baris berisi:
// - "ada", apabila ada kandang yang dijual, atau  
// - "tidak ada", apabila tidak ada kandang yang dijual.

#include <iostream>
using namespace std;

int main(){
    bool ada_yang_dijual = false;

    for(int sisi = 121; sisi <= 125; sisi ++){
        bool kelipatan_2 = sisi % 2 == 0;
        bool kelipatan_3 = sisi % 3 == 0;

        if (kelipatan_2 && !kelipatan_3){
            ada_yang_dijual = true;
        }
    }
    if (ada_yang_dijual){
        cout << "ada";
    }else{
        cout <<"tidak ada";
    }
    cout << endl;
}