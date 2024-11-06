#include "Gerant.h"
using namespace std;

Gerant::Gerant(const string& nom, const string& prenom, const string& dateNaissance, int id, const string& numeroTelephone)
    : Employe(nom, prenom, dateNaissance, id, numeroTelephone) {}

void Gerant::ajouterProduit(vector<Produit>& ListeProduits, const Produit& prod) {
    ListeProduits.push_back(prod);
    cout << "Produit ajouté: " << prod.getNom() << endl;
}