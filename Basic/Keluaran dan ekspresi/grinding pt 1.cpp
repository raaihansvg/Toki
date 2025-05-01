#include <iostream>
using namespace std;

int main(){
    int jantan,betina;
    jantan = 63;
    betina = 192;
    //bulan pertama
    betina = betina + jantan; 
    jantan = jantan - (jantan/ 3);

    //bulan kedua
    jantan = jantan +betina;
    betina = betina - 10;
    cout << jantan + betina << endl;


}