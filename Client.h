#ifndef CLIENT_H
#define CLIENT_H

#include "Personne.h"
#include "Produit.h"
#include <iostream>
using namespace std;

class Client : public Personne {
private:
    bool carteFidelite;

public:
    Client(const string& nom, const string& prenom, const string& dateNaissance, int id, const string& numeroTelephone);

    void acheterCarteFidelite(int cout);
    void acheterProduit(Produit& produit, int quantite);
};

#endif // CLIENT_H