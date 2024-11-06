#ifndef PRODUIT_H
#define PRODUIT_H
#include <string>
using namespace std;
class Produit {
private:
    string reference;
    string nomCommercial;
    int prixAchat;
    int prixVente;
    int quantiteDisponible;

public:
    Produit(const string& reference, const string& nomCommercial, int prixAchat, int prixVente, int quantiteDisponible);

    void setQuantite(int quantite);
    string getNom() const;
    int getQuantite() const;
    int getPrixVente() const;
};

#endif // PRODUIT_H