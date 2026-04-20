# Laporan Programming Assignment 2: Object Oriented Programming

## Identitas

| Atribut | Keterangan |
|---------|------------|
| **Mata Kuliah** | Pemrograman Berorientasi Objek |
| **Assignment** | Programming Assignment 2 |
| **Topik** | Object Oriented Programming - SIM Akademik |

---

## Deskripsi Program

Program ini merupakan implementasi **Sistem Informasi Manajemen (SIM) Akademik** sederhana menggunakan paradigma **Object Oriented Programming (OOP)** dalam bahasa C++. Program mensimulasikan pengelolaan data sivitas akademika yang terdiri dari Dosen, Mahasiswa, dan Tenaga Kependidikan (Tendik).

---

## Desain Class

### Hierarki Class

```
Orang  (Base Class)
├── Dosen
├── Mahasiswa
└── Tendik
```

Program menggunakan **namespace `sim`** untuk mengorganisasi seluruh class yang dibuat.

### 1. Class `Orang` (Base Class)

Class induk yang menyimpan atribut dasar yang dimiliki oleh semua civitas akademika.

**Atribut:**
| Nama | Tipe | Akses | Keterangan |
|------|------|-------|------------|
| `nama` | `string` | protected | Nama lengkap |
| `nip_nim` | `string` | protected | NIP atau NIM |
| `email` | `string` | protected | Alamat email |
| `alamat` | `string` | protected | Alamat tempat tinggal |

**Method:**
- Constructor default dan parameterized
- Getter dan setter untuk setiap atribut
- `tampilInfo()` — virtual method untuk menampilkan informasi (dapat di-override)

---

### 2. Class `Dosen` (Derived dari `Orang`)

Merepresentasikan data seorang dosen.

**Atribut Tambahan:**
| Nama | Tipe | Keterangan |
|------|------|------------|
| `nidn` | `string` | Nomor Induk Dosen Nasional |
| `jabatan` | `string` | Jabatan fungsional dosen |
| `prodi` | `string` | Program studi asal |
| `mataKuliah` | `vector<string>` | Daftar mata kuliah yang diampu |

**Method Tambahan:**
- `tambahMataKuliah(string mk)` — menambah mata kuliah yang diampu
- `tampilInfo()` — override dari base class

---

### 3. Class `Mahasiswa` (Derived dari `Orang`)

Merepresentasikan data seorang mahasiswa.

**Atribut Tambahan:**
| Nama | Tipe | Keterangan |
|------|------|------------|
| `prodi` | `string` | Program studi |
| `angkatan` | `int` | Tahun angkatan |
| `ipk` | `float` | Indeks Prestasi Kumulatif |
| `mataKuliahDiambil` | `vector<string>` | Daftar mata kuliah yang diambil |

**Method Tambahan:**
- `ambilMataKuliah(string mk)` — mendaftarkan mata kuliah
- `tampilInfo()` — override dari base class

---

### 4. Class `Tendik` (Derived dari `Orang`)

Merepresentasikan data Tenaga Kependidikan.

**Atribut Tambahan:**
| Nama | Tipe | Keterangan |
|------|------|------------|
| `jabatan` | `string` | Jabatan tendik |
| `unit` | `string` | Unit/departemen kerja |
| `statusKepegawaian` | `string` | Status (PNS/PPPK/Kontrak) |

**Method Tambahan:**
- `tampilInfo()` — override dari base class

---

## Konsep OOP yang Diimplementasikan

### 1. Encapsulation
Seluruh atribut class dideklarasikan sebagai `private` atau `protected`, dan hanya dapat diakses melalui getter/setter yang disediakan.

### 2. Inheritance
Class `Dosen`, `Mahasiswa`, dan `Tendik` mewarisi atribut dan method dari class `Orang` menggunakan public inheritance.

### 3. Polymorphism
Method `tampilInfo()` dideklarasikan sebagai `virtual` pada class `Orang`, sehingga setiap derived class dapat meng-override perilakunya. Hal ini memungkinkan penggunaan pointer `Orang*` untuk memanggil method yang tepat secara dinamis.

```cpp
Orang* daftarOrang[4];
daftarOrang[0] = &dosen1;   // memanggil Dosen::tampilInfo()
daftarOrang[1] = &mhs1;     // memanggil Mahasiswa::tampilInfo()
daftarOrang[3] = &tendik1;  // memanggil Tendik::tampilInfo()
```

### 4. Custom Namespace
Seluruh class dibungkus dalam namespace `sim` untuk menghindari konflik nama dan mengorganisasi kode dengan lebih baik.

```cpp
namespace sim {
    class Orang { ... };
    class Dosen : public Orang { ... };
    // dst.
}
```

---

## Struktur File

```
assignment2/
├── Makefile
├── README.md
├── REPORT.md
└── src/
    ├── main.cpp
    ├── orang.cpp
    ├── dosen.cpp
    ├── mahasiswa.cpp
    ├── tendik.cpp
    └── include/
        ├── orang.hpp
        ├── dosen.hpp
        ├── mahasiswa.hpp
        └── tendik.hpp
```

---

## Contoh Output Program

```
======================================
   SIM AKADEMIK - Sistem Informasi    
        Manajemen Akademik            
======================================

===== Data Dosen =====
Nama    : Dr. Budi Santoso, M.T.
ID      : 198501012010011001
Email   : budi.santoso@its.ac.id
Alamat  : Jl. Keputih No. 1, Surabaya
NIDN    : 0012345678
Jabatan : Lektor Kepala
Prodi   : Informatika
Mata Kuliah Diampu:
  1. Pemrograman Berorientasi Objek
  2. Struktur Data
  3. Algoritma dan Pemrograman
======================

===== Data Mahasiswa =====
Nama    : Ahmad Rizki
ID      : 5025211001
Email   : ahmad.rizki@student.its.ac.id
Alamat  : Jl. Manyar No. 10, Surabaya
Prodi   : Informatika
Angkatan: 2021
IPK     : 3.75
Mata Kuliah Diambil:
  1. Pemrograman Berorientasi Objek
  2. Struktur Data
  3. Kalkulus
=========================

===== Data Tenaga Kependidikan =====
Nama    : Hendra Wijaya
ID      : 197606202000031001
Email   : hendra.wijaya@its.ac.id
Alamat  : Jl. Sutorejo No. 8, Surabaya
Jabatan : Staf Administrasi
Unit    : Departemen Informatika
Status  : PNS
====================================

===== Demo Polymorphism =====
Daftar Seluruh Sivitas Akademika:
[menampilkan semua objek melalui pointer Orang*]
```

---

## Kesimpulan

Program SIM Akademik ini berhasil mengimplementasikan konsep-konsep dasar OOP yaitu encapsulation, inheritance, dan polymorphism menggunakan bahasa C++. Penggunaan custom namespace `sim` membantu mengorganisasi kode agar lebih terstruktur dan menghindari konflik nama dengan library standar C++.
