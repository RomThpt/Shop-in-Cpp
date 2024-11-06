#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
#include <iostream>

class Personne {
protected:
    std::string nom;
    std::string prenom;
    std::string dateNaissance;
    int id;
    std::string numeroTelephone;

public:
    Personne(const std::string& nom, const std::string& prenom, const std::string& dateNaissance, int id, const std::string& numeroTelephone);
    virtual ~Personne();

    virtual void afficherInfos() const;
    int getId() const;
};

#endif // PERSONNE_H