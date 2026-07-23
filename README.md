# Sistem Nilai Mahasiswa (Matematika Diskrit)

## Deskripsi

Program ini merupakan implementasi sederhana sistem pengelolaan data nilai mahasiswa menggunakan bahasa pemrograman **C++**. Program dibuat sebagai tugas pada mata kuliah **Matematika Diskrit** untuk menerapkan konsep logika, struktur data sederhana, serta algoritma dasar dalam pengolahan data.

Program menggunakan **array** sebagai media penyimpanan data dan menyediakan menu interaktif berbasis terminal (console) untuk mengelola informasi mahasiswa.

## Fitur

* Menambahkan data mahasiswa.
* Menampilkan seluruh data mahasiswa.
* Menghapus data berdasarkan nomor urut.
* Konversi nilai angka menjadi nilai huruf (A, B, C, D, E) secara otomatis.
* Menu interaktif yang mudah digunakan.

## Data yang Disimpan

Setiap data mahasiswa terdiri dari:

* NIM
* Nama
* Mata Kuliah
* Kelas
* Nilai Angka
* Grade (hasil konversi)

## Konversi Nilai

|    Nilai | Grade |
| -------: | :---: |
| 85 – 100 |   A   |
|  70 – 84 |   B   |
|  55 – 69 |   C   |
|  40 – 54 |   D   |
|   0 – 39 |   E   |

## Konsep yang Digunakan

* Array satu dimensi
* Fungsi (Function)
* Percabangan (`if-else`)
* Perulangan (`for` dan `do-while`)
* Input/Output (`cin` dan `cout`)
* Manipulasi data dengan teknik **overwrite** saat proses penghapusan data

## Cara Menjalankan

1. Compile file menggunakan compiler C++ (misalnya g++).
2. Jalankan program.
3. Pilih menu yang tersedia:

   * **1** → Tambah Data Mahasiswa
   * **2** → Tampilkan Semua Data
   * **3** → Hapus Data Mahasiswa
   * **0** → Keluar dari Program

## Tujuan

Program ini dibuat sebagai media pembelajaran untuk memahami penerapan algoritma dasar, logika pemrograman, serta konsep struktur data sederhana dalam menyelesaikan permasalahan pengelolaan data mahasiswa menggunakan bahasa C++.

---

**Mata Kuliah:** Matematika Diskrit
**Bahasa Pemrograman:** C++
**Tipe Aplikasi:** Console Application
