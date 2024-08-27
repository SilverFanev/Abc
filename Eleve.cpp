#include <iostream>
#include "Eleve.h"

Eleve::Eleve(std::string nom, int age, float notes) : nom(nom), age(age), notes(notes) {}

std::string Eleve::getNom() {
    return nom;
}

int Eleve::getAge() {
    return age;
}

float Eleve::getNotes() {
    return notes;
}