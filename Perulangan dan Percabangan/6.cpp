 // Pak Dengklek ingin membuat sebuah kolam berbentuk persegi untuk bebek-bebeknya, dengan ketentuan berikut:
    // 1. Luas kolamnya antara 100.000 sampai dengan 200.000 cm persegi.
    // 2. Luas kolam (dalam cm persegi) adalah bilangan genap.
    // 3. Luas kolam (dalam cm persegi) adalah bilangan kuadrat sempurna.
    // Tugas kamu adalah untuk mencari luas kolam terkecil yang memenuhi




#include <iostream>
using namespace std;

int main (){
    for (int luas = 100000; luas<= 200000; luas ++){
        if (luas % 2 != 0){
            continue;
        }   
    
    bool ada_yang_dijual = false;
    for (int search_kuadrat = 1; search_kuadrat <= luas; search_kuadrat ++){

        if (search_kuadrat * search_kuadrat == luas){
            ada_yang_dijual = true;
        }
    }
    if (ada_yang_dijual){
        cout << luas << endl;
        
        break;
    }
    
    }
}

// pusing ngentot tapi gapapa gua keren krn gua bisa
