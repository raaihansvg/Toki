#include <iostream>
using namespace std;

int bebek[11];
int kandang = 10;

void kandang_kosong(){
    for (int i = 0; i <= kandang; i ++){
        bebek[i] = 0;

    }
}

void isi_kandang(int kandang_awal,int kandang_akhir, int jumlah){
    for(int i = kandang_awal; i <= kandang_akhir; i ++){
        bebek[i] += jumlah;
    }
}

int bebek_terbanyak(){
    int bebek_terbanyak = bebek[0];

    for(int i = 1; i <= kandang; i ++){
        bebek_terbanyak = max(bebek_terbanyak,bebek[i]);
    }

    return bebek_terbanyak;
}

int main(){
    kandang_kosong();

    isi_kandang(1, 8, 2);
    isi_kandang(2, 9, 10);
    isi_kandang(5, 6, 2);
    isi_kandang(9, 10, 3);
    isi_kandang(1, 4, 7);
    isi_kandang(1, 4, 2);
    isi_kandang(4, 8, 6);

    cout << bebek_terbanyak() << endl;

}