#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct penduduk {
    string nik, nama, jeniskelamin, ttl;
};

void input_data();
void output_data();
void tampilkan_data();
void cari_data();
void urutkan_data(penduduk*, int);
void tambah_data(penduduk*);
void baca_data(penduduk*, int&);

int main() {
    int pilihan;
    char yn;

    do {
        system("cls");
        cout << "+------------------------------------+" << endl;
        cout << "|           MENU UTAMA               |" << endl;
        cout << "+------------------------------------+" << endl;
        cout << "| 1. Input Data                      |" << endl;
        cout << "| 2. Output Data                     |" << endl;
        cout << "| 3. Exit                            |" << endl;
        cout << "+------------------------------------+" << endl;
        cout << "Pilih Menu >> ";
        cin >> pilihan;
        system("cls");

        switch (pilihan) {
            case 1:
                input_data();
                break;
            case 2:
                output_data();
                break;
            case 3:
                cout << "Terimakasih telah menggunakan program ini !" << endl;
                break;
            default:
                cout << "Pilihanmu tidak tersedia, silahkan pilih menu yang lain !" << endl;
        }
        
    } while (pilihan != 3);

    return 0;
}

void input_data() {
    char yn;

    penduduk data;
    cout << "+-----------------------------------+" << endl;
    cout << "|     MENU INPUT DATA PENDUDUK      |" << endl;
    cout << "+-----------------------------------+" << endl;
    cout << "NIK (Nomor Kependudukan)   : ";
    cin >> data.nik;
    cout << "Nama Lengkap \t\t   : ";
    cin.ignore();
    getline(cin, data.nama);
    cout << "Jenis Kelamin (P/L) \t   : ";
    getline(cin, data.jeniskelamin);
    cout << "Tanggal Lahir (tgl-bln-th) : ";
    getline(cin, data.ttl);
    tambah_data(&data);
    cout << endl ;
    cout << "Kembali ke Menu Utama? (y/n) : ";
    cin >> yn;
}

void tambah_data(penduduk* data) {
    ofstream file("data_kependudukan.txt", ios::app);
    if (file.is_open()) {
        file << data->nik << " " << data->nama<< " " << data->jeniskelamin << " " << data->ttl << endl;
        file.close();
        cout << "Data berhasil ditambahkan !" << endl;
    } else {
        cout << "Tidak dapat membuka file !" << endl;
    }
}

void output_data() {
    int pilihan;
    char yn;

    do {
        system("cls");
        cout << "+--------------------------------------+" << endl;
        cout << "|              MENU OUTPUT             |" << endl;
        cout << "+--------------------------------------+" << endl;
        cout << "| 1. Menu Menampilkan Data Keseluruhan |" << endl;
        cout << "| 2. Menu Mencari Data Penduduk        |" << endl;
        cout << "| 3. Kembali ke Menu Utama             |" << endl;
        cout << "+--------------------------------------+" << endl;
        cout << "Pilih Menu>> ";
        cin >> pilihan;
        system("cls");

        switch (pilihan) {
            case 1:
                system("cls");
                tampilkan_data();
                break;
            case 2:
                system("cls");
                cari_data();
                break;
            case 3:
                return;
            default:
                cout << "Pilihan Tidak Tersedia" << endl;
        }
        if (pilihan != 3) {
            cout << "Kembali ke Menu Output? (y/n) : ";
            cin >> yn;
            if (yn == 'n' || yn == 'N'){
                break;
            }
        }
    } while (pilihan != 3 || (yn == 'y' || yn == 'Y'));
}

void tampilkan_data() {
    penduduk data[1000];
    int jumlah_data = 0;

    baca_data(data, jumlah_data);
    urutkan_data(data, jumlah_data);
    cout << "+--------------------------------------------------+" << endl;
    cout << "|            HASIL DATA KEPENDUDUKAN               |" << endl;
    cout << "+--------------------------------------------------+" << endl;
    for (int i = 0; i < jumlah_data; i++) {
        cout << " Data - " << i + 1 << endl;
        cout << " NIK \t \t  : " << data[i].nik << endl;
        cout << " Nama \t \t  : " << data[i].nama << endl;
        cout << " Jenis Kelamin \t  : " << data[i].jeniskelamin << endl;
        cout << " Tanggal Lahir \t  : " << data[i].ttl << endl;
        cout << endl;
    }
}

void cari_data() {
    penduduk data[1000];
    int jumlah_data = 0;
    string ttl;

    baca_data(data, jumlah_data);
    cout << "+------------------------------------+" << endl;
    cout << "|          MENU CARI DATA            |" << endl;
    cout << "+------------------------------------+" << endl;
    cout << "Masukkan Tanggal Lahir (tgl-bln-th) : ";
    cin.ignore();
    getline(cin, ttl);
    cout << endl;
    bool ditemukan = false;
    for (int i = 0; i < jumlah_data; i++) {
        if (data[i].ttl == ttl) {
            cout << "+---------------------------------------------+" << endl;
            cout << "|           HASIL DATA PENDUDUK               |" << endl;
            cout << "+---------------------------------------------+" << endl;
            cout << "NIK \t \t  : " << data[i].nik << endl;
            cout << "Nama \t \t  : " << data[i].nama << endl;
            cout << "Jenis Kelamin \t : " << data[i].jeniskelamin << endl;
            cout << "Tanggal Lahir \t : " << data[i].ttl << endl;
            cout << "+---------------------------------------------+" << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Data tidak ditemukan !" << endl;
    }
}

void baca_data(penduduk* data, int& jumlah_data) {
    ifstream file("data_kependudukan.txt");
    if (file.is_open()) {
        while (file >> data[jumlah_data].nik) {
            file >> data[jumlah_data].nama;
            file >> data[jumlah_data].jeniskelamin;
            file >> data[jumlah_data].ttl;
            jumlah_data++;
        }
        file.close();
    } else {
        cout << "Tidak bisa membuka file !" << endl;
    }
}

void urutkan_data(penduduk* data, int jumlah_data) {
    for (int i = 0; i < jumlah_data - 1; i++) {
        for (int j = 0; j < jumlah_data - i - 1; j++) {
            if (data[j].nik > data[j + 1].nik) {
                penduduk temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}
