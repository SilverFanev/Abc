#ifndef ELEVE_H
#define ELEVE_H
#include <string>

class Eleve {
public:
    Eleve(std::string nom, int age, float notes);
    
    std::string getNom();
    int getAge();
    float getNotes();

private:
    std::string nom;
    int age;
    float notes;
};

#endif