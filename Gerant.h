#ifndef GERANT_H
#define GERANT_H

#include "Employe.h"
#include "Produit.h"
#include <vector>
#include <iostream>
using namespace std;

class Gerant : public Employe {
public:
    Gerant(const string& nom, const string& prenom, const string& dateNaissance, int id, const string& numeroTelephone);

    void ajouterProduit(vector<Produit>& ListeProduits, const Produit& prod);
};

#endif // GERANT_H