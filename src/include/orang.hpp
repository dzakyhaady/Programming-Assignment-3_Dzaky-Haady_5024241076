#ifndef ORANG_HPP
#define ORANG_HPP

#include <string>

namespace sim {

class Orang {
protected:
    std::string nama;
    std::string nip_nim;
    std::string email;
    std::string alamat;

public:
    Orang();
    Orang(std::string nama, std::string nip_nim, std::string email, std::string alamat);
    virtual ~Orang();

    //Get
    std::string getNama() const;
    std::string getNipNim() const;
    std::string getEmail() const;
    std::string getAlamat() const;

    //Set
    void setNama(std::string nama);
    void setNipNim(std::string nip_nim);
    void setEmail(std::string email);
    void setAlamat(std::string alamat);

    virtual void tampilInfo() const;
};

} // namespace sim

#endif 
