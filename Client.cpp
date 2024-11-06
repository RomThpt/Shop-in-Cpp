#include "Client.h"
using namespace std;

Client::Client(const string& nom, const string& prenom, const string& dateNaissance, int id, const string& numeroTelephone)
    : Personne(nom, prenom, dateNaissance, id, numeroTelephone), carteFidelite(false) {}

void Client::acheterCarteFidelite(int coutProduit) {
    carteFidelite = true;
    cout << "Carte de fidélité achetée pour " << coutProduit << " euros." << endl;
}

void Client::acheterProduit(Produit& produit, int quantite) {
    if (produit.getQuantite() >= quantite) {
        produit.setQuantite(produit.getQuantite() - quantite);
        int prixTotal = produit.getPrixVente() * quantite;
        if (carteFidelite) {
            prixTotal *= 0.9; // 10% discount
        cout << "Produit acheté: " << produit.getNom() << ", Quantité: " << quantite << ", Prix total: " << prixTotal << " euros" << endl;
    } else {
        cout << "Quantité insuffisante pour le produit " << produit.getNom() << endl;
    }
    }
}