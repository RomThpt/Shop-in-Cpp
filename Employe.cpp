#include "Employe.h"
using namespace std;

Employe::Employe(const string& nom, const string& prenom, const string& dateNaissance, int id, const string& numeroTelephone)
    : Personne(nom, prenom, dateNaissance, id, numeroTelephone) {}

void Employe::modifierQuantiteProduit(Produit& produit, int quantite) {
    produit.setQuantite(quantite);
    cout << "Quantité modifiée pour le produit " << produit.getNom() << " : " << quantite << endl;
}

void Employe::ajouterClient(vector<Client>& clients, Client client) {
    clients.push_back(client);
    cout << "Client ajouté: ";
    client.afficherInfos();

}
void Employe::supprimerClient(vector<Client>& clients, int id) {
    for (int i = 0; i < clients.size(); ++i) {
        if (clients[i].getId() == id) {
            clients.erase(clients.begin() + i);
            cout << "Client supprimé avec l'ID: " << id << endl;
            return;
        }
        cout << "Client avec l'ID " << id << " non trouvé." << endl;
    }
    
}
