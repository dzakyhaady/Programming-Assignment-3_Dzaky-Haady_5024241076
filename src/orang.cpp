#include "include/orang.hpp"
#include <iostream>

namespace sim {

Orang::Orang() : nama(""), nip_nim(""), email(""), alamat("") {}

Orang::Orang(std::string nama, std::string nip_nim, std::string email, std::string alamat)
    : nama(nama), nip_nim(nip_nim), email(email), alamat(alamat) {}

Orang::~Orang() {}

std::string Orang::getNama() const { return nama; }
std::string Orang::getNipNim() const { return nip_nim; }
std::string Orang::getEmail() const { return email; }
std::string Orang::getAlamat() const { return alamat; }

void Orang::setNama(std::string nama) { this->nama = nama; }
void Orang::setNipNim(std::string nip_nim) { this->nip_nim = nip_nim; }
void Orang::setEmail(std::string email) { this->email = email; }
void Orang::setAlamat(std::string alamat) { this->alamat = alamat; }

void Orang::tampilInfo() const {
    std::cout << "Nama    : " << nama << std::endl;
    std::cout << "ID      : " << nip_nim << std::endl;
    std::cout << "Email   : " << email << std::endl;
    std::cout << "Alamat  : " << alamat << std::endl;
}
} // namespace sim
