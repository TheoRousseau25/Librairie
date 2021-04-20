#include "dictionnaire.h"

using namespace std;


//==================================================
//
//  Constructeur sans parametres
//
//==================================================
Dictionnaire::Dictionnaire():Document()
{

    this->m_langue="";

}
//==================================================
//
//  Constructeur avec 2 parametres
//
//==================================================

Dictionnaire::Dictionnaire(string titre,string langue):Document(titre)
{
    this->m_langue=langue;

}

//===================================================
//
//   Les Getters
//===================================================
string Dictionnaire::getLangue()
{
   return this->m_langue;
}

//===============================================
//  Les setters
//===============================================

void Dictionnaire::setLangue(string langue)
{
   this->m_langue=m_langue;
}

//================================================


void Dictionnaire::affiche() const
{
    cout << "Dictionnaire : Titre : " <<  this->m_titre << ", Langue : "  << this->m_langue << endl;
}

double Dictionnaire::fraisLivraison(double distance){

double dis = 12 + Document::fraisLivraison(distance);

return dis;

}
