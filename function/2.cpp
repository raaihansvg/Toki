#include <iostream>
using namespace std;

int biaya(int total){
    int harga;

    if(total < 10){
        harga = 10000;
    }
    else if(total <=20){
        harga = 20000;
    }
    else{
        harga = 30000;
    }
    return total * harga;
}

int main(){
    int jantan[5] = {9,11,20,21,32};
    int betina[5] = {7,8,30,1,45};

    for(int k = 0; k <5; k ++){
        int biaya_jantan = biaya(jantan[k]);
        int biaya_betina = biaya(betina[k]);

        cout << biaya_betina + biaya_jantan << endl;
    }
}