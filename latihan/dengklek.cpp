#include<iostream>
using namespace std;


int jantan[4] = {0,10,50,60};
int betina[4] = {7,80,9,40};



int biaya_denda(int i){
    return 1000 * abs(jantan[i] - betina[i]);
}

int total_denda(){
    int total = 0;

    for(int i = 0; i < 4; i ++){
        total += biaya_denda(i);
    }
}

int main(){
    cout << total_denda() << endl;
}