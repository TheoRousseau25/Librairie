#include "livre.h"

using namespace std;



//==================================================
//
//  Constructeur sans parametres
//
//==================================================
Livre::Livre():Document()
{

    this->m_auteur="";

}
//==================================================
//
//  Constructeur avec 2 parametres
//
//==================================================

Livre::Livre(string titre,string auteur):Document(titre)
{

    this->m_auteur=auteur;

}

//===================================================
//
//   Les Getters
//===================================================
string Livre::getAuteur()
{
   return this->m_auteur;
}

//===============================================
//  Les setters
//===============================================

void Livre::setAuteur(string auteur)
{
   this->m_auteur=m_auteur;
}

//================================================


void Livre::affiche() const
{
    cout << "Livre : Titre : " <<  this->m_titre << " ,Auteur : " << this->m_auteur << endl;
}

double Livre::fraisLivraison(double distance){

double dis = 2 + Document::fraisLivraison(distance);

return dis;

}
