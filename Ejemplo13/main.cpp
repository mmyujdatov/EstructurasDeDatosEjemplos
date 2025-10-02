#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Persona.hpp"
using namespace std;

bool edadRepetida(int edad, int e1, int e2, int e3, int e4, int e5, int e6, int e7, int e8, int e9) {
    return (edad == e1 || edad == e2 || edad == e3 || edad == e4 ||
            edad == e5 || edad == e6 || edad == e7 || edad == e8 || edad == e9);
}

int main() {
    srand(time(0));

    int e1 = -1, e2 = -1, e3 = -1, e4 = -1, e5 = -1, e6 = -1, e7 = -1, e8 = -1, e9 = -1;

    int edad;

    // Persona 1
    do { edad = 18 + rand() % 10; } while (edadRepetida(edad, e1,e2,e3,e4,e5,e6,e7,e8,e9));
    e1 = edad;
    Persona p1(edad, 0);

    // Persona 2
    do { edad = 18 + rand() % 10; } while (edadRepetida(edad, e1,e2,e3,e4,e5,e6,e7,e8,e9));
    e2 = edad;
    Persona p2(edad, 1);

    // Persona 3
    do { edad = 18 + rand() % 10; } while (edadRepetida(edad, e1,e2,e3,e4,e5,e6,e7,e8,e9));
    e3 = edad;
    Persona p3(edad, 0);

    // Persona 4
    do { edad = 18 + rand() % 10; } while (edadRepetida(edad, e1,e2,e3,e4,e5,e6,e7,e8,e9));
    e4 = edad;
    Persona p4(edad, 1);

    // Persona 5
    do { edad = 18 + rand() % 10; } while (edadRepetida(edad, e1,e2,e3,e4,e5,e6,e7,e8,e9));
    e5 = edad;
    Persona p5(edad, 0);

    // Persona 6
    do { edad = 18 + rand() % 10; } while (edadRepetida(edad, e1,e2,e3,e4,e5,e6,e7,e8,e9));
    e6 = edad;
    Persona p6(edad, 1);

    // Persona 7
    do { edad = 18 + rand() % 10; } while (edadRepetida(edad, e1,e2,e3,e4,e5,e6,e7,e8,e9));
    e7 = edad;
    Persona p7(edad, 0);

    // Persona 8
    do { edad = 18 + rand() % 10; } while (edadRepetida(edad, e1,e2,e3,e4,e5,e6,e7,e8,e9));
    e8 = edad;
    Persona p8(edad, 1);

    // Persona 9
    do { edad = 18 + rand() % 10; } while (edadRepetida(edad, e1,e2,e3,e4,e5,e6,e7,e8,e9));
    e9 = edad;
    Persona p9(edad, 0);

    // Persona 10
    do { edad = 18 + rand() % 10; } while (edadRepetida(edad, e1,e2,e3,e4,e5,e6,e7,e8,e9));
    // no necesito guardar en e10 porque ya es la última
    Persona p10(edad, 1);

    // Mostrar todas
    p1.mostrar();
    p2.mostrar();
    p3.mostrar();
    p4.mostrar();
    p5.mostrar();
    p6.mostrar();
    p7.mostrar();
    p8.mostrar();
    p9.mostrar();
    p10.mostrar();

    return 0;
}