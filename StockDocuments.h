#ifndef STOCKDOCUMENTS_H_INCLUDED
#define STOCKDOCUMENTS_H_INCLUDED
#include <vector>
#include <iostream>
#include "document.h"
#include "livre.h"
#include "dictionnaire.h"

class StockDocuments
{
    public:
    StockDocuments();
    ~StockDocuments();
    void ajouterLivre(Livre livre);
    void ajouterDictionnaire(Dictionnaire dictionnaire);
    void ajouterDocument(Document* document);
    void affiche() const;
    double fraisLivraison(double distance);

    protected:
    std::vector<Document*> m_listeDocument;
};

   void bonDeCommande(StockDocuments liste, double distance);

#endif // STOCKDOCUMENTS_H_INCLUDED
