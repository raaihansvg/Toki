#include<iostream>
using namespace std;

int bebek[11];
int kandang = 10;

void KandangKosong(){
    for(int i = 0; i <= kandang; i ++){
        bebek[i] = 0;
    }
}

void isi_bebek_ke_dalam_kandang(int kandang_awal,int kandang_akhir,int jumlah_bebek){
    for(int i = kandang_awal; i <= kandang_akhir; i ++){
        bebek[i] += jumlah_bebek;
    }
}

int CekBebekTerbanyak(){
    int bebek_terbanyak = bebek[0];

    for(int i = 1; i <= kandang; i ++){
        bebek_terbanyak = max(bebek_terbanyak,bebek[i]);
        
    }
}

int main(){
    KandangKosong();

    isi_bebek_ke_dalam_kandang(1,8,2);
    isi_bebek_ke_dalam_kandang(2,9,10);
    isi_bebek_ke_dalam_kandang(5,6,2);
    isi_bebek_ke_dalam_kandang(9,10,3);
    isi_bebek_ke_dalam_kandang(1,4,7);
    isi_bebek_ke_dalam_kandang(1,4,2);
    isi_bebek_ke_dalam_kandang(4,8,6);

    cout << CekBebekTerbanyak() << endl;
}