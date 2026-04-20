#include "include/dosen.hpp"
#include <iostream>

namespace sim {

Dosen::Dosen() : Orang(), nidn(""), jabatan(""), prodi("") {}

Dosen::Dosen(std::string nama, std::string nip, std::string email, std::string alamat,
             std::string nidn, std::string jabatan, std::string prodi)
    : Orang(nama, nip, email, alamat), nidn(nidn), jabatan(jabatan), prodi(prodi) {}

Dosen::~Dosen() {}

std::string Dosen::getNidn() const { return nidn; }
std::string Dosen::getJabatan() const { return jabatan; }
std::string Dosen::getProdi() const { return prodi; }
std::vector<std::string> Dosen::getMataKuliah() const { return mataKuliah; }

void Dosen::setNidn(std::string nidn) { this->nidn = nidn; }
void Dosen::setJabatan(std::string jabatan) { this->jabatan = jabatan; }
void Dosen::setProdi(std::string prodi) { this->prodi = prodi; }

void Dosen::tambahMataKuliah(std::string mk) {
    mataKuliah.push_back(mk);
}

void Dosen::tampilInfo() const {
    std::cout << "===== Data Dosen =====" << std::endl;
    Orang::tampilInfo();
    std::cout << "NIDN    : " << nidn << std::endl;
    std::cout << "Jabatan : " << jabatan << std::endl;
    std::cout << "Prodi   : " << prodi << std::endl;
    std::cout << "Mata Kuliah Diampu:" << std::endl;
    for (size_t i = 0; i < mataKuliah.size(); i++) {
        std::cout << "  " << (i + 1) << ". " << mataKuliah[i] << std::endl;
    }
    std::cout << "======================" << std::endl;
}

} // namespace sim
