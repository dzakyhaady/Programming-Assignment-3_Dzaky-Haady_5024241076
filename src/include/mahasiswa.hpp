#ifndef MAHASISWA_HPP
#define MAHASISWA_HPP

#include "orang.hpp"
#include <string>
#include <vector>

namespace sim {

class Mahasiswa : public Orang {
private:
    std::string prodi;
    int angkatan;
    float ipk;
    std::vector<std::string> mataKuliahDiambil;

public:
    Mahasiswa();
    Mahasiswa(std::string nama, std::string nim, std::string email, std::string alamat,
              std::string prodi, int angkatan);
    ~Mahasiswa();

    // Get
    std::string getProdi() const;
    int getAngkatan() const;
    float getIpk() const;
    std::vector<std::string> getMataKuliahDiambil() const;

    // Set
    void setProdi(std::string prodi);
    void setAngkatan(int angkatan);
    void setIpk(float ipk);

    // Method
    void ambilMataKuliah(std::string mk);
    void tampilInfo() const override;
};

} // namespace sim

#endif 
