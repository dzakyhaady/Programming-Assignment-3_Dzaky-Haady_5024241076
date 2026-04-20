#ifndef DOSEN_HPP
#define DOSEN_HPP

#include "orang.hpp"
#include <string>
#include <vector>

namespace sim {

class Dosen : public Orang {
private:
    std::string nidn;
    std::string jabatan;
    std::string prodi;
    std::vector<std::string> mataKuliah;

public:
    Dosen();
    Dosen(std::string nama, std::string nip, std::string email, std::string alamat,
          std::string nidn, std::string jabatan, std::string prodi);
    ~Dosen();

    //Get
    std::string getNidn() const;
    std::string getJabatan() const;
    std::string getProdi() const;
    std::vector<std::string> getMataKuliah() const;

    //Set
    void setNidn(std::string nidn);
    void setJabatan(std::string jabatan);
    void setProdi(std::string prodi);

    //Method
    void tambahMataKuliah(std::string mk);
    void tampilInfo() const override;
};

} // namespace sim

#endif 
