#include <iostream>
#include <vector>
#include <string>
#include "Produit.h"
#include "Client.h"
#include "Employe.h"
#include "Personne.h"
#include "Gerant.h"

void afficherMenu() {
    std::cout << "Menu:\n"
              << "1. Ajouter une nouvelle référence produit\n"
              << "2. Modifier la quantité disponible d'un produit\n"
              << "3. Ajouter un client\n"
              << "4. Supprimer un client\n"
              << "5. Acheter un ensemble de produits\n"
              << "6. Consulter le catalogue des produits disponibles\n"
              << "0. Quitter\n";
}

int main() {
    std::vector<Produit> produits;
    std::vector<Client> clients;
    Gerant gerant("Dombret", "Lea", "01/01/2005", 1, "0123456789");
    Employe employe("Thepaut", "Romain", "02/02/2005", 2, "0987654321");
    Client client("Marc", "Andre", "03/03/2005", 3, "1234567890");
    gerant.ajouterProduit(produits, Produit("JUPE001", "Jupe", 10, 15, 100));
    employe.ajouterClient(clients, client);
    int choix;
    do {
        afficherMenu();
        std::cin >> choix;
        switch (choix) {
            case 1: {
                std::string ref, nom;
                double prixAchat, prixVente;
                int quantite;
                std::cout << "Référence: ";
                std::cin >> ref;
                std::cout << "Nom commercial: ";
                std::cin >> nom;
                std::cout << "Prix d'achat: ";
                std::cin >> prixAchat;
                std::cout << "Prix de vente: ";
                std::cin >> prixVente;
                std::cout << "Quantité disponible: ";
                std::cin >> quantite;
                gerant.ajouterProduit(produits, Produit(ref, nom, prixAchat, prixVente, quantite));
                break;
            }
            case 2: {
                std::string nom;
                int quantite;
                std::cout << "Nom du produit: ";
                std::cin >> nom;
                std::cout << "Nouvelle quantité: ";
                std::cin >> quantite;
                bool produitTrouve = false;
                for (int i = 0; i < produits.size(); ++i) {
                    if (produits[i].getNom() == nom) {
                        employe.modifierQuantiteProduit(produits[i], quantite);
                        produitTrouve = true;
                        break;
                    }
                }
                if (!produitTrouve) {
                    std::cout << "Produit non trouvé." << std::endl;
                }
                break;
            }
            case 3: {
                std::string nom, prenom, dateNaissance, numeroTelephone;
                int id;
                std::cout << "Nom: ";
                std::cin >> nom;
                std::cout << "Prénom: ";
                std::cin >> prenom;
                std::cout << "Date de naissance: ";
                std::cin >> dateNaissance;
                std::cout << "ID: ";
                std::cin >> id;
                std::cout << "Numéro de téléphone: ";
                std::cin >> numeroTelephone;
                employe.ajouterClient(clients, Client(nom, prenom, dateNaissance, id, numeroTelephone));
                break;
            }
            case 4: {
                int id;
                std::cout << "ID du client à supprimer: ";
                std::cin >> id;
                for (int i = 0; i < clients.size(); ++i) {
                    if (clients[i].getId() == id) {
                        employe.supprimerClient(clients, id);
                        break;
                    }
                }
                break;
            }
            case 5: {
                int id, quantite;
                std::string nom;
                std::cout << "ID du client: ";
                std::cin >> id;
                std::cout << "Nom du produit: ";
                std::cin >> nom;
                std::cout << "Quantité: ";
                std::cin >> quantite;
                Client* client = nullptr;
                Produit* produit = nullptr;
                for (int i = 0; i < clients.size(); ++i) {
                    if (clients[i].getId() == id) {
                        client = &clients[i];
                        break;
                    }
                }
                for (int i = 0; i < produits.size(); ++i) {
                    if (produits[i].getNom() == nom) {
                        produit = &produits[i];
                        break;
                    }
                }
                if (client != nullptr && produit != nullptr) {
                    client->acheterProduit(*produit, quantite);
                } else {
                    std::cout << "Client ou produit non trouvé." << std::endl;
                }
                break;
            }
            case 6: {
                std::cout << "Catalogue des produits disponibles:\n";
                for (int i = 0; i < produits.size(); ++i) {
                    std::cout << "Nom: " << produits[i].getNom() << ", Quantité: " << produits[i].getQuantite() << std::endl;
                }
                break;
            }
            case 0:
                std::cout << "Au revoir!" << std::endl;
                break;
            default:
                std::cout << "Choix invalide." << std::endl;
                break;
        }
    } while (choix != 0);
    return 0;
}