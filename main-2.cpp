#include "Snare.h"
#include "Persona.h"
#include <iostream>

int main() {
Snare snare(1, 2);
Persona persona(3, 4);

std::cout << "Snare location: " << std::get<0>(snare.getLoc()) << ", " << std::get<1>(snare.getLoc()) << " with category " << snare.getCategory() << std::endl;
std::cout << "Persona location: " << std::get<0>(persona.getLoc()) << ", " << std::get<1>(persona.getLoc()) << " with category " << persona.getCategory() << std::endl;

snare.applyInfluence(persona);

std::cout << "Persona location after snare influence: " << std::get<0>(persona.getLoc()) << ", " << std::get<1>(persona.getLoc()) << " with category " << persona.getCategory() << std::endl;

persona.shift(1, 1);

std::cout << "Persona location after shift: " << std::get<0>(persona.getLoc()) << ", " << std::get<1>(persona.getLoc()) << " with category " << persona.getCategory() << std::endl;

return 0;
}