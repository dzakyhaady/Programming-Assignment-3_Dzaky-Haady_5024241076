#include "include/mahasiswa.hpp"
#include <iostream>

namespace sim {

Mahasiswa::Mahasiswa() : Orang(), prodi(""), angkatan(0), ipk(0.0f) {}

Mahasiswa::Mahasiswa(std::string nama, std::string nim, std::string email, std::string alamat,
                     std::string prodi, int angkatan)
    : Orang(nama, nim, email, alamat), prodi(prodi), angkatan(angkatan), ipk(0.0f) {}

Mahasiswa::~Mahasiswa() {}

std::string Mahasiswa::getProdi() const { return prodi; }
int Mahasiswa::getAngkatan() const { return angkatan; }
float Mahasiswa::getIpk() const { return ipk; }
std::vector<std::string> Mahasiswa::getMataKuliahDiambil() const { return mataKuliahDiambil; }

void Mahasiswa::setProdi(std::string prodi) { this->prodi = prodi; }
void Mahasiswa::setAngkatan(int angkatan) { this->angkatan = angkatan; }
void Mahasiswa::setIpk(float ipk) { this->ipk = ipk; }

void Mahasiswa::ambilMataKuliah(std::string mk) {
    mataKuliahDiambil.push_back(mk);
}

void Mahasiswa::tampilInfo() const {
    std::cout << "===== Data Mahasiswa =====" << std::endl;
    Orang::tampilInfo();
    std::cout << "Prodi   : " << prodi << std::endl;
    std::cout << "Angkatan: " << angkatan << std::endl;
    std::cout << "IPK     : " << ipk << std::endl;
    std::cout << "Mata Kuliah Diambil:" << std::endl;
    for (size_t i = 0; i < mataKuliahDiambil.size(); i++) {
        std::cout << "  " << (i + 1) << ". " << mataKuliahDiambil[i] << std::endl;
    }
    std::cout << "=========================" << std::endl;
}

} // namespace sim
