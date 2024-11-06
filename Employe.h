#ifndef EMPLOYE_H
#define EMPLOYE_H

#include "Personne.h"
#include "Produit.h"
#include "Client.h"
#include <vector>
#include <memory>
#include <iostream>
using namespace std;

class Employe : public Personne {
public:
    Employe(const string& nom, const string& prenom, const string& dateNaissance, int id, const string& numeroTelephone);

    void modifierQuantiteProduit(Produit& produit, int quantite);
    void ajouterClient(vector<Client>& clients, Client client);
    void supprimerClient(vector<Client>& clients, int id);
};

#endif // EMPLOYE_H