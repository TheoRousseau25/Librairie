#ifndef LIVRE_H_INCLUDED
#define LIVRE_H_INCLUDED
#include "document.h"

class Livre : public Document
{
    public:
    Livre();
    Livre(string titre,string auteur);
    virtual void affiche() const;
    virtual string getAuteur();
    virtual void setAuteur(string);
    virtual double fraisLivraison(double distance);

    protected:
    string m_auteur;

};


#endif // LIVRE_H_INCLUDED
