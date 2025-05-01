//           materi continue dan break    //

#include <iostream>
using namespace std;

int main(){
    
    for(int sisi = 1; sisi <= 10; sisi ++){
        cout << "awal iterasi" <<sisi << endl;

        if (sisi % 2 == 0){
            cout << "iterasi dihentikan" << endl;
            continue;
        }
        cout << "halo dunia" << endl;

        if (sisi % 5 == 0){
            cout << "perulangan dihentikan" << endl;
            break;
        }
        cout << "akhir iterasi" << endl;

    }
    cout << "akhir iterasi" << endl;
}

