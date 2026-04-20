#ifndef TENDIK_HPP
#define TENDIK_HPP

#include "orang.hpp"
#include <string>

namespace sim {

class Tendik : public Orang {
private:
    std::string jabatan;
    std::string unit;
    std::string statusKepegawaian;

public:
    Tendik();
    Tendik(std::string nama, std::string nip, std::string email, std::string alamat,
           std::string jabatan, std::string unit, std::string statusKepegawaian);
    ~Tendik();

    // Get
    std::string getJabatan() const;
    std::string getUnit() const;
    std::string getStatusKepegawaian() const;

    // Set
    void setJabatan(std::string jabatan);
    void setUnit(std::string unit);
    void setStatusKepegawaian(std::string status);

    // Method
    void tampilInfo() const override;
};

} // namespace sim

#endif 
