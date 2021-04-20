#ifndef ROMAN_H_INCLUDED
#define ROMAN_H_INCLUDED
#include "livre.h"

class Roman : public Livre
{
    public:
    Roman();
    Roman(string titre,string auteur,int prix);
    virtual void affiche() const;
    virtual int getPrix();
    virtual void setPrix(int);
    double fraisLivraison(double distance);

    protected:
    int m_prix;

};


#endif // ROMAN_H_INCLUDED
