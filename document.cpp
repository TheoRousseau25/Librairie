#include "document.h"

//==================================================
//
//  Constructeur sans parametres
//
//==================================================
Document::Document()
{
    this->m_titre="";

}
//==================================================
//
//  Constructeur avec 1 parametres
//
//==================================================
Document::Document(string titre)
{
    this->m_titre=titre;

}

//===================================================
//
//   Les Getters
//===================================================
string Document::getTitre()
{
   return this->m_titre;
}

//===============================================
//  Les setters
//===============================================

void Document::setTitre(string titre)
{
   this->m_titre=m_titre;
}

//================================================


double Document::fraisLivraison(double distance){

double dis =  distance*0.05;
return dis;

}

void Document::affiche() const
{
    cout << " Document : Titre :" << this->m_titre << endl;
}



