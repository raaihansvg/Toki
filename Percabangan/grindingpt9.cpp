#include <iostream>
using namespace std;

int main (){

    int jantan = 67;
    int betina = 98;

    if (jantan % 2 == 0){
        cout << "banyaknya bebek jantan adalah bilangan genap" << endl;

    }
    if (jantan % 2 == 1){
        cout << "banyaknya bebek jantan bukan bilangan genap" << endl;
    }
    if (betina % 2 == 0){
        cout << "banyaknya bebek betina adalah bilangan genap" << endl;
    }
    if (betina % 2 == 1){
        cout << "banyaknya bebek betina bukan bilangan genap" << endl;
    }
}