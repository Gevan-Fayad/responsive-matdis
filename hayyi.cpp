#include <iostream>
#include <string>

using namespace std;

const int MAX = 100;

string nim[MAX];
string nama[MAX];
string matkul[MAX];
string kelas[MAX];
int nilai[MAX];
int jumlahRelasi = 0;

// konversi nilai ke huruf
char konversiNilai(int n) {
    if (n >= 85)
        return 'A';
    else if (n >= 70)
        return 'B';
    else if (n >= 55)
        return 'C';
    else if (n >= 40)
        return 'D';
    else
        return 'E';
}


// Fungsi tambah data
void tambahData() {
    if (jumlahRelasi < MAX) {
        cout << "\nData ke-" << jumlahRelasi + 1 << endl;
        cout << "NIM           : ";
        getline(cin, nim[jumlahRelasi]);
        cout << "Nama          : ";
        getline(cin, nama[jumlahRelasi]);
        cout << "Mata Kuliah   : ";
        getline(cin, matkul[jumlahRelasi]);
        cout << "Kelas         : ";
        getline(cin, kelas[jumlahRelasi]);
        cout << "Nilai         : ";
        cin >> nilai[jumlahRelasi];
        cin.ignore();

        jumlahRelasi++;
        cout << "Data berhasil ditambahkan.\n";
    } else {
        cout << "Data terlalu banyak.\n"; 
		}}


// Fungsi tampilkan semua data
void tampilkanData() {
    if (jumlahRelasi == 0) {
        cout << "\nBelum ada data yang dimasukkan.\n";
    } else {
        for (int i = 0; i < jumlahRelasi; i++) {
            cout << "\n=== Data Mahasiswa ke-" << i + 1 << " ===" << endl;
            cout << "NIM          : " << nim[i] << endl;
            cout << "Nama         : " << nama[i] << endl;
            cout << "Mata Kuliah  : " << matkul[i] << endl;
            cout << "Kelas        : " << kelas[i] << endl;
            cout << "Nilai        : " << nilai[i] << endl;
            cout << "Grade        : " << konversiNilai(nilai[i]) << endl;
			} } }

void hapusData() {
    if (jumlahRelasi == 0) {
        cout << "\nBelum ada data yang bisa dihapus.\n";
        return;
    }

    int hapusIndex;
    cout << "\nMasukkan nomor data yang ingin dihapus (1 - " << jumlahRelasi << "): ";
    cin >> hapusIndex;
    cin.ignore();

    if (hapusIndex < 1 || hapusIndex > jumlahRelasi) {
        cout << "Data tidak ada.\n";
        return;
    }
// mengtimpa (overwrite) semua data nya ke kiri, mulai dari "hapusindex"
    for (int i = hapusIndex - 1; i < jumlahRelasi - 1; i++) { //hapusindex - 1 karena   data di mulai dari 0
        nim[i] = nim[i + 1];
        nama[i] = nama[i + 1];
        matkul[i] = matkul[i + 1];
        kelas[i] = kelas[i + 1];
        nilai[i] = nilai[i + 1];
    }
 	jumlahRelasi--;// menghapus data yang paling akhir
    cout << "Data berhasil dihapus.\n";
    
    tampilkanData();
}


int main() {
    int pilihan;

    do {
        cout << "\n=== MENU SISTEM NILAI MAHASISWA ===\n";
        cout << "1. Tambah Data Mahasiswa\n";
        cout << "2. Tampilkan Semua Data\n";
        cout << "3. Menghapus data\n";
        cout << "0. Keluar\n";
        cout << "====================================" << endl;
        cout << "Pilih opsi:";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1) {
            tambahData();
        } else if (pilihan == 2) {
            tampilkanData();
        } else if (pilihan == 3) {
            hapusData();
        } else if (pilihan != 0) {
            cout << "Pilihan tidak valid. Coba lagi.\n";
        }


    } while (pilihan != 0);

    cout << "\nTerima Kasih \n";
    return 0;
}

