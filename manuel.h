#ifndef MANUEL_H_INCLUDED
#define MANUEL_H_INCLUDED
#include "livre.h"

class Manuel : public Livre
{
    public:
    Manuel();
    Manuel(string titre,string auteur,int niveau);
    virtual void affiche() const;
    virtual int getNiveau();
    virtual void setNiveau(int);
    double fraisLivraison(double distance);

    protected:
    int m_niveau;

};

#endif // MANUEL_H_INCLUDED
