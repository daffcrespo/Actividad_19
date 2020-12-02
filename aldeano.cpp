#include "aldeano.h"

void Aldeano::setNombre(const string &nombre)
{
    this->nombre = nombre;
}

string Aldeano::getNombre() const 
{
    return nombre;
}

void Aldeano::setGenero(const string &genero)
{
    this->genero = genero;
}

string Aldeano::getGenero() const 
{
    return genero;
}

void Aldeano::setSalud(int salud)
{
    this->salud = salud;
}

size_t Aldeano::getSalud() const 
{
    return salud;
}

void Aldeano::setEdad(int edad)
{
    this->edad = edad;
}

size_t Aldeano::getEdad() const 
{
    return edad;
}
