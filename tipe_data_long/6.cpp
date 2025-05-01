#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    if(data.empty()) return "KESALAHAN";

    long long hasil = stoi(data[0]);

    if(op == '+'){
        for(int i = 1; i < data.size(); i ++){
            hasil += stoi(data[i]);
        }
    }
    else if(op == '*'){
        for(int i = 1; i < data.size(); i ++){
            hasil *= stoi(data[i]);
        }
    }else{
        return "KESALAHAN";
    }
    
    return to_string(hasil);
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}
