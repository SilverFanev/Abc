#include "Parcours.h"

// Constructeur
Parcours::Parcours(std::string admissionCriteria)
    : admissionCriteria(admissionCriteria) {}

// Méthode pour vérifier l'admission
bool Parcours::verifierAdmission(Eleve &eleve) {
    // Condition d'admission : l'élève doit avoir une note supérieure à 10
    if (eleve.getNotes() >= 10.0) {
        return true;
    } else {
        return false;
    }
}