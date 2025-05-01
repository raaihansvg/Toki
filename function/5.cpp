#include <iostream>
using namespace std;

int jantan[4] = {0,10,50,60};
int betina[4] = {7,80,9,40};

int selisih(int a, int b){
    if(b > a){
        return  b - a;
    }else{
        return a - b;
    }
}

int denda(int i){
    return 1000 * selisih (jantan[i],betina[i]);
}

int total_denda(){
    int total = 0;

    for(int i = 0; i < 4; i ++){
        total += denda(i);
    }
    return total;
}

int main(){
    cout << total_denda() << endl;
}