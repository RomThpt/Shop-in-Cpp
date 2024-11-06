#include "Produit.h"
using namespace std;

Produit::Produit(const string& reference, const string& nomCommercial, int prixAchat, int prixVente, int quantiteDisponible)
    : reference(reference), nomCommercial(nomCommercial), prixAchat(prixAchat), prixVente(prixVente), quantiteDisponible(quantiteDisponible) {}

void Produit::setQuantite(int quantite) {
    quantiteDisponible = quantite;
}

string Produit::getNom() const {
    return nomCommercial;
}

int Produit::getQuantite() const {
    return quantiteDisponible;
}

int Produit::getPrixVente() const {
    return prixVente;
}