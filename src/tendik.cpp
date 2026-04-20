#include "include/tendik.hpp"
#include <iostream>

namespace sim {

Tendik::Tendik() : Orang(), jabatan(""), unit(""), statusKepegawaian("") {}

Tendik::Tendik(std::string nama, std::string nip, std::string email, std::string alamat,
               std::string jabatan, std::string unit, std::string statusKepegawaian)
    : Orang(nama, nip, email, alamat), jabatan(jabatan), unit(unit), statusKepegawaian(statusKepegawaian) {}

Tendik::~Tendik() {}

std::string Tendik::getJabatan() const { return jabatan; }
std::string Tendik::getUnit() const { return unit; }
std::string Tendik::getStatusKepegawaian() const { return statusKepegawaian; }

void Tendik::setJabatan(std::string jabatan) { this->jabatan = jabatan; }
void Tendik::setUnit(std::string unit) { this->unit = unit; }
void Tendik::setStatusKepegawaian(std::string status) { this->statusKepegawaian = status; }

void Tendik::tampilInfo() const {
    std::cout << "===== Data Tenaga Kependidikan =====" << std::endl;
    Orang::tampilInfo();
    std::cout << "Jabatan : " << jabatan << std::endl;
    std::cout << "Unit    : " << unit << std::endl;
    std::cout << "Status  : " << statusKepegawaian << std::endl;
    std::cout << "====================================" << std::endl;
}

} // namespace sim
