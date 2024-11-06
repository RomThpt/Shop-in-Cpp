# 🛒 Gestion de Magasin

Ce projet est une application console de gestion de magasin, développée dans le cadre d'un projet à l'ESTACA. Il permet de gérer des produits, des clients, et les opérations courantes dans une boutique (comme l'ajout de produits, la modification de quantité, et la gestion des cartes de fidélité).

## ✨ Fonctionnalités

L'application propose les fonctionnalités suivantes :

1. **➕ Ajouter une référence de produit** : Permet d’ajouter de nouveaux produits dans le catalogue.
2. **🛠️ Modifier la quantité d'un produit** : Met à jour la quantité disponible d’un produit spécifique.
3. **👤 Ajouter un client** : Ajoute un nouveau client avec ses informations personnelles.
4. **❌ Supprimer un client** : Retire un client de la liste.
5. **💳 Acheter une carte de fidélité** : Permet à un client d'acheter une carte de fidélité.
6. **🛍️ Acheter un ensemble de produits** : Gère les achats de produits pour un client donné.
7. **📖 Consulter le catalogue** : Affiche la liste des produits disponibles en stock.

## 🏗️ Structure des Classes

Le projet est organisé en plusieurs classes qui représentent les différentes entités :

- **📦 Produit** : Classe représentant un produit avec une référence, un nom, un prix d'achat, un prix de vente et une quantité disponible.
- **👥 Client** : Classe pour les clients, incluant des informations comme le nom, prénom, date de naissance, ID, et numéro de téléphone. Les clients peuvent acheter des produits et des cartes de fidélité.
- **👔 Employé** : Représente un employé du magasin, qui peut gérer les clients et les produits.
- **🧑‍💼 Gérant** : Classe pour les gérants qui ont des privilèges étendus, notamment l’ajout et la gestion de nouveaux produits.

## 📋 Prérequis

- **🖥️ C++** : Assurez-vous d'avoir un compilateur compatible avec le standard C++17 ou supérieur.
- **🛠️ CMake** (optionnel) : Pour faciliter la configuration et la compilation du projet.

## 🚀 Installation et Compilation

1. Clonez le dépôt :
    ```bash
    git clone https://github.com/votre-repo/gestion-magasin.git
    cd gestion-magasin
    ```

2. Compilez le projet avec votre compilateur C++ préféré :
    ```bash
    g++ main.cpp -o gestionMagasin
    ```

3. Exécutez l'application :
    ```bash
    ./gestionMagasin
    ```

## 📌 Utilisation

Lancez le programme et suivez les instructions à l'écran pour naviguer dans le menu et exécuter les différentes fonctionnalités.

## 📝 Notes

Ce projet a été développé dans le cadre de la formation à l'ESTACA pour se familiariser avec la programmation orientée objet en C++ et la gestion des entités dans un contexte de gestion de magasin.

---

Amusez-vous bien avec ce projet ! 😄🎉
