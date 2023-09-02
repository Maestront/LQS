#include <string>
#include <iostream>

class Mascota
{
private:
    int Vida;
    std::string Nombre;

public:
    Mascota()
    {
         this -> Vida = 100;
    }
    void Establecer_Nombre(std::string Nombre) 
    {
        this -> Nombre = Nombre;
    }
    ~Mascota() {}
    void Dnom()
    {
        std::cout << "Mi nombre es: " << this->Nombre << std::endl;
    }
};