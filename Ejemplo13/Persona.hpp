#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <stdio.h>   
#include <string.h>  

class Persona {
private:
    bool genero;        // 1 = Mujer, 0 = Hombre
    int edad;
    char dni[10];       // DNI con letra (ejemplo: "00000001A")

    static int contador; // Para generar DNIs únicos

public:
    Persona(int edad, bool genero);
    ~Persona();

    int getEdad() const;
    bool esMujer() const;
    void setEdad(int nuevaEdad);
    void mostrar() const;

private:
    void generarDNI();
};

#endif