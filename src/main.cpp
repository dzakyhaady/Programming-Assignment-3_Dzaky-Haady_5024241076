#include <iostream>
#include <string>

#include "include/orang.hpp"
#include "include/dosen.hpp"
#include "include/mahasiswa.hpp"
#include "include/tendik.hpp"

using namespace std;
using namespace sim;

int main(int argc, char ** argv)
{
    cout << "======================================" << endl;
    cout << "   SIM AKADEMIK - Sistem Informasi    " << endl;
    cout << "        Manajemen Akademik            " << endl;
    cout << "======================================" << endl << endl;

    Dosen dosen1("Dr. Budi Santoso, M.T.", "198501012010011001",
                 "budi.santoso@its.ac.id", "Jl. Keputih No. 1, Surabaya",
                 "0012345678", "Lektor Kepala", "Informatika");
    dosen1.tambahMataKuliah("Pemrograman Lanjut");
    dosen1.tambahMataKuliah("Struktur Data");
    dosen1.tambahMataKuliah("Algoritma dan Pemrograman");

    Dosen dosen2("Dr. Siti Rahayu, M.Kom.", "197803152005012002",
                 "siti.rahayu@its.ac.id", "Jl. Raya ITS No. 5, Surabaya",
                 "0087654321", "Asisten Profesor", "Sistem Informasi");
    dosen2.tambahMataKuliah("Basis Data");
    dosen2.tambahMataKuliah("Sistem Informasi Manajemen");

    Mahasiswa mhs1("Dzaky Haady", "5024241076",
                   "5024241076@student.its.ac.id", "Jl. Manyar No. 10, Surabaya",
                   "Teknik Komputer", 2024);
    mhs1.ambilMataKuliah("Pemrograman Lanjut");
    mhs1.ambilMataKuliah("Struktur Data");
    mhs1.ambilMataKuliah("Kalkulus");
    mhs1.setIpk(3.75f);

    Mahasiswa mhs2("Dewi Lestari", "5021221045",
                   "5021221045@student.its.ac.id", "Jl. Gebang Putih No. 3, Surabaya",
                   "Teknik Informatika", 2022);
    mhs2.ambilMataKuliah("Basis Data");
    mhs2.ambilMataKuliah("Pemrograman Web");
    mhs2.setIpk(3.82f);

    Tendik tendik1("Hendra Wijaya", "197606202000031001",
                   "hendra.wijaya@its.ac.id", "Jl. Sutorejo No. 8, Surabaya",
                   "Staf Administrasi", "Departemen Teknik Komputer", "PNS");

    Tendik tendik2("Rina Kusuma", "198902142015042003",
                   "rina.kusuma@its.ac.id", "Jl. Kertajaya No. 20, Surabaya",
                   "Teknisi Lab", "Laboratorium Komputasi", "PPPK");

    cout << endl;
    dosen1.tampilInfo();
    cout << endl;
    dosen2.tampilInfo();
    cout << endl;
    mhs1.tampilInfo();
    cout << endl;
    mhs2.tampilInfo();
    cout << endl;
    tendik1.tampilInfo();
    cout << endl;
    tendik2.tampilInfo();

    cout << endl;
    cout << "===== Demo Polymorphism =====" << endl;
    Orang* daftarOrang[4];
    daftarOrang[0] = &dosen1;
    daftarOrang[1] = &mhs1;
    daftarOrang[2] = &mhs2;
    daftarOrang[3] = &tendik1;

    cout << "Daftar Seluruh Sivitas Akademika:" << endl << endl;
    for (int i = 0; i < 4; i++) {
        daftarOrang[i]->tampilInfo();
        cout << endl;
    }

    return 0;
}
