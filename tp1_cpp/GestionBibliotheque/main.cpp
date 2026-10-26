
#include <iostream>
#include "Book.hpp"
#include "Library.hpp"

int main() {
    Library bibliotheque;

    Book livre1("Le Petit Prince", "Antoine de Saint-Exupery",
                "ISBN001", 1943);

    Book livre2("Les Miserables", "Victor Hugo",
                "ISBN002", 1862);

    Book livre3("L'Etranger", "Albert Camus",
        
                "ISBN003", 1942);

    // Ajouter les livres
    bibliotheque.ajouterLivre(livre1);
    bibliotheque.ajouterLivre(livre2);
    bibliotheque.ajouterLivre(livre3);

    // Afficher le catalogue
    bibliotheque.listerLivres();

    // Rechercher un livre par ISBN
    std::cout << "\n--- Recherche d'un livre ---\n";

    const Book* livreTrouve =
        bibliotheque.trouverParISBN("ISBN002");

    if (livreTrouve != nullptr) {
        std::cout << "Livre trouve :\n";
        livreTrouve->afficher();
    } else {
        std::cout << "Livre introuvable.\n";
    }

    return 0;
}
