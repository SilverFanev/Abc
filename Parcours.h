#ifndef PARCOURS_H
#define PARCOURS_H

#include <string>
#include "Eleve.h"

class Parcours {
public:
    Parcours(std::string admissionCritere);

    bool verifierAdmission(Eleve &eleve);

private:
    std::string admissionCritere;
};

#endif