#include <iostream>
#include <Mascota.hpp>

int main()
{
    std::cout << "Juego de Mascotas" << std::endl;

    Mascota m1, m2, m3;

    m1.Establecer_Nombre("Firuais");
    m2.Establecer_Nombre("Pepe");
    m3.Establecer_Nombre("Carlos");

    m1.Dnom();
    m2.Dnom();
    m3.Dnom();

    return 0;
}