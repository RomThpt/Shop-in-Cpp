#include "Personne.h"

Personne::Personne(const std::string& nom, const std::string& prenom, const std::string& dateNaissance, int id, const std::string& numeroTelephone)
    : nom(nom), prenom(prenom), dateNaissance(dateNaissance), id(id), numeroTelephone(numeroTelephone) {}

Personne::~Personne() {}

void Personne::afficherInfos() const {
    std::cout << "Nom: " << nom << ", Prénom: " << prenom << ", Date de naissance: " << dateNaissance
              << ", ID: " << id << ", Numéro de téléphone: " << numeroTelephone << std::endl;
}

int Personne::getId() const {
    return id;
}