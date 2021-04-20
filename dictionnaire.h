#ifndef DICTIONNAIRE_H_INCLUDED
#define DICTIONNAIRE_H_INCLUDED
#include "document.h"

class Dictionnaire : public Document
{
    public:
    Dictionnaire();
    Dictionnaire(string titre,string langue );
    virtual void affiche() const;
    virtual string getLangue();
    virtual void setLangue(string);
    double fraisLivraison(double distance);

    protected:
    string m_langue;

};


#endif // DICTIONNAIRE_H_INCLUDED
