
#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
#include <iostream>

class Book {
private:
    std::string m_titre;
    std::string m_auteur;
    std::string m_isbn;
    int m_annee;

public:
    Book();

    Book(const std::string& titre,
         const std::string& auteur,
         const std::string& isbn,
         int annee);

    std::string getTitre() const;
    std::string getAuteur() const;
    std::string getISBN() const;
    int getAnnee() const;

    void afficher() const;
};

#endif
