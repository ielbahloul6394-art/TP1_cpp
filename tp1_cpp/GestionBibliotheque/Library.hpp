
#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <vector>
#include <string>
#include "Book.hpp"

class Library {
private:
    std::vector<Book> m_livres;

public:
    void ajouterLivre(const Book& livre);

    const Book* trouverParISBN(const std::string& isbn) const;

    void listerLivres() const;
};

#endif
